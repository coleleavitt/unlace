unsigned __int64 __fastcall sub_3D81C0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  int *v10; // r15
  unsigned __int64 v11; // r13
  int *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  int *v16; // rbp
  __int64 v17; // rcx
  int *v18; // rax
  _BOOL8 v19; // rdi
  __int64 v20; // rsi
  _QWORD *v21; // r13
  __int64 v22; // r14
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  _QWORD **v26; // rbx
  void *v27; // rdi
  __int64 i; // r15
  int v30; // [rsp+Ch] [rbp-ACh]
  unsigned __int64 v32; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v33; // [rsp+20h] [rbp-98h]
  __int64 v34; // [rsp+28h] [rbp-90h]
  __int64 v37; // [rsp+40h] [rbp-78h] BYREF
  int v38; // [rsp+48h] [rbp-70h] BYREF
  void *v39; // [rsp+50h] [rbp-68h]
  int *v40; // [rsp+58h] [rbp-60h]
  int *v41; // [rsp+60h] [rbp-58h]
  __int64 v42; // [rsp+68h] [rbp-50h]
  unsigned __int64 v43; // [rsp+78h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v4 = *(_QWORD **)(a1 + 1496);
  if ( v4 )
  {
    v5 = a1 + 1488;
    v34 = a1 + 1488;
    do
    {
      while ( 1 )
      {
        v6 = v4[2];
        v7 = v4[3];
        if ( v4[4] < a2 )
          break;
        v34 = (__int64)v4;
        v4 = (_QWORD *)v4[2];
        if ( !v6 )
          goto LABEL_6;
      }
      v4 = (_QWORD *)v4[3];
    }
    while ( v7 );
LABEL_6:
    v8 = v34;
    if ( v5 != v34 )
    {
      v38 = 0;
      v39 = nullptr;
      v40 = &v38;
      v32 = a2 + a4;
      v41 = &v38;
      v42 = 0;
      v33 = a3 - a2;
      do
      {
        v9 = *(_QWORD *)(v8 + 32);
        if ( v9 >= v32 )
          break;
        v10 = &v38;
        v30 = *(_DWORD *)(v8 + 40);
        v11 = v33 + v9;
        v12 = (int *)v39;
        if ( !v39 )
          goto LABEL_16;
        do
        {
          while ( 1 )
          {
            v13 = *((_QWORD *)v12 + 2);
            v14 = *((_QWORD *)v12 + 3);
            if ( *((_QWORD *)v12 + 4) < v11 )
              break;
            v10 = v12;
            v12 = *((int **)v12 + 2);
            if ( !v13 )
              goto LABEL_14;
          }
          v12 = *((int **)v12 + 3);
        }
        while ( v14 );
LABEL_14:
        if ( v10 == &v38 || v11 < *((_QWORD *)v10 + 4) )
        {
LABEL_16:
          v15 = operator new(0x30u);
          *(_QWORD *)(v15 + 32) = v11;
          v13 = (__int64)v10;
          *(_DWORD *)(v15 + 40) = 0;
          v16 = (int *)v15;
          v18 = (int *)sub_3B9400(&v37, v10, v11, v17);
          v10 = v18;
          if ( v14 )
          {
            v19 = v18 || &v38 == (int *)v14 || v11 < *(_QWORD *)(v14 + 32);
            v13 = (__int64)v16;
            v10 = v16;
            std::_Rb_tree_insert_and_rebalance(v19, v16, v14, &v38);
            ++v42;
          }
          else if ( v16 )
          {
            v13 = 48;
            operator delete(v16, 0x30u);
          }
        }
        v10[10] = v30;
        v8 = std::_Rb_tree_increment(v8, v13, v14, v9);
      }
      while ( v5 != v8 );
      v20 = v8;
      v21 = (_QWORD *)(a1 + 1480);
      if ( (unsigned __int8)sub_3CD340(v34, v8, 14) )
      {
        v20 = v34;
        sub_3D7370((__int64)v21, v34, v8);
      }
      v22 = v5;
      v23 = *(_QWORD **)(a1 + 1496);
      if ( v23 )
      {
        do
        {
          while ( 1 )
          {
            v24 = v23[2];
            v25 = v23[3];
            if ( v23[4] < a3 )
              break;
            v22 = (__int64)v23;
            v23 = (_QWORD *)v23[2];
            if ( !v24 )
              goto LABEL_29;
          }
          v23 = (_QWORD *)v23[3];
        }
        while ( v25 );
LABEL_29:
        for ( i = v22; v5 != i; i = std::_Rb_tree_increment(i, v20, v25, v24) )
        {
          if ( *(_QWORD *)(i + 32) >= a3 + a4 )
            break;
        }
      }
      else
      {
        i = v5;
      }
      if ( (unsigned __int8)sub_3CD340(v22, i, 14) )
        sub_3D7370((__int64)v21, v22, i);
      sub_3CD690(v21, (__int64)v40, (__int64)&v38, 0xFu);
      v26 = (_QWORD **)v39;
      if ( v39 )
      {
        do
        {
          sub_3BBB90(v26[3]);
          v27 = v26;
          v26 = (_QWORD **)v26[2];
          operator delete(v27, 0x30u);
        }
        while ( v26 );
      }
    }
  }
  return v43 - __readfsqword(0x28u);
}
