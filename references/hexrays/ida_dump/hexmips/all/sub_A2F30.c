__int64 __fastcall sub_A2F30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rsi
  _QWORD *v11; // r15
  __int64 v12; // r12
  __int16 flags; // ax
  __int64 not_tail; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned int v17; // r12d
  __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v22; // [rsp+0h] [rbp-98h] BYREF
  __int128 v23; // [rsp+8h] [rbp-90h]
  __int64 v24; // [rsp+18h] [rbp-80h]
  __int64 v25[6]; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-48h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 1256);
  v27 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 1264);
  v22 = 0;
  v23 = 0;
  v8 = v6 + 96 * v7;
  if ( v6 == v8 )
    return 0;
  v9 = 0;
  do
  {
    if ( (*(_BYTE *)(v6 + 88) & 0x20) != 0 && (unsigned int)(*(_DWORD *)v6 - 1) <= 3 )
    {
      v10 = v22;
      if ( *((_QWORD *)&v23 + 1) < (unsigned __int64)(v9 + 1) )
      {
        v22 = qvector_reserve(&v22, v22, v9 + 1, 24);
        v9 = v23;
        v10 = v22;
      }
      v11 = (_QWORD *)(v10 + 24 * v9);
      *v11 = 0xFFFFFFFF00000000LL;
      v11[1] = 0;
      v11[2] = -1;
      *(_QWORD *)&v23 = v23 + 1;
      if ( *(_DWORD *)v6 == 2 )
      {
        v25[0] = 0;
        sub_118F50(v11, a1, 0, v25, v6);
        clear_tinfo_t(v25);
      }
      else
      {
        sub_122220((_DWORD)v11, a1, v6, *(_DWORD *)(v6 + 80), a5, a6, v22, v23, DWORD2(v23), v24, v25[0]);
      }
      v12 = sub_32BF20(a1, *(_QWORD *)(v6 + 16));
      flags = get_flags_ex(v12, 4);
      not_tail = v12;
      if ( (flags & 0x600) == 0x200 )
        not_tail = prev_not_tail(v12, 4, v12);
      v15 = not_tail + *(_QWORD *)(v6 + 16) - v12;
      v9 = v23;
      v11[2] = v15;
    }
    v6 += 96;
  }
  while ( v8 != v6 );
  if ( !v9 )
  {
    v16 = v22;
    if ( v22 )
    {
      v17 = 0;
LABEL_18:
      *(_QWORD *)&v23 = 0;
      qfree(v16);
      return v17;
    }
    return 0;
  }
  memset(&v25[1], 0, 32);
  v25[0] = (__int64)&off_4BC6A8;
  v25[5] = (__int64)&v22;
  v26 = 0;
  ((void (__fastcall *)(__int64, __int64 *, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))sub_11B7E0)(
    a1,
    v25,
    v9,
    a4,
    a5,
    a6,
    v22,
    v23,
    *((_QWORD *)&v23 + 1),
    v24);
  v16 = v22;
  v17 = v26;
  if ( v22 )
  {
    v18 = v23;
    if ( (_QWORD)v23 )
    {
      v19 = 0;
      do
      {
        v20 = 3 * v19++;
        sub_118BA0(v16 + 8 * v20);
        v16 = v22;
      }
      while ( v18 != v19 );
    }
    goto LABEL_18;
  }
  return v17;
}
