char __fastcall sub_53D0F0(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 idati; // rax
  char result; // al
  __int64 v8; // rsi
  _QWORD v9[2]; // [rsp+0h] [rbp-38h] BYREF
  __int16 v10; // [rsp+10h] [rbp-28h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  idati = *(_QWORD *)(a1 + 120);
  v11 = __readfsqword(0x28u);
  v10 = 257;
  v9[1] = a4;
  if ( !idati )
    idati = get_idati(a1, a2);
  v9[0] = idati;
  result = create_tinfo(a2, 61, 189, v9);
  if ( result )
  {
    v8 = *a2;
    result = 0;
    if ( (*a2 & 0x100) != 0 )
      return get_tinfo_pdata(a3, v8, 0) != 0;
  }
  return result;
}

