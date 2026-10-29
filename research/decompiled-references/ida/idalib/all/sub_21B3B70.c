__int64 __fastcall sub_21B3B70(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  __int64 (__fastcall ***v10)(); // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 *v24; // rdi
  unsigned __int64 v25; // rdx
  __int64 (__fastcall ***v26)(); // [rsp+8h] [rbp-270h]
  __int64 v27; // [rsp+18h] [rbp-260h] BYREF
  __int64 v28; // [rsp+20h] [rbp-258h] BYREF
  __int64 v29; // [rsp+28h] [rbp-250h] BYREF
  __int64 v30; // [rsp+30h] [rbp-248h] BYREF
  char v31; // [rsp+38h] [rbp-240h]
  unsigned __int64 v32; // [rsp+40h] [rbp-238h] BYREF
  char v33; // [rsp+48h] [rbp-230h]
  __m128i v34; // [rsp+50h] [rbp-228h] BYREF
  __int64 v35; // [rsp+60h] [rbp-218h] BYREF
  __m128i v36; // [rsp+70h] [rbp-208h] BYREF
  __int64 v37; // [rsp+80h] [rbp-1F8h] BYREF
  __m128i v38; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-1D8h]
  __int16 v40; // [rsp+B0h] [rbp-1C8h]
  __m128i v41[2]; // [rsp+C0h] [rbp-1B8h] BYREF
  __int16 v42; // [rsp+E0h] [rbp-198h]
  __m128i v43[3]; // [rsp+F0h] [rbp-188h] BYREF
  __m128i v44[2]; // [rsp+120h] [rbp-158h] BYREF
  __int16 v45; // [rsp+140h] [rbp-138h]
  __m128i v46[3]; // [rsp+150h] [rbp-128h] BYREF
  __m128i v47; // [rsp+180h] [rbp-F8h] BYREF
  __int64 v48; // [rsp+190h] [rbp-E8h]
  __int16 v49; // [rsp+1A0h] [rbp-D8h]
  __m128i v50[3]; // [rsp+1B0h] [rbp-C8h] BYREF
  __m128i v51[2]; // [rsp+1E0h] [rbp-98h] BYREF
  __int16 v52; // [rsp+200h] [rbp-78h]
  __m128i v53[6]; // [rsp+210h] [rbp-68h] BYREF

  v5 = a2[6] + _byteswap_ulong(*(_DWORD *)(a3 + 24));
  sub_21B3A10((__int64)&v30, (__int64)a2, a3);
  if ( (v31 & 1) != 0 )
  {
    v6 = v30;
    v30 = 0;
    if ( v6 )
    {
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v6;
      goto LABEL_4;
    }
    v9 = v5;
    v8 = 0;
  }
  else
  {
    v8 = 10LL * (unsigned int)v30;
    v9 = v8 + v5;
    if ( __CFADD__(v8, v5) )
      goto LABEL_6;
  }
  v25 = a2[2];
  if ( v25 + a2[3] >= v9 && v25 <= v5 )
    goto LABEL_17;
LABEL_6:
  v10 = sub_2195B10();
  sub_2220500(v53, 4, v10);
  if ( !v53[0].m128i_i64[0] )
  {
LABEL_17:
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v5;
    v32 = v5;
    v33 &= ~1u;
    *(_QWORD *)(a1 + 8) = 0xCCCCCCCCCCCCCCCDLL * (v8 >> 1);
    sub_21B3B50((__int64 *)&v32);
    goto LABEL_4;
  }
  v29 = v8;
  v51[0].m128i_i64[0] = (__int64)" go past the end of the file";
  v52 = 259;
  v47.m128i_i64[0] = (__int64)&v29;
  v44[0].m128i_i64[0] = (__int64)" and size 0x";
  v11 = *(_DWORD *)(a3 + 24);
  v45 = 259;
  v27 = v53[0].m128i_i64[0];
  v28 = _byteswap_ulong(v11);
  v40 = 271;
  v49 = 271;
  v38.m128i_i64[0] = (__int64)&v28;
  v33 |= 1u;
  v48 = 0;
  v39 = 0;
  v32 = 0;
  sub_2221210(&v34, &v27);
  sub_10E1980(&v36, &v34, ": relocations with offset 0x");
  v41[0].m128i_i64[0] = (__int64)&v36;
  v42 = 260;
  sub_A41580(v43, v41, &v38, v12, 260, v13);
  sub_A41580(v46, v43, v44, v14, v15, v16);
  sub_A41580(v50, v46, &v47, v17, v18, v19);
  sub_A41580(v53, v50, v51, v20, v21, v22);
  v26 = sub_2195B10();
  v23 = operator new(0x40u);
  sub_2220590(v23, v53, 3, v26);
  v24 = (__int64 *)v36.m128i_i64[0];
  *(_BYTE *)(a1 + 16) |= 1u;
  *(_QWORD *)a1 = v23;
  if ( v24 != &v37 )
    operator delete(v24);
  if ( (__int64 *)v34.m128i_i64[0] != &v35 )
    operator delete((void *)v34.m128i_i64[0]);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  sub_21B3B50((__int64 *)&v32);
LABEL_4:
  sub_A0AE90(&v30);
  return a1;
}
