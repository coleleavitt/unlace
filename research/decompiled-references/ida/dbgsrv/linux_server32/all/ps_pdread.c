/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_pdread
// Address: 0x08062700

//----- (08062700) --------------------------------------------------------
int __cdecl ps_pdread(int *a1, int a2, unsigned int *a3, int a4)
{
  int v4; // ebx
  int v5; // eax
  int result; // eax
  int (__cdecl **v7[2])(_DWORD, int); // [esp+0h] [ebp-2Ch] BYREF
  int v8; // [esp+8h] [ebp-24h]
  unsigned int v9; // [esp+Ch] [ebp-20h]

  v9 = __readgsdword(0x14u);
  v8 = 0;
  v7[1] = (int (__cdecl **)(_DWORD, int))*a1;
  v7[0] = &off_811B7C8;
  sub_80A4C60(v7);
  v4 = v8;
  if ( v8 )
  {
    v5 = *(int *)((char *)&off_811D2CC + v8 - 135385076);
    result = (v5 == -1 || !sub_80623D0(v8, v5, a2, a3, a4, 0)) && sub_80623D0(v4, *a1, a2, a3, a4, 0) == 0;
  }
  else
  {
    result = 2;
  }
  if ( v9 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811B7C8: using guessed type int (__cdecl *off_811B7C8)(int, int);
// 811D2CC: using guessed type _UNKNOWN *off_811D2CC;
