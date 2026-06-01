__int64 __fastcall sub_40BD50(__int64 a1, unsigned int *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rsi
  unsigned int v5; // eax
  __int64 *v6; // rdx
  unsigned int v7; // ebx
  const char *vars0[31]; // [rsp+0h] [rbp+0h] BYREF

  sub_49EDC0(vars0);
  while ( 1 )
  {
    v5 = *a2;
    if ( *a2 >= 0x30 )
      break;
    v3 = (__int64 *)(*((_QWORD *)a2 + 2) + v5);
    *a2 = v5 + 8;
    v4 = *v3;
    if ( !*v3 )
      goto LABEL_6;
LABEL_3:
    sub_49EDE0(vars0, v4, 0xFFFFFFFFLL);
  }
  v6 = *((__int64 **)a2 + 1);
  v4 = *v6;
  *((_QWORD *)a2 + 1) = v6 + 1;
  if ( v4 )
    goto LABEL_3;
LABEL_6:
  v7 = sub_40BD00(a1, vars0[0]);
  sub_49F100(vars0);
  return v7;
}

