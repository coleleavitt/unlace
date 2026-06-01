/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4442E8
// Address: 0x00000000004442E8

//----- (00000000004442E8) ----------------------------------------------------
const char *__fastcall sub_4442E8(__int64 a1, char *s)
{
  __int64 v3; // x20
  size_t v4; // x0
  size_t v5; // x24
  size_t v6; // x23
  _QWORD *v7; // x22
  __int64 v8; // x0
  const char *v9; // x20
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  size_t v12; // [xsp+48h] [xbp-18h]
  __int64 v13; // [xsp+50h] [xbp-10h]

  if ( !a1 || *(_BYTE *)a1 != 5 )
    return nullptr;
  ptr = nullptr;
  v12 = 0;
  v13 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( s )
  {
    v4 = strlen(s);
    v5 = v4 + 1;
    v6 = v4;
    ptr = sub_491288((__int64)&ptr, nullptr, v4 + 1, 1u);
    v12 = v5;
    memmove(ptr, s, v6);
    *((_BYTE *)ptr + v6) = 0;
  }
  v7 = sub_443EB8(*(_QWORD **)(v3 + 16), (_QWORD *)(v3 + 8), (__int64)&ptr);
  if ( ptr )
  {
    v12 = 0;
    j__free(ptr);
  }
  if ( v7 == *(_QWORD **)(v3 + 24) )
    return nullptr;
  v8 = sub_49F758((__int64)v7);
  v9 = *(_QWORD *)(v8 + 40) ? *(const char **)(v8 + 32) : (const char *)&qword_4B2D48;
  if ( (strcmp(v9, s) & 0x80000000) == 0 )
    return nullptr;
  return v9;
}
// 4442E8: could not find valid save-restore pair for x22
// 4442E8: could not find valid save-restore pair for x23
// 4442E8: could not find valid save-restore pair for x24
// 4B2D48: using guessed type __int64 qword_4B2D48;
