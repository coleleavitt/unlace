unsigned __int64 __fastcall sub_36CDC0(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rax
  _QWORD *v7; // r13
  _QWORD *v8; // r12
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  void *v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  _QWORD *v17; // rax
  int *v18; // rdx
  __int64 i; // rbx
  unsigned __int64 v20; // rcx
  _QWORD *v21; // r15
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  bool v24; // r12
  __int64 v25; // rax
  _QWORD **v26; // rbx
  void *v27; // rdi
  bool v29; // [rsp+0h] [rbp-98h]
  unsigned __int64 v30; // [rsp+0h] [rbp-98h]
  __int64 v31; // [rsp+8h] [rbp-90h]
  int *v32; // [rsp+18h] [rbp-80h]
  char v33[8]; // [rsp+20h] [rbp-78h] BYREF
  int v34; // [rsp+28h] [rbp-70h] BYREF
  void *v35; // [rsp+30h] [rbp-68h]
  int *v36; // [rsp+38h] [rbp-60h]
  int *v37; // [rsp+40h] [rbp-58h]
  __int64 v38; // [rsp+48h] [rbp-50h]
  unsigned __int64 v39; // [rsp+58h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( a1 )
  {
    v5 = (_QWORD *)a1[2];
    v31 = a3 - a2;
    v7 = a1 + 1;
    v34 = 0;
    v35 = nullptr;
    v36 = &v34;
    v37 = &v34;
    v38 = 0;
    if ( v5 )
    {
      v8 = a1 + 1;
      do
      {
        while ( 1 )
        {
          v9 = v5[2];
          v10 = v5[3];
          if ( v5[4] < a2 )
            break;
          v8 = v5;
          v5 = (_QWORD *)v5[2];
          if ( !v9 )
            goto LABEL_7;
        }
        v5 = (_QWORD *)v5[3];
      }
      while ( v10 );
LABEL_7:
      if ( v7 != v8 )
      {
        v11 = a4 + a2;
        while ( 1 )
        {
          v15 = v8[4];
          if ( v15 >= v11 )
            break;
          v16 = v31 + v15;
          v17 = sub_36A440((__int64)v33, v16, v10, a4, a5);
          if ( v18 )
          {
            v29 = v18 == &v34 || v17 != nullptr;
            if ( !v29 )
              v29 = v16 < *((_QWORD *)v18 + 4);
            v32 = v18;
            v12 = operator new(0x28u);
            *(_QWORD *)(v12 + 32) = v16;
            std::_Rb_tree_insert_and_rebalance(v29, v12, v32, &v34);
            ++v38;
          }
          v13 = std::_Rb_tree_increment(v8);
          v14 = (void *)std::_Rb_tree_rebalance_for_erase(v8, v7);
          operator delete(v14, 0x28u);
          --a1[5];
          if ( v7 == (_QWORD *)v13 )
            break;
          v8 = (_QWORD *)v13;
        }
        for ( i = (__int64)v36; (int *)i != &v34; i = std::_Rb_tree_increment(i) )
        {
          v20 = *(_QWORD *)(i + 32);
          if ( !a1[5] || (v21 = (_QWORD *)a1[4], v22 = nullptr, v21[4] >= v20) )
          {
            v30 = *(_QWORD *)(i + 32);
            v22 = sub_36A440((__int64)a1, v30, v10, v20, a5);
            v20 = v30;
            v21 = v23;
          }
          if ( v21 )
          {
            v24 = v7 == v21 || v22 != nullptr;
            if ( !v24 )
              v24 = v20 < v21[4];
            v25 = operator new(0x28u);
            *(_QWORD *)(v25 + 32) = *(_QWORD *)(i + 32);
            std::_Rb_tree_insert_and_rebalance(v24, v25, v21, v7);
            ++a1[5];
          }
        }
        v26 = (_QWORD **)v35;
        if ( v35 )
        {
          do
          {
            sub_36C110(v26[3]);
            v27 = v26;
            v26 = (_QWORD **)v26[2];
            operator delete(v27, 0x28u);
          }
          while ( v26 );
        }
      }
    }
  }
  return v39 - __readfsqword(0x28u);
}
