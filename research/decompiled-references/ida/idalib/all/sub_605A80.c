__int64 __fastcall sub_605A80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  unsigned int v6; // edx
  __int64 idati; // rdx
  _QWORD v9[2]; // [rsp+0h] [rbp-38h] BYREF
  __int16 v10; // [rsp+10h] [rbp-28h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v5 = sub_6BD6E0(a1, a3, 0, 0);
  v6 = 0;
  if ( v5 )
  {
    idati = *(_QWORD *)(a1 + 8);
    v10 = 257;
    v9[1] = v5;
    if ( !idati )
      idati = get_idati(a1, a3);
    v9[0] = idati;
    return (unsigned int)create_tinfo(a2, 61, 189, v9);
  }
  return v6;
}
