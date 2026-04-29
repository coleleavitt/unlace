__int64 __fastcall sub_10B90(__int64 a1, _DWORD *a2, double a3)
{
  __int64 v4; // r13
  char v6; // r13
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 *v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rax
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rdx

  if ( a2 && *a2 == 3 )
    return 1;
  v4 = getseg();
  if ( (word_349D0 & 0x2000) != 0 )
    goto LABEL_21;
  if ( (word_349D0 & 8) == 0 || *(_BYTE *)(a1 + 984) )
    goto LABEL_6;
  v7 = *(__int64 **)(a1 + 624);
  v8 = *(_QWORD *)(a1 + 632);
  v9 = qword_349D8;
  v10 = &v7[v8];
  if ( v7 != v10 )
  {
    v11 = *(__int64 **)(a1 + 624);
    while ( qword_349D8 != *v11 )
    {
      if ( v10 == ++v11 )
        goto LABEL_18;
    }
    if ( v11 != v10 )
      goto LABEL_6;
  }
LABEL_18:
  if ( *(_QWORD *)(a1 + 640) < (unsigned __int64)(v8 + 1) )
  {
    v16 = qvector_reserve();
    v17 = *(_QWORD *)(a1 + 632);
    *(_QWORD *)(a1 + 624) = v16;
    v10 = (__int64 *)(v16 + 8 * v17);
  }
  *v10 = v9;
  ++*(_QWORD *)(a1 + 632);
  if ( !byte_349A0 )
  {
LABEL_21:
    byte_349A0 = 1;
    if ( (int)sub_CFC0(1u, (__int64)"HIDECANCEL\nLoad the file header?") > 0 )
    {
      if ( (*(_BYTE *)(a1 + 95) & 0x20) == 0
        || *(_DWORD *)(a1 + 112)
        || (v12 = *(_QWORD *)(a1 + 16), v6 = 1, v13 = v12 - 1, v12 - 1 < 0) )
      {
        sub_FFC0(a1, (__int64)a2, 1, 0);
        getseg();
        goto LABEL_25;
      }
      goto LABEL_33;
    }
  }
LABEL_6:
  if ( v4 )
    return 1;
  if ( (*(_BYTE *)(a1 + 95) & 0x20) == 0 )
  {
    sub_FFC0(a1, (__int64)a2, 1, 0);
    if ( getseg() )
      return 1;
LABEL_28:
    if ( (int)sub_CFC0(
                1u,
                (__int64)"HIDECANCEL\n"
                         "Entry point 0x%a is not loaded into the database.Do you want to load the missing data?",
                a3) > 0 )
      goto LABEL_25;
    return 0;
  }
  v6 = 0;
  if ( *(_DWORD *)(a1 + 112) )
  {
LABEL_10:
    sub_FFC0(a1, (__int64)a2, 1, 0);
    if ( getseg() )
    {
      if ( v6 )
        goto LABEL_25;
      return 1;
    }
    if ( v6 )
    {
LABEL_25:
      sub_F1A0(a1, (__int64)a2, 1);
      if ( (unsigned __int8)is_mapped() )
      {
        if ( getseg() )
          sub_9640();
      }
      else
      {
        sub_A800(
          (__int64)"Entry point (%a) seems to point outside the file. It is possible that the file contains malicious code.",
          a3);
      }
      return 1;
    }
    goto LABEL_28;
  }
  v12 = *(_QWORD *)(a1 + 16);
  v13 = v12 - 1;
  if ( v12 - 1 < 0 )
    return 0;
LABEL_33:
  v14 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32 * v12 - 32);
  while ( *v14 || !v14[1] )
  {
    --v13;
    v14 -= 4;
    if ( v13 == -1 )
    {
      v15 = v6;
      goto LABEL_38;
    }
  }
  v15 = v6 | (v14[2] != -1);
LABEL_38:
  if ( v15 )
    goto LABEL_10;
  return 0;
}
