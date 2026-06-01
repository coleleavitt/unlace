__int64 __fastcall sub_898780(__int64 *a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  int v7; // r12d
  __int64 v9; // rax
  bool v10; // al
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  int v14; // eax
  int v15; // ecx
  int v16; // ebx
  __int64 v17; // rsi
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx

  if ( !a5 )
    return 0xFFFFFFFFLL;
  if ( (a5 & (a5 - 1)) != 0 )
    return 0xFFFFFFFFLL;
  v7 = a2;
  v9 = qstrdup(a3);
  a1[51204] = v9;
  if ( !v9 )
    return 0xFFFFFFFFLL;
  if ( (int)a2 <= 2 && a4 )
  {
    v10 = 0;
    v11 = 3;
    v7 = 3;
  }
  else
  {
    v11 = (int)a2;
    v10 = (int)a2 == 0;
  }
  v12 = a5 + 30;
  if ( a5 != -30 && !v10 && !is_mul_ok(v11, v12) )
  {
    *__errno_location() = 12;
    set_qerrno(1, a2);
    set_qerrno(1, a2);
    return 0xFFFFFFFFLL;
  }
  v13 = qalloc(v11 * v12);
  *(unsigned __int64 *)((char *)&stru_64018.r_offset + (_QWORD)a1) = v13;
  if ( !v13 )
    return 0xFFFFFFFFLL;
  *a1 = a5;
  v14 = 2;
  *((_DWORD *)a1 + 4) = -1;
  if ( a5 == 2 )
  {
    *((_DWORD *)a1 + 2) = 1;
  }
  else
  {
    do
      v15 = v14++;
    while ( 1LL << v15 != a5 );
    *((_DWORD *)a1 + 2) = v15;
  }
  v16 = v7 - 1;
  *((_DWORD *)a1 + 3) = v7 - 1;
  if ( a4 )
  {
    v17 = 2;
    v18 = 0xFFFFFFFFLL;
  }
  else
  {
    v17 = 0;
    v18 = 0;
  }
  v19 = qopen_shared(a1[51204], v17, v18);
  *((_DWORD *)a1 + 4) = v19;
  if ( v19 == -1 )
    return 0xFFFFFFFFLL;
  memset(a1 + 3, 0, 0x63FF8u);
  v20 = *(unsigned __int64 *)((char *)&stru_64018.r_offset + (_QWORD)a1);
  a1[51202] = v20;
  if ( v7 <= 0 )
  {
    v24 = v20;
    v20 = 0;
  }
  else
  {
    v21 = 0;
    while ( 1 )
    {
      v22 = *a1;
      *(_QWORD *)(v20 + 8) = v21;
      *(_WORD *)(v20 + 28) = 0;
      v21 = v20;
      v23 = v20 + v22 + 30;
      *(_QWORD *)v20 = 0;
      *(_QWORD *)(v20 + 16) = v23;
      *(_DWORD *)(v20 + 24) = -1;
      if ( !v16 )
        break;
      v20 = v23;
      --v16;
    }
    v24 = a1[51202];
  }
  *(_QWORD *)(v24 + 8) = v20;
  *(_QWORD *)(v20 + 16) = a1[51202];
  return 0;
}

