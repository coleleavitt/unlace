__int64 __fastcall sub_12C90F0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int8 (__fastcall *v7)(__int64, __int64 *); // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rbx
  __int64 *v12; // r15
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 result; // rax
  _QWORD *v18; // rbx
  _QWORD *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __m128i *v25; // rcx
  __int64 v26; // rax
  _WORD *v27; // rcx
  __int64 v28; // [rsp+0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+8h] [rbp-60h]
  __int16 v30; // [rsp+20h] [rbp-48h]

  v6 = sub_112C5D0(a1);
  v7 = *(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 96LL);
  v28 = *a2;
  v8 = a2[1];
  v30 = 261;
  v29 = v8;
  if ( v7(v6, &v28) )
  {
LABEL_18:
    v21 = *a2;
    v30 = 261;
    v28 = v21;
    v29 = a2[1];
    return sub_112FA80(a3, a4, (__int64)&v28);
  }
  LODWORD(v28) = 3397;
  v9 = sub_21B6DA0(a3, &v28, 1);
  v10 = *(_QWORD *)(a3 + 8);
  v11 = (__int64 *)(v10 + 8LL * (unsigned int)v9);
  v12 = (__int64 *)(v10 + 8 * HIDWORD(v9));
  if ( v11 != v12 )
  {
    while ( 1 )
    {
      v13 = *v11;
      if ( *v11 )
      {
        if ( (unsigned __int8)sub_21B9810(v13, 3397) )
          break;
      }
      if ( v12 == ++v11 )
        goto LABEL_6;
    }
    if ( v12 != v11 )
    {
      do
      {
        v22 = *v11;
        if ( *(_QWORD *)(*v11 + 16) )
          v22 = *(_QWORD *)(*v11 + 16);
        ++v11;
        *(_BYTE *)(v22 + 44) |= 1u;
        if ( v11 == v12 )
          break;
        while ( 1 )
        {
          v13 = *v11;
          if ( *v11 )
          {
            if ( (unsigned __int8)sub_21B9810(v13, 3397) )
              break;
          }
          if ( v12 == ++v11 )
            goto LABEL_29;
        }
      }
      while ( v12 != v11 );
LABEL_29:
      v23 = sub_227D6D0(v13, 3397);
      v24 = sub_226D880(v23, "Clang", 5, 0);
      v25 = *(__m128i **)(v24 + 32);
      if ( *(_QWORD *)(v24 + 24) - (_QWORD)v25 > 0x1Fu )
      {
        *v25 = _mm_load_si128((const __m128i *)&xmmword_23A9FA0);
        v25[1] = _mm_load_si128((const __m128i *)&xmmword_23A9FB0);
        *(_QWORD *)(v24 + 32) += 32LL;
      }
      else
      {
        v24 = sub_227BF10(v24, "ignoring nonexistent directory \"", 32);
      }
      v26 = sub_227BF10(v24, *a2, a2[1]);
      v27 = *(_WORD **)(v26 + 32);
      if ( *(_QWORD *)(v26 + 24) - (_QWORD)v27 > 1u )
      {
        *v27 = 2594;
        *(_QWORD *)(v26 + 32) += 2LL;
      }
      else
      {
        sub_227BF10(v26, "\"\n", 2);
      }
    }
  }
LABEL_6:
  LODWORD(v28) = 72;
  v14 = sub_21B6DA0(a3, &v28, 1);
  v15 = *(_QWORD *)(a3 + 8);
  v16 = (unsigned int)v14;
  result = HIDWORD(v14);
  v18 = (_QWORD *)(v15 + 8 * v16);
  v19 = (_QWORD *)(v15 + 8 * result);
  if ( v18 != v19 )
  {
    while ( 1 )
    {
      if ( *v18 )
      {
        result = sub_21B9810(*v18, 72);
        if ( (_BYTE)result )
          break;
      }
      if ( v19 == ++v18 )
        return result;
    }
    if ( v18 != v19 )
    {
      do
      {
        v20 = *v18;
        if ( *(_QWORD *)(*v18 + 16LL) )
          v20 = *(_QWORD *)(*v18 + 16LL);
        ++v18;
        *(_BYTE *)(v20 + 44) |= 1u;
        if ( v18 == v19 )
          break;
        while ( !*v18 || !(unsigned __int8)sub_21B9810(*v18, 72) )
        {
          if ( v19 == ++v18 )
            goto LABEL_18;
        }
      }
      while ( v19 != v18 );
      goto LABEL_18;
    }
  }
  return result;
}
