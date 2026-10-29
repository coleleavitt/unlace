/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46AD36
// Address: 0x0046AD36

//----- (0046AD36) --------------------------------------------------------
char __usercall sub_46AD36@<al>(int *a1@<ecx>, __m128i a2@<xmm0>)
{
  int v3; // eax
  char v4; // al
  char v5; // cl
  int *v6; // eax
  int v7; // ecx
  int v8; // eax
  char *v9; // ebx
  unsigned int v10; // eax
  char v11; // al
  const char *v12; // edx
  char v13; // al
  char *v15; // [esp-24h] [ebp-34h]
  int v16; // [esp-20h] [ebp-30h]
  int v17; // [esp-1Ch] [ebp-2Ch]
  int v18; // [esp-18h] [ebp-28h]
  int v19; // [esp-14h] [ebp-24h]
  int v20; // [esp-10h] [ebp-20h]
  _DWORD *v21; // [esp-Ch] [ebp-1Ch]
  int v22; // [esp-4h] [ebp-14h]
  int v23[2]; // [esp+8h] [ebp-8h] BYREF

  a1[8] |= 0x10u;
  v3 = a1[10];
  if ( v3 >= 0 )
  {
    if ( !v3 )
    {
      v5 = *((_BYTE *)a1 + 49);
      if ( v5 == 103 || (v3 = 0, v5 == 71) )
      {
        a1[10] = 1;
        v3 = 1;
      }
    }
  }
  else
  {
    v4 = *((_BYTE *)a1 + 49);
    if ( v4 == 97 || v4 == 65 )
      v22 = 13;
    else
      v22 = 6;
    v3 = v22;
    a1[10] = v22;
  }
  if ( !sub_469AA4((int)(a1 + 16), v3 + 349) )
    a1[10] = sub_469A8C(a1 + 16) - 349;
  v6 = (int *)a1[273];
  if ( !v6 )
    v6 = a1 + 16;
  a1[13] = (int)v6;
  a1[5] += 8;
  v7 = a1[5];
  v23[0] = *(_DWORD *)(v7 - 8);
  v23[1] = *(_DWORD *)(v7 - 4);
  v8 = sub_469A8C(a1 + 16);
  v9 = (char *)a1[273];
  if ( !v9 )
    v9 = (char *)(a1 + 16);
  v21 = (_DWORD *)a1[2];
  v20 = a1[1];
  v19 = *a1;
  v18 = a1[10];
  v17 = *((char *)a1 + 49);
  v16 = v8;
  v15 = sub_469B52(a1 + 16);
  v10 = sub_469A8C(a1 + 16);
  sub_47A4B8((int)v9, a2, v23, v9, v10, v15, v16, v17, v18, v19, v20, v21, 1);
  if ( (a1[8] & 0x20) != 0 && !a1[10] )
    sub_469F50((unsigned __int8 *)a1[13], (int *)a1[2]);
  v11 = *((_BYTE *)a1 + 49);
  if ( (v11 == 103 || v11 == 71) && (a1[8] & 0x20) == 0 )
    sub_469E60((_BYTE *)a1[13], a1[2]);
  v12 = (const char *)a1[13];
  v13 = *v12;
  if ( *v12 == 45 )
  {
    a1[8] |= 0x40u;
    a1[13] = (int)++v12;
    v13 = *v12;
  }
  if ( v13 == 105 || v13 == 73 || v13 == 110 || v13 == 78 )
  {
    a1[8] &= ~8u;
    *((_BYTE *)a1 + 49) = 115;
  }
  a1[14] = strlen(v12);
  return 1;
}
