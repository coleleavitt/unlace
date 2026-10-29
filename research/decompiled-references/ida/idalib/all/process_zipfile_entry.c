__int64 __fastcall process_zipfile_entry(
        __int64 a1,
        const char *a2,
        __int64 (__fastcall *a3)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _BYTE *),
        __int64 a4,
        unsigned __int8 a5)
{
  __m128i *v8; // rax
  __m128i *v9; // rbx
  int v10; // eax
  unsigned int v11; // ebp

  v8 = (__m128i *)sub_753ED0(a1);
  if ( !v8 )
    return 1;
  v9 = v8;
  v10 = sub_753F90(v8, a2, 2 - a5);
  if ( v10 )
  {
    v11 = -v10;
    if ( v10 >= 0 )
      v11 = 0;
  }
  else
  {
    v11 = sub_835670(v9, a3, a4);
  }
  sub_754680(v9);
  return v11;
}
