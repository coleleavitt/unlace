__int64 __fastcall sub_6D2E30(__int64 a1, const void *a2, size_t a3)
{
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 *v10; // r15
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // rax
  _QWORD *v14; // rbx
  char *v15; // rdx
  _BYTE *v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rcx

  v5 = sub_2220DF0(a2, a3);
  v9 = (unsigned int)sub_2220F70(a1, a2, a3, v5);
  v10 = (__int64 *)(*(_QWORD *)a1 + 8 * v9);
  v11 = *v10;
  if ( *v10 )
  {
    if ( v11 != -8 )
    {
      result = *(_QWORD *)(v11 + 8);
      if ( result )
        return result;
      goto LABEL_15;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v13 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 104) += a3 + 17;
  v14 = (_QWORD *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v15 = (char *)v14 + a3 + 17;
  if ( *(_QWORD *)(a1 + 32) >= (unsigned __int64)v15 && v13 )
    *(_QWORD *)(a1 + 24) = v15;
  else
    v14 = (_QWORD *)sub_6CF090(a1 + 24, a3 + 17, 3, v6, v7, v8);
  v16 = v14 + 2;
  if ( a3 )
    v16 = memcpy(v14 + 2, a2, a3);
  v16[a3] = 0;
  *v14 = a3;
  v14[1] = 0;
  *v10 = (__int64)v14;
  ++*(_DWORD *)(a1 + 12);
  v17 = (__int64 *)(*(_QWORD *)a1 + 8LL * (unsigned int)sub_2221390(a1, (unsigned int)v9));
  v11 = *v17;
  if ( *v17 )
    goto LABEL_13;
  do
  {
    do
    {
      v11 = v17[1];
      ++v17;
    }
    while ( !v11 );
LABEL_13:
    ;
  }
  while ( v11 == -8 );
  result = *(_QWORD *)(v11 + 8);
  if ( !result )
  {
LABEL_15:
    v18 = *(_QWORD *)(a1 + 120);
    if ( !v18
      || (result = (*(__int64 (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)v18 + 16LL))(v18, a2, a3),
          (*(_QWORD *)(v11 + 8) = result) == 0) )
    {
      v19 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 104) += 24LL;
      v20 = (_QWORD *)((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      v21 = (__int64)(v20 + 3);
      if ( *(_QWORD *)(a1 + 32) >= (unsigned __int64)(v20 + 3) && v19 )
        *(_QWORD *)(a1 + 24) = v21;
      else
        v20 = (_QWORD *)sub_6CF090(a1 + 24, 24, 3, v21, v7, v8);
      *v20 = 33553413;
      v20[1] = 0;
      *(_QWORD *)(v11 + 8) = v20;
      v20[2] = v11;
      return *(_QWORD *)(v11 + 8);
    }
  }
  return result;
}

