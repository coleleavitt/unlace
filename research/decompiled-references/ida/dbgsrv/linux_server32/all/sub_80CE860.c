/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CE860
// Address: 0x080CE860

//----- (080CE860) --------------------------------------------------------
_BYTE *__cdecl sub_80CE860(_BYTE *a1, int a2, char *a3)
{
  char *v3; // eax
  char v5; // dl
  char buf[4096]; // [esp+2Ch] [ebp-1020h] BYREF
  unsigned int v7; // [esp+102Ch] [ebp-20h]

  v7 = __readgsdword(0x14u);
  v3 = (char *)__realpath_chk(a3, buf, 4096);
  if ( !v3 )
  {
    v5 = sub_80CE7D0(a3);
    v3 = a3;
    if ( !v5 )
    {
      sub_80CE7F0(buf, 0x1000u);
      sub_80CE680(buf, 4096, buf, a3, 0);
      v3 = buf;
    }
  }
  sub_80C74C0(a1, v3, a2);
  if ( v7 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return a1;
}
// 804BAF0: using guessed type int __cdecl __realpath_chk(_DWORD, _DWORD, _DWORD);
