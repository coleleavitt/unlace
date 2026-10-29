bool __fastcall sub_4EE0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  qlseek(a1, a2, 0);
  return qlread(a1, a3, a4) != a4;
}

