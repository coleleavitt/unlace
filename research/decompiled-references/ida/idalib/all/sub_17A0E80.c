void __fastcall sub_17A0E80(__int64 a1, unsigned __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned __int16 v9; // ax
  int v10; // eax
  __int64 v11; // rdi
  bool v12; // r12
  unsigned __int64 v13; // rax
  __int16 i; // dx
  _WORD *v15; // rsi
  char v16; // r13
  __int64 v17; // rax
  unsigned __int64 *v18; // r12
  unsigned __int64 *j; // rbx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // r12
  _WORD **v23; // rbx
  _WORD *v24; // rsi
  __m128i si128; // [rsp+0h] [rbp-78h] BYREF
  __int64 v26; // [rsp+10h] [rbp-68h]
  __m128 v27; // [rsp+20h] [rbp-58h] BYREF
  __int64 v28; // [rsp+30h] [rbp-48h]

  v9 = *(_WORD *)a2 & 0x1FF;
  if ( v9 <= 0x75u )
  {
    if ( v9 == 4 )
    {
LABEL_4:
      sub_17A1640(a1, a2);
    }
    else
    {
      while ( 2 )
      {
        switch ( v9 )
        {
          case 0u:
          case 1u:
          case 2u:
          case 3u:
          case 6u:
          case 7u:
          case 8u:
          case 9u:
          case 0xAu:
          case 0xBu:
          case 0xCu:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x10u:
          case 0x11u:
          case 0x12u:
          case 0x13u:
          case 0x14u:
          case 0x15u:
          case 0x16u:
          case 0x17u:
          case 0x18u:
          case 0x19u:
          case 0x1Au:
          case 0x1Cu:
          case 0x1Du:
          case 0x1Eu:
          case 0x1Fu:
          case 0x20u:
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
          case 0x2Fu:
          case 0x30u:
          case 0x31u:
          case 0x32u:
          case 0x34u:
          case 0x35u:
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
          case 0x42u:
          case 0x43u:
          case 0x45u:
          case 0x46u:
          case 0x48u:
          case 0x49u:
          case 0x4Au:
          case 0x4Bu:
          case 0x4Cu:
          case 0x4Eu:
          case 0x50u:
          case 0x51u:
          case 0x52u:
          case 0x53u:
          case 0x54u:
          case 0x55u:
          case 0x56u:
          case 0x57u:
          case 0x58u:
          case 0x5Fu:
          case 0x61u:
          case 0x62u:
          case 0x63u:
          case 0x64u:
          case 0x65u:
          case 0x66u:
          case 0x67u:
          case 0x68u:
          case 0x6Au:
          case 0x6Bu:
          case 0x6Cu:
          case 0x6Du:
          case 0x6Eu:
          case 0x6Fu:
          case 0x70u:
          case 0x73u:
          case 0x74u:
            goto LABEL_7;
          case 4u:
            goto LABEL_4;
          case 5u:
          case 0x1Bu:
          case 0x21u:
          case 0x41u:
          case 0x5Eu:
          case 0x69u:
          case 0x75u:
            return;
          case 0x2Eu:
            if ( !*(_BYTE *)(a1 + 28) || !(unsigned __int8)sub_17A0B20(a1, a2, 1u, a5, a6, a7, a3) )
            {
              v10 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                               + 8LL)
                                                   & 0xFFFFFFFFFFFFFFF0LL)
                                       + 16LL);
              if ( (unsigned int)(v10 - 25) > 1 && ((unsigned __int8)(v10 - 2) > 4u || (_BYTE)v10 == 3) )
              {
                v11 = *(_QWORD *)(a2 + 24);
                v12 = (*(_BYTE *)(v11 + 28) & 0x7Fu) - 35 <= 3 && !sub_B979F0((_QWORD *)v11);
                v13 = sub_BFBAE0(*(_QWORD *)(a2 + 16));
                for ( i = *(_WORD *)v13 & 0x1FF; i == 46; i = *(_WORD *)v13 & 0x1FF )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(v13 + 24) + 28LL) & 0x7Fu) - 49 >= 3 )
                    v12 = 0;
                  v13 = sub_BFBAE0(*(_QWORD *)(v13 + 16));
                }
                if ( i == 71 )
                {
                  if ( v12 )
                    sub_17A0370(a1, v13, a3);
                }
                else
                {
                  sub_17A0E80(a1);
                }
              }
            }
            return;
          case 0x33u:
            v22 = a2 + 8LL * *(unsigned __int16 *)(a2 + 4) + 32;
            v23 = (_WORD **)(a2 + 32);
            if ( *(_BYTE *)(a1 + 27) )
            {
              while ( (_WORD **)v22 != v23 )
              {
                v24 = *v23;
                if ( *v23 )
                {
                  if ( (*v24 & 0x1FF) == 0x47 )
                    sub_17A0370(a1, (unsigned __int64)v24, a3);
                  else
                    sub_17A0E80(a1);
                }
                ++v23;
              }
            }
            else
            {
              while ( (_WORD **)v22 != v23 )
              {
                if ( *v23 )
                  sub_17A0E80(a1);
                ++v23;
              }
            }
            return;
          case 0x39u:
            if ( (*(_DWORD *)(a2 + 16) & 0x3FFF8000) != 0x3FFF8000 )
              goto LABEL_32;
            return;
          case 0x44u:
            sub_EE9E50(&v27, a2);
            v26 = v28;
            si128 = _mm_load_si128((const __m128i *)&v27);
            if ( (si128.m128i_i8[8] & 3) != 0 )
              sub_EF2B30((__int64)&si128);
            sub_17A0E80(a1);
            return;
          case 0x47u:
            if ( *(_BYTE *)(a1 + 26) )
              sub_17A0370(a1, a2, a3);
            return;
          case 0x4Du:
            if ( (**(_DWORD **)(a2 + 16) & 0x20000) == 0 )
              goto LABEL_32;
            return;
          case 0x4Fu:
            if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 4 )
              sub_17A14E0(a1, *(_QWORD *)(a2 + 16));
            else
LABEL_7:
              sub_17A13F0(a1, a2);
            break;
          case 0x59u:
          case 0x5Au:
          case 0x5Cu:
          case 0x5Du:
            sub_17A16D0(a1, a2);
            break;
          case 0x5Bu:
            v15 = *(_WORD **)(a2 + 32);
            v16 = *(_BYTE *)(a1 + 27);
            *(_BYTE *)(a1 + 27) = 1;
            if ( (*v15 & 0x1FF) == 0x18 )
            {
              if ( sub_BFE550(a2) )
              {
                sub_17A14E0(a1, *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32));
              }
              else if ( !sub_BFD3B0(a2, *(_QWORD *)a1) )
              {
                sub_17A13F0(a1, a2);
              }
            }
            else
            {
              sub_17A0E80(a1);
              v17 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32;
              v18 = (unsigned __int64 *)(a2 + v17 + 8LL * *(unsigned int *)(a2 + 16));
              for ( j = (unsigned __int64 *)(v17 + a2); v18 != j; ++j )
              {
                v20 = *j;
                v21 = sub_BFBAE0(v20);
                sub_17A14E0(a1, v21);
              }
            }
            *(_BYTE *)(a1 + 27) = v16;
            break;
          case 0x60u:
            if ( sub_C960B0(a2) )
LABEL_32:
              sub_17A0E80(a1);
            break;
          case 0x71u:
          case 0x72u:
            sub_17A1740(a1, a2);
            break;
          case 0x76u:
          case 0x77u:
            goto LABEL_2;
          default:
            continue;
        }
        break;
      }
    }
  }
  else
  {
LABEL_2:
    sub_17A17F0(a1, a2);
  }
}
