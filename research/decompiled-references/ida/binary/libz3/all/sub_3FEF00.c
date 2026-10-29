__int64 __fastcall sub_3FEF00(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 v4; // r13
  __int64 *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // r15

  v4 = sub_13608A0(a2 + 128);
  sub_1360B80(a2 + 128, 0);
  v5 = *(__int64 **)(a1 + 216);
  if ( !v5 || (v6 = &v5[*((unsigned int *)v5 - 1)], v6 == v5) )
  {
LABEL_7:
    sub_1872CE0("");
    sub_1873130(114, 840);
  }
  if ( a3 )
  {
    while ( 1 )
    {
      v7 = *v5;
      if ( (unsigned __int8)sub_13742D0(a2, *(_QWORD *)(*v5 + 48)) )
        break;
      if ( v6 == ++v5 )
        goto LABEL_7;
    }
  }
  else
  {
    while ( 1 )
    {
      v7 = *v5;
      if ( !*(_BYTE *)(*v5 + 64) )
      {
        if ( (unsigned __int8)sub_13742D0(a2, *(_QWORD *)(v7 + 48)) )
          break;
      }
      if ( v6 == ++v5 )
        goto LABEL_7;
    }
  }
  sub_1360B80(a2 + 128, v4);
  return v7;
}

