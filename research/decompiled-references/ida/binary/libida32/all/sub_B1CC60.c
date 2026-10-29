__int64 __fastcall sub_B1CC60(__int64 a1)
{
  const char *v1; // r12
  __int64 v2; // rbx
  size_t v3; // r13
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h]

  v1 = "\n\r\\@\"&<";
  v2 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(a1 + 60) )
    v1 = "\n\r";
  v3 = strlen(v1);
  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    v10 = v2;
    v11 = v4 - v2;
    v5 = sub_2223180(&v10, v1, v3, 0);
    if ( v5 == -1 )
      break;
    v6 = v2 + v5;
    if ( *(_BYTE *)(v2 + v5) != 34 )
      return v6;
    v2 += v5 + 1;
    v7 = *(_QWORD *)(a1 + 48);
    v10 = v2;
    v11 = v7 - v2;
    v8 = sub_2223180(&v10, "\n\r\"", 3, 0);
    if ( v8 != -1 && *(_BYTE *)(v2 + v8) == 34 )
      v2 += v8 + 1;
  }
  return *(_QWORD *)(a1 + 48);
}

