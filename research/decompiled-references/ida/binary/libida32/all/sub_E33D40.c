void __fastcall sub_E33D40(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v11; // eax
  __int64 v12; // rdi
  _BYTE *v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbp
  __int64 **v18; // rcx
  __int64 v19; // rdx
  unsigned __int8 v20; // r15
  __m128i v21; // xmm0
  __int64 v22; // r13
  unsigned __int64 v23; // rdi
  __int64 v24; // rdi
  unsigned __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  _BYTE *v30; // rax
  unsigned __int16 *v31; // rbp
  __int64 v32; // r8
  __int64 v33; // [rsp+0h] [rbp-88h]
  __m128i v34; // [rsp+10h] [rbp-78h] BYREF
  __int64 v35; // [rsp+20h] [rbp-68h]
  __int64 *v36; // [rsp+30h] [rbp-58h] BYREF
  __int64 v37; // [rsp+38h] [rbp-50h]
  char v38; // [rsp+40h] [rbp-48h]
  __int64 v39; // [rsp+48h] [rbp-40h]

  if ( a2 )
    sub_E2B5E0(a1, a2, 0);
  v11 = a3 & 7;
  if ( v11 == 7 )
  {
    if ( *(_DWORD *)(a3 & 0xFFFFFFFFFFFFFFF8LL) != 1 )
      goto LABEL_5;
LABEL_53:
    sub_971800(a1[1], "on");
    sub_E23390((__int64)a1, a3, a6);
    goto LABEL_5;
  }
  if ( v11 == 4 )
  {
    sub_971800(a1[1], "dn");
    sub_E2B320(a1, *(_QWORD *)((a3 & 0xFFFFFFFFFFFFFFF8LL) + 8), &byte_22CD811, 0, v32);
  }
  else
  {
    if ( v11 > 4 )
    {
      if ( v11 > 6 )
        goto LABEL_5;
      goto LABEL_53;
    }
    if ( (a3 & 7) == 0 )
      sub_E15750(a1[1], a3 & 0xFFFFFFFFFFFFFFF8LL);
  }
LABEL_5:
  if ( !a4 )
    return;
  v12 = a1[1];
  v13 = *(_BYTE **)(v12 + 32);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(v12 + 24) )
  {
    sub_2257CD0(v12, 73);
  }
  else
  {
    *(_QWORD *)(v12 + 32) = v13 + 1;
    *v13 = 73;
  }
  v36 = a1;
  v38 = 0;
  v34.m128i_i64[0] = 0;
  v37 = 0;
  v39 = 0;
  v14 = sub_EFEE90(&v34, 0);
  if ( !v14 )
  {
    v14 = v37;
    if ( !a5 )
      goto LABEL_30;
    goto LABEL_10;
  }
  v37 = v14;
  if ( a5 )
  {
LABEL_10:
    v17 = 0;
    v33 = 8LL * (unsigned int)(a5 - 1);
    v18 = &v36;
    while ( 1 )
    {
      v21 = _mm_loadu_si128((const __m128i *)(a4 + 4 * v17));
      v19 = *(_QWORD *)(a4 + 4 * v17 + 16);
      v20 = 1;
      v34 = v21;
      v35 = v19;
      if ( v14 && !v38 )
      {
        v22 = v39;
        if ( !v39 )
        {
          v22 = *(_QWORD *)(*(_QWORD *)(v14 + 56) + v17 + 24);
          if ( sub_B68190(v22) )
          {
            if ( (v34.m128i_i32[0] & 0x7FFFFFFF) != 9 )
              v39 = v22;
          }
        }
        if ( (unsigned __int8)sub_EF9830(&v34) && (!sub_B68190(v22) || v39) )
        {
          v38 = 1;
          v20 = 1;
        }
        else
        {
          v19 = v37;
          if ( !v37 || (*(_BYTE *)(v37 + 28) & 0x7F) != 0x47 )
            goto LABEL_27;
          v23 = *(_QWORD *)(v37 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v37 + 16) & 4) != 0 )
            v23 = *(_QWORD *)v23;
          if ( (*(_BYTE *)(v23 + 8) & 0x7Fu) - 59 > 2 || (v24 = v23 - 64) == 0 || !sub_B731B0(v24) )
          {
            v20 = 1;
            if ( sub_E2AAC0(&v36, v22, (__int64)&v34)
              && v22
              && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) > 0x9Fu )
            {
              sub_E2A700(a1, v22, (__m128)v21, v19, (__int64)v18, v15);
            }
          }
          else
          {
LABEL_27:
            v20 = 0;
            if ( (*(_BYTE *)(v22 + 28) & 0x7F) == 0x2F )
              v20 = sub_F34140(*(_QWORD *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL)) != 0;
          }
        }
      }
      sub_E2B990(a1, v20, v19, (__int64)v18, v15, v16, v21, v34.m128i_i64[0]);
      v14 = v37;
      if ( v33 == v17 )
        break;
      v17 += 8;
    }
LABEL_30:
    if ( !v14 )
      goto LABEL_44;
  }
  if ( (*(_BYTE *)(v14 + 28) & 0x7F) == 0x47 )
  {
    v25 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v14 + 16) & 4) != 0 )
      v25 = *(_QWORD *)v25;
    if ( (*(_BYTE *)(v25 + 8) & 0x7Fu) - 59 <= 2 )
    {
      v26 = v25 - 64;
      if ( v26 )
      {
        if ( sub_B731B0(v26) )
          goto LABEL_44;
        v14 = v37;
      }
    }
    v27 = a1[1];
    v28 = *(_QWORD *)(v14 + 56);
    v29 = *(_QWORD *)(v27 + 24);
    v30 = *(_BYTE **)(v27 + 32);
    if ( (*(_BYTE *)(v28 + 23) & 0x40) == 0 )
      goto LABEL_45;
    v31 = *(unsigned __int16 **)(v28 + 8LL * (*(_DWORD *)(v28 + 20) & 0x1FFFFFFF) + 24);
    if ( !v31 || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) <= 0x9Fu )
      goto LABEL_45;
    if ( (unsigned __int64)v30 >= v29 )
    {
      sub_2257CD0(v27, 81);
    }
    else
    {
      *(_QWORD *)(v27 + 32) = v30 + 1;
      *v30 = 81;
    }
    sub_E24970((__int64)a1, v31, (unsigned __int16 *)0xFFFFFFFFLL, 0, v15, v16);
  }
LABEL_44:
  v27 = a1[1];
  v30 = *(_BYTE **)(v27 + 32);
  v29 = *(_QWORD *)(v27 + 24);
LABEL_45:
  if ( (unsigned __int64)v30 >= v29 )
  {
    sub_2257CD0(v27, 69);
  }
  else
  {
    *(_QWORD *)(v27 + 32) = v30 + 1;
    *v30 = 69;
  }
}

