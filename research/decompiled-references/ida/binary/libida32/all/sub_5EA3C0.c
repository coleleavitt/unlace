__int64 __fastcall sub_5EA3C0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r15
  __int64 v4; // rax
  int v5; // ecx
  const char ***v6; // r13
  int v7; // ebx
  const char ***v8; // r12
  const char **v9; // r14
  int v10; // eax
  const char ***v11; // r9
  int v14; // [rsp+14h] [rbp-1054h]
  const char ***dest; // [rsp+18h] [rbp-1050h]
  char s2[4104]; // [rsp+20h] [rbp-1048h] BYREF
  unsigned __int64 v17; // [rsp+1028h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v3 = *(_QWORD *)(a1 + 1480);
  sub_62F560(s2);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_DWORD *)(v4 + 16);
  v6 = *(const char ****)(v4 + 24);
  v14 = v5;
  if ( v5 <= 0 )
    return 0;
  v7 = 0;
  v8 = &v6[v5];
  while ( 1 )
  {
    v9 = *v6;
    v10 = strcasecmp(**v6, s2);
    v11 = v6++;
    if ( !v10 )
      break;
    ++v7;
    if ( v8 == v6 )
      return 0;
  }
  dest = v11;
  sub_634790(a1, v9, a3);
  memmove(dest, v6, 8LL * (v14 - 1 - v7));
  --*(_DWORD *)(*(_QWORD *)(v3 + 8) + 16LL);
  *(_DWORD *)(*(_QWORD *)(v3 + 8) + 32LL) |= 0x40u;
  if ( qword_2CA1648 )
    qword_2CA1648(0, 0xFFFFFFFFLL);
  return 1;
}

