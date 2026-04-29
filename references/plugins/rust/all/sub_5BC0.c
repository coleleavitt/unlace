unsigned __int64 __fastcall sub_5BC0(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rsi
  int v12; // r13d
  int *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 result; // rax
  __int64 v17; // rcx

  v2 = getinf(3);
  v3 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 72) = (v2 & 4) != 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(unsigned int *)(a1 + 8);
  *(_DWORD *)(a1 + 12) = v5;
  if ( (unsigned int)v6 <= 6 )
  {
    v7 = 84;
    if ( _bittest64(&v7, v6) )
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 48) + v5;
  }
  sub_3380(0x7D4u, a1 + 8, 112);
  v8 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 64) = 5;
  *(_DWORD *)(a1 + 8) = 1;
  if ( v8 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 16) = 0;
    v9 = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 32);
  }
  v10 = *(_QWORD *)(a1 + 24);
  v11 = 0;
  v12 = 10;
  v13 = (int *)&unk_7320;
  while ( 1 )
  {
    ++v13;
    if ( v9 < v10 + 1 )
    {
      v14 = qvector_reserve(a1 + 16, v11, v10 + 1, 4);
      v10 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = v14;
      v11 = v14;
    }
    *(_DWORD *)(v11 + 4 * v10) = v12;
    v10 = *(_QWORD *)(a1 + 24) + 1LL;
    *(_QWORD *)(a1 + 24) = v10;
    v12 = *v13;
    if ( *v13 == -1 )
      break;
    v9 = *(_QWORD *)(a1 + 32);
    v11 = *(_QWORD *)(a1 + 16);
  }
  v15 = *(_QWORD *)(a1 + 40);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v15);
    *(_QWORD *)(a1 + 40) = 0;
    v10 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 56) = 0;
  }
  result = *(unsigned int *)(a1 + 8);
  *(_DWORD *)(a1 + 12) = v10;
  if ( (unsigned int)result <= 6 )
  {
    v17 = 84;
    if ( _bittest64(&v17, result) )
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 48) + v10;
  }
  return result;
}
