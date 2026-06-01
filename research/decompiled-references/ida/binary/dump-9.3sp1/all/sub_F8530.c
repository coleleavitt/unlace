unsigned __int64 __fastcall sub_F8530(__int64 a1)
{
  int v2; // r14d
  __int64 v3; // rbp
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  int tinfo_size; // eax
  __int64 v9[5]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v10; // [rsp+38h] [rbp-70h]
  __int64 (__fastcall **idati)(); // [rsp+40h] [rbp-68h] BYREF
  const char *v12; // [rsp+48h] [rbp-60h]
  __int64 v13; // [rsp+50h] [rbp-58h]
  __int64 v14; // [rsp+58h] [rbp-50h]
  __int64 v15; // [rsp+60h] [rbp-48h]
  __m128i v16; // [rsp+68h] [rbp-40h]
  unsigned __int64 v17; // [rsp+78h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v9[0] = (__int64)&off_4DCFB0;
  memset(&v9[1], 0, 32);
  v10 = -1;
  sub_11F9E0(a1, v9);
  if ( v10 != -1 )
  {
    v2 = 13 * *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    LOWORD(v13) = 256;
    v3 = v2;
    v12 = "SjLj_Function_Context";
    idati = (__int64 (__fastcall **)())get_idati();
    if ( (unsigned __int8)create_tinfo() )
    {
      tinfo_size = get_tinfo_size();
      if ( v2 >= tinfo_size )
        tinfo_size = v2;
      v3 = tinfo_size;
    }
    v12 = nullptr;
    v13 = 0;
    idati = &off_4DCFD8;
    v14 = 0;
    v15 = 0;
    v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)(v10 + v3));
    sub_11FC20(a1, (__int64)&idati);
    sub_190300(a1, (unsigned int)&idati, v4, v5, v6, v7);
    clear_tinfo_t();
  }
  return v17 - __readfsqword(0x28u);
}
