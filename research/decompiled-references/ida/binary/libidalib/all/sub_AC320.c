unsigned __int64 __fastcall sub_AC320(__int64 a1, __int64 **a2, _DWORD *a3, __int64 a4, int a5)
{
  _QWORD *v6; // rdi
  __int64 v8; // rax
  unsigned int v9; // r12d
  unsigned __int64 result; // rax

  v6 = *(_QWORD **)(a1 + 184);
  v8 = 16 * ((v6[15] == 0) + ((__int64)(v6[15] - v6[11]) >> 3) - 1)
     + ((__int64)(v6[10] - v6[8]) >> 5)
     + ((__int64)(v6[12] - v6[13]) >> 5);
  if ( !dbg && v8 )
  {
    sub_A0F60(xmmword_251F20);
    sub_9CB60();
    sub_A0F60(xmmword_251BE0);
    return sub_A0F60(xmmword_251D80);
  }
  else
  {
    v9 = v8 - a5 - 1;
    sub_ABAE0((__int64)v6, a2, v9);
    result = *(unsigned int *)(sub_A0A20(*(_QWORD *)(a1 + 184), v9) + 8);
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

