_BYTE *__fastcall sub_10AE2B0(__int64 a1, __int64 a2, int a3, _BYTE *a4, signed __int64 a5)
{
  _BYTE *result; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_QWORD *)(a1 + 24) = 0x300000000LL;
  *(_DWORD *)(a1 + 12) = a3;
  *(_BYTE *)(a1 + 56) = 1;
  *(_QWORD *)a1 = &off_2B38F78;
  result = (_BYTE *)(a1 + 112);
  *(_QWORD *)(a1 + 60) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 88) = a2;
  if ( !a4 )
  {
    *(_QWORD *)(a1 + 96) = result;
    *(_QWORD *)(a1 + 104) = 0;
    *(_BYTE *)(a1 + 112) = 0;
    return result;
  }
  *(_QWORD *)(a1 + 96) = result;
  if ( (unsigned __int64)a5 > 0xF )
  {
    if ( a5 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    result = (_BYTE *)operator new(a5 + 1);
    *(_QWORD *)(a1 + 112) = a5;
    *(_QWORD *)(a1 + 96) = result;
  }
  else
  {
    if ( a5 == 1 )
    {
      *(_BYTE *)(a1 + 112) = *a4;
      *(_QWORD *)(a1 + 104) = 1;
      *(_BYTE *)(a1 + 113) = 0;
      return result;
    }
    if ( !a5 )
    {
      *(_QWORD *)(a1 + 104) = 0;
      *result = 0;
      return result;
    }
  }
  memcpy(result, a4, a5);
  result = *(_BYTE **)(a1 + 96);
  *(_QWORD *)(a1 + 104) = a5;
  result[a5] = 0;
  return result;
}

