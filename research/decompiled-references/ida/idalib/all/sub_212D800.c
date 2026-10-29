__int64 __fastcall sub_212D800(void *s1, size_t n, char a3, __int64 a4, const __m128i **a5, _QWORD *a6)
{
  __int64 v11; // rax
  unsigned int v12; // r8d
  __int64 v14; // rdi
  const __m128i *v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // [rsp+8h] [rbp-E0h]
  __m128i v19; // [rsp+20h] [rbp-C8h] BYREF
  void *v20; // [rsp+30h] [rbp-B8h]
  size_t v21; // [rsp+38h] [rbp-B0h]
  __int16 v22; // [rsp+40h] [rbp-A8h]
  __m128i v23[2]; // [rsp+50h] [rbp-98h] BYREF
  __int16 v24; // [rsp+70h] [rbp-78h]
  __m128i v25[2]; // [rsp+80h] [rbp-68h] BYREF
  __int16 v26; // [rsp+A0h] [rbp-48h]

  v11 = sub_2153C00(a4);
  v18 = sub_2124B50(v11);
  if ( !(unsigned __int8)sub_2153C90(a4, a6) )
  {
    v12 = sub_21544B0(a4);
    if ( (_BYTE)v12 )
      return v12;
    if ( *(_BYTE *)*a6 == 2 && (*(_DWORD *)*a6 & 0xFFFF00) != 0 )
    {
      v26 = 259;
      v25[0].m128i_i64[0] = (__int64)"relocation specifier not permitted in symbol equating";
      return (unsigned int)sub_2153E90(a4, v18, v25, 0, 0);
    }
    v14 = *(_QWORD *)(a4 + 16);
    v25[0].m128i_i64[0] = (__int64)s1;
    v26 = 261;
    v25[0].m128i_i64[1] = n;
    v15 = (const __m128i *)sub_2109620(v14, (void ***)v25);
    v12 = 0;
    *a5 = v15;
    if ( !v15 )
    {
      if ( n == j__strlen(".") && (!n || !memcmp(s1, ".", n)) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a4 + 24) + 624LL))(
          *(_QWORD *)(a4 + 24),
          *a6,
          0,
          v18);
        return 0;
      }
      v17 = *(_QWORD *)(a4 + 16);
      v26 = 261;
      v25[0].m128i_i64[0] = (__int64)s1;
      v25[0].m128i_i64[1] = n;
      v15 = (const __m128i *)sub_21093A0(v17, (void ***)v25);
      v12 = 0;
      *a5 = v15;
      goto LABEL_14;
    }
    if ( (v15->m128i_i8[9] & 0x70) != 0 )
    {
      if ( !a3 || (v15->m128i_i8[8] & 4) == 0 )
      {
        v23[0].m128i_i64[0] = (__int64)"'";
        v24 = 259;
        v22 = 1283;
        v19.m128i_i64[0] = (__int64)"redefinition of '";
        v20 = s1;
        v21 = n;
        sub_A41580(v25, &v19, v23, 1283, 0, v16);
        return (unsigned int)sub_2153E90(a4, v18, v25, 0, 0);
      }
    }
    else if ( (v15->m128i_i8[8] & 4) == 0 )
    {
LABEL_14:
      v15->m128i_i8[8] = v15->m128i_i8[8] & 0xFB | (4 * (a3 & 1));
      return v12;
    }
    v15 = sub_2100480(*(int **)(a4 + 16), v15);
    v12 = 0;
    *a5 = v15;
    goto LABEL_14;
  }
  v25[0].m128i_i64[0] = (__int64)"missing expression";
  v26 = 259;
  return (unsigned int)sub_21543E0(a4, v25, 0, 0);
}
