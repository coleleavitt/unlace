__int64 __fastcall sub_E7F0E0(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int64 v5; // r12
  unsigned __int8 v6; // cl
  __int64 v7; // rax
  unsigned __int8 v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // r8
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // r10
  int *v19; // r15
  int v20; // eax
  int v21; // eax
  int v23; // r13d
  __int64 v24; // r11
  int v25; // edx
  __int64 v26; // r8
  bool v27; // zf
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // r9
  __int64 *v31; // rax
  __int64 *v32; // rdx
  int v33; // eax
  int v34; // ecx
  int v35; // esi
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // esi
  __int64 v39; // r8
  __m128i si128; // xmm1
  __int64 v41; // rax
  unsigned __int64 v42; // [rsp+0h] [rbp-68h] BYREF
  __int64 v43; // [rsp+8h] [rbp-60h] BYREF
  __int64 *v44; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v45; // [rsp+18h] [rbp-50h] BYREF
  __m128i v46[4]; // [rsp+20h] [rbp-48h] BYREF

  v43 = a2;
  v5 = sub_E78790(a2);
  v6 = *(_BYTE *)(v5 + 8) & 0x7F;
  if ( v6 > 0x12u )
  {
    if ( ((v6 + 94) & 0x7Fu) <= 5 )
      goto LABEL_3;
    return 0;
  }
  if ( ((1LL << v6) & 0x40182) == 0 )
    return 0;
LABEL_3:
  if ( (*(_BYTE *)(v43 + 28) & 0x7Fu) - 59 <= 2
    && (v7 = *(_QWORD *)(v43 + 128)) != 0
    && (*(_BYTE *)(v7 + 10) & 0x20) != 0 )
  {
    *a3 = 1;
    return 1;
  }
  else
  {
    v8 = sub_B81B70(v43);
    if ( !v8 )
      goto LABEL_58;
    if ( v8 <= 3u )
    {
      if ( (*(_BYTE *)(v43 + 28) & 0x7Fu) - 58 <= 4 && !*(_QWORD *)(v43 + 40) )
      {
        v41 = *(_QWORD *)(v43 + 120);
        if ( ((v41 & 4) != 0 || (v41 & 0xFFFFFFFFFFFFFFF8LL) == 0)
          && !sub_A681F0(*(_QWORD *)(a1 + 8))
          && !sub_A681D0(*(_QWORD *)(a1 + 8)) )
        {
          return 0;
        }
      }
      v13 = *(_DWORD *)(a1 + 168);
      if ( v13 )
      {
        v14 = v43;
        v12 = v13 - 1;
        v15 = *(_QWORD *)(a1 + 152);
        v10 = v43;
        v16 = v12 & (((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4));
        v17 = v15 + 16LL * v16;
        v18 = *(_QWORD *)v17;
        if ( v43 == *(_QWORD *)v17 )
          goto LABEL_12;
        v23 = 1;
        v24 = 0;
        if ( v18 != -4096 )
        {
          while ( 1 )
          {
            if ( v18 == -8192 && !v24 )
              v24 = v17;
            v16 = v12 & (v23 + v16);
            v17 = v15 + 16LL * v16;
            v18 = *(_QWORD *)v17;
            if ( v43 == *(_QWORD *)v17 )
              break;
            if ( v18 == -4096 )
            {
              if ( v24 )
                v17 = v24;
              goto LABEL_21;
            }
            ++v23;
          }
LABEL_12:
          v19 = (int *)(v17 + 8);
          v20 = *(_DWORD *)(v17 + 8);
          if ( v20 )
          {
            v21 = v20 + 1;
LABEL_14:
            *a3 = v21;
            return 1;
          }
LABEL_26:
          v28 = *(_QWORD *)(v14 + 40);
          v42 = v5;
          v29 = v28 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v28 & 7) != 0 )
            v29 = 0;
          v42 = v29;
          v46[0] = (__m128i)_mm_loadh_ps((const double *)&v42);
          v27 = (unsigned __int8)sub_E3BD30((__int64 *)(a1 + 128), v46[0].m128i_i64, &v44) == 0;
          v31 = v44;
          if ( !v27 )
          {
            v32 = v44 + 2;
            v33 = *((_DWORD *)v44 + 4);
            v34 = v33 + 1;
            v21 = v33 + 2;
LABEL_30:
            *(_DWORD *)v32 = v34;
            *v19 = v34;
            goto LABEL_14;
          }
          v35 = *(_DWORD *)(a1 + 136);
          v36 = *(unsigned int *)(a1 + 144);
          v45 = v44;
          v37 = (unsigned int)(v35 + 1);
          v38 = 2 * v36;
          v39 = (unsigned int)(4 * v37);
          if ( (unsigned int)v39 < 3 * (int)v36 )
          {
            if ( (int)v36 - *(_DWORD *)(a1 + 140) - (int)v37 > (unsigned int)v36 >> 3 )
              goto LABEL_33;
            v38 = v36;
          }
          sub_E3E1A0(a1 + 128, v38, v37, v36, v39, v30);
          sub_E3BD30((__int64 *)(a1 + 128), v46[0].m128i_i64, &v45);
          LODWORD(v37) = *(_DWORD *)(a1 + 136) + 1;
          v31 = v45;
LABEL_33:
          v27 = *v31 == -4096;
          *(_DWORD *)(a1 + 136) = v37;
          if ( !v27 || v31[1] != -4096 )
            --*(_DWORD *)(a1 + 140);
          si128 = _mm_load_si128(v46);
          v32 = v31 + 2;
          *((_DWORD *)v31 + 4) = 0;
          v34 = 1;
          *(__m128i *)v31 = si128;
          v21 = 2;
          goto LABEL_30;
        }
LABEL_21:
        v25 = *(_DWORD *)(a1 + 160);
        v46[0].m128i_i64[0] = v17;
        v9 = (unsigned int)(v25 + 1);
        v11 = (unsigned int)(4 * v9);
        if ( (unsigned int)v11 < 3 * v13 )
        {
          v26 = v13 >> 3;
          if ( v13 - *(_DWORD *)(a1 + 164) - (unsigned int)v9 > (unsigned int)v26 )
          {
LABEL_23:
            v27 = *(_QWORD *)v17 == -4096;
            *(_DWORD *)(a1 + 160) = v9;
            if ( !v27 )
              --*(_DWORD *)(a1 + 164);
            *(_DWORD *)(v17 + 8) = 0;
            v19 = (int *)(v17 + 8);
            *(_QWORD *)v17 = v10;
            v14 = v43;
            goto LABEL_26;
          }
          sub_AB9120((__int64 *)(a1 + 152), v13, v9, v43, v26, v12);
LABEL_45:
          sub_A864D0((__int64 *)(a1 + 152), &v43, v46);
          v10 = v43;
          LODWORD(v9) = *(_DWORD *)(a1 + 160) + 1;
          v17 = v46[0].m128i_i64[0];
          goto LABEL_23;
        }
      }
      else
      {
        v46[0].m128i_i64[0] = 0;
      }
      sub_AB9120((__int64 *)(a1 + 152), 2 * v13, v9, v10, v11, v12);
      goto LABEL_45;
    }
    if ( v8 > 6u )
LABEL_58:
      BUG();
    *a3 = sub_A8BD70(*(_QWORD *)(a1 + 8), v43, *(_BYTE *)(a1 + 28));
    return 1;
  }
}
