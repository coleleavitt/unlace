__int64 __fastcall name_requires_qualifier(__int64 *a1, unsigned __int64 a2, const char *a3, unsigned __int64 a4)
{
  __int64 *v6; // r13
  __int64 ***v7; // rax
  __int64 **v8; // r14
  unsigned int v9; // ebx

  v6 = *(__int64 **)(**(_QWORD **)(qword_2CA1698 + 1480) + 1632LL);
  v7 = (__int64 ***)sub_5242C0(v6, a2);
  if ( v7 && (v8 = *v7, v9 = sub_525C60(v6, *v7, a3, a4), (_BYTE)v9) )
  {
    if ( a1 )
    {
      sub_538050(v6, a1, (__int64)v8, a4);
      return v9;
    }
  }
  else
  {
    return 0;
  }
  return v9;
}

