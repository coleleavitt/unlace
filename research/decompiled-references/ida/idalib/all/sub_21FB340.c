__int64 __fastcall sub_21FB340(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r15
  int v5; // eax
  unsigned int v6; // r9d
  __int64 v7; // rcx
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  unsigned int v10; // eax
  int v11; // r10d
  unsigned int v12; // r9d
  int v13; // r10d
  int v15; // eax
  unsigned int v16; // [rsp+Ch] [rbp-3Ch]
  int v17; // [rsp+Ch] [rbp-3Ch]

  v4 = a1 + 8;
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xF8 | 2;
  v5 = sub_2209890(a2, a3);
  v6 = 1;
  v7 = (unsigned int)(v5 + 1);
  v8 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v8 + 64 > 0x7F )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v6 = (v8 + 64) >> 6;
  }
  if ( (unsigned int)v7 < v8 )
  {
    *(_DWORD *)(a1 + 16) = v8 - 1;
    sub_220AA50(v4, v6, a2, v7, 0);
    v13 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v5;
    v16 = v6;
    v9 = v7 - v8;
    v10 = sub_2209840(a2, a3);
    v11 = 0;
    v12 = v16;
    if ( v9 > v10 )
    {
      if ( v9 == v10 + 1 )
      {
        v11 = 2;
      }
      else if ( v9 > a3 << 6 || (v15 = sub_22097E0(a2, v9 - 1), v11 = 3, v12 = v16, !v15) )
      {
        v11 = 1;
      }
    }
    v17 = v11;
    sub_220AA50(v4, v12, a2, v8, v9);
    v13 = v17;
  }
  if ( (*(_BYTE *)(a1 + 20) & 7) != 3 && (*(_BYTE *)(a1 + 20) & 6) != 0 )
    return sub_21FAC20(a1, 1, v13);
  else
    return 0;
}
