/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4387B0
// Address: 0x004387B0

//----- (004387B0) --------------------------------------------------------
const CHAR *__userpurge sub_4387B0@<eax>(__m128i a1@<xmm0>, int a2, int a3)
{
  unsigned __int16 v3; // cx
  const char *v4; // eax
  int v5; // ecx
  const char *v6; // eax
  const char *v7; // ecx
  const char *v8; // eax
  unsigned int v9; // kr00_4
  unsigned int v10; // edi
  unsigned int v11; // ebx
  const char *v12; // edx
  char *v13; // edi
  unsigned int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // ebx
  unsigned int v18; // eax
  __m128i *v19; // eax
  __int8 *v20; // eax
  unsigned int v21; // kr04_4
  const CHAR *result; // eax
  double v23; // [esp-4h] [ebp-30h]
  char *v24; // [esp+10h] [ebp-1Ch] BYREF
  int v25; // [esp+14h] [ebp-18h]
  int v26; // [esp+18h] [ebp-14h]
  const char *v27; // [esp+1Ch] [ebp-10h]
  int v28; // [esp+28h] [ebp-4h]
  __m128i v29[63]; // [esp+2Ch] [ebp+0h] BYREF
  char v30; // [esp+42Bh] [ebp+3FFh] BYREF
  char v31[8]; // [esp+42Ch] [ebp+400h] BYREF

  v3 = *(_WORD *)(a3 + 12);
  switch ( v3 )
  {
    case 1u:
      if ( *(_DWORD *)(a2 + 8) < 6u )
        *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, 6u, 1u);
      *(_DWORD *)(a2 + 4) = 6;
      sub_464310(*(_DWORD *)a2, (unsigned int)"<END>", 5u);
      *(_BYTE *)(*(_DWORD *)a2 + 5) = 0;
      goto LABEL_52;
    case 2u:
      goto LABEL_34;
    case 3u:
      LODWORD(v23) = *(_DWORD *)(a3 + 16);
      sub_402970(a1, (LPVOID *)a2, "0x%a", v23);
      goto LABEL_52;
    case 4u:
      v24 = nullptr;
      v25 = 0;
      v26 = 0;
      v5 = *(_DWORD *)(a3 + 4);
      v28 = 0;
      v6 = MultiByteStr;
      if ( v5 )
        v6 = *(const char **)a3;
      sub_452B90(a1, (int)&v24, v6, v5 != 0 ? v5 - 1 : 0);
      v7 = MultiByteStr;
      v8 = "L";
      if ( v25 )
        v7 = v24;
      if ( !*(_BYTE *)(a3 + 20) )
        v8 = pNodeName;
      sub_402970(a1, (LPVOID *)a2, "%s\"%s\"", v8, v7);
      v28 = 1;
      if ( v24 )
      {
        v25 = 0;
        sub_453A20(v24);
      }
      goto LABEL_52;
    case 5u:
      v12 = *(const char **)(a3 + 16);
      v27 = v12;
      if ( v12 )
      {
        v13 = v31;
        v14 = 1;
        v15 = 1;
        if ( (const char *)(char)v12 != v12 )
          v14 = 4;
        do
        {
          v16 = (unsigned int)v12 >> (8 * (v14 - v15));
          if ( (_BYTE)v16 )
            *v13++ = v16;
          v12 = v27;
          ++v15;
        }
        while ( v15 <= v14 );
        *v13 = 0;
        sub_452BC0(a1, (unsigned int)v29, v31, 1024);
        sub_402970(a1, (LPVOID *)a2, "'%s'", v29[0].m128i_i8);
      }
      else
      {
        if ( *(_DWORD *)(a2 + 8) < 5u )
          *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, 5u, 1u);
        *(_DWORD *)(a2 + 4) = 5;
        strcpy(*(char **)a2, "'\\0'");
      }
      goto LABEL_52;
    case 6u:
      v4 = MultiByteStr;
      if ( *(_DWORD *)(a3 + 4) )
        v4 = *(const char **)a3;
      sub_402970(a1, (LPVOID *)a2, "@type %s", v4);
      goto LABEL_52;
    case 7u:
      sub_45F950(v29, 1024, (__m128i *)(a3 + 24), 50);
      v9 = strlen(v29[0].m128i_i8);
      v10 = v9;
      if ( !v9 )
        goto LABEL_51;
      v11 = v9 + 1;
      if ( v9 + 1 > *(_DWORD *)(a2 + 8) )
        *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v9 + 1, 1u);
      goto LABEL_21;
    case 8u:
      sub_402970(a1, (LPVOID *)a2, "0x%I64xi64", *(_QWORD *)(a3 + 24));
      goto LABEL_52;
    default:
      if ( v3 >= 0x400u )
      {
        if ( v3 == 11868 )
        {
          if ( *(_DWORD *)(a2 + 8) < 4u )
            *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, 4u, 1u);
          *(_DWORD *)(a2 + 4) = 4;
          sub_464310(*(_DWORD *)a2, (unsigned int)"...", 3u);
          *(_BYTE *)(*(_DWORD *)a2 + 3) = 0;
          goto LABEL_52;
        }
      }
      else if ( v3 >= 0x80u )
      {
LABEL_34:
        if ( a2 == a3 )
          goto LABEL_52;
        v17 = *(_DWORD *)(a3 + 4) != 0 ? *(_DWORD *)(a3 + 4) - 1 : 0;
        if ( v17 )
        {
          v18 = *(_DWORD *)a3;
          v27 = *(const char **)a3;
          if ( v17 + 1 > *(_DWORD *)(a2 + 8) )
          {
            *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v17 + 1, 1u);
            v18 = (unsigned int)v27;
          }
          *(_DWORD *)(a2 + 4) = v17 + 1;
          sub_464310(*(_DWORD *)a2, v18, v17);
          *(_BYTE *)(v17 + *(_DWORD *)a2) = 0;
          goto LABEL_52;
        }
LABEL_51:
        *(_DWORD *)(a2 + 4) = 0;
        goto LABEL_52;
      }
      v19 = v29;
      if ( (*(_WORD *)(a3 + 12) & 0xFF00) != 0 )
      {
        v19 = (__m128i *)&v29[0].m128i_i8[1];
        v29[0].m128i_i8[0] = HIBYTE(v3);
      }
      v19->m128i_i8[0] = v3;
      v20 = &v19->m128i_i8[1];
      if ( v20 >= v31 )
      {
        v20 = &v30;
        v30 = 0;
      }
      *v20 = 0;
      v21 = strlen(v29[0].m128i_i8);
      v10 = v21;
      if ( !v21 )
        goto LABEL_51;
      v11 = v21 + 1;
      if ( v21 + 1 > *(_DWORD *)(a2 + 8) )
        *(_DWORD *)a2 = sub_453B00(a2, *(void **)a2, v21 + 1, 1u);
LABEL_21:
      *(_DWORD *)(a2 + 4) = v11;
      sub_464310(*(_DWORD *)a2, (unsigned int)v29, v10);
      *(_BYTE *)(v10 + *(_DWORD *)a2) = 0;
LABEL_52:
      result = MultiByteStr;
      if ( *(_DWORD *)(a2 + 4) )
        return *(const CHAR **)a2;
      return result;
  }
}
// 438901: variable 'v23' is possibly undefined
