/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_918B0
// Address: 0x00000000000918B0

//----- (00000000000918B0) ----------------------------------------------------
__int64 __fastcall sub_918B0(const char *a1)
{
  _QWORD *v1; // rax
  void *v2; // rbx
  unsigned int v3; // ebp
  __int64 (__fastcall **v5)(); // [rsp+8h] [rbp-280h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-278h]
  __int64 v7; // [rsp+20h] [rbp-268h]
  unsigned __int64 v8; // [rsp+268h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v1 = open_linput(a1, 0);
  if ( v1 )
  {
    v2 = v1;
    v5 = off_14E6F0;
    *(_OWORD *)ptr = 0;
    v7 = 0;
    v3 = -1;
    if ( (unsigned __int8)sub_90FA0((__int64)&v5, (__int64)v1, 0, 1) )
      v3 = 11;
    v5 = off_14E6F0;
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v7 = 0;
    }
    close_linput(v2);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v3;
}
// 14E6F0: using guessed type __int64 (__fastcall *off_14E6F0[2])();
