__int64 __fastcall sub_1685D10(__int64 a1, __int64 a2, __m128i a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int8 v7; // al
  _QWORD *v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 i; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r13
  unsigned int v18; // eax
  char v20; // bl
  __int64 v21; // rax
  int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+0h] [rbp-48h]

  v7 = *(_BYTE *)(a2 + 27);
  if ( (v7 & 1) == 0 )
    return 1;
  v8 = *(_QWORD **)(a2 + 16);
  if ( !v8 )
    return 1;
  v9 = 0;
  if ( *(_BYTE *)(a2 + 26) )
    goto LABEL_12;
  v9 = *(_QWORD *)(a2 + 40);
  if ( !v9 )
    goto LABEL_12;
  v10 = *(_QWORD *)v9;
  v9 = 0;
  v11 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_12;
  v9 = sub_F67CD0(*v11, a2, v10, a5, a6);
  if ( !v9 )
  {
LABEL_11:
    v7 = *(_BYTE *)(a2 + 27);
    goto LABEL_12;
  }
  for ( i = *(_QWORD *)(sub_F67CD0(*v11, a2, v12, v13, a6) + 24); ; i = *(_QWORD *)(v9 + 24) )
  {
    v9 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    v16 = *(unsigned __int8 *)(v9 + 16);
    if ( (unsigned int)(v16 - 35) <= 1 )
      goto LABEL_9;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
      break;
    v23 = sub_F63050(v9, a2, v16, v15);
    v9 = v23;
    if ( !v23 )
      goto LABEL_11;
    v16 = *(unsigned __int8 *)(v23 + 16);
LABEL_9:
    if ( (_BYTE)v16 == 36 )
    {
      v9 = sub_F62610(v9, a2, v16, v15, a6, a7);
      goto LABEL_11;
    }
  }
  v7 = *(_BYTE *)(a2 + 27);
  v9 = 0;
LABEL_12:
  v17 = *(unsigned int *)(a2 + 36);
  if ( (v7 & 4) != 0 )
  {
    v18 = *(_DWORD *)(a2 + 32);
  }
  else
  {
    v20 = v7 >> 3;
    v21 = *(unsigned __int16 *)(a2 + 24);
    v22 = v20 & 3;
    if ( v22 )
    {
      v25 = (unsigned __int16)v21;
      v24 = sub_C9AC10(a2);
      v18 = sub_EE7890(0, v24, (_BYTE)v22 == 2, a2 + 48, v25, *(_DWORD *)(a2 + 36));
    }
    else
    {
      v18 = *(_DWORD *)(a2 + 8 * v21 + 48);
    }
  }
  sub_16841F0(a1, v8, (v17 << 32) | v18, v9, a6, a7, a3);
  return 1;
}
