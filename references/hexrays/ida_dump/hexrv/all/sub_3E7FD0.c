unsigned __int64 __fastcall sub_3E7FD0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, int a5)
{
  unsigned __int64 v7; // rsi
  __int64 v11; // [rsp+18h] [rbp-78h] BYREF
  __int64 v12; // [rsp+20h] [rbp-70h] BYREF
  __int128 v13; // [rsp+28h] [rbp-68h] BYREF
  __int64 v14; // [rsp+38h] [rbp-58h] BYREF
  int v15; // [rsp+40h] [rbp-50h]
  __int16 v16; // [rsp+44h] [rbp-4Ch]
  unsigned __int64 v17; // [rsp+50h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  copy_tinfo_t((char *)&v13 + 8, &v12);
  v14 = 0;
  copy_tinfo_t(&v14, &v11);
  v15 = 0;
  v16 = 0;
  clear_tinfo_t(&v12);
  clear_tinfo_t(&v11);
  copy_tinfo_t(&v13, a3);
  create_tinfo(a2 + 24, 10, 10, &v13);
  clear_tinfo_t(&v14);
  clear_tinfo_t((char *)&v13 + 8);
  clear_tinfo_t(&v13);
  v7 = *(_QWORD *)(a2 + 24);
  if ( (_BYTE)v7 )
  {
    LOBYTE(v7) = v7 & 0x3F;
    v7 |= a4 & 0xC0;
    *(_QWORD *)(a2 + 24) = v7;
  }
  *(_BYTE *)a2 = 1;
  *(_DWORD *)(a2 + 8) = a5;
  *(_DWORD *)(a2 + 4) = get_tinfo_size(0, v7, 0);
  return v17 - __readfsqword(0x28u);
}
