__int64 __fastcall sub_7ABF00(__int64 a1)
{
  strcpy((char *)(a1 + 16), "unknown");
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 7;
  return a1;
}

