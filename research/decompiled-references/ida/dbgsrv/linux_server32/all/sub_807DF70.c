/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807DF70
// Address: 0x0807DF70

//----- (0807DF70) --------------------------------------------------------
int __cdecl sub_807DF70(unsigned __int8 *a1, char *a2, unsigned __int8 *a3, int a4, int a5)
{
  int v5; // edx
  int result; // eax
  _BYTE v7[8]; // [esp+1Ch] [ebp-30h] BYREF
  _DWORD v8[2]; // [esp+24h] [ebp-28h] BYREF
  unsigned int v9; // [esp+2Ch] [ebp-20h]

  v9 = __readgsdword(0x14u);
  off_811E568(v7);
  v5 = v8[0];
  v8[0] = &off_811BD60;
  v8[1] = v5;
  result = sub_808FF10(a1, a2, a3, a4, a5, (int)v8);
  if ( v9 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811BD60: using guessed type int (__cdecl *off_811BD60)(int, int);
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);
