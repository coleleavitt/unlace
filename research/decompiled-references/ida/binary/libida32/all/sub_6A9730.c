__int64 __fastcall sub_6A9730(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  int v3; // eax

  if ( a2 == 0xFFFFFFFFLL )
    return 0xFFFFFFFFLL;
  v2 = *(_QWORD **)(*a1 + 1480LL);
  v3 = sub_79B3A0((char *)v2 + 2348, *a1, (unsigned int)a2, 65);
  return sub_3B9110(v2, v3 - 1);
}

