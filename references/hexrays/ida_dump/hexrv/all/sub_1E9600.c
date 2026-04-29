__int64 __fastcall sub_1E9600(__int64 a1, unsigned __int8 *a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r13d
  __int128 v10; // rdi
  _QWORD *v11; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  _QWORD *v16; // rax
  int *v17; // rsi
  unsigned int v18; // r15d
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned int v23; // r13d
  __int64 v24; // r12
  __int64 (*v25)(); // rax
  __int64 *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  _DWORD *v29; // rax
  __int64 *v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  signed int v34; // ecx
  int v35; // eax
  signed int v36; // eax
  unsigned __int64 v37; // rax
  __m128i v38; // xmm0
  signed int v39; // [rsp+Ch] [rbp-FCh]
  signed int v40; // [rsp+Ch] [rbp-FCh]
  int v41; // [rsp+18h] [rbp-F0h] BYREF
  int v42; // [rsp+1Ch] [rbp-ECh] BYREF
  _DWORD v43[4]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v44[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v45[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v47; // [rsp+58h] [rbp-B0h]
  __int64 v48; // [rsp+70h] [rbp-98h] BYREF
  __int128 v49; // [rsp+78h] [rbp-90h]
  __int64 v50; // [rsp+88h] [rbp-80h]
  int v51; // [rsp+90h] [rbp-78h]
  __m128i v52; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v54; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v55; // [rsp+C8h] [rbp-40h]

  v55 = __readfsqword(0x28u);
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
          || (v20 = *(_DWORD *)(*(_QWORD *)(v4 + 72) + 284LL), (unsigned int)(v20 - 25) > 1) && v20 != 23 )
        {
          if ( !sub_11A870((__int64)a2) )
          {
            if ( *a2 == 1 )
            {
              v23 = *((_DWORD *)a2 + 2);
              v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL) + 1504LL);
            }
            else
            {
              if ( *a2 != 9 )
                goto LABEL_9;
              v26 = *((__int64 **)a2 + 1);
              v27 = *v26;
              v28 = *((int *)v26 + 4);
              if ( *(_QWORD *)(v27 + 440) < v28 )
                sub_1E7F80(a2);
              v29 = (_DWORD *)(*(_QWORD *)(v27 + 432) + 104 * v28);
              if ( *v29 != 3 )
                goto LABEL_9;
              v23 = v29[2];
              v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL) + 1504LL);
            }
            if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 264LL))(v24, v23) )
              return 0;
            v25 = *(__int64 (**)())(*(_QWORD *)v24 + 192LL);
            if ( v25 != sub_12FE20 )
            {
              if ( ((unsigned __int8 (__fastcall *)(__int64, _QWORD))v25)(v24, v23) )
                return 0;
            }
LABEL_9:
            v9 = -65536;
            if ( (unsigned __int8)sub_119E00(*(int ***)(a1 + 32), &v41, &v42, 0) )
            {
              v9 = (v42 << 19) | (unsigned __int16)(8 * v41);
            }
            else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 32) + 4LL) & 0x10) != 0 && *((_DWORD *)a2 + 1) == 16 )
            {
              v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 8LL);
              v22 = (unsigned __int8)getinf(66) ? (unsigned __int8)getinf(66) : *(_QWORD *)(v21 + 120);
              if ( v22 == 16 )
                v9 = 5242880;
            }
            *(_QWORD *)&v10 = *(_QWORD *)(a1 + 16);
            *((_QWORD *)&v10 + 1) = v45;
            v47 = 0;
            v45[0] = 0;
            v45[1] = 0;
            v46 = 0;
            sub_11F9E0(v10, (__int64)a2, 0, v9);
            if ( (unsigned __int8)sub_60500(v45) && !(_QWORD)v47 )
              goto LABEL_13;
            if ( *a2 == 15 )
            {
              v16 = (_QWORD *)(*((_QWORD *)a2 + 1) + 48LL);
            }
            else
            {
              if ( *a2 != 9 )
              {
LABEL_13:
                sub_1E8320((__int64)v45, *(_QWORD **)(*(_QWORD *)(a1 + 16) + 64LL));
                v11 = *(_QWORD **)(a1 + 48);
                if ( !(unsigned __int8)sub_604A0(v45, v11) || !(unsigned __int8)sub_312E40(v11 + 2, &v46) )
                  a2[1] |= 0x10u;
                if ( v46 )
                {
                  *(_QWORD *)&v47 = 0;
                  qfree(v46);
                }
                qfree(v45[0]);
                return 0;
              }
              v13 = *((__int64 **)a2 + 1);
              v14 = *v13;
              v15 = *((int *)v13 + 4);
              if ( *(_QWORD *)(v14 + 440) < v15 )
                sub_1E7F80(v45);
              v16 = (_QWORD *)(*(_QWORD *)(v14 + 432) + 104 * v15 + 80);
            }
            v48 = 0;
            v50 = 0;
            v51 = -1;
            v49 = 0;
            if ( (unsigned __int8)calc_tinfo_gaps(&v48, *v16) && (_QWORD)v49 )
            {
              v17 = *((int **)a2 + 1);
              if ( *a2 == 9 )
              {
                v37 = v17[4];
                if ( *(_QWORD *)(*(_QWORD *)v17 + 440LL) < v37 )
                  sub_1E7F80(&v48);
                v17 = (int *)(*(_QWORD *)(*(_QWORD *)v17 + 432LL) + 104 * v37);
              }
              v43[0] = 0;
              copy_argloc(v43, v17);
              v18 = *((_DWORD *)a2 + 1);
              if ( *a2 == 9 )
              {
                v30 = *((__int64 **)a2 + 1);
                v31 = *v30;
                v32 = *((int *)v30 + 4);
                if ( *(_QWORD *)(*v30 + 440) < v32 )
                  sub_1E7F80(v43);
                v33 = v30[1];
                v34 = *(_DWORD *)(*(_QWORD *)(v31 + 432) + 104 * v32 + 88);
                v35 = v33;
                if ( (int)v33 > 0 )
                {
                  v39 = v34;
                  v44[0] = 0;
                  v44[1] = (int)v33;
                  rangeset_t_add(&v48, v44);
                  v18 = *((_DWORD *)a2 + 1);
                  v34 = v39;
                  v35 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 8LL);
                }
                v36 = v18 + v35;
                if ( v34 > v36 )
                {
                  v38 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v36), _mm_cvtsi32_si128(v34));
                  v40 = v34;
                  v52 = _mm_unpacklo_epi32(v38, _mm_cmpgt_epi32((__m128i)0LL, v38));
                  rangeset_t_add(&v48, &v52);
                  v34 = v40;
                }
                v18 = v34;
              }
              if ( (unsigned int)sub_1BE5D0((__int64)v43, (__int64)&v48, v18) )
              {
                v19 = *(_QWORD *)(a1 + 16);
                v52 = 0u;
                v53 = 0;
                v54 = 0;
                sub_1BEB30((__int64)v43, v52.m128i_i64, v18, *(_QWORD *)(*(_QWORD *)(v19 + 64) + 1440LL), nullptr);
                sub_60380(v45, v52.m128i_i64);
                sub_312FC0(&v46, &v53);
                if ( v53 )
                {
                  *(_QWORD *)&v54 = 0;
                  qfree(v53);
                }
                qfree(v52.m128i_i64[0]);
              }
              cleanup_argloc(v43);
            }
            if ( v48 )
            {
              *(_QWORD *)&v49 = 0;
              qfree(v48);
            }
            goto LABEL_13;
          }
        }
      }
    }
  }
  return 0;
}
