/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qpipe_create
// Address: 0x000BA210

//----- (000BA210) --------------------------------------------------------
int __cdecl qpipe_create(_DWORD *a1)
{
  int v1; // ecx
  int pipedes[2]; // [esp+8h] [ebp-1Ch] BYREF
  unsigned int v4; // [esp+10h] [ebp-14h]

  v4 = __readgsdword(0x14u);
  if ( pipe(pipedes) )
    return *(_DWORD *)__errno(v1);
  *a1 = pipedes[0];
  a1[1] = pipedes[1];
  return 0;
}
// BA240: variable 'v1' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
