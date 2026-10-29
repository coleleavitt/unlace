unsigned __int64 __fastcall sub_68B060(_QWORD *a1, __int64 a2, const char *a3)
{
  __int64 idati; // rax
  _QWORD v6[2]; // [rsp+0h] [rbp-38h] BYREF
  __int16 v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v7 = 0;
  idati = a2;
  v6[1] = a3;
  if ( !a2 )
    idati = get_idati(a1, 0);
  v6[0] = idati;
  create_tinfo(a1, 61, 61, v6);
  if ( (unsigned int)verify_tinfo(*a1) || !get_tinfo_size(0, *a1, 0) )
    sub_68AD60(a2, a3);
  return v8 - __readfsqword(0x28u);
}

