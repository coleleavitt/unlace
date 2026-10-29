/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91750
// Address: 0x0000000000091750

//----- (0000000000091750) ----------------------------------------------------
__int64 __fastcall sub_91750(__int64 a1)
{
  const char *v2; // rdi
  __int64 v3; // r15
  _QWORD *v4; // rax
  void *v5; // r14
  __int64 (__fastcall **v7)(); // [rsp+8h] [rbp-280h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-278h]
  __int64 v9; // [rsp+20h] [rbp-268h]
  __int64 v10; // [rsp+250h] [rbp-38h]
  unsigned __int64 v11; // [rsp+268h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 8) )
    v2 = *(const char **)a1;
  else
    v2 = s1;
  v3 = 0;
  v4 = open_linput(v2, 0);
  if ( v4 )
  {
    v5 = v4;
    if ( *(_DWORD *)(a1 + 24) == 11 )
    {
      v7 = off_14E6F0;
      *(_OWORD *)ptr = 0;
      v9 = 0;
      if ( (unsigned __int8)sub_90FA0((__int64)&v7, (__int64)v4, 1, 1) )
        v3 = v10;
      else
        v3 = 0;
      v7 = off_14E6F0;
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        v9 = 0;
      }
    }
    else
    {
      v3 = 0;
    }
    close_linput(v5);
  }
  return v3;
}
// 14E6F0: using guessed type __int64 (__fastcall *off_14E6F0[2])();
