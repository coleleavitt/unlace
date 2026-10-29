__int64 __fastcall sub_218C630(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // r13
  unsigned __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 *v14; // rax
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rsi
  __int64 v23; // rax
  unsigned __int64 *v24; // r13
  __int64 v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  const char *v31; // rdx
  size_t v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rax
  unsigned __int64 *v35; // rdx
  unsigned __int64 *v36; // rax
  unsigned __int64 v37; // [rsp+0h] [rbp-F8h]
  __int64 *v38; // [rsp+0h] [rbp-F8h]
  __int64 *v39; // [rsp+8h] [rbp-F0h]
  __int64 *v40; // [rsp+10h] [rbp-E8h]
  __int64 v41; // [rsp+18h] [rbp-E0h]
  unsigned int v42; // [rsp+24h] [rbp-D4h] BYREF
  unsigned __int64 v43; // [rsp+28h] [rbp-D0h] BYREF
  unsigned __int64 *v44; // [rsp+30h] [rbp-C8h] BYREF
  char v45; // [rsp+38h] [rbp-C0h]
  __int64 v46; // [rsp+40h] [rbp-B8h] BYREF
  char v47; // [rsp+48h] [rbp-B0h]
  __int64 v48; // [rsp+50h] [rbp-A8h] BYREF
  char v49; // [rsp+58h] [rbp-A0h]
  __int64 v50; // [rsp+60h] [rbp-98h] BYREF
  char v51; // [rsp+70h] [rbp-88h]
  __m128i v52; // [rsp+80h] [rbp-78h] BYREF
  char v53; // [rsp+90h] [rbp-68h]
  unsigned __int64 *v54; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-50h]
  char v56; // [rsp+B0h] [rbp-48h]

  v7 = a2 + 7;
  v37 = HIDWORD(a3);
  sub_216F990((__int64)&v54, a2 + 7, a3, a4, a5, a6);
  if ( (v55 & 1) == 0 )
  {
    sub_217BF40((__int64)&v44, v7, v54, v37);
    sub_216FA80((__int64 *)&v54);
    if ( (v45 & 1) != 0 )
      goto LABEL_3;
LABEL_6:
    v38 = &v46;
    sub_216F990((__int64)&v46, v7, (unsigned int)a3, v11, v12, v13);
    v16 = v46;
    if ( (v47 & 1) != 0 )
    {
      *(_BYTE *)(a1 + 16) |= 1u;
      v46 = 0;
      *(_QWORD *)a1 = v16;
LABEL_8:
      sub_216FA80(v38);
      goto LABEL_4;
    }
    v17 = sub_2180190(*(_DWORD *)(v46 + 40));
    v39 = &v48;
    sub_216F990((__int64)&v48, v7, v17, (__int64)&v48, v18, v19);
    if ( (v49 & 1) != 0 )
    {
      v21 = v48;
      *(_BYTE *)(a1 + 16) |= 1u;
      v48 = 0;
      *(_QWORD *)a1 = v21;
LABEL_11:
      sub_216FA80(v39);
      goto LABEL_8;
    }
    v22 = a2 + 7;
    v54 = (unsigned __int64 *)sub_2181330;
    v40 = &v50;
    sub_217A9A0(
      (__int64)&v50,
      v7,
      v48,
      (void (__fastcall *)(__int64 *, __int64, __m128i *))sub_2162B70,
      (__int64)&v54,
      v20);
    if ( (v51 & 1) != 0 )
    {
      v23 = v50;
      *(_BYTE *)(a1 + 16) |= 1u;
      v50 = 0;
      *(_QWORD *)a1 = v23;
LABEL_14:
      sub_111DFC0(v40);
      goto LABEL_11;
    }
    v24 = v44;
    v25 = *(unsigned int *)v44;
    v26 = sub_2180190(v25);
    v42 = v26;
    if ( v28 <= v26 )
    {
      v43 = v28;
      v34 = sub_2195B10(v25, v22, v27, v28);
      sub_218B440(
        &v54,
        3u,
        v34,
        (__int64)"st_name (0x%x) is past the end of the string table of size 0x%zx",
        (int *)&v42,
        (__int64 *)&v43);
      v35 = v54;
      v53 |= 1u;
      v52.m128i_i64[0] = (__int64)v54;
      if ( (*((_BYTE *)v44 + 4) & 0xF) != 3 )
      {
        *(_BYTE *)(a1 + 16) |= 1u;
        v52.m128i_i64[0] = 0;
        *(_QWORD *)a1 = v35;
        goto LABEL_19;
      }
    }
    else
    {
      v31 = (const char *)(v26 + v27);
      if ( v31 )
      {
        v41 = (__int64)v31;
        v32 = j__strlen(v31);
        v53 &= ~1u;
        v52.m128i_i64[1] = v32;
        v52.m128i_i64[0] = v41;
        if ( v32 )
        {
LABEL_18:
          v33 = _mm_load_si128(&v52);
          *(_BYTE *)(a1 + 16) &= ~1u;
          *(__m128i *)a1 = v33;
LABEL_19:
          sub_111DFC0(v52.m128i_i64);
          goto LABEL_14;
        }
      }
      else
      {
        v53 &= ~1u;
        v52 = 0u;
      }
      if ( (*((_BYTE *)v24 + 4) & 0xF) != 3 )
        goto LABEL_18;
    }
    (*(void (__fastcall **)(unsigned __int64 **, _QWORD *, unsigned __int64, unsigned __int64, __int64, __int64, __int64 *, __int64 *, __int64 *))(*a2 + 128LL))(
      &v54,
      a2,
      a3,
      v28,
      v29,
      v30,
      &v46,
      &v48,
      &v50);
    if ( (v56 & 1) != 0 )
    {
      v36 = v54;
      *(_BYTE *)(a1 + 16) |= 1u;
      v54 = nullptr;
      *(_QWORD *)a1 = v36;
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64, unsigned __int64 *))(*(_QWORD *)v55 + 144LL))(a1, v55, v54);
    }
    sub_20CE610((__int64 *)&v54);
    goto LABEL_19;
  }
  v10 = v54;
  v45 |= 1u;
  v54 = nullptr;
  v44 = v10;
  sub_216FA80((__int64 *)&v54);
  if ( (v45 & 1) == 0 )
    goto LABEL_6;
LABEL_3:
  v14 = v44;
  *(_BYTE *)(a1 + 16) |= 1u;
  v44 = nullptr;
  *(_QWORD *)a1 = v14;
LABEL_4:
  sub_218A810((__int64 *)&v44);
  return a1;
}
