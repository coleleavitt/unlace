__int64 __fastcall sub_86D900(
        unsigned int *a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v8; // r13d
  int v9; // r14d
  __int64 v10; // r15
  int v11; // ebx
  __int64 v13; // rbp
  int v14; // ecx
  __int64 v16; // rcx
  unsigned int v17; // esi
  int v18; // eax
  __int64 v19; // rcx
  char v20; // si
  __int64 v21; // rcx
  unsigned int v22; // esi
  int v23; // r10d
  char *v24; // rax
  char *v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  char *v32; // rax
  char v33; // si
  int v34; // eax
  char *v35; // rax
  _QWORD *v36; // rax
  char *v37; // rax
  char *v38; // rax
  _QWORD *v39; // rax
  int v40; // [rsp+Ch] [rbp-3Ch]
  int v41; // [rsp+Ch] [rbp-3Ch]
  int v42; // [rsp+Ch] [rbp-3Ch]
  int v43; // [rsp+Ch] [rbp-3Ch]
  int v44; // [rsp+Ch] [rbp-3Ch]
  int v45; // [rsp+Ch] [rbp-3Ch]
  int v46; // [rsp+Ch] [rbp-3Ch]

  v8 = *a1;
  v9 = a7;
  v10 = a8;
  if ( *a1 )
    return v8;
  a1[36] = a2 & 0x100;
  v11 = a3;
  v13 = a6;
  v14 = a5;
  switch ( (char)a2 )
  {
    case '@':
      if ( (a2 & 0xFA00) == 0 )
      {
        v40 = a5;
        v18 = sub_86C5C0(a1, a3, a4, a5, a6, a7, a8);
        v14 = v40;
        if ( v18 != 4 )
          return *a1;
      }
      a5 = v14;
      a6 = v13;
      v16 = a4;
      a3 = v11;
      v17 = 84082944;
      return sub_86D220(a1, v17, a3, v16, a5, a6, a7, a8);
    case 'A':
      v16 = a4;
      v17 = 353571088;
      return sub_86D220(a1, v17, a3, v16, a5, a6, a7, a8);
    case 'B':
      if ( a5 == 127 && !a6 )
      {
        a6 = a8;
        a5 = a7;
        v19 = a4;
        v20 = 24;
        return sub_86B490(a1, v20, a3, v19, a5, a6);
      }
      if ( (a2 & 0xFA00) != 0 )
        goto LABEL_56;
      if ( a7 == 127 )
      {
        v43 = a5;
        v29 = sub_86C5C0(a1, a3, a4, a5, a6, 127, -a8);
        v14 = v43;
        if ( v29 != 4 )
          return *a1;
        goto LABEL_56;
      }
      if ( a3 > 126 || a3 != a7 )
      {
LABEL_56:
        a5 = v14;
        a6 = v13;
        v21 = a4;
        a3 = v11;
        v22 = 757803304;
        return sub_86CA20(a1, v22, a3, v21, a5, a6, a7, a8);
      }
      if ( (unsigned int)sub_86CA20(a1, 0x2D2B2928u, a3, 0, a3, 0, a5, a6) )
        return *a1;
      a6 = 0;
      a5 = v11;
      v19 = 0;
      a3 = v11;
      v20 = 24;
      return sub_86B490(a1, v20, a3, v19, a5, a6);
    case 'C':
      v21 = a4;
      v22 = 488315160;
      return sub_86CA20(a1, v22, a3, v21, a5, a6, a7, a8);
    case 'D':
      v23 = 15;
      if ( a3 <= 126 )
        v23 = a3;
      if ( a5 == v23 && a7 != 127 )
        goto LABEL_31;
      if ( a7 == v23 )
      {
        if ( a5 != 127 )
          goto LABEL_32;
      }
      else if ( a5 != 127 )
      {
        if ( a7 != 127 )
        {
          if ( (a7 & 0x80u) != 0 )
          {
            if ( v23 == (a7 & 0x7F) )
            {
              v23 = 15;
            }
            else if ( v23 == (((int)a7 >> 8) & 0x7F) )
            {
              v23 = 15;
            }
          }
          v44 = v23;
          v30 = sub_868510(a1, v23, 0, a5, a6);
          v23 = v44;
          if ( v30 )
            return *a1;
LABEL_31:
          a6 = a8;
          a5 = a7;
          goto LABEL_32;
        }
        if ( (unsigned __int64)(a8 + 128) > 0xFF )
        {
          if ( (unsigned __int64)(a8 + 0x80000000LL) >> 32 )
          {
            if ( a5 != v23 )
            {
              v45 = v23;
              v31 = sub_868510(a1, v23, 0, a5, a6);
              v23 = v45;
              if ( v31 )
                return *a1;
            }
            v42 = v23;
            v27 = a8;
LABEL_53:
            v28 = sub_867C50(a1, 16, v27);
            a6 = 0;
            v23 = v42;
            a5 = 16;
            if ( v28 )
              return *a1;
LABEL_32:
            v24 = sub_867CC0((__int64)a1, 2u, v23, 0, a5, a6);
            if ( v24 )
            {
              *(_WORD *)v24 = -20721;
            }
            else if ( *a1 )
            {
              return *a1;
            }
            goto LABEL_34;
          }
          v38 = sub_867CC0((__int64)a1, 1u, v23, 0, a5, a6);
          if ( !v38 )
            return *a1;
          *v38 = 105;
          v39 = sub_867B60((__int64)a1, 5);
          if ( !v39 )
            return *a1;
          *(_BYTE *)v39 = 4;
          *((_QWORD *)a1 + 15) += 4LL;
          *(_DWORD *)((char *)v39 + 1) = a8;
LABEL_34:
          if ( (v11 & 0x80u) == 0 )
            return v8;
          v25 = sub_867CC0((__int64)a1, 1u, 15, 0, v11, a4);
          if ( v25 )
          {
            *v25 = -119;
            return v8;
          }
          return *a1;
        }
        v37 = sub_867CC0((__int64)a1, 1u, v23, 0, a5, a6);
        if ( !v37 )
          return *a1;
        *v37 = 107;
        v33 = a8;
        goto LABEL_78;
      }
      if ( a7 == 127 )
      {
        v46 = v23;
        v34 = sub_868510(a1, v23, 0, 127, a8);
        v23 = v46;
        if ( v34 )
          return *a1;
        if ( (unsigned __int64)(v13 + 128) > 0xFF )
        {
          if ( (unsigned __int64)(v13 + 0x80000000LL) >> 32 )
          {
LABEL_52:
            v42 = v23;
            v27 = v13;
            goto LABEL_53;
          }
          v9 = v46;
          v10 = 0;
          goto LABEL_84;
        }
        v9 = v46;
        v10 = 0;
      }
      else if ( (unsigned __int64)(a6 + 128) > 0xFF )
      {
        if ( (unsigned __int64)(a6 + 0x80000000LL) >> 32 )
        {
          if ( a7 != v23 )
          {
            v41 = v23;
            v26 = sub_868510(a1, v23, 0, a7, a8);
            v23 = v41;
            if ( v26 )
              return *a1;
          }
          goto LABEL_52;
        }
LABEL_84:
        v35 = sub_867CC0((__int64)a1, 1u, v23, 0, v9, v10);
        if ( !v35 )
          return *a1;
        *v35 = 105;
        v36 = sub_867B60((__int64)a1, 5);
        if ( !v36 )
          return *a1;
        *(_BYTE *)v36 = 4;
        *((_QWORD *)a1 + 15) += 4LL;
        *(_DWORD *)((char *)v36 + 1) = v13;
        goto LABEL_34;
      }
      v32 = sub_867CC0((__int64)a1, 1u, v23, 0, v9, v10);
      if ( !v32 )
        return *a1;
      *v32 = 107;
      v33 = v13;
LABEL_78:
      if ( (unsigned int)sub_86AFC0(a1, v33) )
        return *a1;
      goto LABEL_34;
    case 'E':
      v16 = a4;
      v17 = 623059232;
      return sub_86D220(a1, v17, a3, v16, a5, a6, a7, a8);
    case 'F':
      v16 = a4;
      v17 = 218827016;
      return sub_86D220(a1, v17, a3, v16, a5, a6, a7, a8);
    case 'G':
      if ( (a2 & 0xFA00) != 0 )
        goto LABEL_15;
      if ( a7 == 127 && a8 == -1 )
        goto LABEL_58;
      if ( a5 != 127 || a6 != -1 )
      {
LABEL_15:
        v16 = a4;
        v17 = 892547376;
        return sub_86D220(a1, v17, a3, v16, a5, a6, a7, a8);
      }
      a6 = a8;
      a5 = a7;
LABEL_58:
      v19 = a4;
      v20 = 16;
      return sub_86B490(a1, v20, a3, v19, a5, a6);
    case 'H':
    case 'I':
      return (unsigned int)sub_86D720(a1, 32, a2 & 0xFA00, a3, a4, a5, a6, a7, a8);
    case 'J':
    case 'K':
      return (unsigned int)sub_86D720(a1, 40, a2 & 0xFA00, a3, a4, a5, a6, a7, a8);
    case 'L':
    case 'M':
      return (unsigned int)sub_86D720(a1, 56, a2 & 0xFA00, a3, a4, a5, a6, a7, a8);
    case 'N':
      return (unsigned int)sub_86D720(a1, 0, 0, a3, a4, a5, a6, a7, a8);
    case 'O':
      return (unsigned int)sub_86D720(a1, 8, 0, a3, a4, a5, a6, a7, a8);
    default:
      return v8;
  }
}
