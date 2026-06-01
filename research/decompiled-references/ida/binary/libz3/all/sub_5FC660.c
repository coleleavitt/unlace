__int64 __fastcall sub_5FC660(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // r14
  __int64 *v4; // rbx
  __int64 *v5; // r13
  __int64 v6; // r15

  v3 = sub_186B270(0xF8u);
  sub_63D370(v3, *(_QWORD *)(a1 + 40));
  v4 = *(__int64 **)(a2 + 24);
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    while ( v5 != v4 )
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( (unsigned __int8)sub_5FBCB0(a1, a2, *(_QWORD *)(*(_QWORD *)(*v4 + 40) + 16LL)) )
          break;
        if ( v5 == ++v4 )
          goto LABEL_7;
      }
      ++v4;
      sub_63DAD0(v3, v6, a3);
    }
  }
LABEL_7:
  if ( !(unsigned __int8)sub_6430A0(v3) )
  {
    sub_1872CE0("");
    sub_1873130(114, 271);
  }
  return v3;
}

