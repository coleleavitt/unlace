unsigned __int64 __fastcall sub_1DFC0(__int64 a1, char a2, int a3)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _BYTE *v7; // rdx
  unsigned __int64 v8; // rax
  int v10; // edx
  int v11; // ecx
  __int64 v12; // r8
  int v13; // eax
  unsigned __int64 v14; // rsi
  char *v15; // r15
  unsigned __int64 v16; // r12

  v3 = a3 + 1;
  v4 = 0;
  v5 = sub_C400(*(_QWORD **)(a1 + 40), 212);
  v6 = *(_QWORD *)(a1 + 32);
  if ( !v6 )
    return 0;
  while ( 1 )
  {
    v7 = *(_BYTE **)(a1 + 24);
    if ( *v7 == 95 )
      break;
    v4 = sub_C400(*(_QWORD **)(a1 + 40), 213);
    if ( *(_QWORD *)(a1 + 32) )
    {
      v13 = **(unsigned __int8 **)(a1 + 24);
      v10 = v13 - 48;
      if ( (unsigned __int8)(v13 - 48) <= 9u || (_BYTE)v13 == 111 )
      {
        v14 = sub_1B300((_QWORD *)a1, 214, 1);
        if ( !v14 )
          return 0;
        sub_C080(v4, v14, *(_QWORD **)(a1 + 40));
      }
    }
    v15 = sub_1C940((_QWORD *)a1, v3, v10, v11, v12);
    if ( v15 )
    {
      v16 = sub_C400(*(_QWORD **)(a1 + 40), 221);
      sub_C080(v16, (__int64)v15, *(_QWORD **)(a1 + 40));
      if ( v16 )
      {
        sub_C080(v4, v16, *(_QWORD **)(a1 + 40));
        sub_C080(v5, v4, *(_QWORD **)(a1 + 40));
        v6 = *(_QWORD *)(a1 + 32);
        if ( v6 )
          continue;
      }
    }
    return 0;
  }
  *(_QWORD *)(a1 + 24) = v7 + 1;
  *(_QWORD *)(a1 + 32) = v6 - 1;
  if ( v4 && (a2 & 1) != 0 )
  {
    sub_C3A0(v4, 0);
    v8 = sub_C400(*(_QWORD **)(a1 + 40), 264);
    sub_C080(v4, v8, *(_QWORD **)(a1 + 40));
    sub_C3A0(v4, 0);
  }
  return v5;
}
