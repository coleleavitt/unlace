bool __fastcall sub_81A0A0(unsigned int *a1, __int64 a2, int a3)
{
  unsigned int *v3; // rax
  __int64 v5; // rcx
  unsigned int *v6; // r8
  unsigned int *v7; // rdi
  unsigned int v8; // edi
  __int64 v9; // rsi
  unsigned int v10; // ecx
  unsigned int v11; // edx

  v3 = a1 + 19;
  v5 = 2LL * a1[8];
  v6 = &a1[v5 + 19];
  if ( v5 * 4 )
  {
    v7 = a1 + 19;
    do
    {
      if ( a3 == (v7[1] ^ 1) )
      {
        v8 = *v7;
        goto LABEL_6;
      }
      v7 += 2;
    }
    while ( v6 != v7 );
    v8 = 0;
LABEL_6:
    v9 = *(_QWORD *)(a2 + 96);
    v10 = 0;
    do
    {
      if ( *(_BYTE *)(v9 + (v3[1] ^ 1)) )
      {
        v11 = *v3;
        if ( v8 <= *v3 )
          v11 = v8;
        v10 += v11;
      }
      v3 += 2;
    }
    while ( v6 != v3 );
  }
  else
  {
    v10 = 0;
  }
  return v10 >= a1[15];
}

