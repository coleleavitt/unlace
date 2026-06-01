/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2FA60
// Address: 0x0002FA60

//----- (0002FA60) --------------------------------------------------------
_DWORD *__cdecl sub_2FA60(int a1)
{
  _DWORD *v2; // [esp+14h] [ebp-1F8h]
  _DWORD v3[125]; // [esp+18h] [ebp-1F4h] BYREF

  v3[120] = __readgsdword(0x14u);
  sub_33460((int)v3, a1, 0);
  v3[95] = sub_2FB50;
  if ( (unsigned __int8)sub_2FB60((int)v3) )
    v2 = sub_2FDE0((int)v3);
  else
    v2 = nullptr;
  sub_30A40(v3);
  return v2;
}
