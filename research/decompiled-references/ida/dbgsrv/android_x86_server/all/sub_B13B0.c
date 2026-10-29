/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B13B0
// Address: 0x000B13B0

//----- (000B13B0) --------------------------------------------------------
unsigned int __cdecl sub_B13B0(char a1, int status)
{
  _DWORD *v2; // esi
  _DWORD v4[7]; // [esp+10h] [ebp-1Ch] BYREF

  v4[2] = __readgsdword(0x14u);
  byte_13E338 = 1;
  if ( dword_13E348 )
  {
    if ( dword_13E350 )
    {
      v2 = operator new(0x14u);
      v2[1] = 0;
      v2[2] = 0;
      *v2 = off_139380;
      v2[3] = status;
      *((_BYTE *)v2 + 16) = a1;
      if ( is_main_thread() )
        sub_B26D0((int)v2);
      else
        ((void (__cdecl *)(_DWORD *, int, _DWORD *, int))callui)(v4, 86, v2, 2);
      (*(void (__cdecl **)(_DWORD *))(*v2 + 8))(v2);
    }
  }
  else if ( a1 )
  {
    exit(status);
  }
  return __readgsdword(0x14u);
}
// 139380: using guessed type int (__cdecl *off_139380[2])(int);
// 13BC20: using guessed type int (__stdcall *callui)(int);
// 13E338: using guessed type char byte_13E338;
// 13E348: using guessed type int dword_13E348;
// 13E350: using guessed type int dword_13E350;
