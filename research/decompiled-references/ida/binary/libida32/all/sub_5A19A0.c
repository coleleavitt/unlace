unsigned __int64 __fastcall sub_5A19A0(__int64 a1, int a2, unsigned int a3, int a4, int *a5)
{
  unsigned __int64 result; // rax
  unsigned int v7; // ecx
  unsigned int **v8; // rsi

  result = a3;
  if ( a2 == 2 )
  {
    v7 = *a5;
    if ( (unsigned int)*a5 > 0x2F )
    {
      v8 = *((unsigned int ***)a5 + 1);
      *((_QWORD *)a5 + 1) = v8 + 1;
    }
    else
    {
      v8 = (unsigned int **)(*((_QWORD *)a5 + 2) + v7);
      *a5 = v7 + 8;
    }
    return sub_5A14A0(*(_QWORD *)(a1 + 8), result, a4, **v8);
  }
  return result;
}

