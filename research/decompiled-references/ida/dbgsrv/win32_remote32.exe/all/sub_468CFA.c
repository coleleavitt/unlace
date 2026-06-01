/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468CFA
// Address: 0x00468CFA

//----- (00468CFA) --------------------------------------------------------
int __usercall sub_468CFA@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        _DWORD *a3,
        _BYTE *a4,
        _DWORD *a5,
        int a6,
        unsigned __int8 a7)
{
  int v7; // ebx
  _BYTE *v9; // eax
  int v10; // edi
  unsigned int v11; // esi
  char *v12; // edx
  int v13; // eax
  int v14; // eax
  char v15; // al
  _BYTE *v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // ebx
  int v20; // ecx
  char v21; // cl
  unsigned int v22; // ecx
  unsigned __int64 v23; // kr00_8
  int v24; // [esp+Ch] [ebp-3Ch] BYREF
  int v25; // [esp+10h] [ebp-38h] BYREF
  char v26; // [esp+18h] [ebp-30h]
  _BYTE *v27; // [esp+1Ch] [ebp-2Ch]
  __int64 v28; // [esp+20h] [ebp-28h]
  unsigned __int64 v29; // [esp+28h] [ebp-20h]
  unsigned int v30; // [esp+30h] [ebp-18h]
  unsigned int v31; // [esp+34h] [ebp-14h]
  unsigned int v32; // [esp+38h] [ebp-10h]
  int v33; // [esp+3Ch] [ebp-Ch]
  int v34; // [esp+40h] [ebp-8h]
  char v35; // [esp+47h] [ebp-1h]

  if ( !sub_468FF7(&a4, a1, a2) )
    goto LABEL_6;
  if ( a6 && (a6 < 2 || a6 > 36) )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
LABEL_6:
    v7 = 0;
    goto LABEL_7;
  }
  sub_467FF8((int)&v24, a3);
  v9 = a4;
  v10 = 0;
  v32 = 0;
  v11 = 0;
  v27 = a4;
  while ( 1 )
  {
    LOBYTE(a1) = *v9;
    a4 = v9 + 1;
    LOBYTE(v33) = a1;
    v35 = a1;
    if ( !sub_469034(a1, (unsigned __int8)a1, 8, &v25) )
      break;
    v9 = a4;
  }
  v34 = a7;
  if ( (_BYTE)a1 == 45 )
  {
    v34 = a7 | 2;
LABEL_16:
    LOBYTE(a1) = *a4;
    v12 = a4 + 1;
    v35 = a1;
    LOBYTE(v33) = a1;
    ++a4;
    goto LABEL_18;
  }
  if ( (_BYTE)a1 == 43 )
    goto LABEL_16;
  v12 = a4;
LABEL_18:
  if ( a6 && a6 != 16 )
    goto LABEL_39;
  if ( (unsigned __int8)(a1 - 48) > 9u )
  {
    if ( (unsigned __int8)(a1 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(a1 - 65) > 0x19u )
        v13 = -1;
      else
        v13 = (char)a1 - 55;
    }
    else
    {
      v13 = (char)a1 - 87;
    }
  }
  else
  {
    v13 = (char)a1 - 48;
  }
  if ( !v13 )
  {
    v15 = *v12;
    v16 = v12 + 1;
    LOBYTE(v30) = v15;
    a4 = v16;
    if ( v15 == 120 || v15 == 88 )
    {
      if ( !a6 )
        a6 = 16;
      v35 = *v16;
      LOBYTE(v33) = v35;
      a4 = v16 + 1;
    }
    else
    {
      if ( !a6 )
        a6 = 8;
      sub_468FA0(&a4, a1, 0, v30);
    }
    v14 = a6;
    goto LABEL_40;
  }
  if ( a6 )
  {
LABEL_39:
    v14 = a6;
  }
  else
  {
    v14 = 10;
    a6 = 10;
  }
LABEL_40:
  v28 = v14;
  v17 = sub_4828A0(0xFFFFFFFFFFFFFFFFuLL, v14);
  HIDWORD(v29) = a1;
  v19 = v34;
  LODWORD(v29) = v20;
  v21 = v35;
  v31 = v17;
  v30 = v18;
  while ( 1 )
  {
    if ( (unsigned __int8)(v21 - 48) > 9u )
    {
      if ( (unsigned __int8)(v21 - 97) > 0x19u )
        v22 = (unsigned __int8)(v21 - 65) > 0x19u ? -1 : v21 - 55;
      else
        v22 = v21 - 87;
    }
    else
    {
      v22 = v21 - 48;
    }
    v34 = v22;
    if ( v22 == -1 || v22 >= a6 )
      break;
    v19 |= 8u;
    if ( v11 < v18 || v11 <= v18 && v32 < v31 )
    {
      v34 = v22;
    }
    else if ( v32 != v31 || v11 != v30 || v22 > v29 )
    {
      v19 |= 4u;
      goto LABEL_59;
    }
    v23 = (unsigned int)v34 + sub_4633C0(v28, __SPAIR64__(v11, v32));
    v11 = HIDWORD(v23);
    v32 = v23;
LABEL_59:
    v18 = v30;
    v21 = *a4;
    LOBYTE(v33) = *a4++;
  }
  v34 = v19;
  sub_468FA0(&a4, v19, 0, v33);
  if ( (v19 & 8) == 0 )
  {
    a4 = v27;
    goto LABEL_67;
  }
  v7 = v32;
  if ( sub_46848E(v34, __PAIR64__(v11, v32)) )
  {
    *sub_46B984() = 34;
    if ( (v34 & 1) != 0 )
    {
      if ( (v34 & 2) == 0 )
        v10 = -1;
LABEL_67:
      v7 = v10;
    }
    else
    {
      v7 = -1;
    }
  }
  else if ( (v34 & 2) != 0 )
  {
    v7 = -v7;
  }
  if ( v26 )
    *(_DWORD *)(v24 + 848) &= ~2u;
LABEL_7:
  if ( a5 )
    *a5 = a4;
  return v7;
}
// 468EDF: conditional instruction was optimized away because edi.4==0
// 468E72: variable 'v20' is possibly undefined
// 468E7B: variable 'v18' is possibly undefined
