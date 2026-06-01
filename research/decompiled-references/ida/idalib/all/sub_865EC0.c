__int64 __fastcall sub_865EC0(int *a1, _BOOL8 a2, unsigned int **a3, __int64 *a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // r11
  unsigned int *v11; // rdx
  __int64 v12; // r13
  unsigned int v14; // r10d
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int *v18; // rdx
  unsigned int *v20; // rdx
  int v21; // edi
  unsigned int *v22; // rax
  __int64 v23; // r11
  __int64 v24; // rdx
  _DWORD *v25; // rdx
  char v26; // al
  __m128i v27; // xmm0
  __int64 v28; // rcx
  int v29; // edi
  const __m128i *v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rcx
  unsigned int *v33; // [rsp+8h] [rbp-70h]
  unsigned int *v34; // [rsp+8h] [rbp-70h]
  unsigned int *v35; // [rsp+8h] [rbp-70h]
  __int64 v36; // [rsp+10h] [rbp-68h]
  unsigned int v37; // [rsp+10h] [rbp-68h]
  __int64 v38; // [rsp+10h] [rbp-68h]
  __int64 v39; // [rsp+18h] [rbp-60h]
  unsigned int *v40; // [rsp+28h] [rbp-50h] BYREF
  __int64 v41[9]; // [rsp+30h] [rbp-48h] BYREF

  v6 = 0;
  v11 = *a3;
  v12 = *a4;
  v41[1] = __readfsqword(0x28u);
  v40 = v11;
  v41[0] = v12;
  if ( a6 )
    v6 = *a6;
  v14 = *v11;
  v15 = *v11;
  LOWORD(v15) = 0;
  if ( v15 == -2146697216 )
    goto LABEL_7;
  if ( v15 > 0x800C0000 )
  {
    if ( v15 != -2146566144 )
    {
      v39 = v6;
      v37 = *v11;
      v34 = v11;
      v22 = sub_8658C0(
              *a1,
              (unsigned int)a1[1],
              v11,
              v41,
              a2,
              (__int64)(a1 + 6),
              *((_QWORD *)a1 + 1),
              *((const __m128i **)a1 + 2));
      v40 = v22;
      if ( v34 >= v22 )
        return 0;
      v23 = v39;
      if ( (v37 & 0xFFFB0000) != 0x800A0000 )
      {
LABEL_17:
        v24 = 0;
        if ( a6 )
          v24 = *a6 - v23;
        if ( *(_BYTE *)v12 != 13 )
        {
          if ( (unsigned __int8)(*(_BYTE *)v12 - 110) > 1u )
          {
            *(_BYTE *)(a5 + 16) = 5;
            *(_BYTE *)v12 = 5;
            v30 = *((const __m128i **)a1 + 2);
            *(__m128i *)(a5 + 20) = _mm_loadu_si128(v30 + 11);
            v31 = _mm_loadu_si128(v30 + 12);
            v16 = v41[0];
            v32 = v41[0];
            *(__m128i *)(a5 + 36) = v31;
            *(_QWORD *)(a5 + 8) = v32 - v12 + v24;
          }
          else
          {
            *(_QWORD *)(a5 + 8) = 1;
            v25 = (_DWORD *)(a5 + 20);
            v26 = (*(_BYTE *)v12 == 110) + 6;
            *(_BYTE *)(a5 + 16) = v26;
            v27 = _mm_loadu_si128((const __m128i *)(v12 + 1));
            *(_BYTE *)v12 = v26;
            v16 = v12 + 1;
            *(__m128i *)(a5 + 20) = v27;
            *(__m128i *)(a5 + 36) = _mm_loadu_si128((const __m128i *)(v12 + 17));
            if ( a6 )
            {
              v28 = v41[0];
              v41[0] = v12 + 1;
              *a6 += v28 - v16;
              if ( a1[6] )
              {
                a1[6] = 1;
                v17 = 1;
                goto LABEL_11;
              }
              if ( *(_BYTE *)v12 == 7 )
                goto LABEL_46;
              a1[6] = 1;
LABEL_10:
              v17 = v16 - v12;
LABEL_11:
              *(_QWORD *)a5 = 0;
              v18 = v40;
              *a6 += v17;
LABEL_12:
              *a3 = v18;
              *a4 = v12;
              return 1;
            }
            v29 = a1[6];
            v41[0] = v12 + 1;
            if ( v29 || *(_BYTE *)v12 != 7 )
            {
              a1[6] = 1;
              goto LABEL_33;
            }
LABEL_46:
            while ( !*v25 )
            {
              if ( ++v25 == (_DWORD *)(a5 + 52) )
                goto LABEL_9;
            }
            a1[6] = 1;
          }
LABEL_9:
          if ( a6 )
            goto LABEL_10;
LABEL_33:
          *(_QWORD *)a5 = v12;
          v18 = v40;
          v12 = v16;
          goto LABEL_12;
        }
        *(_QWORD *)(a5 + 8) = 1;
        *(_BYTE *)(a5 + 16) = 6;
LABEL_38:
        *(_BYTE *)v12 = 6;
        v16 = v41[0];
        *(_OWORD *)(a5 + 20) = -1;
        *(_OWORD *)(a5 + 36) = -1;
        goto LABEL_9;
      }
LABEL_16:
      v40 = v22 + 1;
      goto LABEL_17;
    }
    v20 = v11 + 1;
    if ( (v14 & 1) != 0 )
    {
      if ( v14 == -2146566143 )
        a2 = !a2;
LABEL_35:
      v40 = v20;
      if ( (unsigned int)sub_866670(a1, a2, &v40, v41, a5, a6) )
      {
        v12 = v41[0];
        v18 = v40 + 1;
        goto LABEL_12;
      }
      return 0;
    }
LABEL_15:
    v36 = v6;
    v21 = *a1;
    v40 = v20;
    v33 = v20;
    v22 = sub_8658C0(
            v21,
            (unsigned int)a1[1],
            v20,
            v41,
            (v15 != -2146566144) == a2,
            (__int64)(a1 + 6),
            *((_QWORD *)a1 + 1),
            *((const __m128i **)a1 + 2));
    v40 = v22;
    v23 = v36;
    if ( v33 >= v22 )
      return 0;
    goto LABEL_16;
  }
  if ( v15 == -2146828288 )
  {
    v20 = v11 + 1;
    if ( (v14 & 1) != 0 )
      goto LABEL_35;
    goto LABEL_15;
  }
  if ( v15 == -2146762752 )
  {
LABEL_7:
    *(_QWORD *)(a5 + 8) = 1;
    v40 = v11 + 1;
    if ( (v15 == -2146762752) != a2 )
    {
      v41[0] = v12 + 1;
      *(_BYTE *)(a5 + 16) = 7;
      *(_BYTE *)v12 = 7;
      v16 = v41[0];
      *(_OWORD *)(a5 + 20) = 0;
      *(_OWORD *)(a5 + 36) = 0;
      goto LABEL_9;
    }
    *(_BYTE *)(a5 + 16) = 6;
    v41[0] = v12 + 1;
    goto LABEL_38;
  }
  v38 = v6;
  v35 = v11;
  v40 = sub_8658C0(
          *a1,
          (unsigned int)a1[1],
          v11,
          v41,
          a2,
          (__int64)(a1 + 6),
          *((_QWORD *)a1 + 1),
          *((const __m128i **)a1 + 2));
  v23 = v38;
  if ( v35 < v40 )
    goto LABEL_17;
  return 0;
}
