__int64 __fastcall sub_217A9A0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        void (__fastcall *a4)(__int64 *, __int64, __m128i *),
        __int64 a5,
        __int64 a6)
{
  unsigned int v9; // esi
  __m128i v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  char *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  _WORD *v28; // rdi
  __int64 v31; // [rsp+28h] [rbp-130h] BYREF
  __m128i v32; // [rsp+30h] [rbp-128h] BYREF
  __int64 v33; // [rsp+40h] [rbp-118h] BYREF
  __m128i v34; // [rsp+50h] [rbp-108h] BYREF
  char v35; // [rsp+60h] [rbp-F8h] BYREF
  __m128i v36; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v37[16]; // [rsp+80h] [rbp-D8h] BYREF
  __m128i v38; // [rsp+90h] [rbp-C8h] BYREF
  _WORD v39[16]; // [rsp+A0h] [rbp-B8h] BYREF
  __m128i v40; // [rsp+C0h] [rbp-98h] BYREF
  _WORD v41[16]; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v42[2]; // [rsp+F0h] [rbp-68h] BYREF
  __int16 v43; // [rsp+110h] [rbp-48h]

  v9 = _byteswap_ulong(*(_DWORD *)(a3 + 4));
  if ( v9 == 3 )
    goto LABEL_11;
  v10.m128i_i64[0] = (__int64)sub_216D6F0((unsigned __int16)__ROL2__(*(_WORD *)(*a2 + 18LL), 8), v9);
  v41[8] = 261;
  v40 = v10;
  sub_217A410(&v32, a2, a3, 261, v11, v12);
  sub_E7ED70(&v34, "invalid sh_type for string table section ", &v32);
  sub_10E1980(&v36, &v34, ": expected SHT_STRTAB, but got ");
  v39[8] = 260;
  v38.m128i_i64[0] = (__int64)&v36;
  sub_A41580(v42, &v38, &v40, v13, v14, v15);
  a4(&v31, a5, v42);
  if ( (_BYTE *)v36.m128i_i64[0] != v37 )
    operator delete((void *)v36.m128i_i64[0]);
  if ( (char *)v34.m128i_i64[0] != &v35 )
    operator delete((void *)v34.m128i_i64[0]);
  if ( (__int64 *)v32.m128i_i64[0] != &v33 )
    operator delete((void *)v32.m128i_i64[0]);
  v16 = v31;
  if ( !v31 )
  {
LABEL_11:
    sub_217A530((__int64)&v34, a2, a3, (__int64)a4, a5, a6);
    if ( (v35 & 1) != 0 )
    {
      v21 = v34.m128i_i64[0];
      *(_BYTE *)(a1 + 16) |= 1u;
      v34.m128i_i64[0] = 0;
      *(_QWORD *)a1 = v21;
LABEL_13:
      sub_216EE80(v34.m128i_i64);
      return a1;
    }
    v22 = v34.m128i_i64[1];
    if ( v34.m128i_i64[1] )
    {
      v23 = v34.m128i_i64[0];
      if ( !*(_BYTE *)(v34.m128i_i64[0] + v34.m128i_i64[1] - 1) )
      {
        *(_BYTE *)(a1 + 16) &= ~1u;
        *(_QWORD *)a1 = v23;
        *(_QWORD *)(a1 + 8) = v22;
        goto LABEL_13;
      }
      sub_217A410(&v36, a2, a3, v18, v19, v20);
      sub_E7ED70(&v38, "SHT_STRTAB string table section ", &v36);
      v24 = " is non-null terminated";
    }
    else
    {
      sub_217A410(&v36, a2, a3, v18, v19, v20);
      sub_E7ED70(&v38, "SHT_STRTAB string table section ", &v36);
      v24 = " is empty";
    }
    sub_10E1980(&v40, &v38, v24);
    v43 = 260;
    v42[0].m128i_i64[0] = (__int64)&v40;
    sub_2162BA0(&v32, (__int64)v42, v25, v26);
    v27 = v32.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    v28 = (_WORD *)v40.m128i_i64[0];
    *(_QWORD *)a1 = v27;
    if ( v28 != v41 )
      operator delete(v28);
    if ( (_WORD *)v38.m128i_i64[0] != v39 )
      operator delete((void *)v38.m128i_i64[0]);
    if ( (_BYTE *)v36.m128i_i64[0] != v37 )
      operator delete((void *)v36.m128i_i64[0]);
    goto LABEL_13;
  }
  *(_BYTE *)(a1 + 16) |= 1u;
  *(_QWORD *)a1 = v16;
  return a1;
}
