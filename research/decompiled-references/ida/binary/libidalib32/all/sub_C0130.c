__int64 __fastcall sub_C0130(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax
  _QWORD *v4; // rbx

  v2 = sub_924A0(0xFFFFFFFF, (__int64)"HIDECANCEL\nAre you sure you want to delete the selected exception(s)?");
  result = 0;
  if ( v2 == 1 )
  {
    do
    {
      v4 = (_QWORD *)(qword_2512E0 + 56LL * *(_QWORD *)(*(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8) - 8));
      if ( v4[4] )
      {
        v4[5] = 0;
        qfree();
      }
      if ( v4[1] )
      {
        v4[2] = 0;
        qfree();
      }
      memmove(v4, v4 + 7, qword_2512E0 + 56 * xmmword_2512E8 - (_QWORD)v4 - 56);
      *(_QWORD *)&xmmword_2512E8 = xmmword_2512E8 - 1;
    }
    while ( (unsigned __int8)sub_193150(a2) );
    *(_BYTE *)(a1 + 180) = 1;
    sub_1931A0(a1, a2, **(_QWORD **)a2);
    return 1;
  }
  return result;
}

