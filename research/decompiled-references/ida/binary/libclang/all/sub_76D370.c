__int64 __fastcall sub_76D370(__int64 a1, int a2)
{
  int v2; // r14d
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 result; // rax
  char v7; // dl
  int v8; // edx

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL);
  v4 = v3 + 16;
  v5 = v3 + 16 + 32LL * *(unsigned int *)(v3 + 8);
  if ( v3 + 16 == v5 )
  {
    v8 = 0;
  }
  else
  {
    do
    {
      LOBYTE(v2) = sub_AFD280(v4) & 3 | v2;
      if ( (_BYTE)v2 == 3 )
      {
        v2 = 1;
        v8 = 2;
        goto LABEL_6;
      }
      v4 += 32;
    }
    while ( v5 != v4 );
    v7 = v2;
    v2 &= 1u;
    v8 = v7 & 2;
  }
LABEL_6:
  result = v2 | v8 | (unsigned int)(8 * a2);
  if ( !(_BYTE)a2 )
    return (8 * *(_BYTE *)(*(_QWORD *)(a1 + 32) + 8LL)) & 0x10 | (unsigned int)result;
  return result;
}

