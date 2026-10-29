char **__fastcall sub_8D2100(char **a1, int a2)
{
  __int64 v3; // rax
  char *v4; // rax

  *a1 = nullptr;
  *(_OWORD *)(a1 + 1) = 0;
  if ( a2 == -3 )
  {
    v4 = (char *)qvector_reserve(a1, 0, 9, 1);
    *a1 = v4;
    a1[1] = byte_9;
    *(_QWORD *)v4 = 0x746E657272756323LL;
    (*a1)[8] = 0;
    return a1;
  }
  else if ( a2 == -1 )
  {
    v3 = qvector_reserve(a1, 0, 6, 1);
    *a1 = (char *)v3;
    a1[1] = &byte_6;
    *(_DWORD *)v3 = 1935764515;
    *(_BYTE *)(v3 + 4) = 116;
    (*a1)[5] = 0;
    return a1;
  }
  else
  {
    if ( a2 != -4 )
      sub_35A790(a1);
    return a1;
  }
}
