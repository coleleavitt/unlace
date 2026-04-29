__int64 __fastcall sub_58780(__int64 *a1, __int64 *a2)
{
  char *v4; // rax
  _QWORD *v5; // rdx
  const char *v6; // rsi
  const char *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  char i; // al
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdi
  int v19; // ebp
  __int64 j; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  int v23; // r13d
  __int64 k; // rax
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  int v28; // ebp
  __int64 m; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rsi
  unsigned int v34; // ebx
  __int64 v36; // rdi
  __int64 v37; // rdi
  char v38; // [rsp+0h] [rbp-1CCh] BYREF
  char v39; // [rsp+1h] [rbp-1CBh] BYREF
  char v40; // [rsp+2h] [rbp-1CAh] BYREF
  char v41; // [rsp+3h] [rbp-1C9h] BYREF
  __int64 v42; // [rsp+4h] [rbp-1C8h] BYREF
  int v43; // [rsp+Ch] [rbp-1C0h]
  __int128 v44; // [rsp+14h] [rbp-1B8h]
  __int64 v45; // [rsp+24h] [rbp-1A8h]
  __int128 v46; // [rsp+34h] [rbp-198h] BYREF
  __int64 v47; // [rsp+44h] [rbp-188h]
  __int64 v48; // [rsp+4Ch] [rbp-180h]
  __int64 v49; // [rsp+54h] [rbp-178h]
  char v50; // [rsp+5Ch] [rbp-170h] BYREF
  _QWORD v51[6]; // [rsp+19Ch] [rbp-30h] BYREF

  v51[0] = __readfsqword(0x28u);
  v4 = &v50;
  v46 = -1;
  v5 = v51;
  v47 = -1;
  v48 = 0;
  v49 = 0;
  do
  {
    v6 = nullptr;
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( v4 != (char *)v51 );
  v7 = (const char *)*a2;
  if ( *a2 < (unsigned __int64)a2[1] )
  {
    while ( 1 )
    {
      v6 = v7;
      if ( !(unsigned int)decode_insn(&v46, v7, v5, 0.0) )
        break;
      if ( (_WORD)v48 == 169 )
      {
        v37 = a1[15];
        a1[8] = 0;
        if ( v37 )
        {
          a1[16] = 0;
          qfree(v37, v7);
          a1[15] = 0;
          a1[17] = 0;
        }
        break;
      }
      v6 = (const char *)&v46;
      if ( !sub_56140(*a1, (__int64)&v46) )
      {
        if ( (unsigned __int8)sub_54C80(a1, (__int64)&v46, v8, v9) )
        {
          v7 += WORD1(v48);
          if ( (unsigned __int64)v7 < a2[1] )
            continue;
        }
      }
      break;
    }
  }
  v10 = a1 + 27;
  sub_58300((__int64)a1);
  do
  {
    v12 = v10[2];
    *(_BYTE *)v10 = 0;
    if ( v12 )
    {
      v10[3] = 0;
      qfree(v12, v6, 0.0);
      v10[2] = 0;
      v10[4] = 0;
    }
    v10 += 5;
  }
  while ( v10 != a1 + 42 );
  v13 = a1[9];
  if ( v13 )
  {
    a1[10] = 0;
    qfree(v13, v6, 0.0);
    a1[9] = 0;
    a1[11] = 0;
  }
  v43 = -1;
  v42 = 0;
  v44 = 0;
  if ( v7 == (const char *)-1LL && a2 )
    v14 = *a2;
  else
    v14 = (__int64)v7;
  v45 = v14;
  for ( i = func_tail_iterator_set(&v42, a2, v7, v11); i; i = func_item_iterator_next(&v42, sub_31320, 0) )
  {
    v17 = decode_insn(&v46, v45, v16, 0.0);
    v18 = *a1;
    if ( !v17 )
      goto LABEL_26;
    if ( sub_34FC0(v18, (__int64)&v46) )
      sub_56240((__int64)a1, (const char *)v47);
  }
  v18 = *a1;
LABEL_26:
  v19 = 0;
  for ( j = 0; v19 < (unsigned __int64)a1[16]; j = v19 )
  {
    v21 = a1[15];
    v22 = *(_QWORD *)(v18 + 104);
    v38 = 1;
    netnode_supset(v22, *(_QWORD *)(v21 + 8 * j), &v38, 1, 256);
    ++v19;
    v18 = *a1;
  }
  v23 = 0;
  for ( k = 0; v23 < (unsigned __int64)a1[23]; k = v23 )
  {
    v25 = a1[22];
    v26 = *(_QWORD *)(v18 + 104);
    v39 = 1;
    netnode_supset(v26, *(_QWORD *)(v25 + 24 * k + 8), &v39, 1, 256);
    ++v23;
    v18 = *a1;
  }
  v27 = a1[25];
  if ( v27 != -1 )
  {
    v36 = *(_QWORD *)(v18 + 104);
    v40 = 1;
    netnode_supset(v36, v27, &v40, 1, 256);
    v18 = *a1;
  }
  v28 = 0;
  for ( m = 0; v28 < (unsigned __int64)a1[19]; m = v28 )
  {
    v30 = a1[18];
    v31 = *(_QWORD *)(v18 + 104);
    v41 = 2;
    netnode_supset(v31, *(_QWORD *)(v30 + 8 * m), &v41, 1, 256);
    ++v28;
    v18 = *a1;
  }
  sub_54A30((__int64)(a1 + 1), v18, *a2);
  v32 = a2[4];
  v33 = a1[8];
  if ( v33 < v32 )
  {
    a1[8] = v32;
    v33 = v32;
  }
  v34 = set_frame_size(a2, v33, 0, 0);
  if ( v42 )
    lock_func_range(v42, 0);
  return v34;
}
