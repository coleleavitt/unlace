__int64 __fastcall sub_7CB270(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int v6; // r13d
  unsigned int v7; // ebx
  int v8; // r12d
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rdi
  __m128i v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]

  v6 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 3184LL);
  if ( (_BYTE)v6 )
    return 0;
  if ( *(_BYTE *)(a1 + 168) )
    goto LABEL_18;
  while ( 1 )
  {
    v7 = *(unsigned __int8 *)(a1 + 1828);
    if ( (_BYTE)v7 )
      break;
    v8 = sub_13D9710(a1 + 1592);
    if ( (_BYTE)v8 )
    {
      sub_7CB180(a1);
      v9 = *(_QWORD *)(a1 + 2392);
      if ( !v9 )
        goto LABEL_15;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 2392);
      if ( !v9 )
        goto LABEL_10;
    }
    v10 = 0;
    do
    {
      if ( v10 >= *(_DWORD *)(v9 - 4) )
        break;
      v11 = v10++;
      v8 |= (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 8 * v11) + 48LL))(*(_QWORD *)(v9 + 8 * v11));
      v9 = *(_QWORD *)(a1 + 2392);
    }
    while ( v9 );
    if ( (_BYTE)v8 )
    {
LABEL_15:
      v6 = 1;
      goto LABEL_16;
    }
LABEL_10:
    if ( !*(_BYTE *)(a1 + 168) )
      return v6;
    v12 = *(_QWORD *)(a1 + 808);
    if ( !v12 || *(_DWORD *)(a1 + 800) >= *(_DWORD *)(v12 - 4) )
      return v6;
LABEL_16:
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 3184LL) )
      return v6;
    if ( *(_BYTE *)(a1 + 168) )
LABEL_18:
      sub_7F2E70(a1 + 160);
  }
  v14 = *(_QWORD *)(a1 + 2408);
  if ( v14 )
  {
    v15 = (__int64 *)(v14 - 8);
  }
  else
  {
    v15 = (__int64 *)sub_186B270(0x18u);
    v15[1] = 0;
    v15[2] = 0;
    *(_QWORD *)(a1 + 2408) = v15 + 1;
    *v15 = a1;
  }
  v16 = *(_QWORD *)(a1 + 24);
  v17.m128i_i64[1] = (__int64)v15;
  v6 = v7;
  LODWORD(v18) = 3;
  v17.m128i_i32[0] = *(_DWORD *)(v16 + 3612);
  sub_11B4C90(v16, -2, v17.m128i_i32[0], a4, a5, a6, (__int128)_mm_load_si128(&v17), 3);
  return v6;
}

