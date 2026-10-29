void __fastcall sub_9E5000(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int16 v4; // ax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned int v8; // ecx
  __int64 *v9; // rax
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // r12
  _QWORD *v13; // r14
  unsigned __int64 v14; // r13
  __int64 v15; // r15
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  int v27; // r10d
  unsigned int v28; // edi
  int v29; // esi
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // edx
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 *v37; // r12
  __int64 v38; // r13
  __int64 *v39; // r14
  __int64 v40; // rdi
  __int64 v41; // rbx
  __int16 v42; // ax
  __int64 v43; // r13
  __int64 v44; // r12
  int v45; // eax
  unsigned __int64 v46; // rsi
  unsigned int v47; // edx
  unsigned __int64 v48; // rax
  __int64 v49; // rdi
  int v50; // esi
  __int64 v51; // r13
  int v52; // eax
  unsigned __int64 v53; // rsi
  unsigned int v54; // edx
  unsigned __int64 v55; // rax
  __int64 v56; // rdi
  int v57; // esi
  int v58; // eax
  int v59; // r10d
  __int64 v60; // r9
  __int64 v61; // rdi
  __int64 v62; // rbp
  int v63; // eax
  unsigned __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // r15
  unsigned int v67; // edi
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rdx
  __int64 v70; // r15
  unsigned int v71; // esi
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  __int64 v77; // rdi
  char v78; // cl
  __int64 v79; // rdi
  char v80; // cl
  _BYTE v81[16]; // [rsp+0h] [rbp-78h] BYREF
  void *ptr; // [rsp+10h] [rbp-68h]
  __int64 v83; // [rsp+20h] [rbp-58h] BYREF

  v3 = a2;
  v4 = *(_WORD *)a2 & 0x1FF;
  if ( v4 <= 0x75u )
  {
    if ( v4 == 4 )
      return;
  }
  else if ( v4 <= 0x77u )
  {
    switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
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
      case 0x14:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
        return;
      case 0x15:
LABEL_9:
        sub_9E3FA0((__int64 *)a1, a2);
        return;
      default:
        break;
    }
  }
  while ( 2 )
  {
    switch ( v4 )
    {
      case 0u:
        if ( !*(_DWORD *)(a2 + 80) )
          return;
        v36 = sub_B8C330(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
        v37 = *(__int64 **)(a2 + 32);
        v38 = v36;
        v39 = &v37[*(unsigned int *)(a2 + 16)];
        if ( v37 == v39 )
          return;
        while ( 1 )
        {
          v40 = *v37;
          if ( *v37 )
          {
            while ( 1 )
            {
              a2 = v38;
              v41 = sub_BFD8A0(v40, v38);
              v42 = *(_WORD *)v41 & 0x1FF;
              if ( ((v42 + 433) & 0x1FFu) > 9 )
                break;
              if ( ((*(_WORD *)(v41 + 2) >> 3) & 0x7F) != 2 )
                goto LABEL_63;
              v40 = *(_QWORD *)(v41 + 16);
              if ( !v40 )
                goto LABEL_75;
            }
          }
          else
          {
LABEL_75:
            v42 = 383;
            v41 = 0;
          }
          while ( v42 == 4 )
          {
            v41 = *(_QWORD *)(v41 + 16);
            if ( !v41 )
              BUG();
            while ( 1 )
            {
              a2 = v38;
              v41 = sub_BFD8A0(v41, v38);
              v42 = *(_WORD *)v41 & 0x1FF;
              if ( ((v42 + 433) & 0x1FFu) > 9 || ((*(_WORD *)(v41 + 2) >> 3) & 0x7F) != 2 )
                break;
              v41 = *(_QWORD *)(v41 + 16);
              if ( !v41 )
                goto LABEL_63;
            }
          }
LABEL_63:
          a2 = sub_B8D340(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
          v64 = sub_9E2060(v41, (_QWORD *)a2);
          v65 = v64;
          if ( !v64 )
            goto LABEL_70;
          v66 = *(_QWORD *)a1;
          v67 = 2 * sub_9E3E80(*(_QWORD *)a1 + 96LL, v64);
          v68 = *(_QWORD *)(v66 + 88);
          if ( (v68 & 1) != 0 )
          {
            v69 = (v68 >> 1) & ~(-1LL << (*(_QWORD *)(v66 + 88) >> 58));
            a2 = (v69 >> v67) & 1;
            LOBYTE(v69) = (v69 >> ((unsigned __int8)v67 + 1)) & 1;
          }
          else
          {
            a2 = (*(_QWORD *)(*(_QWORD *)v68 + 8LL * (v67 >> 6)) >> (v67 & 0x3F)) & 1LL;
            v69 = (*(_QWORD *)(*(_QWORD *)v68 + 8LL * ((v67 + 1) >> 6)) >> ((unsigned __int8)v67 + 1)) & 1LL;
          }
          if ( ((unsigned int)a2 | (2 * (unsigned __int8)v69)) == 1 )
            goto LABEL_70;
          v70 = *(_QWORD *)a1;
          v71 = 2 * sub_9E3E80(*(_QWORD *)a1 + 96LL, v65);
          v72 = *(_QWORD *)(v70 + 88);
          if ( (v72 & 1) != 0 )
          {
            v73 = v72 >> 58 << 57;
            v74 = ~(-1LL << (v72 >> 58));
            v75 = v74 & (v72 >> 1) | (1LL << v71);
            a2 = v71 + 1;
            v76 = 2 * (v73 | v74 & v75) + 1;
          }
          else
          {
            v79 = v71 >> 6;
            v80 = v71 & 0x3F;
            a2 = v71 + 1;
            *(_QWORD *)(*(_QWORD *)v72 + 8 * v79) |= 1LL << v80;
            v76 = *(_QWORD *)(v70 + 88);
            if ( (v76 & 1) == 0 )
            {
              *(_QWORD *)(*(_QWORD *)v76 + 8LL * ((unsigned int)a2 >> 6)) |= 1LL << a2;
              goto LABEL_70;
            }
          }
          *(_QWORD *)(v70 + 88) = 2
                                * ((v76 >> 58 << 57)
                                 | ~(-1LL << (v76 >> 58)) & (~(-1LL << (v76 >> 58)) & (v76 >> 1) | (1LL << a2)))
                                + 1;
LABEL_70:
          if ( v39 == ++v37 )
            return;
        }
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
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
      case 0x1Bu:
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
      case 0x2Eu:
      case 0x2Fu:
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
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
      case 0x48u:
      case 0x49u:
      case 0x4Au:
      case 0x4Bu:
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
      case 0x65u:
      case 0x66u:
      case 0x67u:
      case 0x68u:
      case 0x69u:
      case 0x6Au:
      case 0x6Bu:
      case 0x6Cu:
      case 0x6Du:
      case 0x6Eu:
      case 0x6Fu:
      case 0x70u:
      case 0x71u:
      case 0x72u:
      case 0x73u:
      case 0x74u:
        return;
      case 0x21u:
        if ( !sub_9C3E70((_QWORD *)(a1 + 40), a2) )
          return;
        v23 = *(_QWORD *)a1;
        v24 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
        v25 = (v24 & 1) != 0 ? v24 >> 58 : *(unsigned int *)(v24 + 64);
        v26 = v25 >> 1;
        v27 = v26;
        if ( !v26 )
          return;
        v28 = 1;
        v29 = 0;
        while ( 2 )
        {
          v32 = 2 * v29;
          if ( (v24 & 1) != 0 )
          {
            v30 = 2 * ((v24 >> 58 << 57) | (v24 >> 1) & ~((-1LL << (v24 >> 58)) | (1LL << v32))) + 1;
            goto LABEL_29;
          }
          *(_QWORD *)(*(_QWORD *)v24 + 8LL * (v32 >> 6)) &= ~(1LL << (v32 & 0x3F));
          v30 = *(_QWORD *)(v23 + 88);
          if ( (v30 & 1) != 0 )
          {
LABEL_29:
            v31 = 1LL << v28;
            ++v29;
            v28 += 2;
            *(_QWORD *)(v23 + 88) = 2 * ((v30 >> 58 << 57) | ~(-1LL << (v30 >> 58)) & ~v31 & (v30 >> 1)) + 1;
            if ( v27 == v29 )
              return;
LABEL_30:
            v24 = *(_QWORD *)(v23 + 88);
            continue;
          }
          break;
        }
        v33 = *(_QWORD *)v30;
        v34 = v28 >> 6;
        v35 = 1LL << v28;
        ++v29;
        v28 += 2;
        *(_QWORD *)(v33 + 8 * v34) &= ~v35;
        if ( v27 != v29 )
          goto LABEL_30;
        return;
      case 0x47u:
        v5 = *(_QWORD *)(a1 + 32);
        v6 = *(unsigned int *)(v5 + 24);
        v7 = *(_QWORD *)(v5 + 8);
        if ( !(_DWORD)v6 )
          goto LABEL_60;
        v8 = (v6 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
        v9 = (__int64 *)(v7 + 16LL * v8);
        v10 = *v9;
        if ( v3 == *v9 )
          goto LABEL_12;
        v58 = 1;
        if ( v10 == -4096 )
          goto LABEL_60;
        while ( 1 )
        {
          v59 = v58 + 1;
          v8 = (v6 - 1) & (v58 + v8);
          v9 = (__int64 *)(v7 + 16LL * v8);
          v60 = *v9;
          if ( v3 == *v9 )
            break;
          v58 = v59;
          if ( v60 == -4096 )
            goto LABEL_60;
        }
LABEL_12:
        if ( v9 != (__int64 *)(v7 + 16 * v6) )
        {
          switch ( *((_DWORD *)v9 + 2) )
          {
            case 0:
              goto LABEL_62;
            case 1:
              sub_9E4790((__int64 *)a1, v3, *(_QWORD *)(v3 + 16));
              return;
            case 2:
              (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 24LL))(
                *(_QWORD *)(a1 + 72),
                *(_QWORD *)(v3 + 16));
              return;
            case 3:
              v51 = *(_QWORD *)a1;
              v44 = *(_QWORD *)(v3 + 16);
              v52 = sub_9E3E80(*(_QWORD *)a1 + 96LL, v44);
              v53 = *(_QWORD *)(v51 + 88);
              v54 = 2 * v52;
              v55 = (v53 >> 1) & ~(-1LL << (v53 >> 58));
              if ( (v53 & 1) != 0 )
              {
                v57 = (v55 >> v54) & 1;
                LOBYTE(v55) = (v55 >> ((unsigned __int8)v54 + 1)) & 1;
              }
              else
              {
                v56 = *(_QWORD *)v53;
                v57 = (*(_QWORD *)(*(_QWORD *)v53 + 8LL * (v54 >> 6)) >> (v54 & 0x3F)) & 1;
                v55 = (*(_QWORD *)(v56 + 8LL * ((v54 + 1) >> 6)) >> ((unsigned __int8)v54 + 1)) & 1LL;
              }
              if ( (v57 | (2 * (unsigned __int8)v55)) != 2 )
                return;
              sub_9E40A0((__int64)v81, (_QWORD *)a1, v3, v44, 2);
              v81[11] = 1;
              break;
            case 4:
              v43 = *(_QWORD *)a1;
              v44 = *(_QWORD *)(v3 + 16);
              v45 = sub_9E3E80(*(_QWORD *)a1 + 96LL, v44);
              v46 = *(_QWORD *)(v43 + 88);
              v47 = 2 * v45;
              v48 = (v46 >> 1) & ~(-1LL << (v46 >> 58));
              if ( (v46 & 1) != 0 )
              {
                v50 = (v48 >> v47) & 1;
                LOBYTE(v48) = (v48 >> ((unsigned __int8)v47 + 1)) & 1;
              }
              else
              {
                v49 = *(_QWORD *)v46;
                v50 = (*(_QWORD *)(*(_QWORD *)v46 + 8LL * (v47 >> 6)) >> (v47 & 0x3F)) & 1;
                v48 = (*(_QWORD *)(v49 + 8LL * ((v47 + 1) >> 6)) >> ((unsigned __int8)v47 + 1)) & 1LL;
              }
              if ( (v50 | (2 * (unsigned __int8)v48)) != 2 )
                return;
              sub_9E40A0((__int64)v81, (_QWORD *)a1, v3, v44, 2);
              v81[12] = 1;
              break;
            default:
              return;
          }
          (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(**(_QWORD **)(a1 + 72) + 16LL))(
            *(_QWORD *)(a1 + 72),
            v44,
            v81);
          if ( ptr != &v83 )
            free(ptr);
          return;
        }
LABEL_60:
        v61 = *(_QWORD *)(v3 + 16);
        if ( (*(_BYTE *)(v61 + 28) & 0x7Fu) - 40 <= 6 && (unsigned __int8)sub_9E1870(v61, *(_QWORD **)v5) )
        {
LABEL_62:
          v62 = *(_QWORD *)a1;
          v63 = sub_9E3E80(v62 + 96, *(_QWORD *)(v3 + 16));
          sub_9E3C90((__int64 *)(v62 + 88), v63, 1);
        }
        return;
      case 0x59u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Cu:
      case 0x5Du:
        sub_9E1F10((__int64 *)a1, a2);
        return;
      case 0x75u:
        v11 = *(_QWORD *)(a2 + 16);
        v12 = *(_QWORD **)(v11 + 104);
        v13 = &v12[2 * *(unsigned int *)(v11 + 112)];
        if ( v12 == v13 )
          return;
        break;
      case 0x76u:
      case 0x77u:
        if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x15 )
          goto LABEL_9;
        return;
      default:
        continue;
    }
    break;
  }
  while ( 1 )
  {
    v14 = *v12 & 0xFFFFFFFFFFFFFFF8LL;
    a2 = sub_B8D340(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), a2);
    if ( (unsigned __int8)sub_9E1870(v14, (_QWORD *)a2) )
    {
      if ( (*(_BYTE *)v12 & 2) != 0 )
      {
        v15 = *(_QWORD *)a1;
        LODWORD(a2) = 2 * sub_9E3E80(*(_QWORD *)a1 + 96LL, v14);
        v16 = *(_QWORD *)(v15 + 88);
        if ( (v16 & 1) != 0 )
        {
          v17 = v16 >> 58 << 57;
          v18 = ~(-1LL << (v16 >> 58));
          v19 = v18 & (v16 >> 1) | (1LL << a2);
          LOBYTE(a2) = a2 + 1;
          v20 = 2 * (v17 | v18 & v19) + 1;
        }
        else
        {
          v77 = (unsigned int)a2 >> 6;
          v78 = a2 & 0x3F;
          a2 = (unsigned int)(a2 + 1);
          *(_QWORD *)(*(_QWORD *)v16 + 8 * v77) |= 1LL << v78;
          v20 = *(_QWORD *)(v15 + 88);
          if ( (v20 & 1) == 0 )
          {
            *(_QWORD *)(*(_QWORD *)v20 + 8LL * ((unsigned int)a2 >> 6)) &= ~(1LL << a2);
            goto LABEL_17;
          }
        }
        v21 = v20 >> 58;
        v22 = (v20 >> 1) & ~(1LL << a2);
        a2 = ~(-1LL << v21);
        *(_QWORD *)(v15 + 88) = 2 * ((v21 << 57) | a2 & v22) + 1;
      }
      else
      {
        a2 = v3;
        sub_9E4790((__int64 *)a1, v3, v14);
      }
    }
LABEL_17:
    v12 += 2;
    if ( v13 == v12 )
      return;
  }
}
