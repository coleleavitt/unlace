char __fastcall sub_434D30(unsigned __int8 *src, __int64 a2, _BYTE *a3, __int64 *a4)
{
  int v4; // ebx
  _BYTE *v6; // r13
  unsigned __int8 v9; // cl
  char v10; // al
  unsigned __int8 v11; // r12
  const unsigned __int16 **v12; // rax
  __int64 v13; // r14
  unsigned __int8 *v14; // rdi
  unsigned __int8 *v15; // rdi
  int v16; // eax
  int v17; // eax
  unsigned __int8 v18; // r12
  const unsigned __int16 **v19; // rax
  unsigned __int8 v20; // r12
  const unsigned __int16 **v21; // rax
  int v22; // eax
  unsigned __int8 *v23; // rdi
  char v24; // al
  char v25; // bl
  int v26; // eax
  bool v27; // zf
  void *v28; // rax
  int v29; // eax
  unsigned __int8 *v30; // r12
  __int64 v31; // rdi
  __int64 *v32; // rax
  _BYTE v33[4]; // [rsp+14h] [rbp-54h] BYREF
  void *srca; // [rsp+18h] [rbp-50h] BYREF
  _BYTE dest[24]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a2;
  v6 = a3;
  if ( !(_DWORD)a2 )
  {
    *a3 = 92;
    return 0;
  }
  v9 = *src;
  if ( (*src & 0x80u) == 0 )
  {
    a3 = (_BYTE *)v9;
    v10 = *((_BYTE *)qword_508140 + v9);
    if ( v10 )
    {
      *v6 = v10;
      return 1;
    }
  }
  switch ( v9 )
  {
    case '!':
      if ( (int)a2 > 1 && src[1] == 61 )
      {
        *v6 = 83;
        return 2;
      }
      else
      {
        *v6 = -122;
        return 1;
      }
    case '&':
      if ( (int)a2 > 1 && src[1] == 38 )
      {
        *v6 = 84;
        return 2;
      }
      else
      {
        *v6 = 73;
        return 1;
      }
    case '*':
      if ( (int)a2 > 1 && src[1] == 42 )
      {
        *v6 = 88;
        return 2;
      }
      else
      {
        *v6 = 68;
        return 1;
      }
    case '<':
      if ( (int)a2 <= 1 )
        goto LABEL_29;
      v16 = (char)src[1];
      if ( v16 == 60 )
      {
        *v6 = 78;
        return 2;
      }
      else if ( v16 == 61 )
      {
        *v6 = 80;
        return 2;
      }
      else
      {
LABEL_29:
        *v6 = 71;
        return 1;
      }
    case '=':
      if ( (int)a2 > 1 && src[1] == 61 )
      {
        *v6 = 82;
        return 2;
      }
      else
      {
        *v6 = 4;
        return 1;
      }
    case '>':
      if ( (int)a2 <= 1 )
        goto LABEL_36;
      v17 = (char)src[1];
      if ( v17 == 61 )
      {
        *v6 = 81;
        return 2;
      }
      else if ( v17 == 62 )
      {
        *v6 = 79;
        return 2;
      }
      else
      {
LABEL_36:
        *v6 = 72;
        return 1;
      }
    case 'e':
      if ( (int)a2 <= 1 )
        goto LABEL_12;
      if ( src[1] != 113 )
        goto LABEL_12;
      if ( (_DWORD)a2 != 2 )
      {
        v11 = src[2];
        if ( (v11 & 0x80u) == 0 )
        {
          v12 = __ctype_b_loc();
          a3 = (_BYTE *)v11;
          if ( ((*v12)[v11] & 0x400) != 0 )
            goto LABEL_12;
        }
      }
      *v6 = 86;
      return 2;
    case 'i':
      if ( (int)a2 <= 1 )
        goto LABEL_12;
      if ( src[1] != 110 )
        goto LABEL_12;
      if ( (_DWORD)a2 != 2 )
      {
        v18 = src[2];
        if ( (v18 & 0x80u) == 0 )
        {
          v19 = __ctype_b_loc();
          a3 = (_BYTE *)v18;
          if ( ((*v19)[v18] & 0x400) != 0 )
            goto LABEL_12;
        }
      }
      *v6 = 89;
      return 2;
    case 'n':
      if ( (int)a2 <= 1 )
        goto LABEL_12;
      if ( (_DWORD)a2 != 2 )
      {
        v20 = src[2];
        if ( (v20 & 0x80u) == 0 )
        {
          v21 = __ctype_b_loc();
          a3 = (_BYTE *)v20;
          if ( ((*v21)[v20] & 0x400) != 0 )
            goto LABEL_12;
        }
      }
      v22 = (char)src[1];
      if ( v22 == 101 )
      {
        *v6 = 87;
        return 2;
      }
      else
      {
        if ( v22 != 105 )
          goto LABEL_12;
        *v6 = 90;
        return 2;
      }
    case '|':
      if ( (int)a2 > 1 && src[1] == 124 )
      {
        *v6 = 85;
        return 2;
      }
      else
      {
        *v6 = 75;
        return 1;
      }
    default:
LABEL_12:
      v13 = sub_47B0B0(src, a2, a3);
      if ( (unsigned int)sub_4948A0(0, v13, 0, (_DWORD)src, a2, (unsigned int)&srca, 32) )
        goto LABEL_16;
      v14 = (unsigned __int8 *)srca;
      if ( &src[(int)a2] <= srca )
        goto LABEL_14;
      if ( !(unsigned int)sub_47D8C0((unsigned int)*(char *)srca) )
        goto LABEL_75;
      v14 = (unsigned __int8 *)srca;
LABEL_14:
      if ( *(_UNKNOWN ***)(v13 + 24) == &off_656120 )
      {
        v30 = src;
        if ( src < v14 )
        {
          while ( 1 )
          {
            v31 = (unsigned int)(char)*v30++;
            if ( !(unsigned int)sub_47D8C0(v31) )
              break;
            v14 = (unsigned __int8 *)srca;
            if ( v30 >= srca )
              goto LABEL_15;
          }
LABEL_75:
          if ( srca == src )
          {
            v32 = off_656088;
            *(_DWORD *)(v13 + 16) = 0;
            *(_QWORD *)(v13 + 8) = v32;
          }
          else
          {
            v28 = (void *)sub_40FB00((int)srca - (int)src + 1);
            *(_QWORD *)(v13 + 8) = v28;
            memcpy(v28, src, (unsigned int)((_DWORD)srca - (_DWORD)src));
            *(_BYTE *)(*(_QWORD *)(v13 + 8) + (_BYTE *)srca - src) = 0;
            *(_DWORD *)(v13 + 16) = (_DWORD)srca - (_DWORD)src;
          }
          *v6 = -63;
          if ( !a4 )
          {
LABEL_78:
            v29 = *(_DWORD *)v13 - 1;
            v27 = *(_DWORD *)v13 == 1;
            *(_DWORD *)v13 = v29;
            if ( v29 < 0 || v27 )
              sub_47B120(v13);
            return (_BYTE)srca - (_BYTE)src;
          }
LABEL_24:
          *a4 = v13;
          return (_BYTE)srca - (_BYTE)src;
        }
      }
LABEL_15:
      sub_434D30(v14);
      if ( (v33[3] & 0xC0) == 0x40 )
        goto LABEL_75;
LABEL_16:
      if ( (unsigned int)sub_47D8C0((unsigned int)(char)*src) && *src != 95 )
      {
        v15 = src;
        srca = src;
        while ( v4 && (unsigned int)sub_47D8C0((unsigned int)(char)*v15) )
        {
          --v4;
          v15 = (unsigned __int8 *)srca + 1;
          srca = (char *)srca + 1;
        }
        *v6 = 3;
        if ( !a4 )
          goto LABEL_78;
        sub_48E080(v13, src, (unsigned int)((_DWORD)srca - (_DWORD)src));
        goto LABEL_24;
      }
      v23 = src;
      if ( !(unsigned int)sub_49BD40(src, (unsigned int)a2) )
      {
        memcpy(dest, src, (int)a2);
        dest[(int)a2] = 0;
        v23 = dest;
      }
      v24 = sub_49BBC0(v23, v33);
      *v6 = 5;
      v25 = v24;
      v26 = *(_DWORD *)v13 - 1;
      v27 = *(_DWORD *)v13 == 1;
      *(_DWORD *)v13 = v26;
      if ( v26 < 0 || v27 )
        sub_47B120(v13);
      return v25;
  }
}

