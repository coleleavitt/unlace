__int64 __fastcall dwarf_object_detector_universal_instance(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _DWORD *a8)
{
  __int64 result; // rax
  _QWORD *v9; // rax

  if ( a1 )
  {
    result = 0xFFFFFFFFLL;
    if ( a2 < *(_QWORD *)(a1 + 8) )
    {
      v9 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 48 * a2);
      *a3 = *v9;
      *a4 = v9[1];
      *a5 = v9[2];
      *a6 = v9[3];
      *a7 = v9[4];
      return 0;
    }
  }
  else
  {
    *a8 = 502;
    return 1;
  }
  return result;
}

