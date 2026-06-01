unsigned __int64 __fastcall sub_18240(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rax
  unsigned __int64 result; // rax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdx

  v1 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)(a1 + 64) <= v1 )
    return 0;
  *(_QWORD *)(a1 + 72) = v1 + 1;
  switch ( *(_BYTE *)(*(_QWORD *)(a1 + 56) + v1) )
  {
    case 'A':
      v35 = sub_135F0(a1);
      result = sub_CD20((_QWORD *)a1, 249, v35);
      break;
    case 'B':
      v34 = sub_BBE0(a1, 221);
      result = sub_CD20((_QWORD *)a1, 247, v34);
      break;
    case 'C':
      v30 = sub_BBE0(a1, 221);
      if ( !v30 )
        goto LABEL_4;
      v31 = sub_BA70(v30, 0);
      v32 = *(unsigned __int16 *)(v31 + 16);
      v33 = v31;
      if ( (unsigned __int16)v32 > 0xDFu )
        goto LABEL_4;
      if ( (unsigned __int16)v32 > 0xA8u )
      {
        v3 = 0x60008000000003LL;
        LOWORD(v32) = v32 - 169;
        if ( !_bittest64(&v3, v32) )
          goto LABEL_4;
      }
      else if ( (_WORD)v32 != 58 && (_WORD)v32 != 157 && (_WORD)v32 != 22 )
      {
        goto LABEL_4;
      }
      result = sub_CD20((_QWORD *)a1, 250, v33);
      break;
    case 'D':
      result = sub_CDD0(a1, 232);
      break;
    case 'F':
      v29 = sub_BBE0(a1, 221);
      result = sub_CD20((_QWORD *)a1, 248, v29);
      break;
    case 'I':
      result = sub_CDD0(a1, 229);
      break;
    case 'J':
      v26 = *(_DWORD *)(a1 + 96);
      if ( v26 )
      {
        v27 = (unsigned int)(v26 - 1);
        v28 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v27);
        *(_DWORD *)(a1 + 96) = v27;
      }
      else
      {
        v28 = 0;
      }
      result = sub_CD20((_QWORD *)a1, 302, v28);
      break;
    case 'K':
      v23 = *(_DWORD *)(a1 + 96);
      if ( v23 )
      {
        v24 = (unsigned int)(v23 - 1);
        v25 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v24);
        *(_DWORD *)(a1 + 96) = v24;
      }
      else
      {
        v25 = 0;
      }
      result = sub_CD20((_QWORD *)a1, 300, v25);
      break;
    case 'L':
      result = sub_CDD0(a1, 233);
      break;
    case 'M':
      result = sub_CDD0(a1, 298);
      break;
    case 'N':
      result = sub_CDD0(a1, 301);
      break;
    case 'P':
      result = sub_CDD0(a1, 94);
      break;
    case 'Q':
      v37 = *(_DWORD *)(a1 + 96);
      if ( v37 )
      {
        v38 = (unsigned int)(v37 - 1);
        v39 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v38);
        *(_DWORD *)(a1 + 96) = v38;
      }
      else
      {
        v39 = 0;
      }
      result = sub_CD20((_QWORD *)a1, 290, v39);
      break;
    case 'S':
      v36 = sub_13360(a1);
      result = sub_CD20((_QWORD *)a1, 182, v36);
      break;
    case 'U':
      result = sub_CDD0(a1, 139);
      break;
    case 'V':
      v22 = sub_181E0(a1, (unsigned __int8 (__fastcall *)(_QWORD))sub_BD40);
      result = sub_CD20((_QWORD *)a1, 166, v22);
      break;
    case 'X':
      result = sub_17350(a1);
      break;
    case 'a':
      result = sub_CDD0(a1, 227);
      break;
    case 'b':
      result = sub_CDD0(a1, 299);
      break;
    case 'c':
      v15 = sub_135F0(a1);
      result = sub_CD20((_QWORD *)a1, 177, v15);
      break;
    case 'f':
      result = sub_CDD0(a1, 72);
      break;
    case 'g':
      v16 = *(_DWORD *)(a1 + 96);
      if ( v16 )
      {
        v17 = (unsigned int)(v16 - 1);
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v17);
        *(_DWORD *)(a1 + 96) = v17;
      }
      else
      {
        v18 = 0;
      }
      result = sub_CD20((_QWORD *)a1, 292, v18);
      break;
    case 'h':
      v19 = *(_DWORD *)(a1 + 96);
      if ( v19 )
      {
        v20 = (unsigned int)(v19 - 1);
        v21 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v20);
        *(_DWORD *)(a1 + 96) = v20;
      }
      else
      {
        v21 = 0;
      }
      result = sub_CD20((_QWORD *)a1, 293, v21);
      break;
    case 'i':
      result = sub_CDD0(a1, 230);
      break;
    case 'j':
      v12 = *(_DWORD *)(a1 + 96);
      if ( v12 )
      {
        v13 = (unsigned int)(v12 - 1);
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v13);
        *(_DWORD *)(a1 + 96) = v13;
      }
      else
      {
        v14 = 0;
      }
      result = sub_CD20((_QWORD *)a1, 294, v14);
      break;
    case 'k':
      v9 = *(_DWORD *)(a1 + 96);
      if ( v9 )
      {
        v10 = (unsigned int)(v9 - 1);
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v10);
        *(_DWORD *)(a1 + 96) = v10;
      }
      else
      {
        v11 = 0;
      }
      result = sub_CD20((_QWORD *)a1, 295, v11);
      break;
    case 'l':
      result = sub_CDD0(a1, 231);
      break;
    case 'm':
      result = sub_CDD0(a1, 137);
      break;
    case 'n':
      result = sub_CDD0(a1, 148);
      break;
    case 'o':
      result = sub_CDD0(a1, 23);
      break;
    case 'p':
      v8 = sub_13360(a1);
      result = sub_CD20((_QWORD *)a1, 175, v8);
      break;
    case 'q':
      v5 = *(_DWORD *)(a1 + 96);
      if ( v5 )
      {
        v6 = (unsigned int)(v5 - 1);
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v6);
        *(_DWORD *)(a1 + 96) = v6;
      }
      else
      {
        v7 = 0;
      }
      result = sub_CD20((_QWORD *)a1, 323, v7);
      break;
    case 'r':
      result = sub_CDD0(a1, 228);
      break;
    case 's':
      result = sub_CDD0(a1, 140);
      break;
    case 't':
      result = sub_CDD0(a1, 141);
      break;
    case 'u':
      result = sub_CDD0(a1, 138);
      break;
    case 'z':
      result = sub_CDD0(a1, 306);
      break;
    default:
LABEL_4:
      result = 0;
      break;
  }
  return result;
}

