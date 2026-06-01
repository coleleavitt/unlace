__int64 __fastcall sub_8041D0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rax

  v3 = a3 + 63LL;
  if ( v3 > 0x7F )
  {
    sub_2585D40(a1, a3, v3 >> 6, a2);
    return a1;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = a3;
    *(_QWORD *)a1 = a2;
    return a1;
  }
}

