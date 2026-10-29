__int64 __fastcall sub_3D0B60(__int64 *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebp
  signed int v5; // ebx
  unsigned int v6; // eax
  signed int v7; // r14d
  signed int v8; // r15d
  unsigned int v9; // ebp
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  int v14; // [rsp+Ch] [rbp-6Ch] BYREF
  int v15[4]; // [rsp+10h] [rbp-68h] BYREF
  int v16[2]; // [rsp+20h] [rbp-58h]
  int v17[2]; // [rsp+28h] [rbp-50h]
  int v18[2]; // [rsp+38h] [rbp-40h]

  *(_QWORD *)v18 = __readfsqword(0x28u);
  if ( a4 > 0x20 )
    return 0;
  v4 = a3;
  v5 = a4;
  if ( a3 )
  {
    _BitScanReverse(&v11, a3);
    v7 = v11 + 1;
    v12 = sub_3BEFE0((__int64)a1, a3 + a2);
    v8 = v12;
    if ( !v5 )
      v5 = sub_3BF140((__int64)a1, a2, v7, v12);
  }
  else
  {
    if ( !a4 )
      return 0;
    v4 = (((1 << a4) + a2 - 1) & -(1 << a4)) - a2;
    if ( !v4 )
      return 0;
    _BitScanReverse(&v6, v4);
    v7 = v6 + 1;
    v8 = sub_3BEFE0((__int64)a1, ((1 << a4) + a2 - 1) & -(1 << a4));
  }
  if ( v5 <= v8 && v5 >= v7 )
  {
    *(_QWORD *)v16 = 0;
    *(_QWORD *)v17 = 0;
    *(_OWORD *)v15 = 0;
    v9 = sub_3CE970(a1, a2, (void *)0xB0000000LL, v4, -1, (const __m128i *)v15);
    if ( *(_QWORD *)v16 )
      (*(void (__fastcall **)(int *, int *, __int64))v16)(v15, v15, 3);
    if ( (_BYTE)v9 )
    {
      v14 = v5 + 1;
      v13 = ea2node(a2);
      netnode_supset(v13, 17, &v14, 4, 65);
      return v9;
    }
  }
  return 0;
}

