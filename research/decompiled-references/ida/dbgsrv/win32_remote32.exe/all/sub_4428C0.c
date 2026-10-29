/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4428C0
// Address: 0x004428C0

//----- (004428C0) --------------------------------------------------------
int __userpurge sub_4428C0@<eax>(_BYTE *a1@<ecx>, __m128i a2@<xmm0>, __int32 a3, _DWORD *a4, unsigned int *a5, int a6)
{
  int v6; // ebx
  __int32 v8; // esi
  __int32 v9; // esi
  __int16 v10; // ax
  const char *v12; // [esp+10h] [ebp-Ch] BYREF
  int (__stdcall **v13)(int, int, int, int, int); // [esp+14h] [ebp-8h] BYREF
  __int16 v14; // [esp+18h] [ebp-4h]

  v6 = a6;
  v8 = a3;
  if ( a1[104] )
    sub_402760("handle_server_ioctl(fn=%d, bufsize=%zu).\n");
  v9 = v8 - 16777217;
  if ( v9 )
  {
    if ( v9 != 1 )
      return -1;
    sub_441F20(a1, (unsigned __int8 **)&v12, &a3, &a6, v6);
    v10 = sub_4542E0((unsigned __int8 **)v6, *(_DWORD *)(v6 + 4));
    v13 = &off_48E830;
    v14 = v10;
  }
  else
  {
    sub_441F20(a1, (unsigned __int8 **)&v12, &a3, &a6, v6);
    v13 = off_48E82C;
  }
  return sub_448B90(
           (int (__thiscall ***)(_DWORD, void **, int, int **, void **, void **))&v13,
           v6,
           a2,
           (int)a1,
           a4,
           a5,
           v12,
           a3,
           a6 != 0);
}
// 48E82C: using guessed type int (__stdcall *off_48E82C[2])(int, int, int, int, int);
// 48E830: using guessed type int (__stdcall *off_48E830)(int, int, int, int, int);
