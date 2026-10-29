unsigned __int64 __fastcall sub_6C7FA0(__int64 a1, void **a2, unsigned __int64 a3, __int64 a4, double a5, double a6)
{
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  char v12; // r9
  char v13; // r12
  unsigned __int64 *v14; // rbx
  unsigned __int64 *v15; // rbp
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rbp
  _QWORD *v18; // rbx
  _QWORD *v19; // rbp
  __int64 *v20; // r15
  __int64 v21; // r13
  _QWORD *v22; // rdi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdx
  _QWORD *v26; // r9
  _QWORD *v27; // rax
  _QWORD *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rbx
  unsigned __int64 v31; // rsi
  __int64 *v32; // rbx
  __int64 v33; // r15
  unsigned __int64 tinfo_tid; // rax
  __int64 v36; // [rsp+8h] [rbp-60h]
  __int64 v37; // [rsp+10h] [rbp-58h] BYREF
  __int16 v38; // [rsp+18h] [rbp-50h]
  char v39; // [rsp+1Ah] [rbp-4Eh]
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v9 = *(_QWORD **)(a1 + 8);
  if ( !v9[3] )
  {
    v10 = (_QWORD *)v9[2];
    if ( !v10 )
      return v40 - __readfsqword(0x28u);
    while ( v10[1] != a3 )
    {
      v10 = (_QWORD *)*v10;
      if ( !v10 )
        return v40 - __readfsqword(0x28u);
    }
LABEL_6:
    v12 = *(_BYTE *)(a4 + 8);
    v36 = v10[2];
    v13 = v12 ^ *((_BYTE *)v10 + 24) | *((_BYTE *)v10 + 25) ^ *(_BYTE *)(a4 + 9);
    if ( *(_WORD *)(a4 + 8) == *((_WORD *)v10 + 12) )
      v13 = *(_QWORD *)a4 != v10[2];
    v14 = *(unsigned __int64 **)(a1 + 96);
    v15 = &v14[*(_QWORD *)(a1 + 104)];
    if ( v15 != v14 )
    {
      while ( 1 )
      {
        v16 = *v14++;
        sub_6C0400(*(_QWORD **)a1, a3, v16, v36, *(_QWORD *)a4, v12);
        if ( v15 == v14 )
          break;
        v12 = *(_BYTE *)(a4 + 8);
      }
    }
    v17 = *(_QWORD **)(a1 + 32);
    if ( v17 )
    {
      if ( v13 )
      {
        do
        {
          v29 = 32LL * v17[23];
          v30 = v29 + v17[7];
          if ( v29 != 32LL * v17[8] )
          {
            do
            {
              v31 = *(_QWORD *)(v30 + 24);
              v30 += 32;
              sub_6BF220(*(__int64 **)a1, v31, 0);
            }
            while ( v30 != v17[7] + 32LL * v17[8] );
          }
          v32 = *(__int64 **)a1;
          v38 = 0;
          v33 = *(_QWORD *)(a1 + 8);
          v37 = 0;
          v39 = 0;
          sub_6B9240((__int64)&v37, v17 + 24);
          tinfo_tid = get_tinfo_tid(v17 + 24, 0);
          sub_6C7CA0(v32, a2, tinfo_tid, &v37, v33, a5, a6);
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
      else
      {
        do
          v17 = (_QWORD *)*v17;
        while ( v17 );
      }
    }
    v18 = *(_QWORD **)(a1 + 72);
    v19 = &v18[*(_QWORD *)(a1 + 80)];
    while ( v19 != v18 )
    {
      v20 = *(__int64 **)a1;
      v38 = 0;
      v21 = *(_QWORD *)(a1 + 8);
      v37 = 0;
      v39 = 0;
      sub_6B9240((__int64)&v37, v18);
      v22 = v18++;
      v23 = get_tinfo_tid(v22, 0);
      sub_6C7CA0(v20, a2, v23, &v37, v21, a5, a6);
    }
    return v40 - __readfsqword(0x28u);
  }
  v24 = v9[1];
  v25 = a3 % v24;
  v26 = *(_QWORD **)(*v9 + 8 * v25);
  if ( !v26 )
    return v40 - __readfsqword(0x28u);
  v27 = (_QWORD *)*v26;
  if ( a3 == *(_QWORD *)(*v26 + 8LL) )
  {
LABEL_23:
    if ( !v26 )
      return v40 - __readfsqword(0x28u);
    v10 = (_QWORD *)*v26;
    if ( !*v26 )
      return v40 - __readfsqword(0x28u);
    goto LABEL_6;
  }
  while ( 1 )
  {
    v28 = (_QWORD *)*v27;
    if ( !*v27 )
      break;
    v26 = v27;
    if ( v25 != v28[1] % v24 )
      break;
    v27 = (_QWORD *)*v27;
    if ( a3 == v28[1] )
      goto LABEL_23;
  }
  return v40 - __readfsqword(0x28u);
}
