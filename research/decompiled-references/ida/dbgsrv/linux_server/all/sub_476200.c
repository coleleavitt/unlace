/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476200
// Address: 0x0000000000476200

//----- (0000000000476200) ----------------------------------------------------
_BYTE *__fastcall sub_476200(_BYTE *a1, const char *a2, __int64 a3)
{
  _BYTE *v3; // rbx
  char *v6; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a3 < 0 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(1225);
    BUG();
  }
  v3 = a1;
  if ( a3 )
  {
    ptr = nullptr;
    v8 = 0;
    sub_475E80((__int64)&ptr, a2, -1, a3);
    v6 = (char *)s1;
    if ( (_QWORD)v8 )
      v6 = (char *)ptr;
    v3 = sub_4821A0(a1, v6, a3);
    if ( ptr )
    {
      *(_QWORD *)&v8 = 0;
      j__free(ptr);
    }
  }
  return v3;
}
// 4C94E1: using guessed type char byte_4C94E1;
