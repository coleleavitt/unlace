/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4322E8
// Address: 0x00000000004322E8

//----- (00000000004322E8) ----------------------------------------------------
__int64 __fastcall sub_4322E8(__int64 a1, __int64 a2)
{
  __int64 v3; // x2
  __int64 *v4; // x0
  const char *v5; // x19
  size_t v6; // x23
  void *v7; // x0
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  __int64 v10; // [xsp+48h] [xbp-18h]
  __int64 v11; // [xsp+50h] [xbp-10h]

  v3 = *(_QWORD *)(a1 + 16);
  ptr = nullptr;
  v10 = 0;
  v11 = 0;
  if ( v3 )
    v4 = *(__int64 **)(a1 + 8);
  else
    v4 = &qword_4B2D48;
  sub_43A6A8((__int64)v4, (__int64)&ptr, 3u);
  v5 = (const char *)&qword_4B2D48;
  if ( v10 )
    v5 = (const char *)ptr;
  if ( v5 )
  {
    v6 = strlen(v5);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    if ( v6 )
    {
      v7 = sub_491288(a2 + 8, nullptr, v6 + 1, 1u);
      *(_QWORD *)(a2 + 8) = v7;
      *(_QWORD *)(a2 + 16) = v6 + 1;
      memmove(v7, v5, v6);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v6) = 0;
    }
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
  }
  if ( ptr )
  {
    v10 = 0;
    j__free(ptr);
  }
  return 0;
}
// 4322E8: could not find valid save-restore pair for x21
// 4322E8: could not find valid save-restore pair for x23
// 4B2D48: using guessed type __int64 qword_4B2D48;
