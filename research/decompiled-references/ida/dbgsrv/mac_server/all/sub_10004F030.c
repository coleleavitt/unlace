/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004F030
// Address: 0x000000010004F030

//----- (000000010004F030) ----------------------------------------------------
__int64 __fastcall sub_10004F030(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbx
  void *v3; // r14
  void *v4; // rdi
  void *__p; // [rsp+0h] [rbp-30h] BYREF
  char v7; // [rsp+10h] [rbp-20h]

  v2 = *a2;
  sub_10004F0F0((__int64)&__p, a1, a2);
  v3 = __p;
  __p = nullptr;
  if ( v3 )
  {
    if ( v7 == 1 )
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
