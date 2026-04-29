unsigned __int64 __fastcall sub_5F40(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 result; // rax
  bool v9; // zf
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // r13d
  int *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx

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
  result = sub_3380(0x7D4u, a1 + 8, 112);
  v9 = *(_BYTE *)(a1 + 72) == 0;
  *(_DWORD *)(a1 + 64) = 8;
  if ( !v9 )
  {
    v10 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 8) = 1;
    if ( v10 )
    {
      *(_QWORD *)(a1 + 24) = 0;
      qfree(v10);
      *(_QWORD *)(a1 + 16) = 0;
      v11 = 0;
      *(_QWORD *)(a1 + 32) = 0;
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 32);
    }
    v12 = *(_QWORD *)(a1 + 24);
    v13 = 0;
    v14 = 129;
    v15 = (int *)&unk_7360;
    while ( 1 )
    {
      ++v15;
      if ( v11 < v12 + 1 )
      {
        v16 = qvector_reserve(a1 + 16, v13, v12 + 1, 4);
        v12 = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 16) = v16;
        v13 = v16;
      }
      *(_DWORD *)(v13 + 4 * v12) = v14;
      v12 = *(_QWORD *)(a1 + 24) + 1LL;
      *(_QWORD *)(a1 + 24) = v12;
      v14 = *v15;
      if ( *v15 == -1 )
        break;
      v11 = *(_QWORD *)(a1 + 32);
      v13 = *(_QWORD *)(a1 + 16);
    }
    v17 = *(_QWORD *)(a1 + 40);
    if ( v17 )
    {
      *(_QWORD *)(a1 + 48) = 0;
      qfree(v17);
      *(_QWORD *)(a1 + 40) = 0;
      v12 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 56) = 0;
    }
    result = *(unsigned int *)(a1 + 8);
    *(_DWORD *)(a1 + 12) = v12;
    if ( (unsigned int)result <= 6 )
    {
      v18 = 84;
      if ( _bittest64(&v18, result) )
        *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 48) + v12;
    }
  }
  return result;
}
