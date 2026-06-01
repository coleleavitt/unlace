/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41EC80
// Address: 0x000000000041EC80

//----- (000000000041EC80) ----------------------------------------------------
__int64 __fastcall sub_41EC80(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v12; // rdi
  int v13; // esi
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v19; // eax
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  char v31[144]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v32; // [rsp+90h] [rbp-68h]
  unsigned __int64 v33; // [rsp+D8h] [rbp-20h]

  v33 = __readfsqword(0x28u);
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v12 = a1 + 1216;
  v13 = *(_DWORD *)(a2 + 4);
  v14 = *(_QWORD *)(a1 + 1224);
  if ( v14 )
  {
    v15 = v12;
    do
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(v14 + 16);
        v17 = *(_QWORD *)(v14 + 24);
        if ( v13 > *(_DWORD *)(v14 + 32) )
          break;
        v15 = v14;
        v14 = *(_QWORD *)(v14 + 16);
        if ( !v16 )
          goto LABEL_7;
      }
      v14 = *(_QWORD *)(v14 + 24);
    }
    while ( v17 );
LABEL_7:
    if ( v12 != v15 && v13 >= *(_DWORD *)(v15 + 32) )
    {
      v19 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
      if ( v19 == 7 )
      {
        if ( *(_BYTE *)(a2 + 16) )
          goto LABEL_24;
      }
      else
      {
        if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFF8) != 0 )
        {
          if ( (unsigned int)(v19 - 8) <= 1 )
            goto LABEL_17;
LABEL_24:
          *(_DWORD *)(v15 + 52) = 0;
          v20 = *(_DWORD *)(v15 + 60);
          if ( v20 != 2 )
          {
LABEL_18:
            if ( v20 == 3 )
              sub_414340(a1, *(_DWORD *)(a2 + 4));
            if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
              goto LABEL_21;
LABEL_26:
            if ( !*(_BYTE *)(v15 + 56) && *(_DWORD *)(a2 + 24) == 5 && *(_BYTE *)(a2 + 16) )
            {
              v21 = *(_DWORD *)(a2 + 4);
              if ( ptrace(
                     PTRACE_GETREGS,
                     v21,
                     0,
                     v31,
                     *(double *)a3.m128_u64,
                     *(double *)a4.m128_u64,
                     *(double *)a5.m128_u64,
                     *(double *)a6.m128_u64,
                     *(double *)a7.m128_u64,
                     *(double *)a8.m128_u64,
                     *(double *)a9.m128_u64,
                     *(double *)a10.m128_u64) )
              {
                *(double *)a3.m128_u64 = sub_410EA0(
                                           (int)"clear_tbit: error reading registers for thread %d\n",
                                           v21,
                                           v22,
                                           v23,
                                           v24,
                                           v25,
                                           a3,
                                           a4,
                                           a5,
                                           a6,
                                           a7,
                                           a8,
                                           a9,
                                           a10,
                                           v31[0]);
              }
              else
              {
                v26 = v32;
                if ( (v32 & 0x100) != 0 )
                {
                  BYTE1(v26) = BYTE1(v32) & 0xFE;
                  v32 = v26;
                  if ( ptrace(PTRACE_SETREGS, v21, 0, v31) )
                    *(double *)a3.m128_u64 = sub_410EA0(
                                               (int)"clear_tbit: error writting registers for thread %d\n",
                                               v21,
                                               v27,
                                               v28,
                                               v29,
                                               v30,
                                               a3,
                                               a4,
                                               a5,
                                               a6,
                                               a7,
                                               a8,
                                               a9,
                                               a10,
                                               v31[0]);
                }
              }
            }
            goto LABEL_21;
          }
LABEL_25:
          *(_QWORD *)(v15 + 44) = 0;
          sub_41CFB0(
            a1,
            *(_DWORD *)(v15 + 40),
            0,
            a3,
            a4,
            a5,
            a6,
            *(double *)a7.m128_u64,
            *(double *)a8.m128_u64,
            a9,
            a10);
          if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
            goto LABEL_21;
          goto LABEL_26;
        }
        if ( (unsigned int)(v19 - 3) > 1 )
          goto LABEL_24;
      }
LABEL_17:
      v20 = *(_DWORD *)(v15 + 60);
      if ( v20 != 2 )
        goto LABEL_18;
      goto LABEL_25;
    }
  }
  if ( v13 && (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 4 && !*(_BYTE *)(a1 + 1349) )
  {
    sub_411BD0(a1, "could not find thread %d!\n", v13);
    return 0xFFFFFFFFLL;
  }
LABEL_21:
  *(_BYTE *)(a1 + 1414) = 0;
  if ( !(unsigned __int8)sub_41E9C0(a1, 0, a3, a4, a5, a6, *(double *)a7.m128_u64, *(double *)a8.m128_u64, a9, a10) )
    return 0xFFFFFFFFLL;
  return 1;
}
// 41EDCF: variable 'a7' is possibly undefined
// 41EDCF: variable 'a8' is possibly undefined
// 41EEA6: variable 'v27' is possibly undefined
// 41EEA6: variable 'v28' is possibly undefined
// 41EEA6: variable 'v29' is possibly undefined
// 41EEA6: variable 'v30' is possibly undefined
// 41EEDB: variable 'v22' is possibly undefined
// 41EEDB: variable 'v23' is possibly undefined
// 41EEDB: variable 'v24' is possibly undefined
// 41EEDB: variable 'v25' is possibly undefined
