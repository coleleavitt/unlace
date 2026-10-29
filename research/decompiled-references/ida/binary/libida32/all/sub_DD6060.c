void __fastcall sub_DD6060(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 *v7; // rcx
  unsigned int v8; // edx
  __int64 *v9; // r15
  int v10; // eax
  unsigned int v11; // esi
  __int64 *v12; // r10
  __int64 v13; // r8
  __int64 v14; // rax
  bool v15; // al
  __int64 v16; // r8
  unsigned int v17; // esi
  __int64 v18; // rax
  bool v19; // al
  unsigned int v20; // eax
  __int64 v21; // rax
  unsigned __int8 v22; // cl
  unsigned __int8 **v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rsi
  unsigned __int8 v26; // dl
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned __int8 v29; // cl
  void *v30; // rsi
  int v31; // eax
  __int64 *v32; // r9
  __int64 v33; // r14
  int v34; // eax
  __int64 *v35; // r9
  __int64 *v36; // [rsp+0h] [rbp-E0h]
  __int64 v37; // [rsp+0h] [rbp-E0h]
  __int64 v38; // [rsp+0h] [rbp-E0h]
  __int64 v39; // [rsp+8h] [rbp-D8h]
  __int64 *v40; // [rsp+8h] [rbp-D8h]
  __int64 *v41; // [rsp+10h] [rbp-D0h]
  __int64 *v42; // [rsp+18h] [rbp-C8h]
  unsigned int v43; // [rsp+20h] [rbp-C0h]
  unsigned int v44; // [rsp+20h] [rbp-C0h]
  unsigned int v45; // [rsp+24h] [rbp-BCh]
  void *v46; // [rsp+28h] [rbp-B8h] BYREF
  unsigned int v47; // [rsp+30h] [rbp-B0h]
  void *v48; // [rsp+38h] [rbp-A8h] BYREF
  unsigned int v49; // [rsp+40h] [rbp-A0h]
  void *v50; // [rsp+48h] [rbp-98h] BYREF
  signed __int64 v51; // [rsp+50h] [rbp-90h]
  _BYTE v52[16]; // [rsp+58h] [rbp-88h] BYREF
  void *ptr; // [rsp+68h] [rbp-78h] BYREF
  __m128i si128; // [rsp+70h] [rbp-70h]
  _BYTE v55[96]; // [rsp+80h] [rbp-60h] BYREF

  v4 = *(_QWORD *)(a1 + 416);
  if ( v4 && ((*(_BYTE *)(v4 + 28) & 0x7F) == 0x2B || *(char *)(v4 + 97) >= 0) )
    return;
  v47 = 1;
  v46 = nullptr;
  v49 = 1;
  v48 = nullptr;
  sub_B54BF0(a3, (__int64)&v48, (__int64)&v46);
  sub_21E1C10(&v48);
  if ( (unsigned __int8)(*(_QWORD *)(a3 + 72) >> 31) )
  {
    v11 = *(_DWORD *)(a4 + 8);
    v12 = *(__int64 **)a4;
    if ( v11 <= 0x40 )
    {
      v13 = 0;
      if ( v11 )
        v13 = (__int64)((_QWORD)v12 << (64 - (unsigned __int8)v11)) >> (64 - (unsigned __int8)v11);
    }
    else
    {
      v13 = *v12;
    }
    v8 = v49;
    if ( v49 > 0x40 )
    {
      v45 = v49;
      v42 = *(__int64 **)a4;
      v41 = (__int64 *)v48;
      v37 = *((_QWORD *)v48 + ((v49 - 1) >> 6)) & (1LL << ((unsigned __int8)v49 - 1));
      v39 = v13;
      if ( v37 )
      {
        v31 = sub_21E2AC0(&v48);
        v13 = v39;
        v32 = v41;
        v12 = v42;
        v8 = v45;
      }
      else
      {
        v31 = sub_21E2A40(&v48);
        v8 = v45;
        v12 = v42;
        v32 = v41;
        v13 = v39;
      }
      if ( v8 + 1 - v31 > 0x40 )
      {
        v15 = v37 != 0;
LABEL_22:
        if ( v15 )
          goto LABEL_31;
        if ( v11 > 0x40 )
        {
          v16 = *v12;
        }
        else
        {
          v16 = 0;
          if ( v11 )
            v16 = (__int64)((_QWORD)v12 << (64 - (unsigned __int8)v11)) >> (64 - (unsigned __int8)v11);
        }
        v17 = v47;
        if ( v47 > 0x40 )
        {
          v40 = (__int64 *)v46;
          v44 = v8;
          v33 = *((_QWORD *)v46 + ((v47 - 1) >> 6)) & (1LL << ((unsigned __int8)v47 - 1));
          v38 = v16;
          if ( v33 )
          {
            v34 = sub_21E2AC0(&v46);
            v16 = v38;
            v8 = v44;
            v35 = v40;
          }
          else
          {
            v34 = sub_21E2A40(&v46);
            v35 = v40;
            v8 = v44;
            v16 = v38;
          }
          if ( v17 + 1 - v34 > 0x40 )
          {
            v19 = v33 == 0;
LABEL_30:
            if ( !v19 )
              goto LABEL_48;
LABEL_31:
            v20 = sub_DFC980(*(_QWORD *)(a1 + 400));
            v21 = sub_E0FDF0(a1, v20, 2493, 0);
            v22 = *(_BYTE *)(a4 + 12);
            v23 = (unsigned __int8 **)v21;
            ptr = v55;
            si128 = _mm_load_si128((const __m128i *)&xmmword_2384CB0);
            sub_21E7D50(a4, (unsigned int)&ptr, 10, v22 ^ 1, 0, 1, 0);
            v50 = v52;
            sub_DD43A0(&v50, ptr, (__int64)ptr + si128.m128i_i64[0]);
            if ( ptr != v55 )
              free(ptr);
            if ( v23 )
              sub_AC84E0(v23, v50, v51);
            if ( v47 > 0x40 )
            {
              v24 = *(_QWORD *)v46;
            }
            else
            {
              v24 = 0;
              if ( v47 )
                v24 = (__int64)((_QWORD)v46 << (64 - (unsigned __int8)v47)) >> (64 - (unsigned __int8)v47);
            }
            if ( v23 )
              sub_AC60B0(v23, v24, 2u);
            if ( v49 > 0x40 )
            {
              v25 = *(_QWORD *)v48;
            }
            else
            {
              v25 = 0;
              if ( v49 )
                v25 = (__int64)((_QWORD)v48 << (64 - (unsigned __int8)v49)) >> (64 - (unsigned __int8)v49);
            }
            v26 = 2;
            if ( !v23 )
              goto LABEL_45;
            goto LABEL_44;
          }
          v18 = *v35;
        }
        else
        {
          v18 = 0;
          if ( v47 )
            v18 = (__int64)((_QWORD)v46 << (64 - (unsigned __int8)v47)) >> (64 - (unsigned __int8)v47);
        }
        v19 = v16 < v18;
        goto LABEL_30;
      }
      v14 = *v32;
    }
    else
    {
      v14 = 0;
      if ( v49 )
        v14 = (__int64)((_QWORD)v48 << (64 - (unsigned __int8)v49)) >> (64 - (unsigned __int8)v49);
    }
    v15 = v13 > v14;
    goto LABEL_22;
  }
  v7 = *(__int64 **)a4;
  if ( *(_DWORD *)(a4 + 8) > 0x40u )
    v7 = **(__int64 ***)a4;
  v8 = v49;
  v9 = (__int64 *)v48;
  if ( v49 > 0x40 )
  {
    v43 = v49;
    v36 = v7;
    v10 = sub_21E2A40(&v48);
    v8 = v43;
    v7 = v36;
    if ( v43 - v10 > 0x40 )
      goto LABEL_9;
    v9 = (__int64 *)*v9;
  }
  if ( v7 > v9 )
  {
    v27 = sub_DFC980(*(_QWORD *)(a1 + 400));
    v28 = sub_E0FDF0(a1, v27, 2493, 0);
    v29 = *(_BYTE *)(a4 + 12);
    v23 = (unsigned __int8 **)v28;
    ptr = v55;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384CB0);
    sub_21E7D50(a4, (unsigned int)&ptr, 10, v29 ^ 1, 0, 1, 0);
    v50 = v52;
    sub_DD43A0(&v50, ptr, (__int64)ptr + si128.m128i_i64[0]);
    if ( ptr != v55 )
      free(ptr);
    if ( v23 )
      sub_AC84E0(v23, v50, v51);
    v30 = v46;
    if ( v47 > 0x40 )
      v30 = *(void **)v46;
    if ( v23 )
      sub_AC60B0(v23, (__int64)v30, 3u);
    v25 = (__int64)v48;
    if ( v49 > 0x40 )
      v25 = *(_QWORD *)v48;
    if ( !v23 )
      goto LABEL_45;
    v26 = 3;
LABEL_44:
    sub_AC60B0(v23, v25, v26);
    sub_AC60B0(v23, a3, 0xAu);
LABEL_45:
    if ( v50 != v52 )
      operator delete(v50);
    v8 = v49;
  }
LABEL_48:
  if ( v8 > 0x40 )
  {
    v9 = (__int64 *)v48;
LABEL_9:
    if ( v9 )
      operator delete[](v9);
  }
  if ( v47 > 0x40 )
  {
    if ( v46 )
      operator delete[](v46);
  }
}

