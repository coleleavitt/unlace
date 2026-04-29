char __fastcall sub_3700A0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r8
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a1 + 1128);
  v3 = (_QWORD *)(v2 + 80);
  v4 = *(_QWORD **)(v2 + 88);
  if ( v4 )
  {
    v5 = v3;
    do
    {
      while ( 1 )
      {
        v6 = v4[2];
        v7 = v4[3];
        if ( v4[4] < a2 )
          break;
        v5 = v4;
        v4 = (_QWORD *)v4[2];
        if ( !v6 )
          goto LABEL_6;
      }
      v4 = (_QWORD *)v4[3];
    }
    while ( v7 );
LABEL_6:
    if ( v3 != v5 )
      LOBYTE(v4) = a2 >= v5[4];
  }
  else
  {
    LOBYTE(v4) = 0;
  }
  return (char)v4;
}
