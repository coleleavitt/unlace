char __fastcall sub_6E7A80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  int v15; // eax
  _QWORD *v16; // rdi
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // rax
  char v21; // al
  __int64 v22; // rax
  _QWORD *v23; // r12
  __int64 v25; // rsi
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rbx
  _QWORD *v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r12

  switch ( ((*(_BYTE *)(a2 + 28) & 0x7F) + 118) & 0x7F )
  {
    case 0:
    case 1:
    case 4:
    case 0x46:
      goto LABEL_22;
    case 2:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
      goto LABEL_29;
    case 3:
    case 5:
    case 0xE:
    case 0xF:
      v16 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        return (unsigned int)sub_79B8A0(*v16) ^ 1;
      else
        return (unsigned int)sub_79B8A0(v16) ^ 1;
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
      if ( (unsigned int)sub_780BD0(a2) != 1 )
        goto LABEL_26;
      goto LABEL_29;
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
      if ( (*(_BYTE *)(a2 + 28) & 0x7D) == 0x29 )
        goto LABEL_29;
      v18 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v18 = *(_QWORD *)(v18 + 8);
      v19 = *(_BYTE *)(sub_79C2A0(v18, a2, *(_BYTE *)(a2 + 28) & 0x7D, a4) + 8) & 0x7F;
      if ( v19 != 22 && v19 )
      {
        if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x29 )
          goto LABEL_29;
        v20 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
          v20 = *(_QWORD *)v20;
        if ( ((*(_BYTE *)(v20 + 8) + 72) & 0x7Fu) > 3 )
          goto LABEL_29;
      }
      if ( (*(_BYTE *)(a2 + 96) & 7) == 5 || sub_77CBA0(a2) )
        goto LABEL_29;
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x28 )
      {
        LOBYTE(v15) = 0;
        return v15;
      }
LABEL_26:
      v17 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v17 = (_QWORD *)*v17;
      if ( (unsigned __int8)sub_79B8A0(v17) )
        goto LABEL_29;
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        goto LABEL_45;
      v6 = sub_79A2B0(a2);
      v7 = *(_QWORD *)v6;
      v8 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
      if ( v7 < v8 )
      {
        while ( *(_WORD *)(*(_QWORD *)v7 + 32LL) != 391 )
        {
          v7 += 8LL;
          if ( v8 == v7 )
            goto LABEL_8;
        }
      }
      else
      {
        if ( v7 == v8 )
          goto LABEL_8;
        while ( *(_WORD *)(*(_QWORD *)v8 + 32LL) != 391 )
        {
          v8 += 8LL;
          if ( v7 == v8 )
            goto LABEL_8;
        }
      }
      if ( v7 != v8 )
      {
LABEL_29:
        LOBYTE(v15) = 0;
        return v15;
      }
LABEL_8:
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        goto LABEL_45;
      v9 = sub_79A2B0(a2);
      v10 = *(_QWORD *)v9;
      v11 = *(_QWORD *)v9 + 8LL * *(unsigned int *)(v9 + 8);
      if ( v10 < v11 )
      {
        while ( *(_WORD *)(*(_QWORD *)v10 + 32LL) != 401 )
        {
          v10 += 8LL;
          if ( v11 == v10 )
            goto LABEL_15;
        }
      }
      else
      {
        if ( v10 == v11 )
          goto LABEL_15;
        while ( *(_WORD *)(*(_QWORD *)v11 + 32LL) != 401 )
        {
          v11 += 8LL;
          if ( v10 == v11 )
            goto LABEL_15;
        }
      }
      if ( v10 != v11 )
        goto LABEL_22;
LABEL_15:
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        goto LABEL_45;
      v12 = sub_79A2B0(a2);
      v13 = *(_QWORD *)v12;
      v14 = *(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8);
      if ( v13 < v14 )
      {
        while ( *(_WORD *)(*(_QWORD *)v13 + 32LL) != 380 )
        {
          v13 += 8LL;
          if ( v14 == v13 )
            goto LABEL_45;
        }
      }
      else
      {
        if ( v13 == v14 )
          goto LABEL_45;
        while ( *(_WORD *)(*(_QWORD *)v14 + 32LL) != 380 )
        {
          v14 += 8LL;
          if ( v13 == v14 )
            goto LABEL_45;
        }
      }
      if ( v13 != v14 )
        goto LABEL_22;
LABEL_45:
      if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 32 <= 5 )
      {
        v21 = *(_BYTE *)(a2 + 83);
        if ( ((v21 & 8) != 0 || (*(_BYTE *)(a2 + 128) & 1) == 0 && !*(_QWORD *)(a2 + 128)) && (v21 & 0x40) == 0 )
        {
          LOBYTE(v15) = sub_78BEE0(a2);
          return v15;
        }
        if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
        {
LABEL_50:
          if ( ((1LL << *(_DWORD *)(*(_QWORD *)(a1 + 17288) + 340LL)) & 0x665) == 0
            || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 33 > 3 )
          {
            goto LABEL_57;
          }
          v22 = *(_QWORD *)(sub_79A2E0(a2 + 72) + 16);
          v23 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v22 & 4) != 0 )
            v23 = (_QWORD *)*v23;
          if ( v23 )
            v23 -= 8;
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2)
            || !sub_6E7910((__int64)v23)
            || (v38 = sub_AC05C0(a1, v23)) == 0
            || (v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38),
                v39 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2)) )
          {
LABEL_57:
            LOBYTE(v15) = (unsigned int)sub_6D7DE0(a1, (_BYTE *)a2) > 2;
            return v15;
          }
LABEL_22:
          LOBYTE(v15) = 1;
          return v15;
        }
        v32 = sub_79A2B0(a2);
        v33 = *(_QWORD *)v32;
        v34 = *(_QWORD *)v32 + 8LL * *(unsigned int *)(v32 + 8);
        if ( v33 < v34 )
        {
          while ( *(_WORD *)(*(_QWORD *)v33 + 32LL) != 177 )
          {
            v33 += 8LL;
            if ( v34 == v33 )
              goto LABEL_92;
          }
        }
        else
        {
          if ( v33 == v34 )
            goto LABEL_92;
          while ( *(_WORD *)(*(_QWORD *)v34 + 32LL) != 177 )
          {
            v34 += 8LL;
            if ( v33 == v34 )
              goto LABEL_92;
          }
        }
        if ( v33 != v34 )
          goto LABEL_22;
LABEL_92:
        if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
          goto LABEL_50;
        v35 = sub_79A2B0(a2);
        v36 = *(_QWORD *)v35;
        v37 = *(_QWORD *)v35 + 8LL * *(unsigned int *)(v35 + 8);
        if ( v36 < v37 )
        {
          while ( *(_WORD *)(*(_QWORD *)v36 + 32LL) != 194 )
          {
            v36 += 8LL;
            if ( v37 == v36 )
              goto LABEL_50;
          }
        }
        else
        {
          if ( v36 == v37 )
            goto LABEL_50;
          while ( *(_WORD *)(*(_QWORD *)v37 + 32LL) != 194 )
          {
            v37 += 8LL;
            if ( v36 == v37 )
              goto LABEL_50;
          }
        }
        if ( v36 != v37 )
          goto LABEL_22;
        goto LABEL_50;
      }
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 2160) + 64LL) && (unsigned __int8)((unsigned __int64)sub_723500(a2) >> 32) )
        goto LABEL_22;
      v25 = sub_798D40(a2);
      if ( !(unsigned int)sub_77B6A0(a2, v25) && !(unsigned __int8)sub_6CBE20(a1, a2) || (unsigned __int8)sub_79AEC0(a2) )
        goto LABEL_29;
      v26 = sub_6D87A0(a1, a2);
      if ( v26 > 2 )
        goto LABEL_22;
      if ( v26 == 1 )
        goto LABEL_29;
      if ( (unsigned int)sub_77CD80(a2, a1) )
        goto LABEL_22;
      if ( sub_77BC00(a2) )
      {
        v27 = sub_77BC00(a2);
        if ( (unsigned __int8)sub_8146E0(v27, a1, 1) )
        {
          if ( (*(_DWORD *)sub_77BC00(a2) & 0x20000) != 0 || !sub_77C2D0(a2) )
            goto LABEL_22;
        }
      }
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2C )
        goto LABEL_29;
      v28 = *(unsigned int *)(a2 + 100);
      v29 = (_QWORD *)(a2 + 104);
      v30 = &v29[v28];
      while ( v29 != v30 )
      {
        v31 = sub_7A8C80(*v29);
        if ( v31 && (unsigned __int8)sub_6E7A80(a1, v31) )
          goto LABEL_22;
        ++v29;
      }
      LOBYTE(v15) = 0;
      return v15;
    default:
      LOBYTE(v15) = 0;
      return v15;
  }
}

