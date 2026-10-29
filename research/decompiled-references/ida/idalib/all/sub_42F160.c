unsigned __int64 __fastcall sub_42F160(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v3; // rax
  _QWORD *v5; // rax
  int v6; // r8d
  int v7; // r9d
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  char *v14; // rdi
  __int64 v15; // r12
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v22; // [rsp+0h] [rbp-B0h]
  __int128 v23; // [rsp+8h] [rbp-A8h] BYREF
  _QWORD *v24; // [rsp+18h] [rbp-98h]
  __int128 v25; // [rsp+20h] [rbp-90h] BYREF
  _OWORD v26[4]; // [rsp+30h] [rbp-80h] BYREF
  unsigned __int64 v27; // [rsp+70h] [rbp-40h]

  v3 = *(_QWORD **)(a2 + 1672);
  v27 = __readfsqword(0x28u);
  v25 = 0;
  memset(v26, 0, sizeof(v26));
  v24 = v3;
  sub_630CA0(*v3, 26, &v25, 16);
  v5 = *(_QWORD **)(a2 + 1672);
  v23 = 0;
  sub_630CA0(*v5, 26, &v23, 16);
  v8 = *((_QWORD *)&v23 + 1);
  v9 = *(_QWORD *)(a2 + 1672);
  v10 = v9 + 1488;
  v11 = *(_QWORD **)(v9 + 1496);
  v22 = v10;
  if ( v11 )
  {
    do
    {
      while ( 1 )
      {
        v12 = v11[2];
        v13 = v11[3];
        if ( v11[4] < (unsigned __int64)v23 )
          break;
        v10 = (__int64)v11;
        v11 = (_QWORD *)v11[2];
        if ( !v12 )
          goto LABEL_6;
      }
      v11 = (_QWORD *)v11[3];
    }
    while ( v13 );
LABEL_6:
    while ( v22 != v10 )
    {
      if ( *(_QWORD *)(v10 + 32) >= v8 )
        break;
      v18 = a3[1];
      v19 = *a3;
      if ( a3[2] < (unsigned __int64)(v18 + 1) )
      {
        v20 = qvector_reserve(a3, v19, v18 + 1, 24);
        v18 = a3[1];
        *a3 = v20;
        v19 = v20;
      }
      v14 = (char *)v26;
      v15 = v19 + 24 * v18;
      *(_QWORD *)v15 = 0;
      *(_OWORD *)(v15 + 8) = 0;
      v16 = v25;
      ++a3[1];
      v17 = *(_QWORD *)(v10 + 32);
      if ( v17 >= v16 && v17 < *((_QWORD *)&v25 + 1) )
      {
        LOBYTE(v26[0]) = 43;
        LODWORD(v17) = v17 - v16;
        v14 = (char *)v26 + 1;
      }
      qsnprintf((_DWORD)v14, 63, (unsigned int)"%a", v17, v6, v7);
      sub_35A790((char **)v15);
      v10 = std::_Rb_tree_increment(v10);
    }
  }
  return v27 - __readfsqword(0x28u);
}
