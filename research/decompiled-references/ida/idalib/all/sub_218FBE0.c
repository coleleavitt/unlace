__int64 __fastcall sub_218FBE0(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // r13
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int *v16; // rax
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 *v23; // rsi
  __int64 v24; // rax
  unsigned int *v25; // r13
  __int64 v26; // rdi
  unsigned int v27; // eax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  const char *v32; // rdx
  size_t v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rax
  unsigned int *v36; // rdx
  char v37; // al
  unsigned int *v38; // rax
  unsigned __int64 v39; // [rsp+0h] [rbp-F8h]
  __int64 *v40; // [rsp+0h] [rbp-F8h]
  __int64 *v41; // [rsp+8h] [rbp-F0h]
  __int64 *v42; // [rsp+10h] [rbp-E8h]
  __int64 v43; // [rsp+18h] [rbp-E0h]
  unsigned int v44; // [rsp+24h] [rbp-D4h] BYREF
  unsigned __int64 v45; // [rsp+28h] [rbp-D0h] BYREF
  unsigned int *v46; // [rsp+30h] [rbp-C8h] BYREF
  char v47; // [rsp+38h] [rbp-C0h]
  __int64 v48; // [rsp+40h] [rbp-B8h] BYREF
  char v49; // [rsp+48h] [rbp-B0h]
  __int64 v50; // [rsp+50h] [rbp-A8h] BYREF
  char v51; // [rsp+58h] [rbp-A0h]
  __int64 v52; // [rsp+60h] [rbp-98h] BYREF
  char v53; // [rsp+70h] [rbp-88h]
  __m128i v54; // [rsp+80h] [rbp-78h] BYREF
  char v55; // [rsp+90h] [rbp-68h]
  unsigned int *v56; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-50h]
  char v58; // [rsp+B0h] [rbp-48h]

  v7 = a2 + 7;
  v39 = HIDWORD(a3);
  sub_216F6A0((__int64)&v56, a2 + 7, a3, a4, a5, a6);
  if ( (v57 & 1) == 0 )
  {
    sub_2175B50((__int64)&v46, v7, v56, (unsigned int)v39, v10, v11);
    sub_216F7A0((__int64 *)&v56);
    if ( (v47 & 1) != 0 )
      goto LABEL_3;
LABEL_6:
    v40 = &v48;
    sub_216F6A0((__int64)&v48, v7, (unsigned int)a3, v13, v14, v15);
    v18 = v48;
    if ( (v49 & 1) != 0 )
    {
      *(_BYTE *)(a1 + 16) |= 1u;
      v48 = 0;
      *(_QWORD *)a1 = v18;
LABEL_8:
      sub_216F7A0(v40);
      goto LABEL_4;
    }
    v19 = sub_2180190(*(_DWORD *)(v48 + 24));
    v41 = &v50;
    sub_216F6A0((__int64)&v50, v7, v19, (__int64)&v50, v20, v21);
    if ( (v51 & 1) != 0 )
    {
      v22 = v50;
      *(_BYTE *)(a1 + 16) |= 1u;
      v50 = 0;
      *(_QWORD *)a1 = v22;
LABEL_11:
      sub_216F7A0(v41);
      goto LABEL_8;
    }
    v23 = a2 + 7;
    v56 = (unsigned int *)sub_2181330;
    v42 = &v52;
    sub_2174650((__int64)&v52, v7, v50, (void (__fastcall *)(__int64 *, __int64, __m128i *))sub_2162B70, (__int64)&v56);
    if ( (v53 & 1) != 0 )
    {
      v24 = v52;
      *(_BYTE *)(a1 + 16) |= 1u;
      v52 = 0;
      *(_QWORD *)a1 = v24;
LABEL_14:
      sub_111DFC0(v42);
      goto LABEL_11;
    }
    v25 = v46;
    v26 = *v46;
    v27 = sub_2180190(v26);
    v44 = v27;
    if ( v29 <= v27 )
    {
      v45 = v29;
      v35 = sub_2195B10(v26, v23, v28, v29);
      sub_218B440(
        &v56,
        3u,
        v35,
        (__int64)"st_name (0x%x) is past the end of the string table of size 0x%zx",
        (int *)&v44,
        (__int64 *)&v45);
      v55 |= 1u;
      v36 = v56;
      v37 = *((_BYTE *)v46 + 12);
      v54.m128i_i64[0] = (__int64)v56;
      if ( (v37 & 0xF) != 3 )
      {
        *(_BYTE *)(a1 + 16) |= 1u;
        v54.m128i_i64[0] = 0;
        *(_QWORD *)a1 = v36;
        goto LABEL_19;
      }
    }
    else
    {
      v32 = (const char *)(v27 + v28);
      if ( v32 )
      {
        v43 = (__int64)v32;
        v33 = j__strlen(v32);
        v55 &= ~1u;
        v54.m128i_i64[1] = v33;
        v54.m128i_i64[0] = v43;
        if ( v33 )
        {
LABEL_18:
          v34 = _mm_load_si128(&v54);
          *(_BYTE *)(a1 + 16) &= ~1u;
          *(__m128i *)a1 = v34;
LABEL_19:
          sub_111DFC0(v54.m128i_i64);
          goto LABEL_14;
        }
      }
      else
      {
        v55 &= ~1u;
        v54 = 0u;
      }
      if ( (v25[3] & 0xF) != 3 )
        goto LABEL_18;
    }
    (*(void (__fastcall **)(unsigned int **, __int64 *, unsigned __int64, unsigned __int64, __int64, __int64, __int64 *, __int64 *, __int64 *))(*a2 + 128))(
      &v56,
      a2,
      a3,
      v29,
      v30,
      v31,
      &v48,
      &v50,
      &v52);
    if ( (v58 & 1) != 0 )
    {
      v38 = v56;
      *(_BYTE *)(a1 + 16) |= 1u;
      v56 = nullptr;
      *(_QWORD *)a1 = v38;
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v57 + 144LL))(a1, v57, v56);
    }
    sub_20CE610((__int64 *)&v56);
    goto LABEL_19;
  }
  v12 = v56;
  v47 |= 1u;
  v56 = nullptr;
  v46 = v12;
  sub_216F7A0((__int64 *)&v56);
  if ( (v47 & 1) == 0 )
    goto LABEL_6;
LABEL_3:
  v16 = v46;
  *(_BYTE *)(a1 + 16) |= 1u;
  v46 = nullptr;
  *(_QWORD *)a1 = v16;
LABEL_4:
  sub_218AE00((__int64 *)&v46);
  return a1;
}
