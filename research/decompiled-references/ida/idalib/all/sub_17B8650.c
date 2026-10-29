__int64 __fastcall sub_17B8650(
        __int64 *a1,
        __int64 *a2,
        __m128i *a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6,
        int a7,
        char a8)
{
  unsigned int v10; // edx
  __int64 v12; // r13
  __int64 v13; // rax
  char v14; // di
  int v15; // r14d
  __m128i si128; // xmm0
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // rax
  unsigned int v26; // edx
  char v27; // di
  char v28; // al
  __int64 v29; // rdx
  __int64 m128i_i64; // rdx
  _QWORD *v31; // rdi
  __int64 *v33; // [rsp+10h] [rbp-118h]
  __int64 v34; // [rsp+18h] [rbp-110h]
  __int64 v36; // [rsp+28h] [rbp-100h]
  char *v37; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-E8h] BYREF
  _QWORD *v39; // [rsp+48h] [rbp-E0h]
  __int64 v40; // [rsp+50h] [rbp-D8h]
  _OWORD v41[5]; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-80h]
  __int64 *v43; // [rsp+B0h] [rbp-78h]
  __int64 v44; // [rsp+B8h] [rbp-70h]
  unsigned int v45; // [rsp+C0h] [rbp-68h]
  __int64 v46; // [rsp+C8h] [rbp-60h] BYREF
  __m128i v47; // [rsp+D0h] [rbp-58h]
  __int64 v48; // [rsp+E0h] [rbp-48h]

  v10 = *(_DWORD *)(a5 + 104);
  if ( v10 )
  {
    v23 = 0;
    sub_168B9F0((__int64)&v38, a1 + 1, v10, 0xE05u, 0);
    v37 = *(char **)(a5 + 104);
    sub_1587DB0((__int64)&v38, (__int64 *)&v37);
    sub_15F7200(&v38);
    return v23;
  }
  if ( *(_DWORD *)(a5 + 56) )
  {
    v36 = 0;
    v12 = 0;
  }
  else
  {
    v36 = *(_QWORD *)(a5 + 64);
    v12 = v36;
    if ( v36 )
      a4 = *(_DWORD *)(a5 + 80);
  }
  v33 = (__int64 *)sub_1E85170(a1, a5);
  v34 = *v33;
  if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
  {
    sub_186C8D0(a1, a5);
    if ( (unsigned __int8)sub_1E535C0(a1, *(unsigned int *)(a5 + 80), v33, 3) )
    {
      *(_BYTE *)(a5 + 720) |= 1u;
      v31 = (_QWORD *)a1[31];
      v34 = v31[2340];
      v33 = sub_A81910(v31, v34, a4);
    }
  }
  sub_17A3FF0((__int64)a1, *(_QWORD *)a5);
  v13 = *(_QWORD *)a5;
  if ( (*(_BYTE *)(*(_QWORD *)a5 + 3LL) >> 7) | *(_BYTE *)(*(_QWORD *)a5 + 4LL) & 1 )
  {
    if ( *(char *)(v13 + 3) < 0 )
      v26 = *(_DWORD *)(v13 + 240);
    else
      v26 = *(_DWORD *)(v13 + 260);
    sub_168B9F0((__int64)&v38, a1 + 1, v26, 0xFA3u, 0);
    LODWORD(v37) = (*(_BYTE *)(a1[29] + 1) & 0x40) != 0;
    sub_1588370((__int64)&v38, (unsigned int *)&v37);
    sub_15F7200(&v38);
    v13 = *(_QWORD *)a5;
    v27 = **(_BYTE **)a5 >> 3;
    v15 = v27 & 3;
    if ( (v27 & 3) == 0 )
      goto LABEL_8;
    goto LABEL_24;
  }
  v14 = *(_BYTE *)v13 >> 3;
  v15 = v14 & 3;
  if ( (v14 & 3) != 0 )
  {
LABEL_24:
    sub_168B9F0((__int64)&v38, a1 + 1, *(_DWORD *)(v13 + 172), 0xFDFu, 0);
    v37 = sub_15AC8E0(v15);
    sub_15AFC70((__int64)&v38, &v37);
    sub_15F7200(&v38);
  }
LABEL_8:
  v38 = 0;
  v39 = v41;
  v40 = 0x800000000LL;
  v41[4] = 0;
  v42 = 0;
  v43 = a1;
  v44 = v12;
  v45 = a4;
  sub_B85890(&v46, v12);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA5C0);
  v48 = 65537;
  v47 = si128;
  sub_1A395A0(&v38);
  sub_1A49A10(a1, &v38, a2, 0, 0);
  if ( (_DWORD)v38 == 3 )
  {
    v17 = *v39 & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    if ( (_DWORD)v38 != 2 )
    {
      v17 = 0;
      *(_WORD *)((char *)&v48 + 3) = 0;
      goto LABEL_11;
    }
    v17 = sub_16C47B0(*v39 & 0xFFFFFFFFFFFFFFF8LL);
  }
  *(_WORD *)((char *)&v48 + 3) = 0;
  if ( !v17 )
    goto LABEL_34;
  v28 = *(_BYTE *)(v17 + 28) & 0x7F;
  if ( ((v28 + 61) & 0x7Fu) <= 1 || v28 == 47 )
  {
    v29 = v17;
    v17 = 0;
    sub_1CC2540(a1, *(unsigned int *)(a5 + 80), v29, 0);
    goto LABEL_11;
  }
  m128i_i64 = (__int64)a3[4].m128i_i64;
  if ( !a3 )
    m128i_i64 = 0;
  if ( !sub_15C11F0((__int64)(a1 + 326), v17, m128i_i64, a2, 0) )
LABEL_34:
    v17 = 0;
LABEL_11:
  v18 = sub_17B6880(
          a1,
          v12,
          v34,
          v33,
          (__int64)a3,
          a4,
          *(double *)si128.m128i_i64,
          (**(_BYTE **)a5 & 7) == 7,
          a6,
          a7,
          *(_DWORD *)(a5 + 88),
          a8,
          v17,
          (_BYTE *)a5);
  v22 = *(unsigned __int8 *)(v18 + 28);
  v23 = v18;
  if ( (v22 & 0x80u) != 0LL )
  {
    sub_B88650((__int64)a3, 1);
    v22 = *(unsigned __int8 *)(v23 + 28);
    if ( !*(_DWORD *)(*(_QWORD *)a5 + 268LL) || (v24 = *(_QWORD *)(v23 + 8), (v24 & 7) == 0) )
    {
LABEL_15:
      if ( v17 && (v22 & 0x80u) != 0LL )
        goto LABEL_19;
      goto LABEL_17;
    }
LABEL_14:
    *(_QWORD *)(v23 + 8) = v24 & 0xFFFFFFFFFFFFFFF8LL | 4;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(*(_QWORD *)a5 + 268LL) )
  {
    v24 = *(_QWORD *)(v18 + 8);
    if ( (v24 & 7) != 0 )
      goto LABEL_14;
  }
LABEL_17:
  if ( v36 )
    sub_17B7670((__int64)a1, v23, (__int64)a2, 1, v20, v21);
  else
    sub_B94AD0(a3 + 4, v23, v22, v19, v20, v21);
LABEL_19:
  sub_169D230((__int64)&v38);
  return v23;
}
