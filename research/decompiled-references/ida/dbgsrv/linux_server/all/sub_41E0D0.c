/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41E0D0
// Address: 0x000000000041E0D0

//----- (000000000041E0D0) ----------------------------------------------------
__int64 __fastcall sub_41E0D0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  int v14; // r14d
  _DWORD *v15; // r12
  int v16; // ebp
  __int64 v17; // rbx
  int *v18; // rax
  int *v19; // r15
  int v20; // r14d
  unsigned int v21; // r8d
  int v22; // r10d
  int v23; // r8d
  __int64 v24; // rbp
  int v25; // r13d
  unsigned int i; // eax
  __int64 v27; // rdx
  __int64 v28; // rdx
  double v29; // xmm4_8
  double v30; // xmm5_8
  unsigned __int64 v31; // rcx
  int *v33; // rax
  char v34; // [rsp+0h] [rbp-78h]
  unsigned __int64 v35; // [rsp+0h] [rbp-78h]
  unsigned __int64 v36; // [rsp+8h] [rbp-70h]
  unsigned int v37; // [rsp+24h] [rbp-54h]
  int v38; // [rsp+28h] [rbp-50h]
  int v39; // [rsp+2Ch] [rbp-4Ch]
  _QWORD v40[9]; // [rsp+30h] [rbp-48h]

  v14 = a6;
  v15 = a4;
  v16 = a5;
  v17 = a3;
  v37 = a2;
  v40[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 792) )
    sub_410D40(
      a4,
      (int)a5,
      (__int64)"WRITE MEMORY %a %d bytes:\n",
      a3,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      v34);
  if ( (_BYTE)v14 )
  {
    sub_41C660(
      a1,
      0,
      1,
      *(double *)a7.m128_u64,
      a8,
      a9,
      a10,
      *(double *)a11.m128_u64,
      *(double *)a12.m128_u64,
      a13,
      a14);
    if ( a2 == -1 )
      v37 = *(_DWORD *)(a1 + 1340);
    v33 = __errno_location();
    *v33 = 0;
    v19 = v33;
    if ( v16 <= 0 )
    {
LABEL_19:
      sub_41CFB0(a1, 0, 1, a7, a8, a9, a10, v29, v30, a13, a14);
      return (unsigned int)v16;
    }
  }
  else
  {
    if ( a2 == -1 )
      v37 = *(_DWORD *)(a1 + 1340);
    v18 = __errno_location();
    *v18 = 0;
    v19 = v18;
    if ( v16 <= 0 )
      return (unsigned int)v16;
  }
  v39 = v16;
  v38 = v14;
  v20 = v16;
  while ( 1 )
  {
    v21 = 8;
    v35 = v17 & 0xFFFFFFFFFFFFFFF8LL;
    v22 = v17 & 7;
    if ( (v17 & 7) != 0 )
    {
      v23 = 8 - v22;
      if ( 8 - v22 > v20 )
        v23 = v20;
      v24 = v23;
      v25 = v23;
      if ( v23 )
      {
        for ( i = 0; i < v23; ++i )
        {
          v27 = i;
          *((_BYTE *)v40 + v27) = *((_BYTE *)v15 + v27);
        }
      }
    }
    else
    {
      if ( v20 <= 8 )
        v21 = v20;
      v24 = (int)v21;
      v25 = v21;
      if ( v21 >= 8 )
      {
        *(_QWORD *)((char *)&v38 + v21) = *(_QWORD *)((char *)v15 + v21 - 8);
      }
      else if ( (v21 & 4) != 0 )
      {
        LODWORD(v40[0]) = *v15;
        *(int *)((char *)&v39 + v21) = *(_DWORD *)((char *)v15 + v21 - 4);
      }
      else
      {
        LOBYTE(v40[0]) = *(_BYTE *)v15;
        if ( (v21 & 2) != 0 )
          *(_WORD *)((char *)&v39 + v21 + 2) = *(_WORD *)((char *)v15 + v21 - 2);
      }
      if ( v20 > 7 )
      {
        v31 = v40[0];
        v24 = 8;
        v25 = 8;
        goto LABEL_16;
      }
    }
    v28 = ptrace(PTRACE_PEEKTEXT, v37, v35, 0);
    if ( *v19 )
      break;
    v31 = v28
        ^ (0xFFFFFFFFFFFFFFFFLL >> (8 * (8 - (unsigned __int8)v24)) << (8 * ((unsigned __int8)v17 & 7u)))
        & (v28
         ^ (v40[0] << (8 * ((unsigned __int8)v17 & 7u))));
    v40[0] = v31;
LABEL_16:
    *v19 = 0;
    v36 = v31;
    ptrace(PTRACE_POKETEXT, *(unsigned int *)(a1 + 1340), v35);
    if ( *v19 )
    {
      *v19 = 0;
      ptrace(PTRACE_POKEDATA, *(unsigned int *)(a1 + 1340), v35, v36);
      if ( *v19 )
        break;
    }
    v20 -= v25;
    v15 = (_DWORD *)((char *)v15 + v24);
    v17 += v24;
    if ( v20 <= 0 )
    {
      v16 = v39;
      if ( !(_BYTE)v38 )
        return (unsigned int)v16;
      goto LABEL_19;
    }
  }
  v16 = 0;
  if ( (_BYTE)v38 )
    goto LABEL_19;
  return (unsigned int)v16;
}
// 41E29A: conditional instruction was optimized away because ebp.4 is in (1..8)
// 41E357: conditional instruction was optimized away because ebp.4 is in (1..8)
// 41E3F0: variable 'v34' is possibly undefined
// 41E26A: variable 'v29' is possibly undefined
// 41E26A: variable 'v30' is possibly undefined
// 41E3A4: variable 'a11' is possibly undefined
// 41E3A4: variable 'a12' is possibly undefined
