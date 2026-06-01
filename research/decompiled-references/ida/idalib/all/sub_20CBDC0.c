void __fastcall sub_20CBDC0(__int64 a1, _QWORD **a2)
{
  __int64 v2; // rcx
  bool v3; // zf
  size_t v4; // r13
  const char *v5; // r14
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // r8
  __int64 v16; // r9
  void *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  size_t *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  __int64 v28; // [rsp+8h] [rbp-150h] BYREF
  void *ptr; // [rsp+10h] [rbp-148h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-140h]
  _BYTE v31[304]; // [rsp+28h] [rbp-130h] BYREF

  if ( (unsigned __int8)sub_20922B0(**(_QWORD **)(a1 + 8)) && (unsigned __int8)(*(_BYTE *)a1 - 13) > 3u )
  {
    if ( (*(_BYTE *)(a1 + 7) & 0x10) == 0 )
      return;
    v4 = 0;
    v5 = &byte_22F0C30;
    ptr = v31;
    *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    if ( !*(_QWORD *)sub_20CBB10(a1) )
      goto LABEL_20;
    goto LABEL_11;
  }
  v2 = *((unsigned __int8 *)a2 + 32);
  if ( (unsigned __int8)v2 > 1u || (*(_BYTE *)(a1 + 7) & 0x10) != 0 )
  {
    v3 = *((_BYTE *)a2 + 33) == 1;
    ptr = v31;
    *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    if ( v3 && (unsigned __int8)v2 <= 6u && ((1LL << v2) & 0x7A) != 0 )
    {
      switch ( v2 )
      {
        case 0LL:
        case 2LL:
        case 5LL:
        case 6LL:
          v4 = (size_t)a2[1];
          v5 = (const char *)*a2;
          goto LABEL_9;
        case 1LL:
          goto LABEL_31;
        case 3LL:
          v5 = (const char *)*a2;
          if ( *a2 )
          {
            v4 = strlen((const char *)*a2);
            goto LABEL_9;
          }
LABEL_31:
          if ( (*(_BYTE *)(a1 + 7) & 0x10) != 0 && *(_QWORD *)sub_20CBB10(a1) )
          {
            v5 = nullptr;
            v4 = 0;
            goto LABEL_11;
          }
          break;
        case 4LL:
          v5 = (const char *)**a2;
          v4 = (*a2)[1];
          goto LABEL_9;
      }
      goto LABEL_20;
    }
    sub_22538C0(a2, &ptr);
    v4 = n[0];
    v5 = (const char *)ptr;
LABEL_9:
    if ( (*(_BYTE *)(a1 + 7) & 0x10) != 0 )
    {
      v27 = (_QWORD *)sub_20CBB10(a1);
      if ( v4 == *v27 && (!v4 || !memcmp(v27 + 2, v5, v4)) )
        goto LABEL_20;
    }
    else if ( !v4 )
    {
      goto LABEL_20;
    }
LABEL_11:
    if ( (unsigned __int8)sub_20C9C90((char *)a1, &v28) )
      goto LABEL_20;
    v6 = v28;
    if ( v28 )
    {
      if ( (*(_BYTE *)(a1 + 7) & 0x10) != 0 )
      {
        v7 = sub_20CBB10(a1);
        sub_20CDE20(v6, v7, v8, v9, v10, v11);
        sub_20CBC00(a1);
        if ( !v4 )
          goto LABEL_20;
        v6 = v28;
      }
      v12 = sub_20CE2F0(v6, v5, v4, a1);
      sub_20CA1B0(a1, v12, v13, v14, v15, v16);
      v17 = ptr;
      if ( ptr == v31 )
        return;
      goto LABEL_17;
    }
    sub_20CBC00(a1);
    if ( v4 )
    {
      v22 = (size_t *)sub_22300B0(v4 + 17, 8, v18, v19, v20, v21);
      memcpy(v22 + 2, v5, v4);
      *((_BYTE *)v22 + v4 + 16) = 0;
      *v22 = v4;
      v22[1] = 0;
      sub_20CA1B0(a1, (__int64)v22, v23, v24, v25, v26);
      *(_QWORD *)(sub_20CBB10(a1) + 8) = a1;
    }
LABEL_20:
    v17 = ptr;
    if ( ptr == v31 )
      return;
LABEL_17:
    free(v17);
  }
}
