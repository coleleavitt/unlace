/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D710
// Address: 0x000000000008D710

//----- (000000000008D710) ----------------------------------------------------
__int64 __fastcall sub_8D710(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r14
  void *v3; // rbx
  void *v4; // rdi
  void *ptr; // [rsp+8h] [rbp-30h] BYREF
  char v7; // [rsp+18h] [rbp-20h]
  unsigned __int64 v8; // [rsp+20h] [rbp-18h]

  v8 = __readfsqword(0x28u);
  v2 = *a2;
  sub_8D7C0((__int64)&ptr, a1, a2);
  v3 = ptr;
  ptr = nullptr;
  if ( v3 )
  {
    if ( v7 )
    {
      v4 = *((void **)v3 + 5);
      if ( v4 )
      {
        *((_QWORD *)v3 + 6) = 0;
        qfree(v4);
        *((_QWORD *)v3 + 5) = 0;
        *((_QWORD *)v3 + 7) = 0;
      }
      if ( (*((_BYTE *)v3 + 16) & 1) != 0 )
        operator delete(*((void **)v3 + 4));
    }
    operator delete(v3);
  }
  return v2;
}
