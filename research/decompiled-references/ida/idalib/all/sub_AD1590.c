void __fastcall sub_AD1590(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  unsigned __int16 v4; // ax
  __int64 v5; // kr10_8
  __int64 v6; // kr18_8
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // rsi
  _QWORD *v18; // rbx
  _QWORD *v19; // r12
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 *v26; // rbx
  __int64 v27; // r12
  __int64 v28; // r8
  __int64 v29; // rcx
  unsigned __int64 v30; // rbx
  size_t v31; // rax
  __int64 v32; // rax
  __int64 *v33; // r12
  __int64 v34; // r13
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 *v37; // r12
  __int64 *v38; // rbx
  __int64 v39; // r8
  _QWORD v40[9]; // [rsp-8h] [rbp-48h] BYREF

  v4 = *(_WORD *)a2 & 0x1FF;
  if ( v4 <= 0x75u && v4 != 4 )
  {
    while ( 2 )
    {
      v5 = v2;
      v6 = v3;
      v40[5] = v3;
      v40[4] = v2;
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
          v24 = *(_QWORD *)(a2 + 8);
          if ( (*(_BYTE *)(v24 + 29) & 1) != 0 )
          {
            v25 = sub_B8C3D0(v24);
            v26 = *(__int64 **)v25;
            v27 = *(_QWORD *)v25 + 8LL * *(unsigned int *)(v25 + 8);
            if ( *(_QWORD *)v25 != v27 )
            {
              do
              {
                v28 = *v26++;
                sub_AD2CF0(a1 + 8, &byte_22F0C30, 0, a1, v28);
              }
              while ( (__int64 *)v27 != v26 );
            }
          }
          return;
        case 6u:
          v18 = (_QWORD *)(a2 + 56LL * ((((unsigned __int8)BYTE3(*(_QWORD *)a2) >> 3) ^ 1) & 1) + 24);
          v19 = &v18[*(unsigned int *)(a2 + 4)];
          while ( v19 != v18 )
          {
            v20 = (_QWORD *)*v18++;
            sub_AD8780(a1, *v20);
          }
          return;
        case 7u:
          v21 = sub_C95B10(a2);
          sub_AD13F0(a1, v21);
          sub_C95B30(v40, a2);
          sub_AD68F0(a1, v40, 0);
          return;
        case 8u:
          v22 = sub_C95990(a2);
          sub_AD13F0(a1, v22);
          return;
        case 0xCu:
          if ( (*(_DWORD *)a2 & 0x20000) != 0 )
          {
            v14 = *(_DWORD *)(a2 + 28);
            if ( v14 )
            {
              v15 = a2 + 40;
              v16 = a2 + 40 + 24LL * v14;
              do
              {
                v17 = v15;
                v15 += 24;
                sub_AD68F0(a1, v17, 0);
              }
              while ( v16 != v15 );
            }
          }
          return;
        case 0xFu:
          v33 = (__int64 *)(a2 + 48);
          v34 = a2 + 48 + 8LL * *(unsigned int *)(a2 + 16);
          if ( a2 + 48 != v34 )
          {
            do
            {
              v35 = *v33++;
              sub_AD13F0(a1, v35);
            }
            while ( (__int64 *)v34 != v33 );
          }
          v36 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 48;
          v37 = (__int64 *)(v36 + 8LL * *(unsigned int *)(a2 + 20));
          v38 = (__int64 *)v36;
          if ( (__int64 *)v36 != v37 )
          {
            do
            {
              v39 = *v38++;
              sub_AD77F0(a1 + 8, &byte_22F0C30, 0, a1, v39);
            }
            while ( v37 != v38 );
          }
          return;
        case 0x18u:
          sub_ADA2D0();
          return;
        case 0x1Au:
          v23 = *(_QWORD *)(a2 + 16);
          if ( v23 )
            sub_AD2220(a1 + 8, 0, 0, v23, a1);
          return;
        case 0x33u:
          sub_AD6140();
          return;
        case 0x35u:
          v29 = *(_QWORD *)(a2 + 56);
          if ( !v29 )
            return;
          goto LABEL_34;
        case 0x39u:
          sub_AD98A0();
          return;
        case 0x4Bu:
          sub_AD13F0(a1, *(_QWORD *)(a2 + 24));
          v9 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 64LL);
          if ( v9 )
          {
            v10 = v9 + 16;
            v11 = v9 + 16 + 32LL * *(unsigned int *)(v9 + 8);
            if ( v9 + 16 != v11 )
            {
              do
              {
                v12 = sub_F1E510(v10);
                v13 = v10;
                v10 += 32;
                sub_AD68F0(a1, v13, v12);
              }
              while ( v11 != v10 );
            }
          }
          return;
        case 0x59u:
        case 0x5Au:
        case 0x5Bu:
        case 0x5Cu:
        case 0x5Du:
          sub_AD5F20();
          return;
        case 0x65u:
          if ( *(_DWORD *)(a1 + 4) == 1 )
          {
            sub_C93B20(v40);
            sub_AD2220(a1 + 8, 0, 0, v40[1], a1);
            sub_C93B20(v40);
            sub_AD2220(a1 + 8, 0, 0, v40[2], a1);
          }
          return;
        case 0x67u:
          v29 = *(_QWORD *)(a2 + 40);
          if ( v29 )
          {
LABEL_34:
            if ( (v29 & 2) == 0 )
            {
              v30 = v29 & 0xFFFFFFFFFFFFFFFCLL;
              if ( (v29 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
              {
                v31 = j__strlen("array_filler");
                sub_AD1C20(a1 + 8, "array_filler", v31, v30, a1);
              }
            }
          }
          return;
        case 0x6Fu:
          v32 = sub_C94CC0(a2);
          goto LABEL_38;
        case 0x70u:
          v32 = sub_C94C80(a2);
LABEL_38:
          sub_AD2220(a1 + 8, 0, 0, v32, a1);
          break;
        case 0x75u:
          sub_AD13F0(a1, *(_QWORD *)(a2 + 16));
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
