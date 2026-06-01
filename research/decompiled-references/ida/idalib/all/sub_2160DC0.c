__int64 __fastcall sub_2160DC0(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  __int32 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int16 *v12; // r10
  __int64 v13; // rsi
  __int16 v14; // r11
  int v15; // r8d
  __int64 v16; // rax
  unsigned __int64 v18; // rax
  unsigned __int8 v19; // al
  unsigned int v20; // eax
  unsigned int v21; // r11d
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int32 v26; // eax
  const char *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r13
  const char *v34; // rax
  __int32 v35; // eax
  __int64 v36; // rax
  __int32 v37; // eax
  int v38; // eax
  void *v39[2]; // [rsp+0h] [rbp-138h] BYREF
  __int64 v40; // [rsp+10h] [rbp-128h] BYREF
  __m128i v41[2]; // [rsp+20h] [rbp-118h] BYREF
  __int16 v42; // [rsp+40h] [rbp-F8h]
  __m128i v43[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int16 v44; // [rsp+70h] [rbp-C8h]
  __m128i v45[3]; // [rsp+80h] [rbp-B8h] BYREF
  __m128i v46[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int16 v47; // [rsp+D0h] [rbp-68h]
  __int64 (__fastcall *v48[11])(); // [rsp+E0h] [rbp-58h] BYREF

  v7 = *(unsigned int *)(a2 + 8);
  v8 = *(__int32 **)a2;
  if ( (_DWORD)v7 )
    goto LABEL_7;
  v9 = *(_QWORD *)(a3 + 224);
  v10 = *(unsigned int *)(v9 + 4);
  v11 = v9 + v10 + 8 - (_QWORD)v8;
  if ( v11 <= 7 )
  {
    v24 = sub_2195B10(v8, a2, v7, v10);
    sub_A09EA0((__int64)a1, 3u, v24, "Unexpected end of ARM64X relocations data");
    return (__int64)a1;
  }
  a4 = (unsigned int)v8[1];
  if ( (unsigned int)a4 <= 8 )
  {
    v34 = ") is too small";
LABEL_33:
    a5 = 259;
    v46[0].m128i_i64[0] = (__int64)v34;
    a3 = 265;
    v47 = 259;
    v35 = v8[1];
    v42 = 265;
    v41[0].m128i_i32[0] = v35;
    v27 = "ARM64X relocations block size (";
    goto LABEL_30;
  }
  if ( (a4 & 3) != 0 )
  {
    v46[0].m128i_i64[0] = (__int64)")";
    v47 = 259;
    v26 = v8[1];
    v42 = 265;
    v41[0].m128i_i32[0] = v26;
    v27 = "Unaligned ARM64X relocations block size (";
    goto LABEL_30;
  }
  if ( a4 > v11 )
  {
    v34 = ") is too large";
    goto LABEL_33;
  }
  if ( (*(_WORD *)v8 & 0xFFF) != 0 )
  {
    v46[0].m128i_i64[0] = (__int64)")";
    v47 = 259;
    v37 = *v8;
    v42 = 265;
    v41[0].m128i_i32[0] = v37;
    v27 = "Unaligned ARM64X relocations page RVA (";
    goto LABEL_30;
  }
LABEL_7:
  v12 = (unsigned __int16 *)v8 + (unsigned int)v7 + 4;
  v13 = *v12;
  v14 = *v12;
  v15 = (int)*v12 >> 12;
  if ( (v15 & 3) == 1 )
  {
    if ( !((unsigned int)v13 >> 14) )
    {
      v23 = sub_2195B10(v8, v13, v7, a4);
      sub_A09EA0((__int64)a1, 3u, v23, "Invalid ARM64X relocation value size (0)");
      return (__int64)a1;
    }
  }
  else if ( (v15 & 3) != 2 && (v15 & 3) != 0 )
  {
    v16 = sub_2195B10(v8, v13, v7, a4);
    sub_A09EA0((__int64)a1, 3u, v16, "Invalid relocation type");
    return (__int64)a1;
  }
  a5 = v15 & 3;
  if ( (_BYTE)a5 == 1 )
  {
    a4 = (int)*v12 >> 14;
    v18 = (unsigned __int64)(1LL << a4) >> 1;
  }
  else
  {
    LOBYTE(v18) = (_BYTE)a5 == 2;
  }
  v19 = v18 + 1;
  if ( !v14
    || (v20 = v7 + v19,
        v7 = v20 + 1,
        a4 = ((unsigned __int64)(unsigned int)v8[1] - 8) >> 1,
        (unsigned int)v7 < (unsigned int)a4)
    && (v7 = v20, !*((_WORD *)v8 + v20 + 4)) )
  {
    v25 = sub_2195B10(v8, v13, v7, a4);
    sub_A09EA0((__int64)a1, 3u, v25, "Unexpected ARM64X relocations terminator");
    return (__int64)a1;
  }
  if ( v20 > (unsigned int)a4 )
  {
    v36 = sub_2195B10(v8, v13, v7, a4);
    sub_A09EA0((__int64)a1, 3u, v36, "Unexpected end of ARM64X relocations");
    return (__int64)a1;
  }
  v21 = *v8 + (v14 & 0xFFF);
  if ( (unsigned __int8)a5 > 1u )
  {
    if ( (_BYTE)a5 != 2 )
      return sub_21611E0(v8, v13, v7, a4, a5, a3);
    a4 = 4;
  }
  else
  {
    a4 = (unsigned int)(1 << ((int)v13 >> 14));
  }
  v7 = v21 % (unsigned int)a4;
  if ( v21 % (unsigned int)a4 )
  {
    a4 = 265;
    v46[0].m128i_i64[0] = (__int64)")";
    v47 = 259;
    v38 = *v8 + (*v12 & 0xFFF);
    v42 = 265;
    v41[0].m128i_i32[0] = v38;
    v27 = "Unaligned ARM64X relocation RVA (";
LABEL_30:
    v43[0].m128i_i64[0] = (__int64)v27;
    v44 = 259;
    sub_A41580(v45, v43, v41, a4, a5, a3);
    sub_A41580((__m128i *)v48, v45, v46, v28, v29, v30);
    v33 = sub_2195B10(v48, v45, v31, v32);
    sub_2253560(v39, v48);
    sub_22205D0(a1, v39, 3, v33);
    if ( v39[0] != &v40 )
      operator delete(v39[0]);
    return (__int64)a1;
  }
  if ( !*v8 )
  {
    *a1 = 0;
    return (__int64)a1;
  }
  if ( (unsigned __int8)a5 <= 1u )
  {
    v22 = 1 << ((int)v13 >> 14);
LABEL_23:
    sub_215F120(a1, (void **)a3, v21 + v22, v48, (__int64)"ARM64X reloc");
    return (__int64)a1;
  }
  if ( (_BYTE)a5 == 2 )
  {
    v22 = 4;
    goto LABEL_23;
  }
  return sub_21611E0(v8, v13, v7, a4, a5, a3);
}
