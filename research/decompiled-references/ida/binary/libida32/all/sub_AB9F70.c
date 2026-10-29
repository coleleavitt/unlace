void __fastcall sub_AB9F70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  unsigned __int16 v4; // ax
  __int64 v5; // kr10_8
  __int64 v6; // kr18_8
  unsigned int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rsi
  _QWORD *v13; // rbx
  _QWORD *v14; // r12
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 *v21; // rbx
  __int64 v22; // r12
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  size_t v26; // rax
  __int64 v27; // rax
  __int64 *v28; // r12
  __int64 v29; // r13
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 *v32; // r12
  __int64 *v33; // rbx
  __int64 v34; // r8
  _QWORD v35[9]; // [rsp-8h] [rbp-48h] BYREF

  v4 = *(_WORD *)a2 & 0x1FF;
  if ( v4 <= 0x75u && v4 != 4 )
  {
    while ( 2 )
    {
      v5 = v2;
      v6 = v3;
      v35[5] = v3;
      v35[4] = v2;
      switch ( v4 )
      {
        case 0u:
        case 1u:
        case 3u:
        case 4u:
        case 5u:
        case 9u:
        case 0xAu:
        case 0xBu:
        case 0xDu:
        case 0xEu:
        case 0x10u:
        case 0x11u:
        case 0x12u:
        case 0x13u:
        case 0x14u:
        case 0x15u:
        case 0x16u:
        case 0x17u:
        case 0x19u:
        case 0x1Bu:
        case 0x1Cu:
        case 0x1Du:
        case 0x1Eu:
        case 0x1Fu:
        case 0x20u:
        case 0x21u:
        case 0x22u:
        case 0x23u:
        case 0x24u:
        case 0x25u:
        case 0x26u:
        case 0x27u:
        case 0x28u:
        case 0x29u:
        case 0x2Au:
        case 0x2Bu:
        case 0x2Cu:
        case 0x2Du:
        case 0x2Eu:
        case 0x2Fu:
        case 0x30u:
        case 0x31u:
        case 0x32u:
        case 0x34u:
        case 0x36u:
        case 0x37u:
        case 0x38u:
        case 0x3Au:
        case 0x3Bu:
        case 0x3Cu:
        case 0x3Du:
        case 0x3Eu:
        case 0x3Fu:
        case 0x40u:
        case 0x41u:
        case 0x42u:
        case 0x43u:
        case 0x44u:
        case 0x45u:
        case 0x46u:
        case 0x47u:
        case 0x48u:
        case 0x49u:
        case 0x4Au:
        case 0x4Cu:
        case 0x4Du:
        case 0x4Eu:
        case 0x4Fu:
        case 0x50u:
        case 0x51u:
        case 0x52u:
        case 0x53u:
        case 0x54u:
        case 0x55u:
        case 0x56u:
        case 0x57u:
        case 0x58u:
        case 0x5Eu:
        case 0x5Fu:
        case 0x60u:
        case 0x61u:
        case 0x62u:
        case 0x63u:
        case 0x64u:
        case 0x66u:
        case 0x68u:
        case 0x69u:
        case 0x6Au:
        case 0x6Bu:
        case 0x6Cu:
        case 0x6Du:
        case 0x6Eu:
        case 0x71u:
        case 0x72u:
        case 0x73u:
        case 0x74u:
        case 0x76u:
        case 0x77u:
          return;
        case 2u:
          v19 = *(_QWORD *)(a2 + 8);
          if ( (*(_BYTE *)(v19 + 29) & 1) != 0 )
          {
            v20 = sub_B68690(v19);
            v21 = *(__int64 **)v20;
            v22 = *(_QWORD *)v20 + 8LL * *(unsigned int *)(v20 + 8);
            if ( *(_QWORD *)v20 != v22 )
            {
              do
              {
                v23 = *v21++;
                sub_ABB660(a1 + 8, &byte_22CD811, 0, a1, v23);
              }
              while ( (__int64 *)v22 != v21 );
            }
          }
          return;
        case 6u:
          v13 = (_QWORD *)(a2 + 56LL * ((((unsigned __int8)BYTE3(*(_QWORD *)a2) >> 3) ^ 1) & 1) + 24);
          v14 = &v13[*(unsigned int *)(a2 + 4)];
          while ( v14 != v13 )
          {
            v15 = (_QWORD *)*v13++;
            sub_ABF9B0(a1, *v15);
          }
          return;
        case 7u:
          v16 = sub_C71DD0(a2);
          sub_AB9DD0(a1, v16);
          sub_C71DF0(v35, a2);
          sub_AC0110(a1, v35, 0);
          return;
        case 8u:
          v17 = sub_C71C50(a2);
          sub_AB9DD0(a1, v17);
          return;
        case 0xCu:
          if ( (*(_DWORD *)a2 & 0x20000) != 0 )
          {
            v9 = *(_DWORD *)(a2 + 28);
            if ( v9 )
            {
              v10 = a2 + 40;
              v11 = a2 + 40 + 24LL * v9;
              do
              {
                v12 = v10;
                v10 += 24;
                sub_AC0110(a1, v12, 0);
              }
              while ( v11 != v10 );
            }
          }
          return;
        case 0xFu:
          v28 = (__int64 *)(a2 + 48);
          v29 = a2 + 48 + 8LL * *(unsigned int *)(a2 + 16);
          if ( a2 + 48 != v29 )
          {
            do
            {
              v30 = *v28++;
              sub_AB9DD0(a1, v30);
            }
            while ( (__int64 *)v29 != v28 );
          }
          v31 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 48;
          v32 = (__int64 *)(v31 + 8LL * *(unsigned int *)(a2 + 20));
          v33 = (__int64 *)v31;
          if ( (__int64 *)v31 != v32 )
          {
            do
            {
              v34 = *v33++;
              sub_ABEBB0(a1 + 8, &byte_22CD811, 0, a1, v34);
            }
            while ( v32 != v33 );
          }
          return;
        case 0x18u:
          sub_AC03C0();
          return;
        case 0x1Au:
          v18 = *(_QWORD *)(a2 + 16);
          if ( v18 )
            sub_ABAAB0(a1 + 8, 0, 0, v18, a1);
          return;
        case 0x33u:
          sub_ABE1E0();
          return;
        case 0x35u:
          v24 = *(_QWORD *)(a2 + 56);
          if ( !v24 )
            return;
          goto LABEL_31;
        case 0x39u:
          sub_AC0590();
          return;
        case 0x4Bu:
          sub_AC1EC0();
          return;
        case 0x59u:
        case 0x5Au:
        case 0x5Bu:
        case 0x5Cu:
        case 0x5Du:
          sub_ABDFC0();
          return;
        case 0x65u:
          if ( *(_DWORD *)(a1 + 4) == 1 )
          {
            sub_C6FDE0(v35);
            sub_ABAAB0(a1 + 8, 0, 0, v35[1], a1);
            sub_C6FDE0(v35);
            sub_ABAAB0(a1 + 8, 0, 0, v35[2], a1);
          }
          return;
        case 0x67u:
          v24 = *(_QWORD *)(a2 + 40);
          if ( v24 )
          {
LABEL_31:
            if ( (v24 & 2) == 0 )
            {
              v25 = v24 & 0xFFFFFFFFFFFFFFFCLL;
              if ( (v24 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
              {
                v26 = j__strlen("array_filler");
                sub_ABA5B0(a1 + 8, "array_filler", v26, v25, a1);
              }
            }
          }
          return;
        case 0x6Fu:
          v27 = sub_C70F80(a2);
          goto LABEL_35;
        case 0x70u:
          v27 = sub_C70F40(a2);
LABEL_35:
          sub_ABAAB0(a1 + 8, 0, 0, v27, a1);
          break;
        case 0x75u:
          sub_AB9DD0(a1, *(_QWORD *)(a2 + 16));
          break;
        default:
          v3 = v6;
          v2 = v5;
          continue;
      }
      break;
    }
  }
}

