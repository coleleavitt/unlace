/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478A50
// Address: 0x0000000000478A50

//----- (0000000000478A50) ----------------------------------------------------
__int64 sub_478A50(char *a1, ...)
{
  const char *v1; // x1
  gcc_va_list va; // [xsp+10h] [xbp-120h] BYREF
  void *ptr; // [xsp+30h] [xbp-100h] BYREF
  __int64 v5; // [xsp+38h] [xbp-F8h]
  __int64 v6; // [xsp+40h] [xbp-F0h]
  gcc_va_list va1; // [xsp+48h] [xbp-E8h] BYREF
  __int64 v8; // [xsp+68h] [xbp-C8h]
  __int64 v9; // [xsp+F8h] [xbp-38h]
  __int64 v10; // [xsp+100h] [xbp-30h]
  __int64 v11; // [xsp+108h] [xbp-28h]
  __int64 v12; // [xsp+110h] [xbp-20h]
  __int64 v13; // [xsp+118h] [xbp-18h]
  __int64 v14; // [xsp+120h] [xbp-10h]

  va_start(va, a1);
  v9 = va_arg(va, _QWORD);
  v10 = va_arg(va, _QWORD);
  v11 = va_arg(va, _QWORD);
  v12 = va_arg(va, _QWORD);
  v13 = va_arg(va, _QWORD);
  v14 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  va_start(va1, a1);
  v6 = 0;
  ptr = nullptr;
  v5 = 0;
  sub_40CC60((__int64)&ptr, a1, (__int64 *)va);
  v1 = (const char *)&qword_4B2D48;
  if ( v5 )
    v1 = (const char *)ptr;
  sub_47B4D0("%s\n", v1);
  sub_41A920("%s");
  if ( ptr )
  {
    v5 = 0;
    j__free(ptr);
  }
  return v8 ^ _stack_chk_guard;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
