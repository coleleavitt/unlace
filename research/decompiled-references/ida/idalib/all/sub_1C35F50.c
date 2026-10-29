__int64 __fastcall sub_1C35F50(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4, _QWORD *a5, _QWORD *a6)
{
  unsigned int v10; // eax
  unsigned int v11; // r13d
  unsigned __int16 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // r14
  unsigned __int64 *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 *i; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // [rsp+10h] [rbp-48h]
  unsigned __int64 v31; // [rsp+18h] [rbp-40h]

  LOBYTE(v10) = sub_B78490(a2);
  v11 = v10;
  if ( !(_BYTE)v10 )
    return v11;
  v12 = (unsigned __int16 *)sub_BFBAE0(a3);
  v16 = *v12;
  LOWORD(v16) = v16 & 0x1FF;
  if ( (_WORD)v16 == 71 )
  {
    v16 = *((_QWORD *)v12 + 2);
    if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 40 <= 6 )
    {
      v17 = *(_QWORD *)(v16 + 48);
      v18 = *(_QWORD *)(a2 + 48);
      if ( v18 )
      {
        v30 = v18 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v31 = v16;
        v29 = sub_A7AA70(*(_QWORD *)(a1 + 248), a2, v16, v13, v14, v15);
        v16 = v31;
        v30 = v29;
      }
      if ( !sub_9B48E0(v16) )
      {
        v13 = v17 & 7;
        v16 = v17 & 1 | *(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] & 1;
        if ( v17 & 1 | *(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] & 1 )
        {
          v16 = *(_QWORD *)&byte_8[v30 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL;
          if ( *(_QWORD *)v16 == *(_QWORD *)(*(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
            return 0;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_10;
  v21 = sub_B8C3D0(a2, a2, v16, v13, v14, v15);
  v24 = (__int64 *)*v21;
  v25 = *v21 + 8LL * *((unsigned int *)v21 + 2);
  if ( *v21 < v25 )
  {
    v28 = *v21;
    while ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 215 )
    {
      v28 += 8LL;
      if ( v25 == v28 )
        goto LABEL_10;
    }
    if ( v25 == v28 )
      goto LABEL_10;
    return (unsigned int)sub_17AD650(a1, a2, (__int64)a6, 0, v22, v23) ^ 1;
  }
  if ( v24 != (__int64 *)v25 )
  {
    if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) != 215 )
    {
      for ( i = (__int64 *)(v25 + 8); i != v24; ++i )
      {
        v27 = *i;
        if ( *(_WORD *)(v27 + 36) == 215 )
          return (unsigned int)sub_17AD650(a1, a2, (__int64)a6, 0, v22, v23) ^ 1;
      }
      goto LABEL_10;
    }
    return (unsigned int)sub_17AD650(a1, a2, (__int64)a6, 0, v22, v23) ^ 1;
  }
LABEL_10:
  v19 = *a4;
  if ( *a5 == *a4 )
    return v11;
  while ( *(_BYTE *)(v19 + 12) )
  {
    if ( (int)sub_2205DB0(v19, a6) >= 0 )
      goto LABEL_16;
LABEL_13:
    v19 += 24;
    *a4 = v19;
    if ( *a5 == v19 )
      return v11;
  }
  if ( (int)sub_2205E20(v19, a6) < 0 )
    goto LABEL_13;
LABEL_16:
  if ( *(_DWORD *)(v19 + 8) <= 0x40u )
    LOBYTE(v11) = *(_QWORD *)v19 == *a6;
  else
    v11 = sub_2205D70(v19, a6);
  v11 ^= 1u;
  return v11;
}
