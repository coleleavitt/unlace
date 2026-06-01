__int64 __fastcall sub_BDD420(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // r12d
  unsigned int v8; // ebx
  __m128i v9; // xmm1
  __int128 i; // rax
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rax
  _QWORD *v14; // r12
  __int64 v15; // r13
  _WORD *v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r13
  __int64 *v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 *v29; // rax
  unsigned __int64 *v30; // rax
  __int64 *v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdi
  unsigned __int64 v37; // rdi
  __int64 v38; // rbx
  _QWORD *v39; // r14
  __int64 *v40; // rax
  __int64 v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // rcx
  __int128 v44; // [rsp+F0h] [rbp-58h] BYREF
  __m128i v45; // [rsp+108h] [rbp-40h] BYREF

  v6 = (unsigned __int8)a3;
  v8 = a3;
  if ( (_BYTE)a3 || (int)sub_BDCD00(a1, a2, a3, a4, a5) >= 0 )
  {
    switch ( (*(_WORD *)a1 + 509) & 0x1FF )
    {
      case 0:
      case 0x2E:
      case 0x2F:
      case 0x43:
      case 0x45:
      case 0x46:
      case 0x5E:
      case 0x67:
      case 0x6B:
      case 0x74:
      case 0x75:
        return 1;
      case 1:
        if ( *(_BYTE *)(a1 + 2) <= 0x1Fu )
          return 1;
        goto LABEL_5;
      case 2:
      case 3:
      case 6:
      case 8:
      case 9:
      case 0xB:
      case 0xC:
      case 0xF:
      case 0x12:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x1A:
      case 0x1F:
      case 0x22:
      case 0x25:
      case 0x26:
      case 0x2A:
      case 0x31:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x37:
      case 0x3B:
      case 0x3C:
      case 0x3E:
      case 0x3F:
      case 0x44:
      case 0x48:
      case 0x4B:
      case 0x5B:
      case 0x5F:
      case 0x61:
      case 0x65:
      case 0x66:
      case 0x70:
      case 0x77:
      case 0x7B:
      case 0x7C:
        return 0;
      case 4:
      case 0xD:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x38:
      case 0x42:
      case 0x5C:
      case 0x69:
      case 0x6A:
        return v8;
      case 7:
        v17 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)&v44 = a2;
        WORD4(v44) = (unsigned __int8)v8;
        sub_BDDAD0(&v44, v17);
        return BYTE9(v44);
      case 0xE:
        v14 = (_QWORD *)(a1 + 24);
        v15 = a1 + 8LL * *(unsigned __int16 *)(a1 + 4) + 16;
        if ( v15 == a1 + 24 )
          return 0;
        while ( 1 )
        {
          v16 = (_WORD *)*v14;
          if ( (*(_WORD *)*v14 & 0x1FF) == 0x1A )
            v16 = *((_WORD **)v16 + 2);
          if ( (unsigned __int8)sub_BDD420(v16, a2, (unsigned __int8)v8) )
            break;
          if ( ++v14 == (_QWORD *)v15 )
            return 0;
        }
        return 1;
      case 0x19:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1E:
      case 0x20:
      case 0x21:
      case 0x23:
      case 0x24:
      case 0x27:
      case 0x4D:
      case 0x71:
      case 0x72:
        goto LABEL_22;
      case 0x30:
        v38 = a1 + 8LL * *(unsigned __int16 *)(a1 + 4) + 32;
        v39 = (_QWORD *)(a1 + 32);
        if ( v38 == a1 + 32 )
          return 0;
        while ( !*v39 || !(unsigned __int8)sub_BDD420(*v39, a2, v6) )
        {
          if ( (_QWORD *)v38 == ++v39 )
            return 0;
        }
        return 1;
      case 0x32:
        v36 = *(_QWORD *)(a1 + 56);
        if ( v36 )
        {
          if ( (v36 & 2) == 0 )
          {
            v37 = v36 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v37 )
            {
              if ( (unsigned __int8)sub_BDD420(v37, a2, (unsigned __int8)v8) )
                return 1;
            }
          }
        }
        goto LABEL_5;
      case 0x36:
        return sub_BDD420(
                 *(_QWORD *)(a1
                           + 8LL * (((*(_BYTE *)(a1 + 19) & 0x40) != 0) + ((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFFu))
                           + 32),
                 a2,
                 (unsigned __int8)v8);
      case 0x39:
        if ( (_BYTE)v8 && (*(_DWORD *)a1 & 0x80000) != 0 )
          return 1;
        goto LABEL_5;
      case 0x3A:
        return sub_BDD420(*(_QWORD *)(a1 + 16), a2, (unsigned __int8)v8);
      case 0x4A:
        if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
          v34 = *(_QWORD *)(a1 + 24);
        else
          v34 = *(_QWORD *)(a1 + 32);
        return sub_BDD420(v34, a2, (unsigned __int8)v8);
      case 0x4C:
      case 0x4E:
      case 0x4F:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
        goto LABEL_26;
      case 0x50:
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 24)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 <= 1
          && ((*(_WORD *)(a1 + 2) >> 3) & 0x7F) == 9 )
        {
          return 1;
        }
LABEL_26:
        if ( !(_BYTE)v8 )
          goto LABEL_5;
        if ( ((*(_WORD *)(a1 + 2) >> 3) & 0x7F) != 4 )
          goto LABEL_5;
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
        if ( (v13 & 4) == 0 && (byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
          goto LABEL_5;
        return 1;
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
        v18 = sub_BD7F30(*(_QWORD *)(a1 + 32));
        v23 = v18;
        if ( !v18 || (*(_BYTE *)(v18 + 29) & 1) == 0 )
          goto LABEL_22;
        v24 = sub_B68690(v18, a2, v19, v20, v21, v22);
        v27 = *v24;
        v28 = *v24 + 8LL * *((unsigned int *)v24 + 2);
        if ( *v24 >= v28 )
        {
          if ( v27 != v28 )
          {
            if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) == 181 )
              goto LABEL_5;
            v40 = (__int64 *)(v28 + 8);
            while ( 1 )
            {
              v28 = (unsigned __int64)v40;
              if ( (__int64 *)v27 == v40 )
                break;
              v41 = *v40++;
              if ( *(_WORD *)(v41 + 36) == 181 )
                goto LABEL_5;
            }
          }
        }
        else
        {
          v29 = (__int64 *)*v24;
          while ( 1 )
          {
            v27 = *v29;
            if ( *(_WORD *)(*v29 + 36) == 181 )
              break;
            if ( (__int64 *)v28 == ++v29 )
              goto LABEL_51;
          }
          if ( (__int64 *)v28 != v29 )
            goto LABEL_5;
        }
LABEL_51:
        if ( (*(_BYTE *)(v23 + 29) & 1) != 0 )
        {
          v30 = sub_B68690(v23, a2, v27, v28, v25, v26);
          v31 = (__int64 *)*v30;
          v32 = *v30 + 8LL * *((unsigned int *)v30 + 2);
          if ( *v30 >= v32 )
          {
            if ( v31 != (__int64 *)v32 )
            {
              if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) == 338 )
                goto LABEL_5;
              v42 = (__int64 *)(v32 + 8);
              while ( v42 != v31 )
              {
                v43 = *v42++;
                if ( *(_WORD *)(v43 + 36) == 338 )
                  goto LABEL_5;
              }
            }
          }
          else
          {
            v33 = *v30;
            while ( *(_WORD *)(*(_QWORD *)v33 + 36LL) != 338 )
            {
              v33 += 8LL;
              if ( v32 == v33 )
                goto LABEL_22;
            }
            if ( v32 != v33 )
              goto LABEL_5;
          }
        }
LABEL_22:
        if ( (_BYTE)v8 )
          return 1;
LABEL_5:
        sub_EC6110(&v44, a1);
        v9 = _mm_loadu_si128(&v45);
        for ( i = v44; ; *(_QWORD *)&v44 = i )
        {
LABEL_6:
          if ( v9.m128i_i64[0] == (_QWORD)i )
          {
LABEL_13:
            if ( v9.m128i_i64[1] == *((_QWORD *)&i + 1) )
              return 0;
          }
          while ( 1 )
          {
            if ( (BYTE8(i) & 3) != 0 )
            {
              v11 = *(_QWORD *)sub_ECEDF0(&v44);
              if ( !v11 )
                goto LABEL_10;
            }
            else
            {
              v11 = *(_QWORD *)i;
              if ( !*(_QWORD *)i )
                goto LABEL_17;
            }
            result = sub_BDD420(v11, a2, v6);
            if ( (_BYTE)result )
              return result;
LABEL_10:
            *((_QWORD *)&i + 1) = *((_QWORD *)&v44 + 1);
            if ( (BYTE8(v44) & 3) == 0 )
              break;
            if ( (*((_QWORD *)&v44 + 1) & 0xFFFFFFFFFFFFFFFCLL) == 0 )
            {
              sub_ECEA10(&v44, 1);
              i = v44;
              goto LABEL_6;
            }
            sub_ECEC20(&v44);
            i = v44;
            if ( v9.m128i_i64[0] == (_QWORD)v44 )
              goto LABEL_13;
          }
          *(_QWORD *)&i = v44;
LABEL_17:
          *(_QWORD *)&i = i + 8;
        }
      case 0x5D:
        if ( !(unsigned __int8)sub_C72370(a1) )
          return 0;
        if ( (_BYTE)v8 && (unsigned __int8)sub_C76B60(a1) )
          return 1;
        goto LABEL_5;
      case 0x68:
      case 0x6E:
      case 0x6F:
        if ( *(char *)(*(_QWORD *)(a1 + 16) + 82LL) >= 0 )
          goto LABEL_22;
        goto LABEL_5;
      case 0x6C:
        v35 = sub_B54370(*(_QWORD *)(a1 + 16));
        if ( !v35 )
          return 1;
        return sub_BDD420(v35, a2, (unsigned __int8)v8);
      case 0x6D:
        v34 = sub_C70F40(a1);
        return sub_BDD420(v34, a2, (unsigned __int8)v8);
      case 0x73:
        if ( ((*(_WORD *)(a1 + 2) >> 3) & 0x3Fu) - 21 <= 0xA )
          return 1;
        goto LABEL_5;
      default:
        goto LABEL_5;
    }
  }
  return 0;
}

