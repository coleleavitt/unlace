const char *__fastcall sub_21430(__int64 a1, int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r9d
  const char *result; // rax
  int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // r9
  unsigned __int64 v10; // r13
  __int64 v12; // r15
  int v13; // edx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int16 custom_fixup; // ax
  unsigned __int16 v19; // bp
  __int64 v20; // rax
  __int16 v21; // bp
  int v22; // r9d
  __int64 v23; // rax
  int v24; // r9d
  unsigned __int16 word; // ax
  int v26; // edx
  __int64 v27; // rax
  int v28; // [rsp+0h] [rbp-58h]
  unsigned __int16 v30; // [rsp+0h] [rbp-58h]
  __int64 v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  _QWORD v33[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = a2[7];
  v33[1] = __readfsqword(0x28u);
  result = "Illegal relocation entry for S/390";
  if ( v5 )
  {
    v7 = *a2;
    v8 = *(_QWORD *)(a2 + 1);
    v9 = a3;
    v10 = *(_QWORD *)(a2 + 3);
    v12 = *(_QWORD *)(a4 + 16);
    if ( *(_WORD *)(a1 + 348) == 0x8000 )
    {
      v32 = a4;
      *(_WORD *)(a1 + 348) = find_custom_fixup("PC16DBL");
      *(_WORD *)(a1 + 350) = find_custom_fixup("PC32DBL");
      *(_WORD *)(a1 + 352) = find_custom_fixup("LO12");
      custom_fixup = find_custom_fixup("LO20");
      a4 = v32;
      v9 = a3;
      *(_WORD *)(a1 + 354) = custom_fixup;
    }
    v31 = v9;
    v28 = (unsigned __int8)v7;
    if ( (unsigned __int8)sub_21240(a1, (unsigned __int8)v7, v8, v10, v12, v9, a4, a5) )
    {
      return nullptr;
    }
    else
    {
      v13 = v10 + v12;
      switch ( (char)v7 )
      {
        case 1:
          if ( v10 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
            v13 = v10;
          else
            LODWORD(v12) = 0;
          v24 = 13;
          v23 = 0;
          goto LABEL_29;
        case 2:
          if ( v10 < *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
          {
            LODWORD(v10) = v10 + v12;
            LODWORD(v12) = 0;
          }
          v30 = v13;
          word = get_word(v8);
          sub_42050(a1, v8, v10, word ^ (word ^ v30) & 0xFFF, v12, 1, 0, 0, 0);
          return nullptr;
        case 3:
          if ( v10 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
            v13 = v10;
          else
            LODWORD(v12) = 0;
          LODWORD(v10) = v13;
          v20 = 0;
          v21 = 0;
          v22 = 1;
          goto LABEL_17;
        case 4:
        case 8:
          if ( v10 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
            v13 = v10;
          else
            LODWORD(v12) = 0;
          LODWORD(v10) = v13;
          v20 = 0;
          v21 = 0;
          v22 = 4;
          goto LABEL_17;
        case 5:
          if ( v10 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
          {
            v20 = v8;
          }
          else
          {
            LODWORD(v10) = v10 + v12;
            v20 = v8;
            LODWORD(v12) = 0;
          }
          v21 = 0;
          v22 = 4;
          goto LABEL_17;
        case 16:
          if ( v10 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
          {
            v20 = v8;
          }
          else
          {
            LODWORD(v10) = v10 + v12;
            v20 = v8;
            LODWORD(v12) = 0;
          }
          v21 = 0;
          v22 = 1;
          goto LABEL_17;
        case 17:
        case 18:
          if ( v10 < *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
          {
            LODWORD(v10) = v10 + v12;
            LODWORD(v12) = 0;
          }
          v22 = *(unsigned __int16 *)(a1 + 348);
          v20 = v8;
          v21 = 32;
          goto LABEL_17;
        case 19:
        case 20:
          if ( v10 < *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
          {
            LODWORD(v10) = v10 + v12;
            LODWORD(v12) = 0;
          }
          v22 = *(unsigned __int16 *)(a1 + 350);
          v20 = v8;
          v21 = 32;
LABEL_17:
          sub_42050(a1, v8, v10, 0, v12, v22, v20, 0x40000000, 0);
          if ( v21 )
            goto LABEL_18;
          return nullptr;
        case 22:
          if ( v10 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
            v13 = v10;
          else
            LODWORD(v12) = 0;
          v23 = 0;
          goto LABEL_28;
        case 23:
          if ( v10 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
            v13 = v10;
          else
            LODWORD(v12) = 0;
          v23 = v8;
LABEL_28:
          v24 = 12;
LABEL_29:
          sub_42050(a1, v8, v13, 0, v12, v24, v23, 0x40000000, 0);
          result = nullptr;
          break;
        default:
          v19 = 4;
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 617LL) )
            v19 = 12;
          switch ( v28 )
          {
            case 0:
              return &byte_4;
            case 9:
              sub_40E20(a1, v8, 2);
              return nullptr;
            case 10:
            case 11:
              goto LABEL_8;
            case 12:
              goto LABEL_7;
            case 21:
              v27 = sub_4A750(a5 + 16, *(_QWORD *)(a5 + 8), 1);
              v26 = v12 + v27;
              if ( v27 )
                goto LABEL_54;
              return nullptr;
            case 26:
              result = &byte_5;
              if ( !v31 )
                return result;
              if ( !(unsigned __int8)sub_43F30(v8, v12, 2)
                || !(unsigned __int8)sub_54F40(a1, 0, (unsigned int)v33, v8, v10, v31, a5) )
              {
                return nullptr;
              }
              v26 = v12 + LODWORD(v33[0]);
LABEL_54:
              sub_42050(a1, v8, v26, 0, 0, *(unsigned __int16 *)(a1 + 350), v8, 0x40000000, 0);
              break;
            case 61:
              sub_40E20(a1, v8, 4);
              sub_47DB0(a1, v12, v14, v15, v16, v17);
LABEL_7:
              v13 = v12;
LABEL_8:
              sub_42050(a1, v8, v13, v13, 0, v19, 0, 0, 0);
              return nullptr;
            default:
              return (_BYTE *)(&dword_0 + 2);
          }
LABEL_18:
          auto_mark_range(v8, v8 + 1, 20);
          result = nullptr;
          break;
      }
    }
  }
  return result;
}
