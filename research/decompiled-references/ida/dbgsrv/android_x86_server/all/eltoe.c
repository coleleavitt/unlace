/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eltoe
// Address: 0x000A6980

//----- (000A6980) --------------------------------------------------------
unsigned int __cdecl eltoe(int a1, _WORD *a2)
{
  int v2; // eax
  __int16 v3; // cx
  __int16 v4; // dx
  __int16 v5; // di
  __int16 v6; // ax
  __int16 v8; // [esp+0h] [ebp-3Ch]
  __int16 v9; // [esp+4h] [ebp-38h]
  __int16 v10; // [esp+8h] [ebp-34h]
  __int16 v11; // [esp+Ch] [ebp-30h]
  _WORD v12[9]; // [esp+10h] [ebp-2Ch] BYREF
  int v13; // [esp+22h] [ebp-1Ah]
  unsigned int v14; // [esp+28h] [ebp-14h]

  v2 = a1;
  v14 = __readgsdword(0x14u);
  memset(v12, 0, sizeof(v12));
  v13 = 0;
  if ( a1 < 0 )
  {
    v2 = -a1;
    v12[0] = -1;
  }
  else if ( !a1 )
  {
    v3 = 0;
    v11 = 0;
    v10 = 0;
    v9 = 0;
    v8 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    goto LABEL_7;
  }
  v12[2] = HIWORD(v2);
  v12[3] = v2;
  v3 = 16398 - sub_A47E0((int)v12);
  v12[1] = v3;
  v11 = v12[3];
  v10 = v12[4];
  v9 = v12[5];
  v8 = v12[6];
  v4 = v12[7];
  v5 = v12[8];
  v6 = v13;
  if ( v12[0] )
    v3 |= 0x8000u;
LABEL_7:
  a2[7] = v3;
  a2[6] = v11;
  a2[5] = v10;
  a2[4] = v9;
  a2[3] = v8;
  a2[2] = v4;
  a2[1] = v5;
  *a2 = v6;
  return __readgsdword(0x14u);
}
