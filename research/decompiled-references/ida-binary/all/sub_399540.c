__int64 __fastcall sub_399540(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edx
  _QWORD *v3; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx

  v2 = 0;
  if ( a2 != -1 )
  {
    v3 = *(_QWORD **)(a1 + 16);
    v4 = (_QWORD *)(a1 + 8);
    if ( v3 )
    {
      v5 = (_QWORD *)(a1 + 8);
      do
      {
        while ( 1 )
        {
          v6 = v3[2];
          v7 = v3[3];
          if ( v3[4] < a2 )
            break;
          v5 = v3;
          v3 = (_QWORD *)v3[2];
          if ( !v6 )
            goto LABEL_7;
        }
        v3 = (_QWORD *)v3[3];
      }
      while ( v7 );
LABEL_7:
      v2 = 0;
      if ( v4 != v5 )
        LOBYTE(v2) = a2 >= v5[4];
    }
  }
  return v2;
}
