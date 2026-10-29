void __fastcall sub_1A8EF90(__int64 *a1, _BYTE *a2, const __m128i *a3, double a4, double a5)
{
  unsigned int v8; // edx
  __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // rdi
  unsigned __int8 v17; // dl
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r15
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __m128i *v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rbp
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r14
  __int64 v42; // rax
  _QWORD *v43; // rax
  int v44; // [rsp+4h] [rbp-184h] BYREF
  __int64 v45; // [rsp+8h] [rbp-180h] BYREF
  int v46[36]; // [rsp+10h] [rbp-178h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-E8h] BYREF
  void *ptr; // [rsp+A8h] [rbp-E0h]
  __int64 v49; // [rsp+B0h] [rbp-D8h]
  _BYTE v50[64]; // [rsp+B8h] [rbp-D0h] BYREF
  void *v51[2]; // [rsp+F8h] [rbp-90h]
  __int64 v52; // [rsp+108h] [rbp-80h]
  _QWORD *v53; // [rsp+110h] [rbp-78h]
  __int64 v54; // [rsp+118h] [rbp-70h]
  int v55; // [rsp+120h] [rbp-68h]
  __int64 v56; // [rsp+128h] [rbp-60h] BYREF
  __int128 v57; // [rsp+130h] [rbp-58h]
  __int64 v58; // [rsp+140h] [rbp-48h]

  if ( (a2[28] & 0x7Fu) - 58 > 4 )
  {
    v8 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 16LL))(a2);
    goto LABEL_4;
  }
  if ( !a3[3].m128i_i16[4] )
    goto LABEL_3;
  v9 = a3[5].m128i_i64[0];
  if ( (v9 & 2) == 0 )
  {
    v8 = a3[1].m128i_u32[2];
    v10 = v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v10 )
      v8 = sub_EEB7E0(v10, (__int64)a2, a4);
    goto LABEL_4;
  }
  v11 = v9 & 0xFFFFFFFFFFFFFFFCLL;
  v12 = v11;
  if ( !v11 || (v13 = *(_QWORD *)(v11 + 8)) == 0 )
  {
LABEL_3:
    v8 = a3[1].m128i_u32[2];
LABEL_4:
    sub_168B9F0((__int64)&v47, a1, v8, 0x10EDu, 0);
    v46[0] = 0;
    sub_1587D10((__int64)&v47, v46);
    sub_15F7200(&v47);
    return;
  }
  v14 = (_QWORD *)*a1;
  v49 = 0x800000000LL;
  ptr = v50;
  v54 = v13;
  *(_OWORD *)v51 = 0;
  v53 = v14;
  v47 = 0;
  v52 = 0;
  v55 = 0;
  sub_B85890(&v56, v13);
  v57 = 0;
  v58 = 0x101010000LL;
  sub_1A395A0((__int64)&v47);
  if ( !(unsigned __int8)sub_1A49A10(*a1, (__int64)&v47, *(__int64 **)(*a1 + 192), 0, 0, v15, 0.0, a5)
    || (_DWORD)v47 != 2 )
  {
    goto LABEL_26;
  }
  v16 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
  v17 = *(_BYTE *)(v16 + 28) & 0x7F;
  v18 = v17;
  if ( (unsigned int)v17 - 53 <= 1 || ((v17 + 52) & 0x7Fu) <= 1 )
    v18 = *(_BYTE *)(sub_B72ED0(v16) + 28) & 0x7F;
  if ( (unsigned int)(v18 - 40) <= 6 )
  {
    v19 = sub_168B6C0((__int64)a1);
    v20 = *(_QWORD *)(v12 + 8);
    v21 = v19;
    v22 = (_QWORD *)sub_168B6C0((__int64)a1);
    v25 = v22[294];
    v22[304] += 48LL;
    v26 = (__m128i *)((v25 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v22[295] >= (unsigned __int64)&v26[3] && v25 )
      v22[294] = v26 + 3;
    else
      v26 = (__m128i *)sub_986170((__int64)(v22 + 294), 48, 48, 3, v23, v24);
    sub_B14B20(v26, v21, a3, v20);
    sub_B8CC60((__int64)a2, (__int64)v26, v27, v28, v29, v30);
    if ( !BYTE3(v58) )
      goto LABEL_29;
  }
  else
  {
LABEL_26:
    sub_168B9F0((__int64)v46, a1, *(_DWORD *)v12, 0x10EDu, 0);
    v44 = 1;
    v34 = sub_1587D10((__int64)v46, &v44);
    v35 = *(_QWORD *)(v12 + 8);
    v36 = v34;
    if ( *(_BYTE *)(v34 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v34 + 32), *(_QWORD *)(v12 + 8), 5u);
    }
    else if ( *(_BYTE *)(v34 + 132) )
    {
      v41 = sub_168B9E0((_QWORD *)v34);
      v42 = *(_QWORD *)(v36 + 16);
      if ( v42 )
        v42 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v42 + 32LL))(*(_QWORD *)(v36 + 16));
      v45 = v42;
      v43 = sub_1587BC0(v41, &v45, v37, v38, v39, v40);
      sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * *(unsigned int *)(v36 + 128) + 8), v35, 5u);
    }
    sub_15F7200(v46);
    if ( !BYTE3(v58) )
      goto LABEL_29;
  }
  if ( (_DWORD)v47 != 5 )
  {
    if ( !v51[1] || (*(_BYTE *)(v53[29] + 46LL) & 0x20) == 0 )
      goto LABEL_31;
    sub_1663B80(v53, (__int64)&v47);
LABEL_29:
    if ( !BYTE4(v58) || (_DWORD)v47 != 5 )
      goto LABEL_31;
    goto LABEL_36;
  }
  if ( BYTE4(v58) )
LABEL_36:
    sub_1A445B0((__int64)v53, (__int64)&v47, v31, v32, v33);
LABEL_31:
  if ( v51[0] )
    sub_1A39780((char *)v51[0]);
  if ( ptr != v50 )
    free(ptr);
}
