__int64 __fastcall sub_3EA470(__int64 a1, const char *a2, __m128 a3)
{
  const char *v3; // rax
  __int64 v4; // rbp
  char v5; // al
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int8 *v8; // r12
  int v9; // r13d
  int v10; // edx
  char v11; // al

  v3 = "HEXMIPS64";
  v4 = *(_QWORD *)(a1 + 96);
  if ( !*(_BYTE *)(v4 + 144) )
    v3 = "HEXMIPS";
  *(_QWORD *)(a1 + 24) = v3;
  v5 = 0;
  if ( *(_DWORD *)(v4 + 152) == 18 )
  {
    v5 = sub_325950(v4);
    v4 = *(_QWORD *)(a1 + 96);
  }
  *(_BYTE *)(a1 + 744) = v5;
  v6 = *(_QWORD *)(v4 + 168);
  if ( !v6 )
    return 0;
  v7 = v6 - 1;
  if ( v7 <= 2 )
    return 0;
  v8 = *(unsigned __int8 **)(v4 + 160);
  v9 = *v8;
  if ( v9 == 111 && v8[1] == 51 && v8[2] == 50 )
  {
    v10 = 0;
    v11 = 0;
    goto LABEL_17;
  }
  if ( v9 == 110 )
  {
    if ( v8[1] == 51 && v8[2] == 50 )
    {
      v10 = 1;
      v11 = 0;
      goto LABEL_17;
    }
    if ( v8[1] == 54 && v8[2] == 52 )
    {
      v10 = 2;
      v11 = 1;
      goto LABEL_17;
    }
  }
  if ( v9 == 111 && v8[1] == 54 && v8[2] == 52 )
  {
    v10 = 4;
    v11 = 0;
  }
  else if ( v7 > 5 && (a2 = "eabi32", !strncmp(*(const char **)(v4 + 160), "eabi32", 6u)) )
  {
    v10 = 3;
    v11 = 0;
  }
  else
  {
    if ( v9 != 112 || v8[1] != 51 || v8[2] != 50 )
      return 0;
    v10 = 5;
    v11 = 0;
  }
LABEL_17:
  *(_DWORD *)(a1 + 748) = v10;
  if ( *(_BYTE *)(v4 + 144) != v11 )
    return 0;
  sub_3E8690(a1, (__int64)a2, a3);
  return 1;
}
