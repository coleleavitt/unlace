__int64 __fastcall sub_C710C0(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, int a6)
{
  unsigned __int64 v6; // r8
  __int64 result; // rax

  v6 = a5 & 0xFFFFFFFFFFFFFFF8LL;
  *(_DWORD *)(a1 + 8) = a2;
  a3 = (unsigned __int8)a3;
  *(_DWORD *)(a1 + 12) = a6;
  if ( a4 == 1 )
  {
    LODWORD(a3) = (unsigned __int8)a3 | 2;
    goto LABEL_7;
  }
  if ( !a4 )
  {
LABEL_7:
    *(_QWORD *)a1 = v6 | (unsigned int)a3 | 4;
    return result;
  }
  result = (unsigned __int8)a3 | 2u;
  if ( a4 == 2 )
    a3 = (unsigned __int8)a3 | 2u;
  *(_QWORD *)a1 = v6 | a3;
  return result;
}

