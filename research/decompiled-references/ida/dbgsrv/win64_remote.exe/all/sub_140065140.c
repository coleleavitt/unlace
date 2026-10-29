/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140065140
// Address: 0x0000000140065140

//----- (0000000140065140) ----------------------------------------------------
__int64 __fastcall sub_140065140(_WORD *a1, _WORD *a2)
{
  _WORD *v2; // r11
  int v3; // edi
  _WORD *v4; // rdx
  int v6; // ecx
  __int64 v8; // r11
  unsigned int v9; // ebp
  __int64 v10; // rsi
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // cx
  __int16 v13; // r9
  _WORD *v14; // r11
  _WORD *v15; // rbx
  __int64 v16; // rsi
  char *v17; // r14
  _WORD *v18; // rax
  int v19; // ecx
  __int16 v20; // r9
  _WORD *v21; // r11
  __int64 v22; // r11
  int v24; // ecx
  _BYTE v26[20]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v27; // [rsp+34h] [rbp-44h]

  *(_WORD *)v26 = *a2;
  v2 = a2;
  v3 = 2;
  *(_WORD *)&v26[2] = a2[1];
  v4 = a1 + 5;
  *(_OWORD *)&v26[4] = 0;
  v27 = 0;
  if ( !a1[4] )
  {
    v6 = 5;
    while ( *v4++ )
    {
      if ( ++v6 >= 11 )
      {
        if ( (a1[3] & 1) != 0 )
          break;
        sub_140065870(v2);
        sub_140065870(a1);
        v9 = 0;
        v10 = 114;
        do
        {
          v11 = *(_WORD *)(v8 + 6);
          v12 = a1[3];
          if ( v12 <= v11 )
            *(_WORD *)(v8 + 6) = v11 - v12;
          sub_140065AC0(v26);
          *(_WORD *)&v26[18] |= v13;
          sub_140065AC0(v14);
          --v10;
        }
        while ( v10 );
        v15 = (_WORD *)(v8 + 4);
        goto LABEL_19;
      }
    }
  }
  v15 = v2 + 2;
  v16 = 114;
  v17 = (char *)((char *)v2 - (char *)a1);
  v9 = 0;
  do
  {
    v18 = a1 + 2;
    v19 = 2;
    while ( *v18 == *(_WORD *)((char *)v18 + (_QWORD)v17) )
    {
      ++v19;
      ++v18;
      if ( v19 >= 11 )
        goto LABEL_17;
    }
    if ( *v18 > *(_WORD *)((char *)v18 + (_QWORD)v17) )
      goto LABEL_18;
LABEL_17:
    sub_140065790(a1, v2);
LABEL_18:
    sub_140065AC0(v26);
    *(_WORD *)&v26[18] |= v20;
    sub_140065AC0(v21);
    --v16;
  }
  while ( v16 );
LABEL_19:
  sub_140065870(v26);
  sub_140065870(v26);
  while ( !*v15++ )
  {
    if ( ++v3 >= 11 )
      goto LABEL_24;
  }
  v9 = 1;
LABEL_24:
  v24 = *(_DWORD *)&v26[16];
  *(_OWORD *)v22 = *(_OWORD *)v26;
  *(_DWORD *)(v22 + 16) = v24;
  *(_WORD *)(v22 + 20) = v27;
  return v9;
}
// 1400651E0: variable 'v8' is possibly undefined
// 14006520A: variable 'v13' is possibly undefined
// 140065213: variable 'v14' is possibly undefined
// 140065282: variable 'v2' is possibly undefined
// 14006529A: variable 'v20' is possibly undefined
// 1400652A3: variable 'v21' is possibly undefined
// 140065303: variable 'v22' is possibly undefined
