/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D7E0
// Address: 0x0045D7E0

//----- (0045D7E0) --------------------------------------------------------
int __cdecl sub_45D7E0(int *a1, _WORD *a2, int a3, char a4)
{
  __int16 v4; // bx
  int v5; // eax
  int v7; // ebx
  int v8; // ebx
  int v9; // edi
  int v10; // esi
  __int128 v11; // [esp+Ch] [ebp-2Ch] BYREF
  _WORD v12[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  unsigned __int16 v13; // [esp+20h] [ebp-18h] BYREF
  char v14[14]; // [esp+22h] [ebp-16h] BYREF
  __int16 v15; // [esp+30h] [ebp-8h]

  if ( a4 )
  {
    v11 = *(_OWORD *)a2;
    v4 = HIWORD(v11) >> 15;
    sub_45EC90(dword_4A29B0, &v11, &v11, v11 < 0);
    if ( (_BYTE)v4 && HIWORD(v11) )
      HIWORD(v11) ^= 0x8000u;
    sub_45F620(&v11, v12);
  }
  else
  {
    sub_45F620(a2, v12);
  }
  v5 = v12[1] - 16382;
  *a1 = 0;
  a1[1] = 0;
  if ( v5 <= 0 )
    return 1;
  v7 = a3;
  if ( v5 <= a3 )
  {
    if ( v5 <= 16 )
    {
      sub_45F7E0(v12, v5);
      v9 = 0;
      v10 = v13;
    }
    else
    {
      v8 = v5 & 0x7FFFFFF0;
      sub_45F7E0(v12, v5 - (v5 & 0xFFFFFFF0));
      v9 = 0;
      v10 = v13;
      do
      {
        sub_464310((unsigned int)&v13, (unsigned int)v14, 0x10u);
        v8 -= 16;
        v9 = __PAIR64__(v9, v10) >> 16;
        v15 = 0;
        v10 = v13 | (v10 << 16);
      }
      while ( v8 > 0 );
      v7 = a3;
    }
    if ( !v12[0] )
      goto LABEL_18;
    if ( v7 != 64 )
    {
      v10 = -v10;
      v9 = (unsigned __int64)-__SPAIR64__(v9, v10) >> 32;
LABEL_18:
      a1[1] = v9;
      *a1 = v10;
      return 1;
    }
  }
  return 5;
}
// 45D8A7: mask 0xFFFFFFF0 is shortened because eax.4 <= 0x7FFFFFFF
// 4A29B0: using guessed type int dword_4A29B0[3];
