void __fastcall sub_11BB7F0(char *a1, __int64 *a2)
{
  char v2; // bp
  char *v3; // r13
  __int64 v4; // rax
  _QWORD *v5; // r12
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx

  v2 = *a1;
  if ( *a1 )
  {
    v3 = a1;
    v4 = a2[1];
    v5 = a2 + 3;
    do
    {
      v7 = v4 + 1;
      v8 = a2[2];
      if ( v2 == 32 || v2 == 92 )
      {
        if ( v7 > v8 )
        {
          sub_2236E10(a2, v5, v7, 1);
          v4 = a2[1];
        }
        *(_BYTE *)(*a2 + v4) = 92;
        v9 = a2[1];
        v10 = a2[2];
        v4 = v9 + 1;
        v7 = v9 + 2;
        a2[1] = v4;
        v2 = *v3;
        if ( v7 > v10 )
        {
LABEL_11:
          sub_2236E10(a2, v5, v7, 1);
          v6 = *a2;
          v4 = a2[1];
          goto LABEL_5;
        }
      }
      else if ( v7 > v8 )
      {
        goto LABEL_11;
      }
      v6 = *a2;
LABEL_5:
      *(_BYTE *)(v6 + v4) = v2;
      ++v3;
      v4 = a2[1] + 1;
      a2[1] = v4;
      v2 = *v3;
    }
    while ( *v3 );
  }
}
