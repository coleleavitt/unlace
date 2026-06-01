__int64 __fastcall sub_20D8770(char **a1, __int64 *a2)
{
  char *v2; // rax
  char *v3; // rdx
  char v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  char v9; // dl
  __int64 v10[8]; // [rsp+0h] [rbp-40h] BYREF

  v2 = *a1;
  v3 = a1[1];
  if ( v3 == *a1 || *v2 != 87 )
    return 0;
  while ( 1 )
  {
    v5 = 0;
    *a1 = v2 + 1;
    if ( v2 + 1 != v3 && v2[1] == 80 )
    {
      v5 = 1;
      *a1 = v2 + 2;
    }
    v6 = sub_20D1DD0(a1);
    if ( !v6 )
      break;
    v7 = *a2;
    v8 = sub_20CF970((__int64)(a1 + 102), 40);
    *(_WORD *)(v8 + 8) = 16411;
    v9 = *(_BYTE *)(v8 + 10);
    *(_QWORD *)(v8 + 16) = v7;
    *(_QWORD *)(v8 + 24) = v6;
    *(_BYTE *)(v8 + 32) = v5;
    *(_BYTE *)(v8 + 10) = v9 & 0xF0 | 5;
    *(_QWORD *)v8 = off_2BE7080;
    *a2 = v8;
    v10[0] = v8;
    sub_20D8690(a1 + 37, v10);
    v2 = *a1;
    v3 = a1[1];
    if ( *a1 == v3 || *v2 != 87 )
      return 0;
  }
  return 1;
}
