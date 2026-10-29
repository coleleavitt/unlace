__int64 *__fastcall sub_219B690(__int64 *a1, __int64 a2, unsigned int **a3, __int64 a4, __int32 a5)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int *v12; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // esi
  unsigned int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int32 v24; // r10d
  const char *v25; // rax
  _BYTE *v26; // rax
  _BYTE *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // [rsp+0h] [rbp-138h] BYREF
  unsigned int v34; // [rsp+8h] [rbp-130h]
  char v35; // [rsp+10h] [rbp-128h]
  __m128i v36[2]; // [rsp+20h] [rbp-118h] BYREF
  __int16 v37; // [rsp+40h] [rbp-F8h]
  __m128i v38[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int16 v39; // [rsp+70h] [rbp-C8h]
  __m128i v40[3]; // [rsp+80h] [rbp-B8h] BYREF
  __m128i v41[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int16 v42; // [rsp+D0h] [rbp-68h]
  __m128i v43[2]; // [rsp+E0h] [rbp-58h] BYREF
  __int16 v44; // [rsp+100h] [rbp-38h]

  if ( (unsigned int)a4 > 0xB )
  {
    v12 = *a3;
    if ( (unsigned __int64)v12 < sub_215DEC0(a2)
      || (v17 = sub_215DEC0(a2), v16 = (__int64)(v12 + 3), (unsigned __int64)(v12 + 3) > v15 + v17) )
    {
      v44 = 259;
      v43[0].m128i_i64[0] = (__int64)"Structure read out-of-range";
      sub_21967F0(v41[0].m128i_i64, v43[0].m128i_i64, v15, v16);
      v35 |= 1u;
      v33 = 0;
      *a1 = v41[0].m128i_i64[0];
    }
    else
    {
      v18 = *v12;
      v19 = v12[1];
      v20 = v12[2];
      v21 = *(_DWORD *)(a2 + 8);
      v22 = _byteswap_ulong(*v12);
      v23 = _byteswap_ulong(v19);
      v24 = _byteswap_ulong(v20);
      if ( v21 <= 0x14 && ((0x155800uLL >> v21) & 1) != 0 )
      {
        v20 = v24;
        v19 = v23;
        v18 = v22;
      }
      v33 = __PAIR64__(v19, v18);
      v35 &= ~1u;
      v25 = " LC_RPATH path.offset field too small, not past the end of the rpath_command struct";
      v34 = v20;
      if ( v20 > 0xB )
      {
        v25 = " LC_RPATH path.offset field extends past the end of the load command";
        if ( v19 > v20 )
        {
          if ( !*((_BYTE *)*a3 + v20) )
          {
LABEL_19:
            *a1 = 0;
            goto LABEL_18;
          }
          v26 = (char *)*a3 + v20 + 1;
          v27 = &v26[v19 - 1 - v20];
          while ( v26 != v27 )
          {
            if ( !*v26++ )
              goto LABEL_19;
          }
          v25 = " LC_RPATH library name extends past the end of the load command";
        }
      }
      v38[0].m128i_i32[0] = a5;
      v41[0].m128i_i64[0] = (__int64)v25;
      v42 = 259;
      v39 = 265;
      v36[0].m128i_i64[0] = (__int64)"load command ";
      v37 = 259;
      sub_A41580(v40, v36, v38, 259, v22, v23);
      sub_A41580(v43, v40, v41, v28, v29, v30);
      sub_21967F0(a1, v43[0].m128i_i64, v31, v32);
    }
LABEL_18:
    sub_219B670((__int64 *)&v33);
    return a1;
  }
  v38[0].m128i_i32[0] = a5;
  v41[0].m128i_i64[0] = (__int64)" LC_RPATH cmdsize too small";
  v42 = 259;
  v39 = 265;
  v36[0].m128i_i64[0] = (__int64)"load command ";
  v37 = 259;
  sub_A41580(v40, v36, v38, a4, 265, 259);
  sub_A41580(v43, v40, v41, v6, v7, v8);
  sub_21967F0(a1, v43[0].m128i_i64, v9, v10);
  return a1;
}
