__int64 __fastcall sub_223C0E0(__int64 *a1, char *a2, unsigned __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v7; // r13
  __int64 v8; // rbx

  v4 = *a1;
  v5 = a1[1];
  if ( v5 == *a1 )
  {
LABEL_6:
    v7 = a1[3];
    v8 = a1[4];
    if ( v7 == v8 )
    {
      return 0;
    }
    else
    {
      while ( !(unsigned __int8)sub_2233DC0(*(_QWORD *)(v8 - 16), a2, a3, 0, nullptr) )
      {
        v8 -= 16;
        if ( v7 == v8 )
          return 0;
      }
      return *(unsigned int *)(v8 - 8);
    }
  }
  else
  {
    while ( !sub_22244B0(*(_QWORD *)(v5 - 8) + 40LL, a2, a3) )
    {
      v5 -= 8;
      if ( v4 == v5 )
        goto LABEL_6;
    }
    return *(unsigned int *)(*(_QWORD *)(v5 - 8) + 32LL);
  }
}
