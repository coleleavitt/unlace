unsigned __int64 __fastcall sub_1C0A0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  __int64 sreg; // rax
  int v6; // ecx
  __int64 v8; // rbp
  __int16 v9; // dx
  char v10; // al
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rbp
  __int16 v15; // r14
  __int64 qword; // r13
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int16 v21; // dx
  char v22; // al
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+18h] [rbp-50h]
  __int64 v28; // [rsp+20h] [rbp-48h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 16);
  v29 = __readfsqword(0x28u);
  sreg = get_sreg(v3, 68);
  if ( sreg != -1 )
  {
    v6 = *(unsigned __int16 *)(a2 + 24);
    if ( (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x1C000000000400LL )
    {
      if ( (unsigned __int16)(v6 - 120) <= 0x1Fu )
      {
        v12 = 4144458563LL;
        if ( _bittest64(&v12, (unsigned int)(v6 - 120)) )
        {
          v13 = *(__int16 *)(a2 + 96);
          v14 = v13 + sreg;
          if ( ((_WORD)v6 == 131 || (_WORD)v6 == 126)
            && a1[45] < v14
            && v14 < a1[46]
            && (unsigned __int8)is_loaded(v13 + sreg) )
          {
            v15 = *(_WORD *)(a2 + 24);
            if ( v15 == 126 )
              qword = get_qword(v14);
            else
              qword = (int)get_dword(v14);
            v17 = a1[45];
            if ( v17 >= v14
              || v14 >= a1[47] + v17
              || (unsigned __int8)is_mapped(qword) && (_WORD)qword != (unsigned __int16)getinf(93) )
            {
              v20 = *(_QWORD *)(a2 + 16);
              v25 = 0;
              v27 = 0;
              v28 = 0;
              si128 = _mm_load_si128((const __m128i *)&xmmword_595D0);
              if ( !(unsigned __int8)get_fixup(&v25, v20)
                && (*(_WORD *)(a2 + 26) <= 2u
                 || !(unsigned __int8)getinf_flag(3, 32)
                 || !(unsigned __int8)get_fixup(&v25, *(_QWORD *)(a2 + 16) + 2LL))
                || (v25 & 0x400000000LL) != 0 )
              {
                goto LABEL_31;
              }
              if ( (v25 & 0x100000000LL) != 0 )
              {
                v24 = si128.m128i_i64[0];
              }
              else
              {
                v24 = 0;
                if ( si128.m128i_i64[1] != -1 )
                  v24 = 16 * sel2para();
              }
              if ( v14 != v27 + v24 )
              {
LABEL_31:
                if ( v15 == 126 && *(_DWORD *)(a1[4] + 24LL) == 8 )
                {
                  v21 = 495;
                  v22 = 7;
                }
                else
                {
                  v21 = 205;
                  v22 = 2;
                }
                *(_WORD *)(a2 + 24) = v21;
                *(_BYTE *)(a2 + 85) = v22;
                *(_BYTE *)(a2 + 81) = 2;
                v23 = *(_QWORD *)(a1[4] + 16LL) & qword;
                *(_BYTE *)(a2 + 121) = 0;
                *(_QWORD *)(a2 + 96) = v23;
              }
            }
            else
            {
              sub_1BF10((__int64)a1, a2, qword, 0);
              v18 = *(_QWORD *)(a2 + 16);
              v19 = a1[19];
              v25 = 1;
              netnode_supset(v19, v18, &v25, 8, 364);
            }
          }
          else if ( (unsigned __int8)is_mapped(v14) )
          {
            *(_BYTE *)(a2 + 81) = 2;
            *(_QWORD *)(a2 + 96) = v14;
          }
        }
      }
    }
    else if ( (((_WORD)v6 - 31) & 0xFFFD) == 0 && *(_WORD *)(a2 + 86) == 28 && *(_BYTE *)(a2 + 121) == 5 )
    {
      v8 = sreg + *(__int16 *)(a2 + 128);
      if ( (unsigned __int8)is_mapped(v8) )
      {
        if ( *(_WORD *)(a2 + 24) == 33 && *(_DWORD *)(a1[4] + 24LL) == 8 )
        {
          v9 = 495;
          v10 = 7;
        }
        else
        {
          v9 = 205;
          v10 = 2;
        }
        *(_WORD *)(a2 + 24) = v9;
        *(_BYTE *)(a2 + 85) = v10;
        *(_BYTE *)(a2 + 81) = 2;
        v11 = *(_QWORD *)(a1[4] + 16LL) & v8;
        *(_BYTE *)(a2 + 121) = 0;
        *(_QWORD *)(a2 + 96) = v11;
      }
    }
  }
  return v29 - __readfsqword(0x28u);
}
