__int64 __fastcall sub_89F730(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rsi
  __int16 v6; // ax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  __m128i *v12; // rax
  unsigned int v13; // ecx
  int v15; // edx
  int v16; // [rsp+8h] [rbp-20h] BYREF
  int v17; // [rsp+Ch] [rbp-1Ch] BYREF
  _QWORD v18[3]; // [rsp+10h] [rbp-18h] BYREF

  v5 = -1;
  v18[1] = __readfsqword(0x28u);
  v6 = a3;
  v17 = 0;
  *(_OWORD *)a1 = 0;
  if ( (a3 & 0x800) != 0 )
    v5 = *(_QWORD *)(a1 + 16) - a2;
  *(_DWORD *)(a1 + 40) = a3;
  v7 = (8 * (_BYTE)a3) & 8;
  v8 = (8 * (_BYTE)v6) & 8;
  BYTE1(v8) = 4;
  if ( (v6 & 2) != 0 )
    v7 = v8;
  if ( (v6 & 0x10) != 0 )
    v7 = (unsigned int)v7 | 0x20;
  if ( (v6 & 0x1000) != 0 )
    v7 = (unsigned int)v7 | 0x2000000;
  if ( (v6 & 0x40) != 0 )
    v7 = (unsigned int)v7 | 0x80000;
  if ( (v6 & 0x400) != 0 )
    v7 = (unsigned int)v7 | 0x20000;
  if ( (v6 & 0x200) != 0 )
    v7 = (unsigned int)v7 | 0x40000;
  v9 = sub_85E600(a2, v5, v7, &v16, v18, 0);
  v10 = v18[0];
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 32) = v10;
  if ( v9 )
  {
    sub_89A7C0(v9, 4u, &v17);
    v11 = v17;
    *(_QWORD *)(a1 + 24) = v17;
    v12 = sub_89A4A0(v11 + 1, nullptr);
    *(_QWORD *)(a1 + 32) = -1;
    v13 = 0;
    *(_QWORD *)(a1 + 8) = v12;
    if ( !v12 )
    {
      sub_85D3B0(*(_QWORD *)a1);
      *(_QWORD *)a1 = 0;
      return 14;
    }
  }
  else
  {
    v13 = 3;
    if ( v16 > 99 )
    {
      v15 = v16 - 100;
      if ( v16 - 100 <= 23 )
      {
        return dword_23C3C20[v15];
      }
      else
      {
        while ( v15 != dword_23C3BE0[v9] )
        {
          v9 += 2;
          if ( v9 == 16 )
            return 3;
        }
        return dword_23C3BE0[(unsigned int)(v9 + 1)];
      }
    }
  }
  return v13;
}
