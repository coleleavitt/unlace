__int64 __fastcall sub_217B4D0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int32 v12; // edx
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // r12
  unsigned __int32 v16; // eax
  unsigned int v17; // eax
  char *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // [rsp+8h] [rbp-1D0h] BYREF
  __int64 v39; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v40; // [rsp+18h] [rbp-1C0h] BYREF
  __int64 v41; // [rsp+20h] [rbp-1B8h] BYREF
  char v42; // [rsp+28h] [rbp-1B0h]
  __int64 v43[2]; // [rsp+30h] [rbp-1A8h] BYREF
  char v44; // [rsp+40h] [rbp-198h]
  __m128i v45[2]; // [rsp+50h] [rbp-188h] BYREF
  __int16 v46; // [rsp+70h] [rbp-168h]
  __m128i v47[2]; // [rsp+80h] [rbp-158h] BYREF
  __int16 v48; // [rsp+A0h] [rbp-138h]
  __m128i v49[3]; // [rsp+B0h] [rbp-128h] BYREF
  __m128i v50[2]; // [rsp+E0h] [rbp-F8h] BYREF
  __int16 v51; // [rsp+100h] [rbp-D8h]
  __m128i v52; // [rsp+110h] [rbp-C8h] BYREF
  char *v53; // [rsp+120h] [rbp-B8h]
  __int64 v54; // [rsp+128h] [rbp-B0h]
  __int16 v55; // [rsp+130h] [rbp-A8h]
  __m128i v56[2]; // [rsp+140h] [rbp-98h] BYREF
  __int16 v57; // [rsp+160h] [rbp-78h]
  __m128i v58[6]; // [rsp+170h] [rbp-68h] BYREF

  sub_217AE00((__int64)v43, a2, (unsigned __int64 *)a3);
  if ( (v44 & 1) != 0 )
  {
    v10 = v43[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    v43[0] = 0;
    *(_QWORD *)a1 = v10;
  }
  else
  {
    v12 = _byteswap_ulong(*(_DWORD *)(a3 + 40));
    if ( v12 >= a5 )
    {
      v56[0].m128i_i32[0] = v12;
      v52.m128i_i64[0] = (__int64)"invalid section index: ";
      v57 = 265;
      v55 = 259;
      sub_A41580(v58, &v52, v56, v8, v9, 265);
      sub_2162BF0(v50, (__int64)v58, v35, v36);
      v37 = v50[0].m128i_i64[0];
      v42 |= 1u;
      v41 = 0;
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v37;
    }
    else
    {
      v42 &= ~1u;
      v13 = v43[0];
      v14 = ((unsigned __int64)v12 << 6) + a4;
      v15 = v43[1];
      v41 = v14;
      v16 = _byteswap_ulong(*(_DWORD *)(v14 + 4));
      if ( v16 == 11 || v16 == 2 )
      {
        v38 = sub_2162D00(*(_QWORD *)(v14 + 32)) / 0x18;
        if ( v38 == v15 )
        {
          *(_BYTE *)(a1 + 16) &= ~1u;
          *(_QWORD *)a1 = v13;
          *(_QWORD *)(a1 + 8) = v15;
        }
        else
        {
          v39 = v15;
          v57 = 267;
          v56[0].m128i_i64[0] = (__int64)&v38;
          v50[0].m128i_i64[0] = (__int64)" entries, but the symbol table associated has ";
          v51 = 259;
          v45[0].m128i_i64[0] = (__int64)&v39;
          v48 = 259;
          v47[0].m128i_i64[0] = (__int64)"SHT_SYMTAB_SHNDX has ";
          v46 = 267;
          sub_A41580(v49, v47, v45, 267, v24, v25);
          sub_A41580(&v52, v49, v50, v26, v27, v28);
          sub_A41580(v58, &v52, v56, v29, v30, v31);
          sub_2162BF0(&v40, (__int64)v58, v32, v33);
          v34 = v40;
          *(_BYTE *)(a1 + 16) |= 1u;
          *(_QWORD *)a1 = v34;
        }
      }
      else
      {
        v56[0].m128i_i64[0] = (__int64)" section (expected SHT_SYMTAB/SHT_DYNSYM)";
        v57 = 259;
        v17 = sub_2162B90(*(_DWORD *)(v14 + 4));
        v18 = sub_216D6F0((unsigned __int16)__ROL2__(*(_WORD *)(*a2 + 18LL), 8), v17);
        v54 = v19;
        v53 = v18;
        v55 = 1283;
        v52.m128i_i64[0] = (__int64)"SHT_SYMTAB_SHNDX section is linked with ";
        sub_A41580(v58, &v52, v56, (__int64)"SHT_SYMTAB_SHNDX section is linked with ", 1283, v20);
        sub_2162BF0(v50, (__int64)v58, v21, v22);
        v23 = v50[0].m128i_i64[0];
        *(_BYTE *)(a1 + 16) |= 1u;
        *(_QWORD *)a1 = v23;
      }
    }
    sub_216FA80(&v41);
  }
  sub_216F7C0(v43);
  return a1;
}
