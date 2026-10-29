__int64 __fastcall sub_1EE200(__int64 a1, unsigned __int8 *a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r13d
  __int128 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  __int64 v15; // rcx
  unsigned int v16; // r15d
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned int v21; // r13d
  __int64 v22; // r12
  __int64 (__fastcall *v23)(); // rax
  __int64 *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  _DWORD *v27; // rax
  __int64 *v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // eax
  signed int v33; // eax
  __m128i v34; // xmm0
  unsigned int v35; // [rsp+Ch] [rbp-FCh]
  unsigned int v36; // [rsp+Ch] [rbp-FCh]
  int v37; // [rsp+18h] [rbp-F0h] BYREF
  int v38; // [rsp+1Ch] [rbp-ECh] BYREF
  _DWORD v39[4]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v40; // [rsp+30h] [rbp-D8h]
  __int64 v41; // [rsp+38h] [rbp-D0h]
  __int64 v42[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v44; // [rsp+58h] [rbp-B0h]
  __int64 v45; // [rsp+70h] [rbp-98h] BYREF
  __int128 v46; // [rsp+78h] [rbp-90h]
  __int64 v47; // [rsp+88h] [rbp-80h]
  int v48; // [rsp+90h] [rbp-78h]
  __m128i v49; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v51; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v52; // [rsp+C8h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( !a4 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( *(_DWORD *)v4 == 62 )
    {
      *(_BYTE *)(a1 + 40) = 1;
      return 0;
    }
    v6 = *a2;
    if ( (unsigned __int8)v6 <= 0xFu )
    {
      v8 = -33315;
      if ( !_bittest64(&v8, v6) )
      {
        if ( *(_BYTE *)(v4 + 64) != 8
          || (v18 = *(_DWORD *)(*(_QWORD *)(v4 + 72) + 284LL), (unsigned int)(v18 - 25) > 1) && v18 != 23 )
        {
          if ( !sub_11ED30((__int64)a2) )
          {
            if ( *a2 == 1 )
            {
              v21 = *((_DWORD *)a2 + 2);
              v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL) + 1504LL);
            }
            else
            {
              if ( *a2 != 9 )
                goto LABEL_9;
              v24 = *((__int64 **)a2 + 1);
              v25 = *v24;
              v26 = *((int *)v24 + 4);
              if ( *(_QWORD *)(v25 + 440) < v26 )
                sub_1ECB80(a2);
              v27 = (_DWORD *)(*(_QWORD *)(v25 + 432) + 104 * v26);
              if ( *v27 != 3 )
                goto LABEL_9;
              v21 = v27[2];
              v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL) + 1504LL);
            }
            if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 264LL))(v22, v21) )
              return 0;
            v23 = *(__int64 (__fastcall **)())(*(_QWORD *)v22 + 192LL);
            if ( v23 != sub_1342E0 )
            {
              if ( ((unsigned __int8 (__fastcall *)(__int64, _QWORD))v23)(v22, v21) )
                return 0;
            }
LABEL_9:
            v9 = -65536;
            if ( (unsigned __int8)sub_11E2C0(*(int ***)(a1 + 32), &v37, &v38, 0) )
            {
              v9 = (v38 << 19) | (unsigned __int16)(8 * v37);
            }
            else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 32) + 4LL) & 0x10) != 0 && *((_DWORD *)a2 + 1) == 16 )
            {
              v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 8LL);
              v20 = (unsigned __int8)getinf() ? (unsigned __int8)getinf() : *(_QWORD *)(v19 + 120);
              if ( v20 == 16 )
                v9 = 5242880;
            }
            *(_QWORD *)&v10 = *(_QWORD *)(a1 + 16);
            *((_QWORD *)&v10 + 1) = v42;
            v44 = 0;
            v42[0] = 0;
            v42[1] = 0;
            v43 = 0;
            sub_123EA0(v10, (__int64)a2, 0, v9);
            if ( (unsigned __int8)sub_64880(v42) && !(_QWORD)v44 )
              goto LABEL_13;
            if ( *a2 != 15 )
            {
              if ( *a2 != 9 )
              {
LABEL_13:
                sub_1ECF20((__int64)v42, *(_QWORD **)(*(_QWORD *)(a1 + 16) + 64LL), v11, v12);
                v13 = *(_QWORD **)(a1 + 48);
                if ( !(unsigned __int8)sub_64820(v42, v13) || !(unsigned __int8)sub_317F40(v13 + 2, &v43) )
                  a2[1] |= 0x10u;
                if ( v43 )
                {
                  *(_QWORD *)&v44 = 0;
                  qfree(v43);
                }
                qfree(v42[0]);
                return 0;
              }
              if ( *(_QWORD *)(**((_QWORD **)a2 + 1) + 440LL) < (unsigned __int64)*(int *)(*((_QWORD *)a2 + 1) + 16LL) )
                sub_1ECB80(v42);
            }
            v45 = 0;
            v47 = 0;
            v48 = -1;
            v46 = 0;
            if ( (unsigned __int8)calc_tinfo_gaps() && (_QWORD)v46 )
            {
              if ( *a2 == 9
                && *(_QWORD *)(**((_QWORD **)a2 + 1) + 440LL) < (unsigned __int64)*(int *)(*((_QWORD *)a2 + 1) + 16LL) )
              {
                sub_1ECB80(&v45);
              }
              v39[0] = 0;
              copy_argloc();
              v16 = *((_DWORD *)a2 + 1);
              if ( *a2 == 9 )
              {
                v28 = *((__int64 **)a2 + 1);
                v29 = *v28;
                v30 = *((int *)v28 + 4);
                if ( *(_QWORD *)(*v28 + 440) < v30 )
                  sub_1ECB80(v39);
                v31 = v28[1];
                v15 = *(unsigned int *)(*(_QWORD *)(v29 + 432) + 104 * v30 + 88);
                v32 = v31;
                if ( (int)v31 > 0 )
                {
                  v35 = v15;
                  v40 = 0;
                  v41 = (int)v31;
                  rangeset_t_add();
                  v16 = *((_DWORD *)a2 + 1);
                  v15 = v35;
                  v32 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 8LL);
                }
                v33 = v16 + v32;
                if ( (int)v15 > v33 )
                {
                  v34 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v33), _mm_cvtsi32_si128(v15));
                  v36 = v15;
                  v49 = _mm_unpacklo_epi32(v34, _mm_cmpgt_epi32((__m128i)0LL, v34));
                  rangeset_t_add();
                  v15 = v36;
                }
                v16 = v15;
              }
              if ( (unsigned int)sub_1C2C50((__int64)v39, (__int64)&v45, v16, v15) )
              {
                v17 = *(_QWORD *)(a1 + 16);
                v49 = 0u;
                v50 = 0;
                v51 = 0;
                sub_1C31B0((__int64)v39, (__int64)&v49, v16, *(_QWORD *)(*(_QWORD *)(v17 + 64) + 1440LL), 0);
                sub_64700(v42, v49.m128i_i64);
                sub_3180C0(&v43, &v50);
                if ( v50 )
                {
                  *(_QWORD *)&v51 = 0;
                  qfree(v50);
                }
                qfree(v49.m128i_i64[0]);
              }
              cleanup_argloc();
            }
            if ( v45 )
            {
              *(_QWORD *)&v46 = 0;
              qfree(v45);
            }
            goto LABEL_13;
          }
        }
      }
    }
  }
  return 0;
}
