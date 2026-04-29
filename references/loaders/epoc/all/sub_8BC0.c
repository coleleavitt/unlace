__int64 *__fastcall sub_8BC0(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  int v9; // edx
  const char *v10; // r13
  __int64 v11; // rsi
  const void *v12; // r15
  void *v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // r15
  __int64 v16; // rbx
  char *v17; // r13
  __int64 *v18; // r14
  _QWORD *v19; // rsi
  unsigned __int64 v21; // rdx
  char *v22; // rsi
  char *v23; // r13
  unsigned int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax

  v6 = *a2;
  v7 = **(_QWORD **)(a1 + 184) + 72 * a5;
  if ( (__int64 *)v7 == *a2 )
  {
LABEL_4:
    v9 = *(_DWORD *)(v7 + 56);
    if ( v9 )
      goto LABEL_5;
LABEL_15:
    v11 = v6[3];
    v10 = "STD";
    if ( (unsigned __int64)v6[5] > 3 )
      goto LABEL_10;
    goto LABEL_16;
  }
  v8 = *(_QWORD *)(v7 + 8);
  if ( v8 <= 1 )
  {
    v6[1] = 0;
    v6 = *a2;
    goto LABEL_4;
  }
  v12 = *(const void **)v7;
  v13 = (void *)*v6;
  if ( v6[2] < v8 )
  {
    v28 = qvector_reserve(v6, *v6, *(_QWORD *)(v7 + 8), 1);
    *v6 = v28;
    v13 = (void *)v28;
  }
  v6[1] = v8;
  memmove(v13, v12, v8 - 1);
  *(_BYTE *)(*v6 + v8 - 1) = 0;
  v9 = *(_DWORD *)(v7 + 56);
  v6 = *a2;
  if ( !v9 )
    goto LABEL_15;
LABEL_5:
  if ( v9 == 3 )
  {
    v10 = "RUN";
    goto LABEL_9;
  }
  if ( v9 > 3 )
  {
    v10 = "NON";
    if ( v9 != 4 )
      goto LABEL_18;
LABEL_9:
    v11 = v6[3];
    if ( (unsigned __int64)v6[5] > 3 )
    {
LABEL_10:
      v6[4] = 4;
      *(_WORD *)v11 = *(_WORD *)v10;
      *(_BYTE *)(v11 + 2) = v10[2];
      *(_BYTE *)(v6[3] + 3) = 0;
      goto LABEL_11;
    }
LABEL_16:
    v14 = qvector_reserve(v6 + 3, v11, 4, 1);
    v6[3] = v14;
    v11 = v14;
    goto LABEL_10;
  }
  if ( v9 == 1 )
  {
    v10 = "TXT";
    goto LABEL_9;
  }
  v10 = "SIS";
  if ( v9 == 2 )
    goto LABEL_9;
LABEL_18:
  sub_8B00(v6 + 3, (__int64)"%3d", v9);
LABEL_11:
  switch ( *(_DWORD *)(v7 + 60) )
  {
    case 0:
      v15 = 5;
      v16 = 4;
      v17 = "Test";
      break;
    case 1:
      v15 = 8;
      v16 = 7;
      v17 = "English";
      break;
    case 2:
      v15 = 7;
      v16 = 6;
      v17 = "French";
      break;
    case 3:
      v15 = 7;
      v16 = 6;
      v17 = "German";
      break;
    case 4:
      v15 = 8;
      v16 = 7;
      v17 = "Spanish";
      break;
    case 5:
      v15 = 8;
      v16 = 7;
      v17 = "Italian";
      break;
    case 6:
      v15 = 8;
      v16 = 7;
      v17 = "Swedish";
      break;
    case 7:
      v15 = 7;
      v16 = 6;
      v17 = "Danish";
      break;
    case 8:
      v15 = 10;
      v16 = 9;
      v17 = "Norwegian";
      break;
    case 9:
      v15 = 8;
      v16 = 7;
      v17 = "Finnish";
      break;
    case 0xA:
      v15 = 9;
      v16 = 8;
      v17 = "American";
      break;
    case 0xB:
      v15 = 13;
      v16 = 12;
      v17 = "Swiss French";
      break;
    case 0xC:
      v15 = 13;
      v16 = 12;
      v17 = "Swiss German";
      break;
    case 0xD:
      v15 = 11;
      v16 = 10;
      v17 = "Portuguese";
      break;
    case 0xE:
      v15 = 8;
      v16 = 7;
      v17 = "Turkish";
      break;
    case 0xF:
      v15 = 10;
      v16 = 9;
      v17 = "Icelandic";
      break;
    case 0x10:
      v15 = 8;
      v16 = 7;
      v17 = "Russian";
      break;
    case 0x11:
      v15 = 10;
      v16 = 9;
      v17 = "Hungarian";
      break;
    case 0x12:
      v15 = 6;
      v16 = 5;
      v17 = "Dutch";
      break;
    case 0x13:
      v15 = 16;
      v16 = 15;
      v17 = "Belgian Flemish";
      break;
    case 0x14:
      v15 = 11;
      v16 = 10;
      v17 = "Australian";
      break;
    case 0x15:
      v15 = 15;
      v16 = 14;
      v17 = "Belgian French";
      break;
    case 0x16:
      v15 = 9;
      v16 = 8;
      v17 = "Austrian";
      break;
    case 0x17:
      v15 = 12;
      v16 = 11;
      v17 = "New Zealand";
      break;
    case 0x18:
      v15 = 21;
      v16 = 20;
      v17 = "International French";
      break;
    case 0x19:
      v15 = 6;
      v16 = 5;
      v17 = "Czech";
      break;
    case 0x1A:
      v15 = 7;
      v16 = 6;
      v17 = "Slovak";
      break;
    case 0x1B:
      v15 = 7;
      v16 = 6;
      v17 = "Polish";
      break;
    case 0x1C:
      v15 = 10;
      v16 = 9;
      v17 = "Slovenian";
      break;
    case 0x1D:
      v15 = 15;
      v16 = 14;
      v17 = "Taiwan Chinese";
      break;
    case 0x1E:
      v15 = 18;
      v16 = 17;
      v17 = "Hong Kong Chinese";
      break;
    case 0x1F:
      v15 = 12;
      v16 = 11;
      v17 = "PRC Chinese";
      break;
    case 0x20:
      v15 = 9;
      v16 = 8;
      v17 = "Japanese";
      break;
    case 0x21:
      v15 = 5;
      v16 = 4;
      v17 = "Thai";
      break;
    case 0x22:
      v15 = 10;
      v16 = 9;
      v17 = "Afrikaans";
      break;
    case 0x23:
      v15 = 9;
      v16 = 8;
      v17 = "Albanian";
      break;
    case 0x24:
      v15 = 8;
      v16 = 7;
      v17 = "Amharic";
      break;
    case 0x25:
      v15 = 7;
      v16 = 6;
      v17 = "Arabic";
      break;
    case 0x26:
      v15 = 9;
      v16 = 8;
      v17 = "Armenian";
      break;
    case 0x27:
      v15 = 8;
      v16 = 7;
      v17 = "Tagalog";
      break;
    case 0x28:
      v15 = 12;
      v16 = 11;
      v17 = "Belarussian";
      break;
    case 0x29:
      v15 = 8;
      v16 = 7;
      v17 = "Bengali";
      break;
    case 0x2A:
      v15 = 10;
      v16 = 9;
      v17 = "Bulgarian";
      break;
    case 0x2B:
      v15 = 8;
      v16 = 7;
      v17 = "Burmese";
      break;
    case 0x2C:
      v15 = 8;
      v16 = 7;
      v17 = "Catalan";
      break;
    case 0x2D:
      v15 = 9;
      v16 = 8;
      v17 = "Croatian";
      break;
    case 0x2E:
      v15 = 17;
      v16 = 16;
      v17 = "Canadian English";
      break;
    case 0x2F:
      v15 = 22;
      v16 = 21;
      v17 = "International English";
      break;
    case 0x30:
      v15 = 22;
      v16 = 21;
      v17 = "South African English";
      break;
    case 0x31:
      v15 = 9;
      v16 = 8;
      v17 = "Estonian";
      break;
    case 0x32:
      v15 = 6;
      v16 = 5;
      v17 = "Farsi";
      break;
    case 0x33:
      v15 = 16;
      v16 = 15;
      v17 = "Canadian French";
      break;
    case 0x34:
      v15 = 7;
      v16 = 6;
      v17 = "Gaelic";
      break;
    case 0x35:
      v15 = 9;
      v16 = 8;
      v17 = "Georgian";
      break;
    case 0x36:
      v15 = 6;
      v16 = 5;
      v17 = "Greek";
      break;
    case 0x37:
      v15 = 13;
      v16 = 12;
      v17 = "Cyprus Greek";
      break;
    case 0x38:
      v15 = 9;
      v16 = 8;
      v17 = "Gujarati";
      break;
    case 0x39:
      v15 = 7;
      v16 = 6;
      v17 = "Hebrew";
      break;
    case 0x3A:
      v15 = 6;
      v16 = 5;
      v17 = "Hindi";
      break;
    case 0x3B:
      v15 = 11;
      v16 = 10;
      v17 = "Indonesian";
      break;
    case 0x3C:
      v15 = 6;
      v16 = 5;
      v17 = "Irish";
      break;
    case 0x3D:
      v15 = 14;
      v16 = 13;
      v17 = "Swiss Italian";
      break;
    case 0x3E:
      v15 = 8;
      v16 = 7;
      v17 = "Kannada";
      break;
    case 0x3F:
      v15 = 7;
      v16 = 6;
      v17 = "Kazakh";
      break;
    case 0x40:
      v15 = 6;
      v16 = 5;
      v17 = "Khmer";
      break;
    case 0x41:
      v15 = 7;
      v16 = 6;
      v17 = "Korean";
      break;
    case 0x42:
      v15 = 4;
      v16 = 3;
      v17 = "Lao";
      break;
    case 0x43:
      v15 = 8;
      v16 = 7;
      v17 = "Latvian";
      break;
    case 0x44:
      v15 = 11;
      v16 = 10;
      v17 = "Lithuanian";
      break;
    case 0x45:
      v15 = 11;
      v16 = 10;
      v17 = "Macedonian";
      break;
    case 0x46:
      v15 = 6;
      v16 = 5;
      v17 = "Malay";
      break;
    case 0x47:
      v15 = 10;
      v16 = 9;
      v17 = "Malayalam";
      break;
    case 0x48:
      v15 = 8;
      v16 = 7;
      v17 = "Marathi";
      break;
    case 0x49:
      v15 = 10;
      v16 = 9;
      v17 = "Moldovian";
      break;
    case 0x4A:
      v15 = 10;
      v16 = 9;
      v17 = "Mongolian";
      break;
    case 0x4B:
      v15 = 18;
      v16 = 17;
      v17 = "Norwegian Nynorsk";
      break;
    case 0x4C:
      v15 = 21;
      v16 = 20;
      v17 = "Brazilian Portuguese";
      break;
    case 0x4D:
      v15 = 8;
      v16 = 7;
      v17 = "Punjabi";
      break;
    case 0x4E:
      v15 = 9;
      v16 = 8;
      v17 = "Romanian";
      break;
    case 0x4F:
      v15 = 8;
      v16 = 7;
      v17 = "Serbian";
      break;
    case 0x50:
      v15 = 10;
      v16 = 9;
      v17 = "Sinhalese";
      break;
    case 0x51:
      v15 = 7;
      v16 = 6;
      v17 = "Somali";
      break;
    case 0x52:
      v15 = 22;
      v16 = 21;
      v17 = "International Spanish";
      break;
    case 0x53:
      v15 = 17;
      v16 = 16;
      v17 = "American Spanish";
      break;
    case 0x54:
      v15 = 8;
      v16 = 7;
      v17 = "Swahili";
      break;
    case 0x55:
      v15 = 16;
      v16 = 15;
      v17 = "Finland Swedish";
      break;
    case 0x57:
      v15 = 6;
      v16 = 5;
      v17 = "Tamil";
      break;
    case 0x58:
      v15 = 7;
      v16 = 6;
      v17 = "Telugu";
      break;
    case 0x59:
      v15 = 8;
      v16 = 7;
      v17 = "Tibetan";
      break;
    case 0x5A:
      v15 = 9;
      v16 = 8;
      v17 = "Tigrinya";
      break;
    case 0x5B:
      v15 = 15;
      v16 = 14;
      v17 = "Cyprus Turkish";
      break;
    case 0x5C:
      v15 = 8;
      v16 = 7;
      v17 = "Turkmen";
      break;
    case 0x5D:
      v15 = 10;
      v16 = 9;
      v17 = "Ukrainian";
      break;
    case 0x5E:
      v15 = 5;
      v16 = 4;
      v17 = "Urdu";
      break;
    case 0x60:
      v15 = 11;
      v16 = 10;
      v17 = "Vietnamese";
      break;
    case 0x61:
      v15 = 6;
      v16 = 5;
      v17 = "Welsh";
      break;
    case 0x62:
      v15 = 5;
      v16 = 4;
      v17 = "Zulu";
      break;
    default:
      v15 = 8;
      v17 = "unknown";
      v16 = 7;
      break;
  }
  v18 = *a2;
  v19 = (_QWORD *)(*a2)[6];
  if ( (*a2)[8] < v15 )
  {
    v27 = qvector_reserve(v18 + 6, v19, v15, 1);
    v18[6] = v27;
    v19 = (_QWORD *)v27;
  }
  v18[7] = v15;
  if ( (unsigned int)v16 >= 8 )
  {
    v21 = (unsigned __int64)(v19 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *v19 = *(_QWORD *)v17;
    *(_QWORD *)((char *)v19 + v16 - 8) = *(_QWORD *)&v17[v16 - 8];
    v22 = (char *)v19 - v21;
    v23 = (char *)(v17 - v22);
    if ( (((_DWORD)v16 + (_DWORD)v22) & 0xFFFFFFF8) >= 8 )
    {
      v24 = (v16 + (_DWORD)v22) & 0xFFFFFFF8;
      v25 = 0;
      do
      {
        v26 = v25;
        v25 += 8;
        *(_QWORD *)(v21 + v26) = *(_QWORD *)&v23[v26];
      }
      while ( v25 < v24 );
    }
  }
  else if ( (v16 & 4) != 0 )
  {
    *(_DWORD *)v19 = *(_DWORD *)v17;
    *(_DWORD *)((char *)v19 + (unsigned int)v16 - 4) = *(_DWORD *)&v17[(unsigned int)v16 - 4];
  }
  else
  {
    *(_BYTE *)v19 = *v17;
    if ( (v16 & 2) != 0 )
      *(_WORD *)((char *)v19 + v16 - 2) = *(_WORD *)&v17[v16 - 2];
  }
  *(_BYTE *)(v18[6] + v16) = 0;
  return sub_8B00(*a2 + 9, (__int64)"%zu", *(_QWORD *)(v7 + 32));
}
