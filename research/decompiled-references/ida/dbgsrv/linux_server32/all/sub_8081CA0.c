/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8081CA0
// Address: 0x08081CA0

//----- (08081CA0) --------------------------------------------------------
int __cdecl sub_8081CA0(char *haystack, void **a2)
{
  int result; // eax
  _BYTE v3[8]; // [esp+8h] [ebp-30h] BYREF
  _DWORD v4[2]; // [esp+10h] [ebp-28h] BYREF
  unsigned int v5; // [esp+18h] [ebp-20h]

  v5 = __readgsdword(0x14u);
  off_811E568(v3);
  v4[1] = v4[0];
  v4[0] = &off_811BD60;
  if ( strstr(haystack, "static ") )
  {
    sub_807B3D0("main", 0, dword_80DF720, 7u);
    result = sub_807C560((unsigned int)haystack, a2, (int)v4, 0);
    if ( (_BYTE)result )
      result = sub_808FF10(nullptr, "main", nullptr, 0, (int)a2, (int)v4);
  }
  else
  {
    result = sub_8081BC0(nullptr, haystack, a2, (int)v4);
  }
  if ( v5 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DF720: using guessed type int dword_80DF720[2];
// 811BD60: using guessed type int (__cdecl *off_811BD60)(int, int);
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);
