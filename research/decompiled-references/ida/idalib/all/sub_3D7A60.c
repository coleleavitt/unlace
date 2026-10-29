unsigned __int64 __fastcall sub_3D7A60(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r12
  _QWORD *v6; // rax
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // rdx
  int *v16; // rdi
  int *v17; // rax
  int *v18; // rsi
  __int64 v19; // rcx
  _QWORD *v20; // rbp
  _QWORD **v21; // rbx
  void *v22; // rdi
  unsigned __int64 v25; // [rsp+10h] [rbp-88h] BYREF
  int v26; // [rsp+18h] [rbp-80h]
  __int64 v27; // [rsp+20h] [rbp-78h] BYREF
  int v28; // [rsp+28h] [rbp-70h] BYREF
  void *v29; // [rsp+30h] [rbp-68h]
  int *v30; // [rsp+38h] [rbp-60h]
  int *v31; // [rsp+40h] [rbp-58h]
  __int64 v32; // [rsp+48h] [rbp-50h]
  unsigned __int64 v33; // [rsp+58h] [rbp-40h]

  v4 = a3 - a2;
  v5 = a1 + 1536;
  v33 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(a1 + 1544);
  v28 = 0;
  v29 = nullptr;
  v30 = &v28;
  v31 = &v28;
  v32 = 0;
  if ( v6 )
  {
    v7 = v4;
    v8 = a1 + 1536;
    do
    {
      while ( 1 )
      {
        v9 = v6[2];
        v10 = v6[3];
        if ( v6[4] < a2 )
          break;
        v8 = (__int64)v6;
        v6 = (_QWORD *)v6[2];
        if ( !v9 )
          goto LABEL_6;
      }
      v6 = (_QWORD *)v6[3];
    }
    while ( v10 );
LABEL_6:
    if ( v5 == v8 )
    {
      v12 = v8;
    }
    else
    {
      v11 = a4 + a2;
      v12 = v8;
      do
      {
        v13 = *(_QWORD *)(v12 + 32);
        if ( v13 >= v11 )
          break;
        v14 = *(_DWORD *)(v12 + 40);
        v15 = v7 + v13;
        v16 = &v28;
        v25 = v15;
        v26 = v14;
        v17 = (int *)v29;
        if ( !v29 )
          goto LABEL_16;
        do
        {
          while ( 1 )
          {
            v18 = *((int **)v17 + 2);
            v19 = *((_QWORD *)v17 + 3);
            if ( *((_QWORD *)v17 + 4) < v15 )
              break;
            v16 = v17;
            v17 = *((int **)v17 + 2);
            if ( !v18 )
              goto LABEL_14;
          }
          v17 = *((int **)v17 + 3);
        }
        while ( v19 );
LABEL_14:
        if ( v16 == &v28 || v15 < *((_QWORD *)v16 + 4) )
        {
LABEL_16:
          v18 = v16;
          sub_3CF5E0(&v27, v16, (__int64)&v25);
        }
        v12 = std::_Rb_tree_increment(v12, v18, v15, v19);
      }
      while ( v5 != v12 );
    }
  }
  else
  {
    v8 = a1 + 1536;
    v12 = a1 + 1536;
  }
  v20 = (_QWORD *)(a1 + 1528);
  if ( (unsigned __int8)sub_3CD340(v8, v12, 9) )
    sub_3D7370((__int64)v20, v8, v12);
  sub_3CD690(v20, (__int64)v30, (__int64)&v28, 0xAu);
  v21 = (_QWORD **)v29;
  if ( v29 )
  {
    do
    {
      sub_3BBB90(v21[3]);
      v22 = v21;
      v21 = (_QWORD **)v21[2];
      operator delete(v22, 0x30u);
    }
    while ( v21 );
  }
  return v33 - __readfsqword(0x28u);
}
