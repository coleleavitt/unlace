__int64 __fastcall sub_530FC0(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx

  while ( 1 )
  {
    v2 = (_QWORD *)a1[11];
    if ( v2 )
    {
      v3 = a1 + 10;
      do
      {
        while ( 1 )
        {
          v4 = v2[2];
          v5 = v2[3];
          if ( v2[4] >= a2 )
            break;
          v2 = (_QWORD *)v2[3];
          if ( !v5 )
            goto LABEL_6;
        }
        v3 = v2;
        v2 = (_QWORD *)v2[2];
      }
      while ( v4 );
LABEL_6:
      if ( a1 + 10 != v3 && a2 >= v3[4] )
        return v3[5];
    }
    a1 = (_QWORD *)a1[15];
    if ( !a1 )
      return 0;
  }
}
