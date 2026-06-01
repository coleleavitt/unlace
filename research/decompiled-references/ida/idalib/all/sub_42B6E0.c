char __fastcall sub_42B6E0(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v6; // r8
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx

  LOBYTE(v3) = 1;
  if ( a3 == 78 )
  {
    v4 = *(_QWORD **)(a1 + 32);
    v5 = a2 - v4[14];
    v6 = v4 + 9;
    v3 = (_QWORD *)v4[10];
    if ( v3 )
    {
      v7 = v6;
      do
      {
        while ( 1 )
        {
          v8 = v3[2];
          v9 = v3[3];
          if ( v3[4] < v5 )
            break;
          v7 = v3;
          v3 = (_QWORD *)v3[2];
          if ( !v8 )
            goto LABEL_7;
        }
        v3 = (_QWORD *)v3[3];
      }
      while ( v9 );
LABEL_7:
      if ( v6 != v7 )
        LOBYTE(v3) = v5 >= v7[4];
    }
    else
    {
      LOBYTE(v3) = 0;
    }
  }
  return (char)v3;
}
