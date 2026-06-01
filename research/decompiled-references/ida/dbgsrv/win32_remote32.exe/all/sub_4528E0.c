/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4528E0
// Address: 0x004528E0

//----- (004528E0) --------------------------------------------------------
unsigned __int8 *__usercall sub_4528E0@<eax>(__m128i a1@<xmm0>, int a2, const char *a3, int a4, int a5)
{
  int v5; // ebx
  int v6; // eax
  unsigned __int8 *result; // eax
  char *v8; // edi
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int i; // esi
  int v12; // eax
  unsigned __int8 *v13; // ecx
  int v14; // ecx
  unsigned int v15; // eax
  LPVOID v16; // eax
  char *v17; // [esp+10h] [ebp-24h] BYREF
  int v18; // [esp+14h] [ebp-20h]
  unsigned int v19; // [esp+18h] [ebp-1Ch]
  const char *v20; // [esp+1Ch] [ebp-18h]
  char v21; // [esp+20h] [ebp-14h] BYREF
  char v22; // [esp+21h] [ebp-13h]

  v5 = a4;
  v20 = a3;
  if ( a4 == -1 )
    v5 = strlen(a3);
  v6 = a5;
  if ( v5 > a5 )
    v6 = v5;
  result = (unsigned __int8 *)(v6 + 16);
  if ( (unsigned int)result > *(_DWORD *)(a2 + 8) )
  {
    result = (unsigned __int8 *)sub_453B00(a2, *(void **)a2, (unsigned int)result, 1u);
    *(_DWORD *)a2 = result;
  }
  v8 = (char *)a3;
  v17 = (char *)a3;
  if ( v5 > 0 )
  {
    while ( 2 )
    {
      v9 = sub_45A040((int *)&v17);
      v10 = v9;
      if ( v9 == -1 || !v9 )
        v10 = (unsigned __int8)*v17++;
      switch ( v10 )
      {
        case 7u:
          v22 = 97;
          i = 2;
          v21 = 92;
          goto LABEL_25;
        case 8u:
          v22 = 98;
          i = 2;
          v21 = 92;
          goto LABEL_25;
        case 9u:
          v22 = 116;
          i = 2;
          v21 = 92;
          goto LABEL_25;
        case 0xAu:
          v22 = 110;
          i = 2;
          v21 = 92;
          goto LABEL_25;
        case 0xBu:
          v22 = 118;
          i = 2;
          v21 = 92;
          goto LABEL_25;
        case 0xCu:
          v22 = 102;
          i = 2;
          v21 = 92;
          goto LABEL_25;
        case 0xDu:
          v22 = 114;
          i = 2;
          v21 = 92;
          goto LABEL_25;
        case 0x22u:
          v22 = 34;
          i = 2;
          v21 = 92;
          goto LABEL_25;
        case 0x5Cu:
          v22 = 92;
          v21 = 92;
          i = 2;
          goto LABEL_25;
        default:
          if ( sub_452F60(v10) )
          {
            i = v17 - v8;
          }
          else
          {
            for ( i = 0; v8 < v17; i += sub_453D50(a1, &v21 + i, 16 - i, "\\x%02X", v12) )
              v12 = (unsigned __int8)*v8++;
LABEL_25:
            v8 = &v21;
          }
          if ( a5 > 0 )
          {
            result = *(unsigned __int8 **)(a2 + 4);
            v13 = &result[i - 1];
            if ( !result )
              v13 = (unsigned __int8 *)i;
            if ( (unsigned int)v13 >= a5 )
              return result;
          }
          v14 = *(_DWORD *)(a2 + 4) != 0 ? *(_DWORD *)(a2 + 4) - 1 : 0;
          v18 = v14;
          v15 = i + v14 + 1;
          v19 = v15;
          if ( v15 > *(_DWORD *)(a2 + 8) )
          {
            v16 = sub_453B00(a2, *(void **)a2, i + v14 + 1, 1u);
            v14 = v18;
            *(_DWORD *)a2 = v16;
            v15 = v19;
          }
          *(_DWORD *)(a2 + 4) = v15;
          *(_BYTE *)(v14 + i + *(_DWORD *)a2) = 0;
          sub_464310(v14 + *(_DWORD *)a2, (unsigned int)v8, i);
          v8 = v17;
          result = (unsigned __int8 *)(v17 - v20);
          if ( v17 - v20 >= v5 )
            return result;
          continue;
      }
    }
  }
  return result;
}
