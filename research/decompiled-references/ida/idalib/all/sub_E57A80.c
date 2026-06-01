_BYTE *__fastcall sub_E57A80(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _BYTE *result; // rax
  __int64 v12; // rdi
  _BYTE *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
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
  unsigned __int16 *v30; // rbp
  __int64 v31; // r8
  __int64 v32; // [rsp+0h] [rbp-88h]
  __m128i v33; // [rsp+10h] [rbp-78h] BYREF
  __int64 v34; // [rsp+20h] [rbp-68h]
  __int64 *v35; // [rsp+30h] [rbp-58h] BYREF
  __int64 v36; // [rsp+38h] [rbp-50h]
  char v37; // [rsp+40h] [rbp-48h]
  __int64 v38; // [rsp+48h] [rbp-40h]

  if ( a2 )
    sub_E4F320(a1, a2, 0);
  result = (_BYTE *)(a3 & 7);
  if ( (_DWORD)result == 7 )
  {
    result = (_BYTE *)(a3 & 0xFFFFFFFFFFFFFFF8LL);
    if ( *(_DWORD *)(a3 & 0xFFFFFFFFFFFFFFF8LL) != 1 )
      goto LABEL_5;
LABEL_53:
    sub_995540(a1[1], "on");
    result = sub_E470D0((__int64)a1, a3, a6);
    goto LABEL_5;
  }
  if ( (_DWORD)result == 4 )
  {
    sub_995540(a1[1], "dn");
    result = (_BYTE *)sub_E4F060(a1, *(_QWORD *)((a3 & 0xFFFFFFFFFFFFFFF8LL) + 8), &byte_22F0C30, 0, v31);
  }
  else
  {
    if ( (unsigned int)result > 4 )
    {
      if ( (unsigned int)result > 6 )
        goto LABEL_5;
      goto LABEL_53;
    }
    if ( (a3 & 7) == 0 )
      result = sub_E39490(a1[1], a3 & 0xFFFFFFFFFFFFFFF8LL);
  }
LABEL_5:
  if ( !a4 )
    return result;
  v12 = a1[1];
  v13 = *(_BYTE **)(v12 + 32);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(v12 + 24) )
  {
    sub_227BA10(v12, 73);
  }
  else
  {
    *(_QWORD *)(v12 + 32) = v13 + 1;
    *v13 = 73;
  }
  v35 = a1;
  v37 = 0;
  v33.m128i_i64[0] = 0;
  v36 = 0;
  v38 = 0;
  v14 = sub_F22BD0(&v33, 0);
  if ( !v14 )
  {
    v14 = v36;
    if ( !a5 )
      goto LABEL_30;
    goto LABEL_10;
  }
  v36 = v14;
  if ( a5 )
  {
LABEL_10:
    v17 = 0;
    v32 = 8LL * (unsigned int)(a5 - 1);
    v18 = &v35;
    while ( 1 )
    {
      v21 = _mm_loadu_si128((const __m128i *)(a4 + 4 * v17));
      v19 = *(_QWORD *)(a4 + 4 * v17 + 16);
      v20 = 1;
      v33 = v21;
      v34 = v19;
      if ( v14 && !v37 )
      {
        v22 = v38;
        if ( !v38 )
        {
          v22 = *(_QWORD *)(*(_QWORD *)(v14 + 56) + v17 + 24);
          if ( sub_B8BED0(v22) )
          {
            if ( (v33.m128i_i32[0] & 0x7FFFFFFF) != 9 )
              v38 = v22;
          }
        }
        if ( (unsigned __int8)sub_F1D570(&v33) && (!sub_B8BED0(v22) || v38) )
        {
          v37 = 1;
          v20 = 1;
        }
        else
        {
          v19 = v36;
          if ( !v36 || (*(_BYTE *)(v36 + 28) & 0x7F) != 0x47 )
            goto LABEL_27;
          v23 = *(_QWORD *)(v36 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v36 + 16) & 4) != 0 )
            v23 = *(_QWORD *)v23;
          if ( (*(_BYTE *)(v23 + 8) & 0x7Fu) - 59 > 2 || (v24 = v23 - 64) == 0 || !sub_B96EF0(v24) )
          {
            v20 = 1;
            if ( sub_E4E800(&v35, v22, (__int64)&v33)
              && v22
              && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) > 0x9Fu )
            {
              sub_E4E440(a1, v22, (__m128)v21);
            }
          }
          else
          {
LABEL_27:
            v20 = 0;
            if ( (*(_BYTE *)(v22 + 28) & 0x7F) == 0x2F )
              v20 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL)) != 0;
          }
        }
      }
      sub_E4F6D0(a1, v20, v19, (__int64)v18, v15, v16, v21, v33.m128i_i64[0]);
      v14 = v36;
      if ( v32 == v17 )
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
        if ( sub_B96EF0(v26) )
          goto LABEL_44;
        v14 = v36;
      }
    }
    v27 = a1[1];
    v28 = *(_QWORD *)(v14 + 56);
    v29 = *(_QWORD *)(v27 + 24);
    result = *(_BYTE **)(v27 + 32);
    if ( (*(_BYTE *)(v28 + 23) & 0x40) == 0 )
      goto LABEL_45;
    v30 = *(unsigned __int16 **)(v28 + 8LL * (*(_DWORD *)(v28 + 20) & 0x1FFFFFFF) + 24);
    if ( !v30 || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) <= 0x9Fu )
      goto LABEL_45;
    if ( (unsigned __int64)result >= v29 )
    {
      sub_227BA10(v27, 81);
    }
    else
    {
      *(_QWORD *)(v27 + 32) = result + 1;
      *result = 81;
    }
    sub_E486B0((__int64)a1, v30, (unsigned __int16 *)0xFFFFFFFFLL, 0, v15, v16);
  }
LABEL_44:
  v27 = a1[1];
  result = *(_BYTE **)(v27 + 32);
  v29 = *(_QWORD *)(v27 + 24);
LABEL_45:
  if ( (unsigned __int64)result >= v29 )
    return (_BYTE *)sub_227BA10(v27, 69);
  *(_QWORD *)(v27 + 32) = result + 1;
  *result = 69;
  return result;
}
