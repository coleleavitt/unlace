/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88B78
// Address: 0x00088B78

//----- (00088B78) --------------------------------------------------------
int __fastcall sub_88B78(_DWORD *a1, int a2, _BYTE *a3, int a4)
{
  int v5; // r5
  int v6; // r7
  void *(__fastcall *v8)(int, int, int); // r3
  _DWORD *v9; // r0
  _DWORD *v10; // r3
  void (__fastcall *v11)(_DWORD); // r2
  _DWORD *v12; // r1
  int v13; // r0
  _DWORD *v15; // [sp+4h] [bp-10h]
  int v16; // [sp+8h] [bp-Ch]
  _DWORD *v17; // [sp+Ch] [bp-8h]
  int v18; // [sp+10h] [bp-4h]

  v5 = -2;
  v6 = -6;
  if ( !a3 || a4 != 56 || *a3 != 49 )
    return v6;
  if ( !a1 )
    return v5;
  a1[6] = 0;
  v8 = (void *(__fastcall *)(int, int, int))a1[8];
  if ( !v8 )
  {
    a1[10] = 0;
    v8 = sub_8EA1C;
    a1[8] = sub_8EA1C;
  }
  if ( !a1[9] )
    a1[9] = sub_8EA28;
  v9 = (_DWORD *)v8(a1[10], 1, 7120);
  v6 = -4;
  if ( !v9 )
    return v6;
  v10 = v9;
  a1[7] = v9;
  v6 = 0;
  v9[14] = 0;
  *v9 = a1;
  v9[1] = 16180;
  if ( !a1[8] )
    goto LABEL_27;
  v11 = (void (__fastcall *)(_DWORD))a1[9];
  if ( !v11 )
    goto LABEL_27;
  v12 = (_DWORD *)a1[7];
  if ( !v12 )
    goto LABEL_27;
  if ( (_DWORD *)*v12 != a1 )
    goto LABEL_27;
  v17 = (_DWORD *)a1[7];
  if ( (unsigned int)(v12[1] - 16180) > 0x1F )
    goto LABEL_27;
  if ( a2 < 0 )
  {
    if ( a2 >= -15 )
    {
      v18 = -a2;
      v13 = 0;
      goto LABEL_21;
    }
LABEL_27:
    ((void (__fastcall *)(_DWORD, _DWORD *))a1[9])(a1[10], v10);
    a1[7] = 0;
    return v5;
  }
  v18 = a2 & 0xF;
  if ( a2 >= 48 )
    v18 = a2;
  v13 = ((unsigned int)a2 >> 4) + 5;
LABEL_21:
  v16 = v13;
  if ( v18 && (v18 & 0xFFFFFFF8) != 8 )
    goto LABEL_27;
  v15 = v10;
  if ( v17[14] && v17[10] != v18 )
  {
    v11(a1[10]);
    v17[14] = 0;
  }
  v17[10] = v18;
  v17[3] = v16;
  v5 = sub_88A48(a1);
  v10 = v15;
  if ( v5 )
    goto LABEL_27;
  return v6;
}
