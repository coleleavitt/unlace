/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D6C0
// Address: 0x0045D6C0

//----- (0045D6C0) --------------------------------------------------------
int __userpurge sub_45D6C0@<eax>(int a1@<ebx>, int a2)
{
  void *v2; // eax
  int v4; // [esp+0h] [ebp-28h] BYREF
  int v5; // [esp+4h] [ebp-24h]
  int v6; // [esp+8h] [ebp-20h]
  int v7; // [esp+Ch] [ebp-1Ch]
  __int128 v8; // [esp+10h] [ebp-18h]
  int v9; // [esp+20h] [ebp-8h]
  int v10; // [esp+24h] [ebp-4h]

  v4 = 40;
  v6 = 0;
  v8 = xmmword_4A2940;
  v9 = 0;
  v10 = 0;
  v5 = 136;
  v7 = a2;
  a2 = -1;
  if ( sub_455100() )
    off_4B46B0(5, v4, v5, v6, v7);
  v2 = (void *)sub_455170(a1, (int)&v4, 0);
  if ( v2 )
    sub_455070(v2, (DWORD *)&a2, 0xFFFFFFFF);
  if ( sub_455100() )
    off_4B46B0(6, v4, v5, v6, v7);
  return a2;
}
// 4A2940: using guessed type __int128 xmmword_4A2940;
// 4B46B0: using guessed type _DWORD (__cdecl *off_4B46B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
