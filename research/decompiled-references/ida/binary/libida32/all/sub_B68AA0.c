__int64 __fastcall sub_B68AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  const void *v9; // r12
  size_t v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rbx
  _QWORD *v18; // r14
  unsigned int *v19; // rdi
  unsigned __int64 v20; // rax
  const void *v21; // rdi
  bool v22; // sf
  __int64 result; // rax
  size_t v24; // rax
  const void *v25; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  v6 = a1;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0 )
    v6 = sub_B68580(a1);
  v7 = *(_QWORD *)(v6 + 88);
  v8 = *(_QWORD *)(v7 + 17448);
  v9 = *(const void **)(v8 + 360);
  v10 = *(_QWORD *)(v8 + 368);
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    return 0;
  v11 = sub_B68690(a1, a2, a3, a4, a5, a6);
  v15 = *((unsigned int *)v11 + 2);
  v16 = *v11 + 8 * v15;
  v17 = (*(_BYTE *)(a1 + 29) & 1) != 0 ? *sub_B68690(a1, a2, v15, v12, v13, v14) : 0LL;
  if ( v17 == v16 )
    return 0;
  while ( 1 )
  {
    v18 = *(_QWORD **)v17;
    if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) == 142 )
    {
      v19 = *(unsigned int **)(v18[5] + 16LL);
      v20 = *v19;
      v21 = v19 + 4;
      v22 = *(char *)(*(_QWORD *)(v7 + 2320) + 2LL) < 0;
      v25 = v21;
      v26 = v20;
      if ( v22 )
      {
        v24 = j__strlen("_app_extension");
        v20 = sub_2223100(&v25, "_app_extension", v24);
        if ( v20 == -1 )
        {
          v21 = v25;
          v20 = v26;
        }
        else
        {
          v21 = v25;
          if ( v26 <= v20 )
            v20 = v26;
        }
      }
      if ( v10 == v20 && (!v10 || !memcmp(v21, v9, v10)) )
      {
        result = v18[6];
        if ( (unsigned int)result | HIDWORD(v18[7]) & 0x7FFFFFFF | ((unsigned int)v18[7] | HIDWORD(result)) & 0x7FFFFFFF )
          break;
      }
    }
    v17 += 8;
    if ( v16 == v17 )
      return 0;
  }
  return result;
}

