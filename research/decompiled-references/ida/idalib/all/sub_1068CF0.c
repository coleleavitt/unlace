bool __fastcall sub_1068CF0(_DWORD *a1, __int64 a2)
{
  void *v3; // rdi
  size_t v4; // rsi
  unsigned int v5; // eax
  unsigned int v7; // eax

  v3 = *(void **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( a1[62] == 26 )
  {
    v7 = sub_22B0BE0(v3, v4);
    a1[128] = v7;
    a1[129] = sub_22B0D00(v7);
  }
  else
  {
    v5 = sub_22B0C70(v3, v4);
    a1[128] = v5;
    a1[129] = sub_22B0D60(v5);
  }
  return a1[128] != 0;
}
