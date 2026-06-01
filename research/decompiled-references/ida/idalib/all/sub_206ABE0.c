__int64 __fastcall sub_206ABE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _DWORD *v4; // rsi
  unsigned int v5; // edx
  __int64 v6; // rax
  _DWORD *v7; // rdi
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int *v11; // r8
  __int64 result; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // [rsp+8h] [rbp-10h]

  v2 = a2;
  if ( (unsigned int)*(unsigned __int8 *)(a2 + 8) - 17 <= 1 )
    v2 = **(_QWORD **)(a2 + 16);
  v4 = *(_DWORD **)(a1 + 272);
  v5 = *(_DWORD *)(v2 + 8) >> 8;
  if ( !v5 )
    goto LABEL_10;
  v6 = *(unsigned int *)(a1 + 280);
  v7 = *(_DWORD **)(a1 + 272);
  v6 *= 5;
  v8 = v6;
  v9 = 0xCCCCCCCCCCCCCCCDLL * v6;
  if ( !(v8 * 4) )
  {
LABEL_7:
    if ( v7 == &v4[v8] )
      goto LABEL_10;
    goto LABEL_8;
  }
  do
  {
    while ( 1 )
    {
      v10 = v9 >> 1;
      v11 = &v7[5 * (v9 >> 1)];
      if ( v5 <= *v11 )
        break;
      v7 = v11 + 5;
      v9 = v9 - v10 - 1;
      if ( v9 <= 0 )
        goto LABEL_7;
    }
    v9 >>= 1;
  }
  while ( v10 );
  if ( v7 != &v4[v8] )
  {
LABEL_8:
    if ( v5 == *v7 )
      v4 = v7;
  }
LABEL_10:
  result = sub_20C3F60(*(_QWORD *)a2, (unsigned int)v4[1]);
  v15 = *(unsigned __int8 *)(a2 + 8);
  if ( (unsigned int)(v15 - 17) <= 1 )
  {
    BYTE4(v16) = (_BYTE)v15 == 18;
    LODWORD(v16) = *(_DWORD *)(a2 + 32);
    return sub_20C5270(result, v16, (unsigned int)v16, v15, v13, v14);
  }
  return result;
}
