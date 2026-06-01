unsigned __int64 __fastcall sub_776760(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rsi
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+10h] [rbp-58h]
  __int64 v28; // [rsp+10h] [rbp-58h]
  __int64 v29; // [rsp+18h] [rbp-50h]
  unsigned __int64 v30; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]
  __int64 v32; // [rsp+70h] [rbp+8h]
  __int64 v33; // [rsp+70h] [rbp+8h]

  v31 = __readfsqword(0x28u);
  v8 = a7;
  if ( a4 == -1 || a5 == -1 )
  {
    if ( !under_debugger )
      interr(3427);
    BUG();
  }
  v9 = a4;
  v10 = *(_QWORD *)(a1 + 48);
  v11 = 9 * a7;
  v12 = 9 * a5;
  v13 = v10 + 176 * a2;
  v14 = v10 + 176 * a3;
  if ( a7 )
  {
    v15 = *(_QWORD *)(v14 + 32);
    v16 = *(_QWORD *)(v14 + 24);
    if ( *(_QWORD *)(v14 + 40) < (unsigned __int64)(a7 + v15) )
    {
      v28 = a6;
      v26 = v9;
      v25 = qvector_reserve(v14 + 24, v16, a7 + v15, 9);
      v15 = *(_QWORD *)(v14 + 32);
      v8 = a7;
      *(_QWORD *)(v14 + 24) = v25;
      a6 = v28;
      v16 = v25;
      v9 = v26;
    }
    v32 = v8;
    v29 = a6;
    v27 = v9;
    memmove((void *)(v12 + v16 + v11), (const void *)(v12 + v16), 9 * v15 - v12);
    v8 = v32;
    v17 = 0;
    v18 = v12 + v16;
    v9 = v27;
    if ( v32 )
    {
      do
      {
        *(_QWORD *)(v18 + v17) = *(_QWORD *)(v29 + v17);
        *(_BYTE *)(v18 + v17 + 8) = *(_BYTE *)(v29 + v17 + 8);
        v17 += 9;
      }
      while ( v11 != v17 );
    }
    *(_QWORD *)(v14 + 32) += v32;
  }
  v33 = v8;
  memmove(
    (void *)(*(_QWORD *)(v13 + 24) + 9 * v9),
    (const void *)(*(_QWORD *)(v13 + 24) + 9 * v9 + v11),
    9LL * *(_QWORD *)(v13 + 32) - (9 * v9 + v11));
  *(_QWORD *)(v13 + 32) -= v33;
  v19 = *(_QWORD *)(v14 + 24) + v12;
  v20 = v19 + v11;
  if ( v33 )
  {
    while ( 1 )
    {
      v23 = *(_QWORD *)v19;
      if ( *(_BYTE *)(v19 + 8) )
        break;
      if ( (*(_BYTE *)(v13 + 168) & 4) == 0 )
      {
        sub_773820((_QWORD *)(v13 + 48), v23);
        v23 = *(_QWORD *)v19;
      }
      v30 = v23;
      if ( (*(_BYTE *)(v14 + 168) & 4) != 0 )
      {
LABEL_15:
        v19 += 9;
        if ( v19 == v20 )
          goto LABEL_21;
      }
      else
      {
        v19 += 9;
        sub_7740F0((__int64 *)(v14 + 48), &v30);
        if ( v19 == v20 )
          goto LABEL_21;
      }
    }
    v21 = *(_QWORD *)(a1 + 48) + 176 * v23;
    *(_DWORD *)(v21 + 168) |= 1u;
    *(_QWORD *)(v21 + 160) = a3;
    v22 = *(_QWORD *)v19;
    if ( (*(_BYTE *)(v13 + 168) & 4) == 0 )
    {
      sub_773820((_QWORD *)(v13 + 104), v22);
      v22 = *(_QWORD *)v19;
    }
    v30 = v22;
    if ( (*(_BYTE *)(v14 + 168) & 4) == 0 )
      sub_7740F0((__int64 *)(v14 + 104), &v30);
    goto LABEL_15;
  }
LABEL_21:
  *(_DWORD *)(v13 + 168) |= 1u;
  *(_DWORD *)(v14 + 168) |= 1u;
  return v31 - __readfsqword(0x28u);
}
