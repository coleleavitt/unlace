__int64 __fastcall sub_8F5F50(__int64 a1, int a2, int a3)
{
  int *v4; // rax
  __int64 v5; // r11
  _WORD *v6; // rbx
  int *v7; // rax
  __int64 v8; // r11
  _QWORD *v9; // rbx
  int *v10; // rax
  __int64 v11; // r11
  __int64 v12; // rbx
  __int64 v13; // rdi
  unsigned int v14; // eax
  int *v15; // rax
  __int64 v16; // r11
  _DWORD *v17; // rbx
  int *v18; // rax
  __int64 v19; // r11
  const __m128i *v20; // rbx
  __m128i *v21; // rax
  int *v22; // rax
  __int64 v23; // r11
  __int64 v24; // rbx
  __int64 v25; // rax
  int *v26; // rax
  __int64 v27; // r11
  int *v28; // rax
  __int64 v29; // r11
  __int64 v30; // rbp
  __int64 v31; // rbx
  int *v32; // rax
  __int64 v33; // r11
  __int64 *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdx
  int *v37; // rax
  __int64 v38; // r11
  _BYTE *v39; // rbx

  switch ( a2 )
  {
    case 0:
    case 1:
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v37 = sub_8CFFE0((__int64 *)(a1 + 768), a3);
        v39 = (_BYTE *)(*((_QWORD *)v37 + 1) + *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v37 + 1) + 32LL) + 16LL) + 40LL);
        *(_BYTE *)sub_A1A4E0(*(_QWORD *)(v38 + 568), 8) = *v39;
      }
      break;
    case 2:
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v4 = sub_8CFFE0((__int64 *)(a1 + 768), a3);
        v6 = (_WORD *)(*((_QWORD *)v4 + 1) + *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v4 + 1) + 32LL) + 16LL) + 40LL);
        *(_WORD *)sub_A1A4E0(*(_QWORD *)(v5 + 568), 8) = *v6;
      }
      break;
    case 4:
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v15 = sub_8CFFE0((__int64 *)(a1 + 768), a3);
        v17 = (_DWORD *)(*((_QWORD *)v15 + 1) + *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v15 + 1) + 32LL) + 16LL) + 40LL);
        *(_DWORD *)sub_A1A4E0(*(_QWORD *)(v16 + 568), 8) = *v17;
      }
      break;
    case 6:
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v7 = sub_8CFFE0((__int64 *)(a1 + 768), a3);
        v9 = (_QWORD *)(*((_QWORD *)v7 + 1) + *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v7 + 1) + 32LL) + 16LL) + 40LL);
        *(_QWORD *)sub_A1A4E0(*(_QWORD *)(v8 + 568), 8) = *v9;
      }
      break;
    case 8:
    case 9:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v10 = sub_8CFFE0((__int64 *)(a1 + 768), a3);
        v12 = *((_QWORD *)v10 + 1) + *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v10 + 1) + 32LL) + 16LL) + 40LL;
        v13 = sub_A1A4E0(*(_QWORD *)(v11 + 568), 16);
        v14 = *(_DWORD *)(v12 + 8);
        *(_DWORD *)(v13 + 8) = v14;
        if ( v14 > 0x40 )
          sub_2585B30(v13);
        else
          *(_QWORD *)v13 = *(_QWORD *)v12;
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v26 = sub_8CFFE0((__int64 *)(a1 + 768), a3);
        sub_8F5F00(
          *(_QWORD *)(v27 + 568),
          *((_QWORD *)v26 + 1) + *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v26 + 1) + 32LL) + 16LL) + 40LL);
      }
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v32 = sub_8CFFE0((__int64 *)(a1 + 768), a3);
        v34 = (__int64 *)(*((_QWORD *)v32 + 1)
                        + *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v32 + 1) + 32LL) + 16LL)
                        + 40LL);
        v35 = sub_A1A4E0(*(_QWORD *)(v33 + 568), 24);
        sub_835150(v35, v34, v36);
      }
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v22 = sub_8CFFE0((__int64 *)(a1 + 768), a3);
        v24 = *((_QWORD *)v22 + 1) + *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v22 + 1) + 32LL) + 16LL) + 40LL;
        v25 = sub_A1A4E0(*(_QWORD *)(v23 + 568), 56);
        sub_A1BFE0(v25, v24);
      }
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v18 = sub_8CFFE0((__int64 *)(a1 + 768), a3);
        v20 = (const __m128i *)(*((_QWORD *)v18 + 1)
                              + *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v18 + 1) + 32LL) + 16LL)
                              + 40LL);
        v21 = (__m128i *)sub_A1A4E0(*(_QWORD *)(v19 + 568), 24);
        *v21 = _mm_loadu_si128(v20);
        v21[1].m128i_i64[0] = v20[1].m128i_i64[0];
      }
      break;
    case 15:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v28 = sub_8CFFE0((__int64 *)(a1 + 768), a3);
        v30 = *((_QWORD *)v28 + 1) + *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v28 + 1) + 32LL) + 16LL) + 40LL;
        v31 = sub_A1A4E0(*(_QWORD *)(v29 + 568), 72);
        sub_A1BFE0(v31, v30);
        *(_QWORD *)(v31 + 56) = *(_QWORD *)(v30 + 56);
        *(_DWORD *)(v31 + 64) = *(_DWORD *)(v30 + 64);
      }
      break;
  }
  return 1;
}

