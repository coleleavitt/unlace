__int64 __fastcall sub_600210(__int64 a1, const void *a2, size_t a3)
{
  unsigned int v5; // eax
  __int64 v6; // r14
  __int64 *v7; // r15
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rax
  _QWORD *v11; // rbx
  char *v12; // rdx
  _BYTE *v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  _QWORD *v17; // rax
  unsigned __int64 v18; // rdx

  v5 = sub_25E2710(a2, a3);
  v6 = (unsigned int)sub_25E2870(a1, a2, a3, v5);
  v7 = (__int64 *)(*(_QWORD *)a1 + 8 * v6);
  v8 = *v7;
  if ( *v7 )
  {
    if ( v8 != -8 )
      goto LABEL_3;
    --*(_DWORD *)(a1 + 16);
  }
  v10 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 104) += a3 + 17;
  v11 = (_QWORD *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v12 = (char *)v11 + a3 + 17;
  if ( *(_QWORD *)(a1 + 32) >= (unsigned __int64)v12 && v10 )
    *(_QWORD *)(a1 + 24) = v12;
  else
    v11 = (_QWORD *)sub_5F8390(a1 + 24, a3 + 17, 3);
  v13 = v11 + 2;
  if ( a3 )
    v13 = memcpy(v11 + 2, a2, a3);
  v13[a3] = 0;
  *v11 = a3;
  v11[1] = 0;
  *v7 = (__int64)v11;
  ++*(_DWORD *)(a1 + 12);
  v14 = (__int64 *)(*(_QWORD *)a1 + 8LL * (unsigned int)sub_25E2C40(a1, (unsigned int)v6));
  v8 = *v14;
  if ( *v14 != -8 && v8 )
  {
LABEL_3:
    result = *(_QWORD *)(v8 + 8);
    if ( result )
      return result;
    goto LABEL_16;
  }
  do
  {
    do
    {
      v8 = v14[1];
      ++v14;
    }
    while ( !v8 );
  }
  while ( v8 == -8 );
  result = *(_QWORD *)(v8 + 8);
  if ( !result )
  {
LABEL_16:
    v15 = *(_QWORD *)(a1 + 120);
    if ( !v15
      || (result = (*(__int64 (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)v15 + 16LL))(v15, a2, a3),
          (*(_QWORD *)(v8 + 8) = result) == 0) )
    {
      v16 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 104) += 24LL;
      v17 = (_QWORD *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( *(_QWORD *)(a1 + 32) >= (unsigned __int64)(v17 + 3) && v16 )
        *(_QWORD *)(a1 + 24) = v17 + 3;
      else
        v17 = (_QWORD *)sub_5F8390(a1 + 24, 24, 3);
      v18 = *v17 & 0xFFFFFC0000000000LL;
      v17[1] = 0;
      *v17 = v18 | 0x1FFFC05;
      *(_QWORD *)(v8 + 8) = v17;
      v17[2] = v8;
      return *(_QWORD *)(v8 + 8);
    }
  }
  return result;
}

