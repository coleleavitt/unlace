unsigned __int64 __fastcall sub_69FB20(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 idati; // rax
  unsigned int tinfo_tid; // eax
  __int64 v6; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+10h] [rbp-38h] BYREF
  __int16 v8; // [rsp+20h] [rbp-28h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  idati = *(_QWORD *)(a1 + 8);
  v9 = __readfsqword(0x28u);
  v8 = 257;
  v6 = 0;
  v7[1] = a3;
  if ( !idati )
    idati = get_idati(a1, a2);
  v7[0] = idati;
  if ( (unsigned __int8)create_tinfo(&v6, 61, 189, v7) )
  {
    if ( (v6 & 0xF) == 0xD )
    {
      tinfo_tid = get_tinfo_tid(&v6, 0);
      if ( tinfo_tid != -1 )
        sub_3FE080(a1, a2, tinfo_tid, 3u);
    }
  }
  clear_tinfo_t(&v6);
  return v9 - __readfsqword(0x28u);
}

