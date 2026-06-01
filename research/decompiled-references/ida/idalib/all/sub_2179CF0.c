__int64 __fastcall sub_2179CF0(__int64 a1, _QWORD *a2, unsigned int *a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  unsigned int v7; // eax
  __int64 v9; // rdi
  size_t v10; // rax
  const char *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 *v21; // rdi
  __int64 v22; // [rsp+8h] [rbp-1A0h]
  __int64 v23; // [rsp+18h] [rbp-190h] BYREF
  __m128i v24; // [rsp+20h] [rbp-188h] BYREF
  __int64 v25; // [rsp+30h] [rbp-178h] BYREF
  __m128i v26; // [rsp+40h] [rbp-168h] BYREF
  __int64 v27; // [rsp+50h] [rbp-158h] BYREF
  __m128i v28; // [rsp+60h] [rbp-148h] BYREF
  __int64 v29; // [rsp+70h] [rbp-138h] BYREF
  __m128i v30; // [rsp+80h] [rbp-128h] BYREF
  __int64 v31; // [rsp+90h] [rbp-118h]
  __int16 v32; // [rsp+A0h] [rbp-108h]
  __m128i v33[2]; // [rsp+B0h] [rbp-F8h] BYREF
  __int16 v34; // [rsp+D0h] [rbp-D8h]
  __m128i v35[3]; // [rsp+E0h] [rbp-C8h] BYREF
  __m128i v36[2]; // [rsp+110h] [rbp-98h] BYREF
  __int16 v37; // [rsp+130h] [rbp-78h]
  __m128i v38[6]; // [rsp+140h] [rbp-68h] BYREF

  v7 = *a3;
  if ( *a3 )
  {
    v9 = v7;
    if ( v7 >= a5 )
    {
      v23 = v7;
      v36[0].m128i_i64[0] = (__int64)") offset which goes past the end of the section name string table";
      v37 = 259;
      v32 = 271;
      v30.m128i_i64[0] = (__int64)&v23;
      v31 = 0;
      sub_2177250(&v24, a2, (__int64)a3, 271, a5, a6);
      sub_E7ED70(&v26, "a section ", &v24);
      sub_10E1980(&v28, &v26, " has an invalid sh_name (0x");
      v34 = 260;
      v33[0].m128i_i64[0] = (__int64)&v28;
      sub_A41580(v35, v33, &v30, v12, v13, v14);
      sub_A41580(v38, v35, v36, v15, v16, v17);
      v22 = sub_2195B10(v38, v35, v18, v19);
      v20 = operator new(0x40u);
      sub_2220590(v20, v38, 3, v22);
      v21 = (__int64 *)v28.m128i_i64[0];
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v20;
      if ( v21 != &v29 )
        operator delete(v21);
      if ( (__int64 *)v26.m128i_i64[0] != &v27 )
        operator delete((void *)v26.m128i_i64[0]);
      if ( (__int64 *)v24.m128i_i64[0] != &v25 )
        operator delete((void *)v24.m128i_i64[0]);
    }
    else
    {
      v10 = 0;
      v11 = (const char *)(a4 + v9);
      if ( v11 )
        v10 = j__strlen(v11);
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)a1 = v11;
      *(_QWORD *)(a1 + 8) = v10;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
  }
  return a1;
}
