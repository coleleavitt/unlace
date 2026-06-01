__int64 __fastcall sub_70BEA0(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 v4; // rax
  __int64 *v5; // rax
  __int64 v7; // rdx
  unsigned __int8 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64); // rdx
  unsigned __int64 v14; // r13
  __int64 (__fastcall *v15)(__int64); // rax
  unsigned __int64 v16; // rdx
  _QWORD *v17; // r13
  unsigned int v18; // edx
  __int64 v19; // rax
  int v20; // edx
  unsigned int v21; // r12d
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // r14
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int8 *v32; // rdi
  __int64 v33; // rax
  __int64 (__fastcall *v34)(__int64); // rdx
  __int64 (__fastcall *v35)(__int64); // rax
  __int64 v36; // rdx
  unsigned int v37; // eax
  unsigned int v38; // esi
  __int64 v39; // r12
  unsigned __int64 v40; // rdx
  __int64 v41; // r13
  __int64 v42; // rax
  unsigned __int8 v43; // al
  __int64 v44; // rcx
  __int64 (__fastcall *v45)(__int64, _QWORD); // r8
  unsigned int v46; // eax
  __int64 (__fastcall *v47)(__int64); // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  unsigned __int8 v53; // al
  __int64 v54; // rsi
  unsigned __int8 v55; // cl
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // r13
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  char v64; // al
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax

  v2 = *(unsigned __int8 *)(a2 + 16);
  switch ( (char)v2 )
  {
    case 0:
    case 1:
    case 24:
      v4 = *(_QWORD *)(a2 + 40);
      goto LABEL_3;
    case 2:
    case 3:
    case 5:
    case 6:
      v17 = nullptr;
      if ( (unsigned int)(v2 - 2) <= 1 )
      {
        v17 = *(_QWORD **)(a2 + 40);
        if ( (*(_BYTE *)(a2 + 19) & 2) != 0 )
        {
          if ( *((_DWORD *)v17 + 2) <= 0x40u )
            v17 = (_QWORD *)*v17;
          else
            v17 = *(_QWORD **)*v17;
        }
      }
      v14 = sub_6F6DE0(a1, *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL)) * (_QWORD)v17;
      v19 = *(_QWORD *)(a1 + 17288);
      if ( *(_DWORD *)(v19 + 340) != 10 || *(_BYTE *)(v19 + 8) == 64 )
        return v18 * ((v14 != 0) + (v14 - (v14 != 0)) / v18);
      return v14;
    case 4:
    case 15:
      v4 = sub_B144E0(a2);
      goto LABEL_3;
    case 7:
      v14 = sub_6F6DE0(a1, *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL));
      if ( !v14 )
        return 8;
      if ( *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 286LL) >= v14 && v14 != 1 )
      {
        _BitScanReverse64(&v31, v14 - 1);
        return 1LL << ((unsigned __int8)v31 + 1);
      }
      return v14;
    case 8:
      goto LABEL_43;
    case 9:
    case 12:
    case 27:
    case 39:
    case 53:
      v4 = *(_QWORD *)(a2 + 32);
      goto LABEL_3;
    case 10:
      v36 = *(_QWORD *)(a1 + 17288);
      v37 = (*(_DWORD *)(a2 + 32) >> 1) & 0xFFFFFF;
      if ( *(_BYTE *)(v36 + 40) )
        v38 = *(_DWORD *)(v36 + 36);
      else
        v38 = *(unsigned __int8 *)(v36 + 33);
      LODWORD(v39) = 8;
      if ( v38 <= 8 )
        LODWORD(v39) = v38;
      if ( v37 && v37 != 1 )
      {
        _BitScanReverse64(&v40, v37 - 1LL);
        v39 = 1LL << ((unsigned __int8)v40 + 1);
        if ( (unsigned int)v39 < 8 )
          LODWORD(v39) = 8;
        if ( (unsigned int)v39 > v38 )
          LODWORD(v39) = v38;
      }
      return (unsigned int)v39 * ((v37 != 0) + (v37 - (v37 != 0)) / (unsigned int)v39);
    case 11:
    case 41:
      v7 = *(_QWORD *)(a2 + 32);
      v8 = *(unsigned __int8 **)(a1 + 17288);
      v9 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v9 & 8) == 0 )
        return v8[8];
      v10 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL];
LABEL_9:
      v11 = (*(__int64 *)((char *)&qword_18 + (v10 & 0xFFFFFFFFFFFFFFF0LL))
           | (unsigned __int64)(((unsigned __int8)v7 | (unsigned __int8)v9) & 7)) >> 9;
      if ( !v11 )
        return v8[8];
      v12 = *(_QWORD *)v8;
      v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 936LL);
      if ( v13 == sub_6A6870 )
      {
        v14 = v8[8];
        goto LABEL_12;
      }
      v56 = ((__int64 (__fastcall *)(unsigned __int8 *, _QWORD))v13)(v8, v11);
      v8 = *(unsigned __int8 **)(a1 + 17288);
      v14 = v56;
      goto LABEL_95;
    case 13:
      v29 = *(unsigned __int16 *)(a2 + 18);
      LOWORD(v29) = ((unsigned __int16)v29 >> 3) & 0x1FF;
      if ( (unsigned __int16)v29 <= 0x1C6u )
      {
        if ( (unsigned __int16)v29 <= 0xABu )
        {
          if ( (unsigned __int16)v29 <= 0x78u )
          {
            if ( (unsigned __int16)v29 <= 0x63u )
            {
              if ( (unsigned __int16)v29 <= 0x2Fu )
              {
LABEL_92:
                v43 = sub_6CBCD0(a1, a2);
                v46 = v45(v44, v43);
                v8 = *(unsigned __int8 **)(a1 + 17288);
                v11 = v46;
                if ( v46 )
                {
                  v47 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 936LL);
                  if ( v47 == sub_6A6870 )
                  {
                    v14 = v8[8];
                  }
                  else
                  {
                    v67 = ((__int64 (__fastcall *)(unsigned __int8 *, _QWORD))v47)(v8, v11);
                    v8 = *(unsigned __int8 **)(a1 + 17288);
                    v14 = v67;
                  }
LABEL_95:
                  v12 = *(_QWORD *)v8;
LABEL_12:
                  v15 = *(__int64 (__fastcall **)(__int64))(v12 + 944);
                  if ( v15 != sub_6A6880 )
                    ((void (__fastcall *)(unsigned __int8 *, _QWORD))v15)(v8, v11);
                }
                else
                {
                  return v8[8];
                }
              }
              else
              {
                return 0;
              }
            }
            else
            {
              LOWORD(v29) = (v29 + 408) & 0x1FF;
              switch ( v29 )
              {
                case 0LL:
                  return 8;
                case 1LL:
                  v14 = 512;
                  break;
                case 2LL:
                  v14 = 256;
                  break;
                case 3LL:
                case 4LL:
                case 5LL:
                case 6LL:
                case 7LL:
                case 8LL:
                case 9LL:
                case 10LL:
                case 11LL:
                case 12LL:
                case 13LL:
                case 14LL:
                case 15LL:
                case 16LL:
                  return 0;
                default:
                  return 0;
              }
            }
          }
          else
          {
            v62 = 1LL << ((unsigned __int8)v29 - 121);
            if ( (v62 & 0x3FFC0000FFFLL) != 0 )
            {
              return 0;
            }
            else
            {
              v14 = v62 & 0x7C00003FF000LL;
              if ( (v62 & 0x7C00003FF000LL) != 0 )
                return 0;
            }
          }
        }
        else
        {
          LOWORD(v29) = (v29 + 269) & 0x1FF;
          switch ( v29 )
          {
            case 0LL:
            case 1LL:
            case 2LL:
            case 3LL:
            case 4LL:
            case 5LL:
            case 6LL:
            case 7LL:
            case 8LL:
            case 9LL:
            case 10LL:
            case 11LL:
            case 12LL:
            case 13LL:
            case 14LL:
            case 15LL:
            case 16LL:
            case 17LL:
            case 18LL:
            case 19LL:
            case 20LL:
            case 21LL:
            case 22LL:
            case 23LL:
            case 24LL:
            case 25LL:
            case 26LL:
            case 27LL:
            case 28LL:
            case 29LL:
            case 30LL:
            case 31LL:
            case 32LL:
            case 33LL:
            case 34LL:
            case 35LL:
            case 36LL:
            case 37LL:
            case 38LL:
            case 39LL:
            case 40LL:
            case 41LL:
            case 42LL:
            case 43LL:
            case 44LL:
            case 45LL:
            case 46LL:
            case 47LL:
            case 48LL:
            case 49LL:
            case 108LL:
            case 109LL:
            case 110LL:
            case 111LL:
            case 112LL:
            case 113LL:
            case 114LL:
            case 115LL:
            case 116LL:
            case 117LL:
            case 118LL:
            case 119LL:
            case 120LL:
            case 121LL:
            case 122LL:
            case 123LL:
            case 124LL:
            case 125LL:
            case 126LL:
            case 127LL:
            case 128LL:
            case 129LL:
            case 130LL:
            case 131LL:
            case 132LL:
            case 162LL:
            case 163LL:
            case 164LL:
            case 165LL:
            case 166LL:
            case 167LL:
            case 168LL:
            case 169LL:
            case 170LL:
            case 171LL:
            case 172LL:
            case 173LL:
            case 174LL:
            case 175LL:
            case 176LL:
            case 177LL:
            case 178LL:
            case 179LL:
            case 180LL:
            case 181LL:
            case 182LL:
            case 183LL:
            case 184LL:
            case 185LL:
            case 186LL:
              return 0;
            case 50LL:
            case 51LL:
            case 52LL:
            case 53LL:
            case 54LL:
            case 55LL:
            case 56LL:
            case 57LL:
            case 58LL:
            case 59LL:
            case 60LL:
            case 61LL:
            case 62LL:
            case 63LL:
            case 64LL:
            case 65LL:
            case 66LL:
            case 67LL:
            case 68LL:
            case 69LL:
            case 70LL:
            case 71LL:
            case 72LL:
            case 73LL:
            case 74LL:
            case 75LL:
            case 76LL:
            case 77LL:
            case 78LL:
            case 79LL:
            case 80LL:
            case 81LL:
            case 82LL:
            case 83LL:
            case 84LL:
            case 85LL:
            case 133LL:
            case 134LL:
            case 135LL:
            case 136LL:
            case 137LL:
            case 138LL:
            case 139LL:
            case 140LL:
            case 141LL:
            case 142LL:
            case 143LL:
            case 144LL:
            case 145LL:
            case 146LL:
            case 147LL:
            case 148LL:
            case 149LL:
            case 150LL:
              return 0;
            case 86LL:
            case 87LL:
            case 88LL:
            case 89LL:
            case 90LL:
            case 91LL:
            case 92LL:
            case 93LL:
            case 94LL:
            case 95LL:
            case 96LL:
            case 97LL:
            case 98LL:
            case 99LL:
            case 100LL:
            case 101LL:
            case 102LL:
            case 103LL:
            case 104LL:
            case 105LL:
            case 106LL:
            case 107LL:
            case 151LL:
            case 152LL:
            case 153LL:
            case 154LL:
            case 155LL:
            case 156LL:
            case 157LL:
            case 158LL:
            case 159LL:
            case 160LL:
            case 161LL:
              v14 = 0;
              break;
            case 188LL:
              v14 = 128;
              break;
            case 189LL:
              v14 = 128;
              break;
            case 190LL:
              return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 8LL);
            case 192LL:
              v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 10LL);
              break;
            case 193LL:
            case 194LL:
            case 196LL:
            case 204LL:
            case 205LL:
              return 8;
            case 195LL:
            case 206LL:
              v14 = (unsigned int)sub_CB7E60(
                                    *(_QWORD *)(a1 + 17288),
                                    *(unsigned int *)(*(_QWORD *)(a1 + 17288) + 152LL));
              sub_CB7FD0(*(_QWORD *)(a1 + 17288), *(unsigned int *)(*(_QWORD *)(a1 + 17288) + 152LL));
              break;
            case 197LL:
              v14 = (unsigned int)sub_CB7E60(
                                    *(_QWORD *)(a1 + 17288),
                                    *(unsigned int *)(*(_QWORD *)(a1 + 17288) + 160LL));
              sub_CB7FD0(*(_QWORD *)(a1 + 17288), *(unsigned int *)(*(_QWORD *)(a1 + 17288) + 160LL));
              break;
            case 198LL:
              v14 = (unsigned int)sub_CB7E60(
                                    *(_QWORD *)(a1 + 17288),
                                    *(unsigned int *)(*(_QWORD *)(a1 + 17288) + 164LL));
              sub_CB7FD0(*(_QWORD *)(a1 + 17288), *(unsigned int *)(*(_QWORD *)(a1 + 17288) + 164LL));
              break;
            case 199LL:
            case 207LL:
              v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 12LL);
              break;
            case 200LL:
            case 208LL:
              v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 14LL);
              break;
            case 201LL:
            case 209LL:
              v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 30LL);
              break;
            case 202LL:
            case 210LL:
              v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 32LL);
              break;
            case 203LL:
            case 211LL:
              v14 = 128;
              break;
            default:
              return 0;
          }
        }
        return v14;
      }
      if ( (unsigned __int16)v29 > 0x1D8u )
      {
        v42 = (unsigned int)(v29 + 38);
        LOWORD(v42) = v42 & 0x1FF;
        switch ( v42 )
        {
          case 0LL:
          case 3LL:
            return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 52LL);
          case 1LL:
          case 4LL:
            return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 54LL);
          case 5LL:
          case 9LL:
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 17288) + 104LL))(*(_QWORD *)(a1 + 17288))
              && (v48 = *(_QWORD *)(a1 + 2160), *(_DWORD *)(v48 + 64))
              && (*(_BYTE *)(v48 + 68) & 8) != 0 )
            {
              return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17296) + 16LL);
            }
            else
            {
              return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 16LL);
            }
          case 6LL:
            return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 20LL);
          case 7LL:
            return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 22LL);
          case 8LL:
            v51 = *(_QWORD *)(a1 + 2160);
            v52 = *(_QWORD *)(a1 + 17288);
            v53 = *(_BYTE *)(v52 + 24);
            if ( *(_DWORD *)(v51 + 64)
              && (*(_BYTE *)(v51 + 68) & 8) != 0
              && ((v54 = *(_QWORD *)(a1 + 17296), v55 = *(_BYTE *)(v54 + 24), v55 != v53)
               || *(_BYTE *)(v52 + 25) != *(_BYTE *)(v54 + 25)) )
            {
              return v55;
            }
            else
            {
              return v53;
            }
          case 10LL:
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 17288) + 112LL))(*(_QWORD *)(a1 + 17288)) )
              return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 18LL);
            v66 = *(_QWORD *)(a1 + 2160);
            if ( (*(_BYTE *)(v66 + 96) & 0x10) == 0 && (!*(_DWORD *)(v66 + 64) || (*(_BYTE *)(v66 + 68) & 8) == 0)
              || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 17296) + 112LL))(*(_QWORD *)(a1 + 17296)) )
            {
              return 0;
            }
            v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 17296) + 18LL);
            break;
          case 11LL:
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 17288) + 96LL))(*(_QWORD *)(a1 + 17288))
              && (v50 = *(_QWORD *)(a1 + 2160), *(_DWORD *)(v50 + 64))
              && (*(_BYTE *)(v50 + 68) & 8) != 0 )
            {
              return 128;
            }
            else
            {
              return 128;
            }
          case 12LL:
            return 128;
          case 13LL:
          case 14LL:
          case 15LL:
          case 16LL:
            return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 8LL);
          case 17LL:
          case 18LL:
          case 19LL:
          case 20LL:
          case 21LL:
            goto LABEL_92;
          default:
            return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 50LL);
        }
        return v14;
      }
      if ( (unsigned __int16)v29 > 0x1D2u )
      {
        v64 = v29 + 45;
LABEL_143:
        v65 = 1LL << v64;
        if ( (v65 & 0x24) != 0 )
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 48LL);
        if ( (v65 & 0x12) != 0 )
          return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 46LL);
        return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 44LL);
      }
      if ( (unsigned __int16)v29 <= 0x1CCu )
      {
        v64 = v29 + 57;
        goto LABEL_143;
      }
      v49 = 1LL << ((unsigned __int8)v29 + 51);
      if ( (v49 & 0x24) != 0 )
        return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 54LL);
      if ( (v49 & 0x12) != 0 )
        return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 52LL);
      return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 50LL);
    case 14:
      return 2 * sub_6F6DE0(a1, *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL));
    case 16:
    case 17:
    case 29:
    case 34:
      v4 = *(_QWORD *)(a2 + 24);
      goto LABEL_3;
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 28:
    case 31:
    case 37:
    case 38:
      v16 = (unsigned __int64)sub_B145E0(a2) >> 32;
      v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
      if ( !(_BYTE)v16 )
        return sub_6F6DE0(a1, *v5);
      v4 = *(_QWORD *)(a2 + 8LL * (unsigned int)sub_B145E0(a2) + 64);
      goto LABEL_3;
    case 25:
    case 26:
      return 0;
    case 30:
      return *(unsigned int *)(a2 + 44)
           * (unsigned __int64)*(unsigned int *)(a2 + 40)
           * sub_6F6DE0(a1, *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL));
    case 32:
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 17272) + 16LL))(*(_QWORD *)(a1 + 17272));
    case 33:
      return *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 8LL);
    case 35:
      if ( *(char *)(sub_B07AF0(a2) + 28) < 0 )
        return 8;
      sub_B07AF0(a2);
      v41 = *(_QWORD *)sub_AC1080(a1);
      v14 = sub_6F7120(a1) * v41;
      sub_6F7120(a1);
      return v14;
    case 36:
      goto LABEL_15;
    case 40:
      v32 = *(unsigned __int8 **)(a1 + 17288);
      v33 = *(_QWORD *)v32;
      v34 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 936LL);
      if ( v34 == sub_6A6870 )
      {
        v14 = v32[8];
      }
      else
      {
        v63 = ((__int64 (__fastcall *)(unsigned __int8 *, __int64))v34)(v32, 1);
        v32 = *(unsigned __int8 **)(a1 + 17288);
        v14 = v63;
        v33 = *(_QWORD *)v32;
      }
      v35 = *(__int64 (__fastcall **)(__int64))(v33 + 944);
      if ( v35 != sub_6A6880 )
        ((void (__fastcall *)(unsigned __int8 *, __int64))v35)(v32, 1);
      return v14;
    case 42:
    case 43:
      v9 = sub_6B2590(a2);
      v8 = *(unsigned __int8 **)(a1 + 17288);
      v7 = *(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL];
      v10 = v7;
      if ( (v7 & 8) == 0 )
        return v8[8];
      goto LABEL_9;
    case 44:
    case 48:
      if ( (*(_BYTE *)(a2 + 18) & 8) == 0 )
        goto LABEL_15;
      v4 = sub_B155F0(a2);
      goto LABEL_3;
    case 45:
      if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
LABEL_43:
        v4 = *(_QWORD *)(a2 + 48);
      else
LABEL_15:
        v4 = *(_QWORD *)(a2 + 8);
      goto LABEL_3;
    case 46:
    case 47:
      if ( *(char *)(sub_B14A40(a2) + 28) < 0 )
        return 8;
      if ( *(_BYTE *)(a2 + 16) == 46 )
      {
        v25 = sub_B14A40(a2);
        v26 = sub_6B31C0(v25, a2);
        v27 = sub_B0D320(*(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL));
        v28 = sub_6F6DE0(a1, v27);
        sub_798DC0(v25);
        return v28;
      }
      v57 = sub_B14A40(a2);
      v58 = *(_QWORD *)sub_AB4240(a1, v57);
      v14 = sub_6F7120(a1) * v58;
      sub_6F7120(a1);
      if ( (*(_BYTE *)(v57 + 29) & 1) != 0 )
      {
        v59 = sub_79A2B0(v57);
        v60 = *(_QWORD *)v59;
        v61 = *(_QWORD *)v59 + 8LL * *(unsigned int *)(v59 + 8);
        if ( v60 < v61 )
        {
          do
          {
            if ( *(_WORD *)(*(_QWORD *)v60 + 32LL) == 118 )
              break;
            v60 += 8LL;
          }
          while ( v61 != v60 );
        }
        else
        {
          for ( ; v60 != v61; v61 += 8LL )
          {
            if ( *(_WORD *)(*(_QWORD *)v61 + 32LL) == 118 )
              break;
          }
        }
      }
      return v14;
    case 49:
    case 50:
      v4 = sub_B0D2C0(a2);
      goto LABEL_3;
    case 51:
      v4 = sub_B0CEE0(a2);
      goto LABEL_3;
    case 52:
      v30 = sub_B0CB60(a2);
      v14 = sub_6F6DE0(a1, *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL));
      sub_798DC0(*(_QWORD *)(a2 + 32));
      return v14;
    case 55:
      v4 = sub_B0CC40(a2);
LABEL_3:
      v5 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
      return sub_6F6DE0(a1, *v5);
    case 56:
    case 57:
      v20 = sub_6F6DE0(a1, *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL));
      v21 = *(_DWORD *)(a2 + 20);
      v22 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v22 + 16) != 57
        || (v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL),
            *(_BYTE *)(v23 + 16) != 13)
        || ((*(_WORD *)(v23 + 18) >> 3) & 0x1FF) != 0x1B3 )
      {
        v21 = v20 * *(_DWORD *)(a2 + 20);
      }
      if ( v21 < 8 )
        v21 = 8;
      v14 = v21;
      if ( (v21 & (v21 - 1)) != 0 )
      {
        _BitScanReverse(&v24, v21 - 1);
        return (unsigned int)(1 << (v24 + 1)) * ((((unsigned __int64)v21 - 1) >> ((unsigned __int8)v24 + 1)) + 1);
      }
      return v14;
    default:
      return 0;
  }
}

