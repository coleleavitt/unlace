/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_94258
// Address: 0x00094258

//----- (00094258) --------------------------------------------------------
int __fastcall sub_94258(__int64 *a1, int a2, int a3, int a4)
{
  __int64 v5; // kr00_8
  _BYTE *v6; // r1
  int v7; // r2
  bool v8; // zf
  __int64 v9; // r0
  int v11[2]; // [sp+0h] [bp-10h] BYREF

  v11[0] = a3;
  v11[1] = a4;
  v5 = *a1;
  if ( (_DWORD)v5 == HIDWORD(v5) )
    return 0;
  if ( *(_BYTE *)v5 != 68 )
    return 0;
  v6 = (_BYTE *)(v5 + 1);
  *(_DWORD *)a1 = v5 + 1;
  if ( (_DWORD)v5 + 1 == HIDWORD(v5) )
    return 0;
  v7 = (unsigned __int8)*v6;
  v8 = v7 == 116;
  if ( v7 != 116 )
    v8 = *v6 == 84;
  if ( !v8 )
    return 0;
  *(_DWORD *)a1 = v5 + 2;
  v11[0] = (int)sub_948A0((int)a1);
  if ( !v11[0] )
    return 0;
  v9 = *a1;
  if ( (_DWORD)v9 == HIDWORD(v9) || *(_BYTE *)v9 != 69 )
    return 0;
  *(_DWORD *)a1 = v9 + 1;
  return sub_95AD0((int)a1, (int)"decltype(", v11);
}
