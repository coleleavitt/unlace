__int64 *__fastcall sub_A0C210(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdi
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v20; // r13
  __int64 i; // r15
  __int64 v22; // rsi
  __int64 v23; // rdi
  char v24; // al
  char v25; // al
  char v26; // al
  char v27; // al
  char *v28; // r12
  char *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rsi
  char v32; // al
  char v33; // al
  char v34; // al
  char v35; // al
  char v36; // al
  __int64 v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // rdi
  char v40; // dl
  char v41; // dl
  char v42; // dl
  char v43; // dl
  unsigned __int64 v44; // [rsp+8h] [rbp-50h]
  __int64 v45; // [rsp+10h] [rbp-48h]

  if ( a2 != a1 )
  {
    v3 = *a2;
    v4 = *a1;
    v5 = a2[1];
    v45 = v5 - *a2;
    v6 = 0xEEEEEEEEEEEEEEEFLL * (v45 >> 3);
    v7 = v6;
    if ( 0xEEEEEEEEEEEEEEEFLL * ((a1[2] - *a1) >> 3) < v6 )
    {
      v20 = 0;
      if ( v6 )
      {
        if ( v6 > 0x222222222222222LL )
          std::__throw_bad_alloc();
        v20 = operator new(v45);
      }
      for ( i = v20; v5 != v3; *(_BYTE *)(i - 8) = *(_BYTE *)(v3 - 8) & 0x70 | v27 & 0x8F )
      {
        v22 = v3;
        v23 = i;
        v3 += 120;
        i += 120;
        sub_9EDF30(v23, v22);
        v24 = *(_BYTE *)(v3 - 8) & 1 | *(_BYTE *)(i - 8) & 0xFE;
        *(_BYTE *)(i - 8) = v24;
        v25 = *(_BYTE *)(v3 - 8) & 2 | v24 & 0xFD;
        *(_BYTE *)(i - 8) = v25;
        v26 = *(_BYTE *)(v3 - 8) & 4 | v25 & 0xFB;
        *(_BYTE *)(i - 8) = v26;
        v27 = *(_BYTE *)(v3 - 8) & 8 | v26 & 0xF7;
        *(_BYTE *)(i - 8) = v27;
      }
      v28 = (char *)a1[1];
      v29 = (char *)*a1;
      if ( v28 != (char *)*a1 )
      {
        do
        {
          v30 = (__int64)v29;
          v29 += 120;
          sub_9E5FA0(v30);
        }
        while ( v28 != v29 );
        v29 = (char *)*a1;
      }
      if ( v29 )
        operator delete(v29);
      *a1 = v20;
      v18 = v45 + v20;
      a1[2] = v18;
      goto LABEL_10;
    }
    v8 = a1[1];
    v9 = v8 - v4;
    v10 = 0xEEEEEEEEEEEEEEEFLL * ((v8 - v4) >> 3);
    if ( v7 > v10 )
    {
      if ( v9 > 0 )
      {
        do
        {
          v31 = v3;
          v44 = v10;
          v3 += 120;
          sub_A0B930(v4, v31);
          v32 = *(_BYTE *)(v4 + 112);
          v4 += 120;
          v33 = *(_BYTE *)(v3 - 8) & 1 | v32 & 0xFE;
          *(_BYTE *)(v4 - 8) = v33;
          v34 = *(_BYTE *)(v3 - 8) & 2 | v33 & 0xFD;
          *(_BYTE *)(v4 - 8) = v34;
          v35 = *(_BYTE *)(v3 - 8) & 4 | v34 & 0xFB;
          *(_BYTE *)(v4 - 8) = v35;
          v36 = *(_BYTE *)(v3 - 8) & 8 | v35 & 0xF7;
          *(_BYTE *)(v4 - 8) = v36;
          *(_BYTE *)(v4 - 8) = *(_BYTE *)(v3 - 8) & 0x70 | v36 & 0x8F;
          v10 = v44 - 1;
        }
        while ( v44 != 1 );
        v8 = a1[1];
        v4 = *a1;
        v5 = a2[1];
        v3 = *a2;
        v9 = v8 - *a1;
      }
      v37 = v9 + v3;
      v18 = v45 + v4;
      if ( v37 == v5 )
        goto LABEL_10;
      do
      {
        v38 = v37;
        v39 = v8;
        v37 += 120;
        v8 += 120;
        sub_9EDF30(v39, v38);
        v40 = *(_BYTE *)(v37 - 8) & 1 | *(_BYTE *)(v8 - 8) & 0xFE;
        *(_BYTE *)(v8 - 8) = v40;
        v41 = *(_BYTE *)(v37 - 8) & 2 | v40 & 0xFD;
        *(_BYTE *)(v8 - 8) = v41;
        v42 = *(_BYTE *)(v37 - 8) & 4 | v41 & 0xFB;
        *(_BYTE *)(v8 - 8) = v42;
        v43 = *(_BYTE *)(v37 - 8) & 8 | v42 & 0xF7;
        *(_BYTE *)(v8 - 8) = v43;
        *(_BYTE *)(v8 - 8) = *(_BYTE *)(v37 - 8) & 0x70 | v43 & 0x8F;
      }
      while ( v37 != v5 );
    }
    else
    {
      if ( v45 <= 0 )
        goto LABEL_8;
      do
      {
        v11 = v3;
        v12 = v4;
        v3 += 120;
        v4 += 120;
        sub_A0B930(v12, v11);
        v13 = *(_BYTE *)(v3 - 8) & 1 | *(_BYTE *)(v4 - 8) & 0xFE;
        *(_BYTE *)(v4 - 8) = v13;
        v14 = *(_BYTE *)(v3 - 8) & 2 | v13 & 0xFD;
        *(_BYTE *)(v4 - 8) = v14;
        v15 = *(_BYTE *)(v3 - 8) & 4 | v14 & 0xFB;
        *(_BYTE *)(v4 - 8) = v15;
        v16 = *(_BYTE *)(v3 - 8) & 8 | v15 & 0xF7;
        *(_BYTE *)(v4 - 8) = v16;
        *(_BYTE *)(v4 - 8) = *(_BYTE *)(v3 - 8) & 0x70 | v16 & 0x8F;
        --v7;
      }
      while ( v7 );
      while ( v8 != v4 )
      {
        v17 = v4;
        v4 += 120;
        sub_9E5FA0(v17);
LABEL_8:
        ;
      }
    }
    v18 = *a1 + v45;
LABEL_10:
    a1[1] = v18;
  }
  return a1;
}

