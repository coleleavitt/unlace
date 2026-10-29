__int64 __fastcall sub_21714F0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        void (__fastcall *a4)(__int64 *, __int64, __m128i *),
        __int64 a5)
{
  unsigned int v8; // esi
  __m128i v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  char *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  _WORD *v27; // rdi
  __int64 v30; // [rsp+28h] [rbp-130h] BYREF
  __m128i v31; // [rsp+30h] [rbp-128h] BYREF
  __int64 v32; // [rsp+40h] [rbp-118h] BYREF
  __m128i v33; // [rsp+50h] [rbp-108h] BYREF
  char v34; // [rsp+60h] [rbp-F8h] BYREF
  __m128i v35; // [rsp+70h] [rbp-E8h] BYREF
  _BYTE v36[16]; // [rsp+80h] [rbp-D8h] BYREF
  __m128i v37; // [rsp+90h] [rbp-C8h] BYREF
  _WORD v38[16]; // [rsp+A0h] [rbp-B8h] BYREF
  __m128i v39; // [rsp+C0h] [rbp-98h] BYREF
  _WORD v40[16]; // [rsp+D0h] [rbp-88h] BYREF
  __m128i v41[2]; // [rsp+F0h] [rbp-68h] BYREF
  __int16 v42; // [rsp+110h] [rbp-48h]

  v8 = *(_DWORD *)(a3 + 4);
  if ( v8 == 3 )
    goto LABEL_11;
  v9.m128i_i64[0] = (__int64)sub_216D6F0(*(unsigned __int16 *)(*a2 + 18LL), v8);
  v40[8] = 261;
  v39 = v9;
  sub_2170F40(&v31, a2, a3, 261, v10, v11);
  sub_E7ED70(&v33, "invalid sh_type for string table section ", &v31);
  sub_10E1980(&v35, &v33, ": expected SHT_STRTAB, but got ");
  v38[8] = 260;
  v37.m128i_i64[0] = (__int64)&v35;
  sub_A41580(v41, &v37, &v39, v12, v13, v14);
  a4(&v30, a5, v41);
  if ( (_BYTE *)v35.m128i_i64[0] != v36 )
    operator delete((void *)v35.m128i_i64[0]);
  if ( (char *)v33.m128i_i64[0] != &v34 )
    operator delete((void *)v33.m128i_i64[0]);
  if ( (__int64 *)v31.m128i_i64[0] != &v32 )
    operator delete((void *)v31.m128i_i64[0]);
  v15 = v30;
  if ( !v30 )
  {
LABEL_11:
    sub_2171070((__int64)&v33, a2, a3, (__int64)a4);
    if ( (v34 & 1) != 0 )
    {
      v20 = v33.m128i_i64[0];
      *(_BYTE *)(a1 + 16) |= 1u;
      v33.m128i_i64[0] = 0;
      *(_QWORD *)a1 = v20;
LABEL_13:
      sub_216EE80(v33.m128i_i64);
      return a1;
    }
    v21 = v33.m128i_i64[1];
    if ( v33.m128i_i64[1] )
    {
      v22 = v33.m128i_i64[0];
      if ( !*(_BYTE *)(v33.m128i_i64[0] + v33.m128i_i64[1] - 1) )
      {
        *(_BYTE *)(a1 + 16) &= ~1u;
        *(_QWORD *)a1 = v22;
        *(_QWORD *)(a1 + 8) = v21;
        goto LABEL_13;
      }
      sub_2170F40(&v35, a2, a3, v17, v18, v19);
      sub_E7ED70(&v37, "SHT_STRTAB string table section ", &v35);
      v23 = " is non-null terminated";
    }
    else
    {
      sub_2170F40(&v35, a2, a3, v17, v18, v19);
      sub_E7ED70(&v37, "SHT_STRTAB string table section ", &v35);
      v23 = " is empty";
    }
    sub_10E1980(&v39, &v37, v23);
    v42 = 260;
    v41[0].m128i_i64[0] = (__int64)&v39;
    sub_2162BA0(&v31, (__int64)v41, v24, v25);
    v26 = v31.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    v27 = (_WORD *)v39.m128i_i64[0];
    *(_QWORD *)a1 = v26;
    if ( v27 != v40 )
      operator delete(v27);
    if ( (_WORD *)v37.m128i_i64[0] != v38 )
      operator delete((void *)v37.m128i_i64[0]);
    if ( (_BYTE *)v35.m128i_i64[0] != v36 )
      operator delete((void *)v35.m128i_i64[0]);
    goto LABEL_13;
  }
  *(_BYTE *)(a1 + 16) |= 1u;
  *(_QWORD *)a1 = v15;
  return a1;
}
