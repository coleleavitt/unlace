__int64 __fastcall sub_3F0080(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int16 v6; // r14
  char v7; // r15
  __m128i v8; // xmm0
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 insn; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rsi
  __int64 v29; // rdi
  void *v31; // [rsp+0h] [rbp-208h]
  __int64 v32; // [rsp+0h] [rbp-208h]
  __int64 v33; // [rsp+8h] [rbp-200h]
  __int64 v34; // [rsp+8h] [rbp-200h]
  __int64 v35; // [rsp+10h] [rbp-1F8h]
  __int64 v36; // [rsp+10h] [rbp-1F8h]
  __int64 v37; // [rsp+18h] [rbp-1F0h]
  char v38; // [rsp+2Fh] [rbp-1D9h] BYREF
  _OWORD v39[2]; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v40; // [rsp+50h] [rbp-1B8h]
  _BYTE v41[360]; // [rsp+60h] [rbp-1A8h] BYREF
  _QWORD v42[8]; // [rsp+1C8h] [rbp-40h] BYREF

  v42[0] = __readfsqword(0x28u);
  memset(v41, 255, 24);
  v3 = &v41[40];
  *(_QWORD *)&v41[24] = 0;
  *(_QWORD *)&v41[32] = 0;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 5;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *(v3 - 2) = 0;
  }
  while ( v42 != v3 );
  v4 = *(_QWORD *)(a2 + 72);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_WORD *)(a2 + 86);
  v7 = *(_BYTE *)(a2 + 85);
  v39[0] = _mm_loadu_si128((const __m128i *)(a2 + 40));
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 56));
  v9 = *(unsigned __int16 *)(a2 + 26);
  v40 = v4;
  v39[1] = v8;
  if ( (unsigned int)decode_insn(v41, v5 + v9, v42, 0, 0, 0, *(double *)v8.m128i_i64) && *(_WORD *)&v41[24] == 79 )
  {
    v14 = *(_QWORD *)(a1 + 24);
    v15 = *(_QWORD *)(v14 + 16);
    v16 = *(_QWORD *)&v41[56] + 16LL * *(_QWORD *)v41;
    if ( v16 != v15 )
    {
      v15 &= v16;
      if ( v16 == -1 )
        v15 = -1;
    }
    if ( decode_prev_insn(v41, v5, v10, v14, v15, v11, *(double *)v8.m128i_i64, a3, v15, *(_QWORD *)&v41[16]) != -1 )
    {
      v18 = v33;
      if ( (*(_WORD *)&v41[24] == 216 || *(_WORD *)&v41[24] == 131 || *(_WORD *)&v41[24] == 7)
        && v41[41] == 1
        && *(_WORD *)&v41[46] == v6
        && v41[45] == v7 )
      {
        LODWORD(v33) = v6;
        qmemcpy(v31, v41, 0x168u);
        v37 = v18;
        if ( decode_prev_insn(v41, *(_QWORD *)&v41[16], v6, 0, v18, v17, *(double *)v8.m128i_i64, v31, v33, v35) != -1
          && *(_WORD *)&v41[24] == 122 )
        {
          v21 = (unsigned int)v34;
          v22 = v37;
          if ( v41[41] == 1 && (_DWORD)v34 == *(unsigned __int16 *)&v41[46] && v41[45] == v7 )
          {
            insn = *(_QWORD *)&v41[16];
            if ( *(_QWORD *)&v41[16] == v37 )
            {
              while ( 1 )
              {
                insn = decode_prev_insn(v41, insn, v21, v19, v22, v20, *(double *)v8.m128i_i64, v32, v34, v36);
                if ( insn == -1 )
                  break;
                if ( *(_WORD *)&v41[24] != 129 )
                {
                  if ( *(_WORD *)&v41[24] != 122 || sub_CFF70(0x30u, v39, &v41[80]) != 1 )
                    return -1;
                  v12 = *(_QWORD *)&v41[16];
                  v28 = *(_QWORD *)&v41[16];
                  while ( 1 )
                  {
                    v28 = decode_prev_insn(v41, v28, v24, v25, v26, v27, *(double *)v8.m128i_i64, v32, v34, v36);
                    if ( v28 == -1 )
                      break;
                    if ( *(_WORD *)&v41[24] != 129 )
                    {
                      if ( *(_WORD *)&v41[24] == 423 && sub_CFF70(0x30u, v39, &v41[40]) == 1 )
                        v12 = *(_QWORD *)&v41[16];
                      break;
                    }
                  }
                  v29 = *(_QWORD *)(a1 + 104);
                  v38 = 1;
                  netnode_supset(v29, v36, &v38, 1, 256);
                  return v12;
                }
              }
            }
          }
        }
      }
    }
  }
  return -1;
}
