__int64 __fastcall sub_1008F50(__int64 a1, __int64 a2, char **a3)
{
  char v3; // al

  v3 = **a3;
  *(_QWORD *)a1 = a1 + 16;
  if ( v3 == 112 )
  {
    *(_QWORD *)(a1 + 8) = 1;
    *(_WORD *)(a1 + 16) = 114;
    return a1;
  }
  else
  {
    *(_BYTE *)(a1 + 16) = v3;
    *(_QWORD *)(a1 + 8) = 1;
    *(_BYTE *)(a1 + 17) = 0;
    return a1;
  }
}

