__int64 __fastcall sub_8C4FE0(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 result; // rax
  unsigned __int64 v7; // r8

  *(_DWORD *)(a1 + 8) = a2;
  result = a1;
  v7 = a5 & 0xFFFFFFFFFFFFFFF8LL;
  a3 = (unsigned __int8)a3;
  *(_DWORD *)(a1 + 12) = a6;
  if ( a4 == 1 )
  {
    LODWORD(a3) = (unsigned __int8)a3 | 2;
    goto LABEL_4;
  }
  if ( a4 != 2 )
  {
    if ( a4 )
    {
LABEL_5:
      *(_QWORD *)a1 = v7 | a3;
      return result;
    }
LABEL_4:
    a3 = (unsigned int)a3 | 4;
    goto LABEL_5;
  }
  *(_QWORD *)a1 = v7 | (unsigned __int8)a3 | 2u;
  return result;
}

