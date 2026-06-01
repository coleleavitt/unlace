__int64 __fastcall sub_24FFD0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __m128i *v11; // rax
  __int64 (__fastcall *v13)(__int64, int); // rax
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, int, int); // rax
  __int64 v16; // rsi
  _QWORD *v17; // r13
  __int64 (__fastcall *v18)(__int64, int, int); // rax
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 (__fastcall *v21)(__int64, int, int); // rax
  __int64 v22; // rsi
  __int64 v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rdx
  unsigned __int64 v29; // rax

  v4 = (int)a2;
  switch ( *(_DWORD *)(a1[38] + 4LL * (int)a2) )
  {
    case 0:
      v27 = *(_QWORD *)(a1[22] + 8LL);
      if ( *(_DWORD *)(v27 + 64) > (int)a2 )
        return sub_24FE40((__int64)a1, *(_QWORD *)(*(_QWORD *)(v27 + 528) + 8LL * (int)a2), a3, a4);
      v28 = (_QWORD *)a1[30];
      if ( !v28 )
        goto LABEL_21;
      v29 = *v28 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v29 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (*(_BYTE *)v29 & 2) != 0 )
              goto LABEL_21;
            if ( *(_DWORD *)(v29 + 24) <= (int)a2 )
              break;
            v29 = *(_QWORD *)(v29 + 8);
          }
          if ( *(_DWORD *)(v29 + 24) >= (int)a2 )
            break;
          v29 = *(_QWORD *)(v29 + 16);
        }
        if ( v28 == (_QWORD *)v29 )
        {
LABEL_21:
          if ( !under_debugger )
            sub_383060(50389);
LABEL_35:
          BUG();
        }
      }
      return 0;
    case 1:
      v13 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
      if ( v13 == sub_65090 )
      {
        v14 = 0;
        if ( a1[7] )
          v14 = *(unsigned int *)(a1[6] + 24LL * (int)a2 + 8);
      }
      else
      {
        v14 = (unsigned int)v13((__int64)a1, a2);
      }
      return sub_251E50(a1, (unsigned int)a2, v14);
    case 2:
    case 3:
    case 5:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
      v5 = j__qalloc_or_throw(64, a2, a3, a4);
      *(_QWORD *)v5 = -1;
      *(_QWORD *)(v5 + 8) = -4294967230LL;
      *(_QWORD *)(v5 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v5 + 40) = 0;
      *(_QWORD *)(v5 + 48) = 0;
      *(_DWORD *)(v5 + 56) = 0;
      *(_OWORD *)(v5 + 24) = 0;
      v8 = (_QWORD *)j__qalloc_or_throw(32, a2, v6, v7);
      *v8 = -1;
      v8[1] = -4294967225LL;
      v8[2] = 0xFFFFFFFFLL;
      v8[3] = 0;
      v11 = (__m128i *)qalloc_or_throw(24, a2, v9, v10);
      v11[1].m128i_i64[0] = 0;
      *v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
      v8[3] = v11;
      *(_QWORD *)(v5 + 24) = v8;
      sub_250510(a1, (unsigned int)a2, v8, 0);
      *(_QWORD *)v5 = **(_QWORD **)(v5 + 24);
      return v5;
    case 4:
      v15 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
      if ( v15 == sub_650D0 )
        v16 = **(unsigned int **)(a1[6] + 24LL * (int)a2);
      else
        v16 = (unsigned int)v15((__int64)a1, a2, 0);
      v17 = (_QWORD *)sub_24FFD0(a1, v16);
      v18 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
      if ( v18 == sub_650D0 )
        v19 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v4) + 4LL);
      else
        v19 = (unsigned int)v18((__int64)a1, v4, 1);
      v20 = sub_24FFD0(a1, v19);
      v21 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
      if ( v21 == sub_650D0 )
        v22 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v4) + 8LL);
      else
        v22 = (unsigned int)v21((__int64)a1, v4, 2);
      v23 = sub_24FFD0(a1, v22);
      v26 = j__qalloc_or_throw(64, v22, v24, v25);
      *(_QWORD *)(v26 + 24) = v17;
      v5 = v26;
      *(_QWORD *)(v26 + 32) = v20;
      *(_QWORD *)(v26 + 40) = v23;
      *(_QWORD *)v26 = -1;
      *(_DWORD *)(v26 + 8) = 16;
      *(_QWORD *)(v26 + 12) = -1;
      *(_QWORD *)(v26 + 48) = 0;
      *(_DWORD *)(v26 + 56) = 0;
      *(_QWORD *)v26 = *v17;
      sub_2441C0(v26, *(_QWORD *)(a1[41] + 112LL), 0);
      return v5;
    case 6:
    case 7:
    case 8:
    case 9:
      return sub_250350(a1, (unsigned int)a2, 0);
    default:
      if ( !under_debugger )
        sub_383060(50390);
      goto LABEL_35;
  }
}
