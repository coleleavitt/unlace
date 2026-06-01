/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807DDE0
// Address: 0x0807DDE0

//----- (0807DDE0) --------------------------------------------------------
int __cdecl sub_807DDE0(int a1, int a2, const char *a3, void **a4)
{
  int result; // eax
  _DWORD v5[2]; // [esp+0h] [ebp-28h] BYREF
  unsigned int v6; // [esp+8h] [ebp-20h]

  v6 = __readgsdword(0x14u);
  if ( a1 )
  {
    sub_8089430(a1);
    *(_BYTE *)a1 = 2;
    *(_DWORD *)(a1 + 4) = 0;
  }
  v5[0] = &off_811BD60;
  v5[1] = a2;
  result = sub_8081BC0((unsigned __int8 *)a1, a3, a4, (int)v5);
  if ( v6 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811BD60: using guessed type int (__cdecl *off_811BD60)(int, int);
