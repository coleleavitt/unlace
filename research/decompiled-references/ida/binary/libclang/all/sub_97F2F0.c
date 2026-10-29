__int64 __fastcall sub_97F2F0(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rdi
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  __m128i si128; // xmm0
  bool v12; // cl
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __m128 v27; // [rsp+0h] [rbp-558h] BYREF
  _QWORD v28[2]; // [rsp+10h] [rbp-548h] BYREF
  _QWORD v29[2]; // [rsp+20h] [rbp-538h] BYREF
  __int64 v30; // [rsp+30h] [rbp-528h] BYREF
  int v31; // [rsp+38h] [rbp-520h]
  char v32; // [rsp+3Ch] [rbp-51Ch]
  __int64 v33; // [rsp+40h] [rbp-518h] BYREF
  int v34; // [rsp+48h] [rbp-510h]
  char v35; // [rsp+4Ch] [rbp-50Ch]
  _BYTE v36[8]; // [rsp+80h] [rbp-4D8h] BYREF
  _DWORD v37[14]; // [rsp+88h] [rbp-4D0h] BYREF
  char v38; // [rsp+C0h] [rbp-498h]
  int v39; // [rsp+C8h] [rbp-490h]
  __int64 (__fastcall **v40)(); // [rsp+E0h] [rbp-478h] BYREF
  int v41; // [rsp+E8h] [rbp-470h]
  char v42; // [rsp+ECh] [rbp-46Ch]
  __m128i v43; // [rsp+418h] [rbp-140h]
  __int64 v44; // [rsp+428h] [rbp-130h]
  __int64 v45; // [rsp+430h] [rbp-128h]
  int v46; // [rsp+438h] [rbp-120h]
  __int64 v47; // [rsp+440h] [rbp-118h]
  __int64 v48; // [rsp+448h] [rbp-110h]
  int v49; // [rsp+450h] [rbp-108h]
  __int64 v50; // [rsp+458h] [rbp-100h]
  char v51; // [rsp+468h] [rbp-F0h]
  __int64 v52; // [rsp+470h] [rbp-E8h]
  __int16 v53; // [rsp+478h] [rbp-E0h]
  char v54; // [rsp+47Ah] [rbp-DEh]
  __int64 v55; // [rsp+480h] [rbp-D8h]
  void *ptr; // [rsp+488h] [rbp-D0h]
  __int64 v57; // [rsp+490h] [rbp-C8h]
  _BYTE v58[64]; // [rsp+498h] [rbp-C0h] BYREF
  __int64 v59; // [rsp+4D8h] [rbp-80h]
  __int64 v60; // [rsp+4E0h] [rbp-78h]
  int v61; // [rsp+4E8h] [rbp-70h]
  __int64 v62; // [rsp+4F0h] [rbp-68h]
  char v63; // [rsp+4FCh] [rbp-5Ch]
  __int64 v64; // [rsp+500h] [rbp-58h]
  char v65; // [rsp+50Ch] [rbp-4Ch]
  char v66; // [rsp+514h] [rbp-44h]

  v4 = *(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3));
  v5 = *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)v5;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_BYTE *)(v7 + 16);
  switch ( v8 )
  {
    case 13:
      if ( (((*(_WORD *)(v7 + 18) >> 3) + 77) & 0x1FFu) <= 0x13 )
        goto LABEL_4;
      break;
    case 46:
      v20 = sub_B14A40(v7);
      if ( (*(_BYTE *)(v20 + 74) & 1) != 0 || *(_QWORD *)(v20 + 128) > 7u )
        goto LABEL_4;
      v6 = *(_QWORD *)v5;
      break;
    case 10:
      goto LABEL_4;
  }
  if ( !(unsigned __int8)sub_B07F70(v6) )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v18 = *(_BYTE *)(v17 + 16);
    if ( v18 != 41 && v18 != 14 && (v18 != 13 || ((*(_WORD *)(v17 + 18) >> 3) & 0x1FF) != 0x1E7) )
    {
      v19 = *(_QWORD *)(a2 + 8);
      v41 = 8;
      v40 = nullptr;
      v42 = 1;
      return sub_97E3E0(a1, (__int64)&v40, v19);
    }
  }
LABEL_4:
  v9 = *(_QWORD *)(a1 + 192);
  v10 = *(_QWORD *)(a1 + 176);
  v28[0] = 0;
  v28[1] = 0;
  v27 = _mm_loadh_ps((const double *)(a1 + 176));
  sub_8E96B0((__int64)&v40, v9, v10, a1, (__int64)v28);
  si128 = _mm_load_si128((const __m128i *)&v27);
  v46 = 0;
  v44 = 0;
  v45 = 0;
  v40 = &off_49F7368;
  v53 = 0;
  v49 = 0;
  v57 = 0x300000000LL;
  v47 = 0;
  v48 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v54 = 0;
  v55 = 0;
  ptr = v58;
  v58[48] = 0;
  v58[56] = 0;
  v61 = 0;
  v59 = 0;
  v60 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v43 = si128;
  v12 = (*(_BYTE *)(v4 + 1) & 6) != 0;
  v27.m128_u64[0] = (unsigned __int64)v36;
  sub_8E9800((__int64)v36, (__int64)&v40, v4, v12, 0);
  if ( v39 == 3 )
  {
    sub_8E97F0((__int64)&v40);
    sub_A1A3F0(v28);
    v21 = *(_QWORD *)(a2 + 8);
    v34 = 8;
    v33 = 0;
    v35 = 1;
    sub_97E3E0(a1, (__int64)&v33, v21);
    goto LABEL_7;
  }
  v13 = &v33;
  if ( v39 )
  {
    v16 = v27.m128_u64[0];
    v27.m128_u64[0] = (unsigned __int64)&v33;
    sub_9A0B00(&v33, v16);
    v13 = (__int64 *)v27.m128_u64[0];
    if ( (_DWORD)v33 != 7 )
    {
      if ( (unsigned int)v33 > 1 )
      {
        sub_69F740(v27.m128_i64[0]);
        v13 = (__int64 *)v27.m128_u64[0];
      }
      goto LABEL_6;
    }
    v29[0] = sub_6A34D0(v27.m128_i64[0]);
    v29[1] = v22;
    if ( sub_69F600(v29) )
      goto LABEL_36;
    if ( v29[0] )
    {
      v23 = v29[0] & 3;
      if ( v23 == 1 )
      {
        if ( (v29[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (*(_WORD *)(v29[0] & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF) == 0xA )
          {
            v26 = (_QWORD *)sub_6A34F0(v27.m128_i64[0]);
            sub_97E930(a1, a2, *v26 == 0);
          }
          else
          {
            sub_97E930(a1, a2, 0);
          }
          v25 = v27.m128_u64[0];
LABEL_38:
          if ( (unsigned int)v33 > 1 )
            sub_69F740(v25);
          goto LABEL_7;
        }
      }
      else if ( v23 == 2 )
      {
LABEL_36:
        v24 = *(_QWORD *)(a2 + 8);
        v31 = 8;
        v30 = 1;
LABEL_37:
        v32 = 1;
        sub_97E3E0(a1, (__int64)&v30, v24);
        v25 = v27.m128_u64[0];
        goto LABEL_38;
      }
    }
    v24 = *(_QWORD *)(a2 + 8);
    v31 = 8;
    v30 = 0;
    goto LABEL_37;
  }
LABEL_6:
  v14 = *(_QWORD *)(a2 + 8);
  v35 = 1;
  v34 = 8;
  v33 = 1;
  sub_97E3E0(a1, (__int64)v13, v14);
LABEL_7:
  if ( v38 != -1 )
  {
    if ( v38 == 1 )
    {
      sub_A1C0C0(v37);
    }
    else if ( (unsigned __int8)v38 > 2u && v37[0] > 1u )
    {
      sub_69F740((__int64)v37);
    }
    v38 = -1;
  }
  v40 = &off_49F7368;
  operator delete();
  if ( ptr != v58 )
    free(ptr);
  operator delete();
  operator delete();
  sub_93F7A0((__int64)&v40);
  return sub_A1A3B0(v28);
}

