__int64 __fastcall sub_7FDB0(__int64 a1, unsigned __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax

  v6 = a2;
  if ( *a3 )
  {
    if ( *a4 >= a2 )
      return 0;
    (*(void (__fastcall **)(_QWORD))(a1 + 136))(*(_QWORD *)(a1 + 144));
    *a3 = 0;
  }
  if ( (a2 & 0x3FFF) != 0 )
  {
    v6 = 0x8000000000000000LL;
    if ( a2 <= 0x8000000000000000LL )
      v6 = a2 + 0x4000 - (a2 & 0x3FFF);
  }
  *a4 = v6;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 128))(*(_QWORD *)(a1 + 144), v6, 1);
  if ( v7 )
  {
    *a3 = v7;
    return 0;
  }
  *(_QWORD *)(a1 + 64) = "out of memory";
  *a3 = 0;
  return 12;
}

