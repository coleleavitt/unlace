/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4441A0
// Address: 0x00000000004441A0

//----- (00000000004441A0) ----------------------------------------------------
__int64 *__fastcall sub_4441A0(__int64 a1, char *s)
{
  __int64 v3; // x20
  size_t v4; // x0
  size_t v5; // x24
  size_t v6; // x23
  __int64 v7; // x20
  _QWORD *v8; // x21
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  size_t v11; // [xsp+48h] [xbp-18h]
  __int64 v12; // [xsp+50h] [xbp-10h]

  if ( !a1 || *(_BYTE *)a1 != 5 )
    return nullptr;
  ptr = nullptr;
  v11 = 0;
  v12 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( s )
  {
    v4 = strlen(s);
    v5 = v4 + 1;
    v6 = v4;
    ptr = sub_491288((__int64)&ptr, nullptr, v4 + 1, 1u);
    v11 = v5;
    memmove(ptr, s, v6);
    *((_BYTE *)ptr + v6) = 0;
  }
  v7 = v3 + 8;
  v8 = sub_443F40(*(_QWORD **)(v7 + 8), (_QWORD *)v7, (__int64)&ptr);
  if ( ptr )
  {
    v11 = 0;
    j__free(ptr);
  }
  if ( (_QWORD *)v7 == v8 )
    return nullptr;
  if ( v8[5] )
    return (__int64 *)v8[4];
  return &qword_4B2D48;
}
// 4441A0: could not find valid save-restore pair for x23
// 4441A0: could not find valid save-restore pair for x24
// 4B2D48: using guessed type __int64 qword_4B2D48;
