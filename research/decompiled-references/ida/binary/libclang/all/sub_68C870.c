unsigned __int64 __fastcall sub_68C870(
        _QWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 result; // rax

  result = a7 & 0xFFFFFFFFFFFFFFFELL;
  if ( a1 )
    *a1 = *(_QWORD *)result;
  if ( a2 )
    *a2 = *(_DWORD *)(result + 8);
  if ( a3 )
    *a3 = *(_DWORD *)(result + 12);
  if ( a4 )
  {
    result = *(unsigned int *)(result + 16);
    *a4 = result;
  }
  return result;
}

