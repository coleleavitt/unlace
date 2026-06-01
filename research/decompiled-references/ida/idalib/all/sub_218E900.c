__int64 __fastcall sub_218E900(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // r13
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  __int64 v28; // r13
  size_t v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rax
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  unsigned __int64 v34; // [rsp+0h] [rbp-F8h]
  __int64 *v35; // [rsp+0h] [rbp-F8h]
  __int64 *v36; // [rsp+8h] [rbp-F0h]
  __int64 *v37; // [rsp+10h] [rbp-E8h]
  __int64 v38; // [rsp+18h] [rbp-E0h]
  unsigned int v39; // [rsp+24h] [rbp-D4h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD *v41; // [rsp+30h] [rbp-C8h] BYREF
  char v42; // [rsp+38h] [rbp-C0h]
  __int64 v43; // [rsp+40h] [rbp-B8h] BYREF
  char v44; // [rsp+48h] [rbp-B0h]
  __int64 v45; // [rsp+50h] [rbp-A8h] BYREF
  char v46; // [rsp+58h] [rbp-A0h]
  __int64 v47; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v48; // [rsp+68h] [rbp-90h]
  char v49; // [rsp+70h] [rbp-88h]
  __m128i v50; // [rsp+80h] [rbp-78h] BYREF
  char v51; // [rsp+90h] [rbp-68h]
  _QWORD *v52; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-50h]
  char v54; // [rsp+B0h] [rbp-48h]

  v7 = a2 + 7;
  v34 = HIDWORD(a3);
  sub_216F820((__int64)&v52, a2 + 7, a3, a4, a5, a6);
  if ( (v53 & 1) == 0 )
  {
    sub_2178D10((__int64)&v41, v7, v52, (unsigned int)v34, v9, v10);
    sub_216F910((__int64 *)&v52);
    if ( (v42 & 1) != 0 )
      goto LABEL_3;
LABEL_6:
    v35 = &v43;
    sub_216F820((__int64)&v43, v7, (unsigned int)a3, v12, v13, v14);
    if ( (v44 & 1) != 0 )
    {
      v20 = v43;
      *(_BYTE *)(a1 + 16) |= 1u;
      v43 = 0;
      *(_QWORD *)a1 = v20;
LABEL_8:
      sub_216F910(v35);
      goto LABEL_4;
    }
    v36 = &v45;
    sub_216F820((__int64)&v45, v7, *(unsigned int *)(v43 + 40), v17, v18, v19);
    if ( (v46 & 1) != 0 )
    {
      v22 = v45;
      *(_BYTE *)(a1 + 16) |= 1u;
      v45 = 0;
      *(_QWORD *)a1 = v22;
LABEL_11:
      sub_216F910(v36);
      goto LABEL_8;
    }
    v52 = sub_2181330;
    v37 = &v47;
    sub_21777E0(
      (__int64)&v47,
      v7,
      v45,
      (void (__fastcall *)(__int64 *, __int64, __m128i *))sub_2162B70,
      (__int64)&v52,
      v21);
    if ( (v49 & 1) != 0 )
    {
      v25 = v47;
      *(_BYTE *)(a1 + 16) |= 1u;
      v47 = 0;
      *(_QWORD *)a1 = v25;
LABEL_14:
      sub_111DFC0(v37);
      goto LABEL_11;
    }
    v26 = (__int64)v41;
    v27 = v48;
    v39 = *(_DWORD *)v41;
    if ( v48 <= v39 )
    {
      v40 = v48;
      v31 = sub_2195B10(&v47, v41, v47, v48);
      sub_218B440(
        &v52,
        3u,
        v31,
        (__int64)"st_name (0x%x) is past the end of the string table of size 0x%zx",
        (int *)&v39,
        (__int64 *)&v40);
      v32 = v52;
      v51 |= 1u;
      v50.m128i_i64[0] = (__int64)v52;
      if ( (*((_BYTE *)v41 + 4) & 0xF) != 3 )
      {
        *(_BYTE *)(a1 + 16) |= 1u;
        v50.m128i_i64[0] = 0;
        *(_QWORD *)a1 = v32;
        goto LABEL_19;
      }
    }
    else
    {
      v28 = v39 + v47;
      if ( v28 )
      {
        v38 = (__int64)v41;
        v29 = j__strlen((const char *)(v39 + v47));
        v51 &= ~1u;
        v26 = v38;
        v50.m128i_i64[0] = v28;
        v50.m128i_i64[1] = v29;
        if ( v29 )
        {
LABEL_18:
          v30 = _mm_load_si128(&v50);
          *(_BYTE *)(a1 + 16) &= ~1u;
          *(__m128i *)a1 = v30;
LABEL_19:
          sub_111DFC0(v50.m128i_i64);
          goto LABEL_14;
        }
      }
      else
      {
        v51 &= ~1u;
        v50 = 0u;
      }
      if ( (*(_BYTE *)(v26 + 4) & 0xF) != 3 )
        goto LABEL_18;
    }
    (*(void (__fastcall **)(_QWORD **, _QWORD *, unsigned __int64, unsigned __int64, __int64, __int64, __int64 *, __int64 *, __int64 *))(*a2 + 128LL))(
      &v52,
      a2,
      a3,
      v27,
      v23,
      v24,
      &v43,
      &v45,
      &v47);
    if ( (v54 & 1) != 0 )
    {
      v33 = v52;
      *(_BYTE *)(a1 + 16) |= 1u;
      v52 = nullptr;
      *(_QWORD *)a1 = v33;
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v53 + 144LL))(a1, v53, v52);
    }
    sub_20CE610((__int64 *)&v52);
    goto LABEL_19;
  }
  v11 = v52;
  v42 |= 1u;
  v52 = nullptr;
  v41 = v11;
  sub_216F910((__int64 *)&v52);
  if ( (v42 & 1) == 0 )
    goto LABEL_6;
LABEL_3:
  v15 = (__int64)v41;
  *(_BYTE *)(a1 + 16) |= 1u;
  v41 = nullptr;
  *(_QWORD *)a1 = v15;
LABEL_4:
  sub_218AB00((__int64 *)&v41);
  return a1;
}
