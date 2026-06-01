__int64 __fastcall sub_21782D0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // [rsp+8h] [rbp-1D0h] BYREF
  __int64 v40; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v41; // [rsp+18h] [rbp-1C0h] BYREF
  __int64 v42; // [rsp+20h] [rbp-1B8h] BYREF
  char v43; // [rsp+28h] [rbp-1B0h]
  __int64 v44; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v45; // [rsp+38h] [rbp-1A0h]
  char v46; // [rsp+40h] [rbp-198h]
  __m128i v47[2]; // [rsp+50h] [rbp-188h] BYREF
  __int16 v48; // [rsp+70h] [rbp-168h]
  __m128i v49[2]; // [rsp+80h] [rbp-158h] BYREF
  __int16 v50; // [rsp+A0h] [rbp-138h]
  __m128i v51[3]; // [rsp+B0h] [rbp-128h] BYREF
  __m128i v52[2]; // [rsp+E0h] [rbp-F8h] BYREF
  __int16 v53; // [rsp+100h] [rbp-D8h]
  __m128i v54; // [rsp+110h] [rbp-C8h] BYREF
  char *v55; // [rsp+120h] [rbp-B8h]
  __int64 v56; // [rsp+128h] [rbp-B0h]
  __int16 v57; // [rsp+130h] [rbp-A8h]
  __m128i v58[2]; // [rsp+140h] [rbp-98h] BYREF
  __int16 v59; // [rsp+160h] [rbp-78h]
  __m128i v60[6]; // [rsp+170h] [rbp-68h] BYREF

  sub_2177C30((__int64)&v44, a2, (_QWORD *)a3, a4, a5, a6);
  if ( (v46 & 1) != 0 )
  {
    v13 = v44;
    *(_BYTE *)(a1 + 16) |= 1u;
    v44 = 0;
    *(_QWORD *)a1 = v13;
  }
  else
  {
    v15 = *(unsigned int *)(a3 + 40);
    if ( v15 >= a5 )
    {
      v58[0].m128i_i32[0] = *(_DWORD *)(a3 + 40);
      v59 = 265;
      v54.m128i_i64[0] = (__int64)"invalid section index: ";
      v57 = 259;
      sub_A41580(v60, &v54, v58, v10, v11, 265);
      sub_2162BF0(v52, (__int64)v60, v36, v37);
      v38 = v52[0].m128i_i64[0];
      v43 |= 1u;
      v42 = 0;
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v38;
    }
    else
    {
      v43 &= ~1u;
      v16 = v44;
      v17 = (v15 << 6) + a4;
      v18 = v45;
      v42 = v17;
      v19 = *(_DWORD *)(v17 + 4);
      if ( v19 == 11 || v19 == 2 )
      {
        v39 = *(_QWORD *)(v17 + 32) / 0x18uLL;
        if ( v39 == v45 )
        {
          *(_BYTE *)(a1 + 16) &= ~1u;
          *(_QWORD *)a1 = v16;
          *(_QWORD *)(a1 + 8) = v18;
        }
        else
        {
          v40 = v45;
          v59 = 267;
          v58[0].m128i_i64[0] = (__int64)&v39;
          v52[0].m128i_i64[0] = (__int64)" entries, but the symbol table associated has ";
          v53 = 259;
          v47[0].m128i_i64[0] = (__int64)&v40;
          v50 = 259;
          v49[0].m128i_i64[0] = (__int64)"SHT_SYMTAB_SHNDX has ";
          v48 = 267;
          sub_A41580(v51, v49, v47, 267, v11, v12);
          sub_A41580(&v54, v51, v52, v27, v28, v29);
          sub_A41580(v60, &v54, v58, v30, v31, v32);
          sub_2162BF0(&v41, (__int64)v60, v33, v34);
          v35 = v41;
          *(_BYTE *)(a1 + 16) |= 1u;
          *(_QWORD *)a1 = v35;
        }
      }
      else
      {
        v58[0].m128i_i64[0] = (__int64)" section (expected SHT_SYMTAB/SHT_DYNSYM)";
        v20 = *a2;
        v59 = 259;
        v21 = sub_216D6F0(*(unsigned __int16 *)(v20 + 18), *(_DWORD *)(v17 + 4));
        v56 = v22;
        v55 = v21;
        v57 = 1283;
        v54.m128i_i64[0] = (__int64)"SHT_SYMTAB_SHNDX section is linked with ";
        sub_A41580(v60, &v54, v58, (__int64)"SHT_SYMTAB_SHNDX section is linked with ", 1283, v23);
        sub_2162BF0(v52, (__int64)v60, v24, v25);
        v26 = v52[0].m128i_i64[0];
        *(_BYTE *)(a1 + 16) |= 1u;
        *(_QWORD *)a1 = v26;
      }
    }
    sub_216F910(&v42);
  }
  sub_216EFE0(&v44);
  return a1;
}
