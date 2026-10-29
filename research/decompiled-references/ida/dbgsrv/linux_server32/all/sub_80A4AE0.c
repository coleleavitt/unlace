/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A4AE0
// Address: 0x080A4AE0

//----- (080A4AE0) --------------------------------------------------------
int *sub_80A4AE0()
{
  int v0; // edx
  int *result; // eax
  void *v2; // eax

  if ( byte_811E79C )
  {
    v0 = dword_811E794;
  }
  else
  {
    if ( !(unsigned __int8)sub_80D2000("DEBUG_FILE_DIRECTORY", (void **)&dword_811E790) )
      sub_80D2000("ELF_DEBUG_FILE_DIRECTORY", (void **)&dword_811E790);
    if ( (unsigned int)dword_811E794 > 1 )
    {
      byte_811E79C = 1;
      return (int *)dword_811E790;
    }
    v2 = (void *)dword_811E790;
    if ( (unsigned int)dword_811E798 <= 0xE )
    {
      v2 = sub_80CF920((int)&dword_811E790, (void *)dword_811E790, 0xFu, 1u);
      dword_811E790 = (int)v2;
    }
    dword_811E794 = 15;
    qmemcpy(v2, "/usr/lib/debug", 14);
    byte_811E79C = 1;
    v0 = dword_811E794;
    *(_BYTE *)(dword_811E790 + 14) = 0;
  }
  result = &dword_80DDFD8;
  if ( v0 )
    return (int *)dword_811E790;
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811E790: using guessed type int dword_811E790;
// 811E794: using guessed type int dword_811E794;
// 811E798: using guessed type int dword_811E798;
// 811E79C: using guessed type char byte_811E79C;
