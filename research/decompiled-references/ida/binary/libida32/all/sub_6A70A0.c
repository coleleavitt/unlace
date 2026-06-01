unsigned __int64 __fastcall sub_6A70A0(__int64 a1, void **a2, unsigned int a3, __int64 a4, double a5, double a6)
{
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  char v12; // r9
  __int64 v13; // rdx
  char v14; // r12
  unsigned int *v15; // rax
  unsigned int *v16; // rbp
  unsigned int *v17; // r15
  unsigned int v18; // edx
  _QWORD *v19; // rbp
  _QWORD *v20; // rbx
  _QWORD *v21; // rbp
  __int64 *v22; // r15
  __int64 v23; // r13
  _QWORD *v24; // rdi
  unsigned int v25; // eax
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rdx
  _QWORD *v28; // r8
  _QWORD *v29; // rax
  _QWORD *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned int v33; // esi
  __int64 *v34; // rbx
  __int64 v35; // r15
  unsigned int tinfo_tid; // eax
  int v38; // [rsp+Ch] [rbp-5Ch]
  __int64 v39; // [rsp+10h] [rbp-58h] BYREF
  __int16 v40; // [rsp+18h] [rbp-50h]
  char v41; // [rsp+1Ah] [rbp-4Eh]
  unsigned __int64 v42; // [rsp+28h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v9 = *(_QWORD **)(a1 + 8);
  if ( !v9[3] )
  {
    v10 = (_QWORD *)v9[2];
    if ( !v10 )
      return v42 - __readfsqword(0x28u);
    while ( *((_DWORD *)v10 + 2) != a3 )
    {
      v10 = (_QWORD *)*v10;
      if ( !v10 )
        return v42 - __readfsqword(0x28u);
    }
LABEL_6:
    v12 = *(_BYTE *)(a4 + 8);
    v13 = v10[2];
    v38 = v13;
    v14 = v12 ^ *((_BYTE *)v10 + 24) | *((_BYTE *)v10 + 25) ^ *(_BYTE *)(a4 + 9);
    if ( *(_WORD *)(a4 + 8) == *((_WORD *)v10 + 12) )
      v14 = *(_QWORD *)a4 != (unsigned int)v13;
    v15 = *(unsigned int **)(a1 + 96);
    v16 = &v15[*(_QWORD *)(a1 + 104)];
    if ( v16 != v15 )
    {
      v17 = *(unsigned int **)(a1 + 96);
      while ( 1 )
      {
        v18 = *v17++;
        sub_69F8C0(*(_QWORD **)a1, a3, v18, v38, *(_DWORD *)a4, v12);
        if ( v16 == v17 )
          break;
        v12 = *(_BYTE *)(a4 + 8);
      }
    }
    v19 = *(_QWORD **)(a1 + 32);
    if ( v19 )
    {
      if ( v14 )
      {
        do
        {
          v31 = 32LL * v19[22];
          v32 = v31 + v19[6];
          if ( v31 != 32LL * v19[7] )
          {
            do
            {
              v33 = *(_DWORD *)(v32 + 24);
              v32 += 32;
              sub_69E750(*(__int64 **)a1, v33, 0);
            }
            while ( v32 != v19[6] + 32LL * v19[7] );
          }
          v34 = *(__int64 **)a1;
          v40 = 0;
          v35 = *(_QWORD *)(a1 + 8);
          v39 = 0;
          v41 = 0;
          sub_698930((__int64)&v39, v19 + 23);
          tinfo_tid = get_tinfo_tid(v19 + 23, 0);
          sub_6A6DA0(v34, a2, tinfo_tid, &v39, v35, a5, a6);
          v19 = (_QWORD *)*v19;
        }
        while ( v19 );
      }
      else
      {
        do
          v19 = (_QWORD *)*v19;
        while ( v19 );
      }
    }
    v20 = *(_QWORD **)(a1 + 72);
    v21 = &v20[*(_QWORD *)(a1 + 80)];
    while ( v21 != v20 )
    {
      v22 = *(__int64 **)a1;
      v40 = 0;
      v23 = *(_QWORD *)(a1 + 8);
      v39 = 0;
      v41 = 0;
      sub_698930((__int64)&v39, v20);
      v24 = v20++;
      v25 = get_tinfo_tid(v24, 0);
      sub_6A6DA0(v22, a2, v25, &v39, v23, a5, a6);
    }
    return v42 - __readfsqword(0x28u);
  }
  v26 = v9[1];
  v27 = a3 % v26;
  v28 = *(_QWORD **)(*v9 + 8 * v27);
  if ( !v28 )
    return v42 - __readfsqword(0x28u);
  v29 = (_QWORD *)*v28;
  if ( a3 == *(_DWORD *)(*v28 + 8LL) )
  {
LABEL_23:
    if ( !v28 )
      return v42 - __readfsqword(0x28u);
    v10 = (_QWORD *)*v28;
    if ( !*v28 )
      return v42 - __readfsqword(0x28u);
    goto LABEL_6;
  }
  while ( 1 )
  {
    v30 = (_QWORD *)*v29;
    if ( !*v29 )
      break;
    v28 = v29;
    if ( v27 != *((unsigned int *)v30 + 2) % v26 )
      break;
    v29 = (_QWORD *)*v29;
    if ( a3 == *((_DWORD *)v30 + 2) )
      goto LABEL_23;
  }
  return v42 - __readfsqword(0x28u);
}

