unsigned __int64 __fastcall tr_chooser_t__::vfunc_6(
        __int64 a1,
        __int64 **a2,
        _DWORD *a3,
        double a4,
        __int64 a5,
        int a6)
{
  _QWORD *v7; // rdi
  __int64 v9; // rax
  unsigned int v10; // r12d
  unsigned __int64 result; // rax

  v7 = *(_QWORD **)(a1 + 184);
  v9 = 16 * ((v7[15] == 0) + ((__int64)(v7[15] - v7[11]) >> 3) - 1)
     + ((__int64)(v7[10] - v7[8]) >> 5)
     + ((__int64)(v7[12] - v7[13]) >> 5);
  if ( !dbg && v9 )
  {
    sub_20F9A0((const __m128i *)qword_8CBAA0);
    sub_21B8A0();
    sub_20F9A0(xmmword_8CB760);
    return sub_20F9A0(xmmword_8CB900);
  }
  else
  {
    v10 = v9 - a6 - 1;
    sub_21D3A0((__int64)v7, a2, v10, a4);
    result = *(unsigned int *)(sub_20F460(*(_QWORD *)(a1 + 184), v10) + 8);
    if ( (_DWORD)result == 3 )
    {
      *a3 = 145;
    }
    else if ( (unsigned int)result > 3 )
    {
      if ( (_DWORD)result == 4 )
        *a3 = 146;
    }
    else if ( (_DWORD)result == 1 )
    {
      *a3 = 142;
    }
    else if ( (_DWORD)result == 2 )
    {
      *a3 = 144;
    }
  }
  return result;
}
