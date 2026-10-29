void __fastcall sub_18ADA90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 *v11; // rbx
  __int64 *v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 *v16; // rbx
  __int64 *v17; // rbp
  __int64 v18; // rsi
  __int64 i; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  __int64 *v26; // rbx
  __int64 *v27; // rbp
  __int64 v28; // rsi

  if ( *(char *)(a2 + 28) >= 0 )
  {
    v6 = a2;
    switch ( *(_BYTE *)(a2 + 56) & 0x7F )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
        if ( !*(_QWORD *)(a2 + 104) )
          sub_A79820((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), a3, a4, a5, a6);
        v10 = *(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v10 )
        {
          v11 = *(__int64 **)(v10 + 8);
          v12 = &v11[*(unsigned int *)(v10 + 16)];
          while ( v12 != v11 )
          {
            v13 = *v11++;
            sub_18AD550(a1, v13, a3, a4, a5, a6);
          }
        }
        return;
      case 0x14:
        v14 = *(_QWORD *)(a2 + 120);
        if ( !v14 )
        {
          a2 = *(_QWORD *)(a2 + 96);
          sub_A794E0((__int64 *)(a2 + 88), a2, a3, a4, a5, a6);
          v14 = *(_QWORD *)(v6 + 120);
        }
        v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v15 )
        {
          if ( (*(_BYTE *)(v15 + 72) & 1) != 0 )
          {
            sub_BA8900(v6);
            v15 = *(_QWORD *)(v6 + 120) & 0xFFFFFFFFFFFFFFF8LL;
          }
          for ( i = *(_QWORD *)(v15 + 56); i; i = *(_QWORD *)(i + 128) )
          {
            a2 = i;
            sub_18AD550(a1, i, a3, a4, a5, a6);
          }
          v20 = sub_BAB630(v6, a2, a3, a4, a5, a6);
          if ( v20 )
            sub_18AD550(a1, v20, v21, v22, v23, v24);
          v25 = *(_QWORD *)(v6 + 120) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_BYTE *)(v25 + 72) & 1) != 0 )
          {
            sub_BA8900(v6);
            v25 = *(_QWORD *)(v6 + 120) & 0xFFFFFFFFFFFFFFF8LL;
          }
          v26 = *(__int64 **)(v25 + 16);
          v27 = &v26[*(unsigned int *)(v25 + 24)];
          while ( v27 != v26 )
          {
            v28 = *v26++;
            sub_18AD550(a1, v28, v21, v22, v23, v24);
          }
        }
        return;
      case 0x15:
        goto LABEL_3;
      case 0x16:
        v8 = sub_BADE20(a2, a2, a3, a4, a5, a6);
        v9 = v8;
        if ( v8 )
        {
          sub_18AD550(a1, v8, a3, a4, a5, a6);
          v7 = *(_QWORD *)(v9 + 88);
          if ( !v7 )
            return;
        }
        else
        {
LABEL_3:
          v7 = *(_QWORD *)(a2 + 88);
          if ( !v7 )
            return;
        }
        sub_18AD550(a1, v7, a3, a4, a5, a6);
        return;
      case 0x17:
        v16 = *(__int64 **)(a2 + 104);
        v17 = &v16[*(unsigned int *)(a2 + 112)];
        while ( v17 != v16 )
        {
          v18 = *v16++;
          sub_18AD550(a1, v18, a3, a4, a5, a6);
        }
        return;
      default:
        return;
    }
  }
}
