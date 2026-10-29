char __fastcall sub_C9F200(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r10
  unsigned __int64 *v7; // r9
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // r8
  char v10; // bl
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi

  if ( !a3 )
    return 1;
  v3 = *(unsigned __int64 **)(a1 + 16);
  v4 = a2 + a3;
  v5 = v4 - 1;
  v6 = 1 - a2;
  v7 = &v3[2 * *(unsigned int *)(a1 + 24)];
  if ( v3 == v7 )
    return v5 + v6 == 0;
  v8 = v3 + 2;
  v9 = *(v8 - 2);
  v10 = 0;
  v11 = *(v8 - 1);
  v12 = 0;
  while ( a2 > v11 || a2 < v9 )
  {
    if ( v7 == v8 )
      return v12 >= v5 + v6;
    v9 = *v8;
    v11 = v8[1];
    if ( v10 )
      goto LABEL_9;
LABEL_4:
    v8 += 2;
  }
  v12 += v6 + v11;
  if ( v8 == v7 )
    return v12 >= v5 + v6;
  v9 = *v8;
  v11 = v8[1];
LABEL_9:
  if ( v5 > v11 || v5 < v9 )
  {
    v12 += v11 - v9 + 1;
    v10 = 1;
    goto LABEL_4;
  }
  v12 = v4 + v12 - v9;
  return v12 >= v5 + v6;
}
