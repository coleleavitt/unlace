__int64 __fastcall sub_C82C80(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 *v5; // rbp
  __int64 *v6; // rdx
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rbp
  __int64 i; // r15
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rcx
  int v14; // esi
  __int64 *v15; // rcx
  char *v16; // rax
  char *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rbp
  unsigned int v20; // edx
  unsigned int v21; // eax
  _QWORD *v22; // r13
  int v23; // esi
  __int64 v24; // rbx
  _BYTE *v25; // rdi
  char *v26; // rcx
  char *v27; // rax
  __int64 v28; // rdx
  __int64 v30; // r15
  __int64 v31; // rax
  _QWORD *v32; // rdi
  __int64 v33; // rax
  __int64 j; // rax
  __int64 *v35; // [rsp+10h] [rbp-1A8h]
  _BYTE v36[8]; // [rsp+28h] [rbp-190h] BYREF
  int v37[4]; // [rsp+30h] [rbp-188h] BYREF
  void **v38; // [rsp+40h] [rbp-178h]
  __int64 *v39; // [rsp+48h] [rbp-170h]
  _QWORD *v40; // [rsp+50h] [rbp-168h]
  _QWORD *v41; // [rsp+58h] [rbp-160h]
  int v42; // [rsp+60h] [rbp-158h]
  void *v43[16]; // [rsp+70h] [rbp-148h] BYREF
  void *ptr; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-C0h]
  _BYTE v46[184]; // [rsp+100h] [rbp-B8h] BYREF

  sub_EE4940(v36, "add-bounds", *a2);
  sub_F735C0(v43, *a1);
  ptr = v46;
  v5 = (__int64 *)*a2;
  v45 = 0x1000000000LL;
  sub_16669D0(v37, v43[0]);
  v6 = (__int64 *)*a2;
  v39 = v5;
  v41 = a1 + 5;
  v7 = v6[9];
  v38 = v43;
  v40 = a1 + 1;
  v42 = 0;
  if ( !v7 )
    goto LABEL_19;
  v8 = *(_BYTE *)(v7 + 3) >> 6;
  if ( !v8 )
  {
    do
    {
      v7 = *(_QWORD *)(v7 + 16);
      v8 = *(_BYTE *)(v7 + 3) >> 6;
    }
    while ( !v8 );
    if ( v8 != 1 )
      goto LABEL_4;
LABEL_35:
    v9 = (unsigned int)(*(_DWORD *)(v7 + 4) + 1);
    goto LABEL_6;
  }
  if ( v8 == 1 )
    goto LABEL_35;
LABEL_4:
  if ( v8 == 2 )
    v9 = (unsigned int)(*(_DWORD *)(v7 + 4) - 1);
  else
    v9 = *(unsigned int *)(v7 + 4);
LABEL_6:
  if ( (_DWORD)v9 )
  {
    for ( i = 0; v9 != i; ++i )
    {
      v12 = *v6;
      if ( (*((_BYTE *)v6 + 123) & 0x20) != 0 )
      {
        v11 = *(_QWORD *)(v12 + 864);
        goto LABEL_9;
      }
      v13 = v6[9];
      v14 = 17;
      while ( 1 )
      {
        if ( *(char *)(v13 + 3) < 0 )
        {
          if ( *(_BYTE *)(v13 + 3) >> 6 != 2 )
          {
            v15 = (__int64 *)(*(_QWORD *)(v13 + 16) + 8 * i);
            goto LABEL_15;
          }
          goto LABEL_17;
        }
        if ( *(_DWORD *)(v13 + 4) == (_DWORD)i )
          break;
LABEL_17:
        v13 = *(_QWORD *)(v13 + 16);
        if ( !--v14 )
        {
          v35 = v6;
          sub_233F80((__int64 *)(v12 + 616), (_DWORD *)v6 + 18);
          v15 = (__int64 *)(*(_QWORD *)(v35[9] + 16) + 8 * i);
          goto LABEL_15;
        }
      }
      v15 = (__int64 *)(v13 + 8);
LABEL_15:
      v11 = *v15;
LABEL_9:
      sub_C82560((__int64)v37, (char **)&ptr, v11);
      v6 = (__int64 *)*a2;
    }
  }
LABEL_19:
  v16 = (char *)ptr;
  v17 = (char *)ptr + 8 * (unsigned int)v45;
  if ( ptr != v17 )
  {
    do
    {
      v18 = *(_QWORD *)v16;
      v16 += 8;
      *(_BYTE *)(v18 + 6) &= ~1u;
    }
    while ( v17 != v16 );
  }
  LODWORD(v45) = 0;
  *((_DWORD *)v6 + 30) = (*((_DWORD *)v6 + 30) + 1) & 0x3FFFFFF | v6[15] & 0xFC000000;
  v19 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v19 + 32);
  v20 = *(_DWORD *)(a3 + 8);
  v21 = *(_DWORD *)(a3 + 12);
  if ( v20 >= v21 )
  {
    v30 = 2 * v21;
    v31 = sub_186B270(8 * v30);
    v20 = *(_DWORD *)(a3 + 8);
    v32 = *(_QWORD **)a3;
    v22 = (_QWORD *)v31;
    if ( v20 )
    {
      if ( v20 - 1 <= 2 || (_QWORD *)v31 == v32 + 1 )
      {
        for ( j = 0; j != v20; ++j )
          v22[j] = v32[j];
      }
      else
      {
        v33 = 0;
        do
        {
          *(__m128i *)&v22[v33] = _mm_loadu_si128((const __m128i *)&v32[v33]);
          v33 += 2;
        }
        while ( v33 != 2LL * (v20 >> 1) );
        if ( (v20 & 1) != 0 )
          v22[v20 & 0xFFFFFFFE] = v32[v20 & 0xFFFFFFFE];
      }
    }
    if ( v32 != (_QWORD *)(a3 + 16) && v32 )
    {
      sub_186B220(v32);
      v20 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v22;
    *(_DWORD *)(a3 + 12) = v30;
  }
  else
  {
    v22 = *(_QWORD **)a3;
  }
  v23 = v42;
  v22[v20] = v19;
  *(_DWORD *)(a3 + 8) = v20 + 1;
  if ( v23 )
  {
    v24 = *a2;
    *(_BYTE *)(v24 + 123) = ((unsigned __int8)sub_ED2900(*(_BYTE *)(v24 + 123) >> 6, 1) << 6)
                          | *(_BYTE *)(v24 + 123) & 0x3F;
  }
  sub_EE4A20(":added-bounds");
  v25 = ptr;
  v26 = (char *)ptr + 8 * (unsigned int)v45;
  v27 = (char *)ptr;
  if ( ptr != v26 )
  {
    do
    {
      v28 = *(_QWORD *)v27;
      v27 += 8;
      *(_BYTE *)(v28 + 6) &= ~1u;
    }
    while ( v26 != v27 );
  }
  LODWORD(v45) = 0;
  if ( v25 != v46 && v25 )
    sub_186B220(v25);
  sub_F74720(v43);
  return sub_EE4A00(v36);
}

