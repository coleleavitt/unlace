__int64 __fastcall sub_2175140(__int64 a1, __int64 *a2, unsigned int *a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int32 v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int32 v17; // eax
  unsigned int v18; // eax
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // [rsp+8h] [rbp-1D0h] BYREF
  __int64 v41; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v42; // [rsp+18h] [rbp-1C0h] BYREF
  __int64 v43; // [rsp+20h] [rbp-1B8h] BYREF
  char v44; // [rsp+28h] [rbp-1B0h]
  __int64 v45; // [rsp+30h] [rbp-1A8h] BYREF
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

  sub_2174AB0((__int64)&v45, a2, a3, a4, a5, a6);
  if ( (v46 & 1) != 0 )
  {
    v12 = v45;
    *(_BYTE *)(a1 + 16) |= 1u;
    v45 = 0;
    *(_QWORD *)a1 = v12;
  }
  else
  {
    v14 = _byteswap_ulong(a3[6]);
    if ( v14 >= a5 )
    {
      v58[0].m128i_i32[0] = v14;
      v59 = 265;
      v54.m128i_i64[0] = (__int64)"invalid section index: ";
      v57 = 259;
      sub_A41580(v60, &v54, v58, v10, v11, 265);
      sub_2162BF0(v52, (__int64)v60, v37, v38);
      v39 = v52[0].m128i_i64[0];
      v44 |= 1u;
      v43 = 0;
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v39;
    }
    else
    {
      v44 &= ~1u;
      v15 = v45;
      v16 = a4 + 40LL * v14;
      v43 = v16;
      v17 = _byteswap_ulong(*(_DWORD *)(v16 + 4));
      if ( v17 == 11 || v17 == 2 )
      {
        v40 = (unsigned __int64)(unsigned int)sub_2162B90(*(_DWORD *)(v16 + 20)) >> 4;
        if ( v40 == v25 )
        {
          *(_BYTE *)(a1 + 16) &= ~1u;
          *(_QWORD *)a1 = v15;
          *(_QWORD *)(a1 + 8) = v25;
        }
        else
        {
          v41 = v25;
          v59 = 267;
          v58[0].m128i_i64[0] = (__int64)&v40;
          v52[0].m128i_i64[0] = (__int64)" entries, but the symbol table associated has ";
          v53 = 259;
          v47[0].m128i_i64[0] = (__int64)&v41;
          v50 = 259;
          v49[0].m128i_i64[0] = (__int64)"SHT_SYMTAB_SHNDX has ";
          v48 = 267;
          sub_A41580(v51, v49, v47, 267, v26, v27);
          sub_A41580(&v54, v51, v52, v28, v29, v30);
          sub_A41580(v60, &v54, v58, v31, v32, v33);
          sub_2162BF0(&v42, (__int64)v60, v34, v35);
          v36 = v42;
          *(_BYTE *)(a1 + 16) |= 1u;
          *(_QWORD *)a1 = v36;
        }
      }
      else
      {
        v58[0].m128i_i64[0] = (__int64)" section (expected SHT_SYMTAB/SHT_DYNSYM)";
        v59 = 259;
        v18 = sub_2162B90(*(_DWORD *)(v16 + 4));
        v19 = sub_216D6F0((unsigned __int16)__ROL2__(*(_WORD *)(*a2 + 18), 8), v18);
        v56 = v20;
        v55 = v19;
        v57 = 1283;
        v54.m128i_i64[0] = (__int64)"SHT_SYMTAB_SHNDX section is linked with ";
        sub_A41580(v60, &v54, v58, (__int64)"SHT_SYMTAB_SHNDX section is linked with ", 1283, v21);
        sub_2162BF0(v52, (__int64)v60, v22, v23);
        v24 = v52[0].m128i_i64[0];
        *(_BYTE *)(a1 + 16) |= 1u;
        *(_QWORD *)a1 = v24;
      }
    }
    sub_216F7A0(&v43);
  }
  sub_216F7C0(&v45);
  return a1;
}
