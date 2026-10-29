/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40F820
// Address: 0x0040F820

//----- (0040F820) --------------------------------------------------------
int __userpurge sub_40F820@<eax>(__m128i a1@<xmm0>, int a2, int a3)
{
  void *v3; // eax
  DWORD v4; // ebx

  if ( !*(_DWORD *)(a2 + 200) && (*(_DWORD *)(a2 + 336) & 0x80000) != 0 && sub_455100() )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30191);
  }
  v3 = (void *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 312))(a2, a3);
  v4 = ResumeThread(v3);
  if ( v4 == -1 )
    sub_43C950(a1, a2, (int)"ResumeThread(%08X)", a3);
  if ( *(_BYTE *)(a2 + 332) )
    sub_43C900(a2, (int)"ResumeThread(%08X) -> %d\n", a3, v4);
  return 2 * (v4 != -1) - 1;
}
// 4B70F0: using guessed type char byte_4B70F0;
