unsigned __int64 __fastcall sub_6C0660(__int64 *a1, unsigned __int64 a2, unsigned int a3, double a4, __m128 a5)
{
  __int64 idati; // rax
  char **tinfo_tid; // rax
  __int64 v8; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+10h] [rbp-38h] BYREF
  __int16 v10; // [rsp+20h] [rbp-28h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  idati = a1[1];
  v11 = __readfsqword(0x28u);
  v10 = 257;
  v8 = 0;
  v9[1] = a3;
  if ( !idati )
    idati = get_idati(a1, a2);
  v9[0] = idati;
  if ( (unsigned __int8)create_tinfo(&v8, 61, 189, v9) )
  {
    if ( (v8 & 0xF) == 0xD )
    {
      tinfo_tid = (char **)get_tinfo_tid(&v8, 0);
      if ( tinfo_tid != (char **)-1LL )
        sub_411350(a1, a2, tinfo_tid, 3u, a4, a5);
    }
  }
  clear_tinfo_t(&v8);
  return v11 - __readfsqword(0x28u);
}
