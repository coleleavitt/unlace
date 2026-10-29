/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B80
// Address: 0x0000000000080B80

//----- (0000000000080B80) ----------------------------------------------------
__int64 *__fastcall sub_80B80(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 **v4; // r14
  const char *v5; // rbx
  __int64 **v6; // r15
  const char *v7; // rbp
  __int64 *v8; // rax
  __int64 *result; // rax
  __int64 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-68h]
  __int64 *v13; // [rsp+8h] [rbp-60h]
  _QWORD v14[10]; // [rsp+18h] [rbp-50h] BYREF

  v14[3] = __readfsqword(0x28u);
  v4 = *(__int64 ***)(a1 + 8);
  if ( !v4 )
  {
    v4 = (__int64 **)(a1 + 8);
    v6 = (__int64 **)(a1 + 8);
    goto LABEL_16;
  }
  v12 = a3;
  v13 = a4;
  v5 = s1;
  if ( *(_QWORD *)(a2 + 8) )
    v5 = *(const char **)a2;
  v6 = (__int64 **)(a1 + 8);
  while ( 1 )
  {
    v7 = s1;
    if ( v4[5] )
      v7 = (const char *)v4[4];
    if ( strcmp(v5, v7) < 0 )
      break;
    if ( strcmp(v7, v5) >= 0 )
      goto LABEL_15;
    v6 = v4 + 1;
    v8 = v4[1];
    if ( !v8 )
      goto LABEL_15;
LABEL_5:
    v4 = (__int64 **)v8;
  }
  v8 = *v4;
  v6 = v4;
  if ( *v4 )
    goto LABEL_5;
  v6 = v4;
LABEL_15:
  a4 = v13;
  a3 = v12;
LABEL_16:
  result = *v6;
  if ( !*v6 )
  {
    sub_80CB0((__int64)v14, a1, a3, a4);
    v10 = (__int64 *)v14[0];
    *(_OWORD *)v14[0] = 0;
    v10[2] = (__int64)v4;
    *v6 = v10;
    v11 = **(_QWORD **)a1;
    if ( v11 )
    {
      *(_QWORD *)a1 = v11;
      v10 = *v6;
    }
    sub_4A450(*(__int64 **)(a1 + 8), v10);
    ++*(_QWORD *)(a1 + 16);
    return (__int64 *)v14[0];
  }
  return result;
}
