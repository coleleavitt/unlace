__int64 __fastcall sub_76C2F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp

  v2 = (unsigned int)sub_76C2D0(a1, a2);
  return v2 + (sub_76C2D0(a1, a2 + 4) << 32);
}

