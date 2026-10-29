__int16 __fastcall sub_AAE490(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rbp
  size_t v8; // rax
  const char *v9; // rsi
  const char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  unsigned int *v21; // rsi
  void *v22; // rdi
  __int64 v23; // rbx
  size_t v24; // rbp
  const void *v25; // rsi
  __int64 *v26; // r13
  __int64 v27; // r14
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v38[11]; // [rsp+0h] [rbp-58h] BYREF

  v5 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  switch ( *(_BYTE *)(v6 + 16) )
  {
    case 2:
    case 3:
    case 5:
    case 6:
      v9 = "A";
      goto LABEL_16;
    case 7:
      goto LABEL_17;
    case 0xA:
    case 0x1F:
    case 0x29:
      goto LABEL_21;
    case 0xB:
    case 0x22:
    case 0x2A:
      goto LABEL_14;
    case 0xD:
      LOWORD(v8) = (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 18LL) >> 3) & 0x1FF;
      if ( (_WORD)v8 == 481 )
      {
        LOWORD(v8) = sub_995540(a2, "f");
        return v8;
      }
      if ( (unsigned __int16)v8 <= 0x1E1u )
      {
        if ( (_WORD)v8 == 434 )
          return v8;
        if ( (unsigned __int16)v8 > 0x1B2u )
        {
          if ( (unsigned __int16)v8 > 0x1DFu )
          {
            LOWORD(v8) = sub_995540(a2, "Dh");
          }
          else if ( (unsigned __int16)v8 < 0x1B4u )
          {
            LOWORD(v8) = sub_995540(a2, "v");
          }
          else
          {
            LOWORD(v8) = sub_995540(a2, "i");
          }
          return v8;
        }
        if ( (unsigned __int16)v8 <= 0x68u )
          return v8;
        if ( (unsigned __int16)v8 > 0x6Bu )
          goto LABEL_49;
LABEL_21:
        LOWORD(v8) = sub_995540(a2, "?");
        return v8;
      }
      if ( (_WORD)v8 == 486 )
      {
        LOWORD(v8) = sub_995540(a2, "g");
        return v8;
      }
      if ( (unsigned __int16)v8 <= 0x1E6u )
      {
        if ( (_WORD)v8 == 483 )
        {
          LOWORD(v8) = sub_995540(a2, "e");
          return v8;
        }
        if ( (unsigned __int16)v8 < 0x1E3u )
        {
          LOWORD(v8) = sub_995540(a2, "d");
          return v8;
        }
        if ( (_WORD)v8 == 484 )
        {
          LOWORD(v8) = sub_995540(a2, "DF16_");
          return v8;
        }
        goto LABEL_21;
      }
      if ( (unsigned __int16)v8 > 0x1EBu )
      {
LABEL_49:
        while ( (unsigned __int16)v8 > 0x1F0u )
          ;
        goto LABEL_21;
      }
      if ( (unsigned __int16)v8 >= 0x1E8u )
LABEL_14:
        LOWORD(v8) = sub_995540(a2, "P");
      return v8;
    case 0xE:
      v9 = "C";
LABEL_16:
      sub_995540(a2, v9);
LABEL_17:
      LOWORD(v8) = sub_AAE490(a1, a2, *(_QWORD *)(v6 + 32));
      return v8;
    case 0x19:
    case 0x1A:
      sub_995540(a2, "F");
      sub_AAE490(a1, a2, *(_QWORD *)(v6 + 24));
      if ( *(_BYTE *)(v6 + 16) == 26 )
      {
        v26 = (__int64 *)(v6 + 48);
        v27 = v6 + 48 + 8LL * *(unsigned __int16 *)(v6 + 22);
        if ( v27 != v6 + 48 )
        {
          do
          {
            v28 = *v26++;
            v38[0] = v28;
            v38[0] = sub_A73320(a1, v28);
            v38[0] = sub_A75DA0((__int64)a1, v38[0]);
            v29 = sub_6D5440(v38);
            sub_AAE490(a1, a2, v29);
          }
          while ( (__int64 *)v27 != v26 );
        }
        if ( *(char *)(v6 + 19) < 0 )
          sub_995540(a2, "z");
      }
      LOWORD(v8) = sub_995540(a2, "E");
      return v8;
    case 0x21:
      sub_995540(a2, "M");
      if ( *(_BYTE *)(v6 + 16) != 33 )
        v6 = sub_F63050(v6, "M", v30, v31);
      v32 = *(_QWORD *)(v6 + 40);
      v33 = 0;
      if ( ((*(__int64 *)(v32 + 8) >> 1) & 3) == 2 )
        v33 = *(_QWORD *)(v32 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      sub_AAE490(a1, a2, v33);
      LOWORD(v8) = sub_AAE490(a1, a2, *(_QWORD *)(v6 + 32));
      return v8;
    case 0x23:
    case 0x24:
      LOWORD(v8) = sub_995540(a2, "<objc_object>");
      return v8;
    case 0x2B:
      v10 = "R";
      goto LABEL_23;
    case 0x2C:
      v10 = "O";
LABEL_23:
      sub_995540(a2, v10);
      v14 = sub_9B4870(v6, (__int64)v10, v11, v12, v13);
      goto LABEL_24;
    case 0x2F:
      v16 = sub_F60F10(v6, a2, v5, a4, a5);
      v14 = sub_6F3660(v16);
      if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        v14 = a1[2340];
LABEL_24:
      LOWORD(v8) = sub_AAE490(a1, a2, v14);
      return v8;
    case 0x30:
      v17 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v5, a4, a5);
      v18 = *(_QWORD *)(v17 + 40);
      if ( (v18 & 7) == 0 && (v19 = v18 & 0xFFFFFFFFFFFFFFF8LL, (v18 & 0xFFFFFFFFFFFFFFF8LL) != 0)
        || (v34 = *(_QWORD *)(v17 + 120), (v34 & 4) == 0)
        && (v35 = v34 & 0xFFFFFFFFFFFFFFF8LL) != 0
        && (v36 = *(_QWORD *)(v35 + 40), (v36 & 7) == 0)
        && (v19 = v36 & 0xFFFFFFFFFFFFFFF8LL, (v36 & 0xFFFFFFFFFFFFFFF8LL) != 0) )
      {
        v20 = sub_227B910(a2, **(unsigned int **)(v19 + 16));
        v21 = *(unsigned int **)(v19 + 16);
        v22 = *(void **)(v20 + 32);
        v23 = v20;
        v24 = *v21;
        v25 = v21 + 4;
        v8 = *(_QWORD *)(v20 + 24) - (_QWORD)v22;
        if ( v24 > v8 )
        {
          LOWORD(v8) = sub_227BF10(v23, v25, v24);
        }
        else if ( v24 )
        {
          LOWORD(v8) = (unsigned __int16)memcpy(v22, v25, v24);
          *(_QWORD *)(v23 + 32) += v24;
        }
      }
      else
      {
        LOWORD(v8) = sub_995540(a2, "<anonymous_record>");
      }
      return v8;
    case 0x39:
    case 0x3A:
      v15 = sub_995540(a2, "Dv");
      sub_AAE350((__int64)v38, (__int64)a1, v6);
      LOWORD(v8) = sub_227B930(v15, v38[0]);
      return v8;
    default:
      LOWORD(v8) = *(_WORD *)(v5 + 8) & 0xFFF0;
      return v8;
  }
}
