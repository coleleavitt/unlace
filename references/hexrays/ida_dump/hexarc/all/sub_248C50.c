_QWORD *__fastcall sub_248C50(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // rbp
  _QWORD *v7; // r13
  __m128i *v8; // rax
  __int64 (__fastcall *v10)(__int64, int); // rax
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64, int, int); // rax
  __int64 v13; // rsi
  _QWORD *v14; // r13
  __int64 (__fastcall *v15)(__int64, int, int); // rax
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 (__fastcall *v18)(__int64, int, int); // rax
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rdx
  unsigned __int64 v24; // rax

  v5 = a2;
  switch ( *(_DWORD *)(a1[38] + 4LL * a2) )
  {
    case 0:
      v22 = *(_QWORD *)(a1[22] + 8LL);
      if ( *(_DWORD *)(v22 + 64) > a2 )
        return sub_248AC0((__int64)a1, *(_QWORD *)(*(_QWORD *)(v22 + 528) + 8LL * a2), a3, a4, a5);
      v23 = (_QWORD *)a1[30];
      if ( !v23 )
        goto LABEL_21;
      v24 = *v23 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v24 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( (*(_BYTE *)v24 & 2) != 0 )
              goto LABEL_21;
            if ( *(_DWORD *)(v24 + 24) <= a2 )
              break;
            v24 = *(_QWORD *)(v24 + 8);
          }
          if ( *(_DWORD *)(v24 + 24) >= a2 )
            break;
          v24 = *(_QWORD *)(v24 + 16);
        }
        if ( v23 == (_QWORD *)v24 )
        {
LABEL_21:
          if ( !under_debugger )
            sub_37B760(50389);
LABEL_35:
          BUG();
        }
      }
      return nullptr;
    case 1:
      v10 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
      if ( v10 == sub_5EB10 )
      {
        v11 = 0;
        if ( a1[7] )
          v11 = *(unsigned int *)(a1[6] + 24LL * a2 + 8);
      }
      else
      {
        v11 = (unsigned int)v10((__int64)a1, a2);
      }
      return (_QWORD *)sub_24AAD0(a1, (unsigned int)a2, v11);
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
      v6 = j__qalloc_or_throw(64);
      *(_QWORD *)v6 = -1;
      *(_QWORD *)(v6 + 8) = -4294967230LL;
      *(_QWORD *)(v6 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v6 + 40) = 0;
      *(_QWORD *)(v6 + 48) = 0;
      *(_DWORD *)(v6 + 56) = 0;
      *(_OWORD *)(v6 + 24) = 0;
      v7 = (_QWORD *)j__qalloc_or_throw(32);
      *v7 = -1;
      v7[1] = -4294967225LL;
      v7[2] = 0xFFFFFFFFLL;
      v7[3] = 0;
      v8 = (__m128i *)qalloc_or_throw(24);
      v8[1].m128i_i64[0] = 0;
      *v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v8);
      v7[3] = v8;
      *(_QWORD *)(v6 + 24) = v7;
      sub_249190(a1, (unsigned int)a2, v7, 0);
      *(_QWORD *)v6 = **(_QWORD **)(v6 + 24);
      return (_QWORD *)v6;
    case 4:
      v12 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
      if ( v12 == sub_5EB50 )
        v13 = **(unsigned int **)(a1[6] + 24LL * a2);
      else
        v13 = (unsigned int)v12((__int64)a1, a2, 0);
      v14 = (_QWORD *)sub_248C50(a1, v13);
      v15 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
      if ( v15 == sub_5EB50 )
        v16 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v5) + 4LL);
      else
        v16 = (unsigned int)v15((__int64)a1, v5, 1);
      v17 = sub_248C50(a1, v16);
      v18 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
      if ( v18 == sub_5EB50 )
        v19 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24 * v5) + 8LL);
      else
        v19 = (unsigned int)v18((__int64)a1, v5, 2);
      v20 = sub_248C50(a1, v19);
      v21 = j__qalloc_or_throw(64);
      *(_QWORD *)(v21 + 24) = v14;
      v6 = v21;
      *(_QWORD *)(v21 + 32) = v17;
      *(_QWORD *)(v21 + 40) = v20;
      *(_QWORD *)v21 = -1;
      *(_DWORD *)(v21 + 8) = 16;
      *(_QWORD *)(v21 + 12) = -1;
      *(_QWORD *)(v21 + 48) = 0;
      *(_DWORD *)(v21 + 56) = 0;
      *(_QWORD *)v21 = *v14;
      sub_23CE40(v21, *(_QWORD *)(a1[41] + 112LL), 0);
      return (_QWORD *)v6;
    case 6:
    case 7:
    case 8:
    case 9:
      return (_QWORD *)sub_248FD0(a1, (unsigned int)a2, 0);
    default:
      if ( !under_debugger )
        sub_37B760(50390);
      goto LABEL_35;
  }
}
