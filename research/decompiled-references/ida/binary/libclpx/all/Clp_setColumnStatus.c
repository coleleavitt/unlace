__int64 __fastcall Clp_setColumnStatus(__int64 a1, int a2, unsigned int a3)
{
  _BYTE *v3; // rcx
  __int64 result; // rax

  if ( a3 <= 5 )
  {
    v3 = (_BYTE *)(a2 + *(_QWORD *)(*(_QWORD *)a1 + 264LL));
    *v3 = a3 | *v3 & 0xF8;
    result = (a3 - 3) & 0xFFFFFFFD;
    if ( ((a3 - 3) & 0xFFFFFFFD) != 0 )
    {
      if ( a3 == 2 )
      {
        result = *(_QWORD *)(*(_QWORD *)a1 + 120LL);
        *(_QWORD *)(result + 8LL * a2) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 184LL) + 8LL * a2);
      }
    }
    else
    {
      result = *(_QWORD *)(*(_QWORD *)a1 + 120LL);
      *(_QWORD *)(result + 8LL * a2) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 176LL) + 8LL * a2);
    }
  }
  return result;
}

