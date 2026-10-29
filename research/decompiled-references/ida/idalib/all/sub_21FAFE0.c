__int64 __fastcall sub_21FAFE0(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v4; // r13d
  __int64 v6; // r15
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // r14d
  unsigned int v10; // eax
  __int64 v11; // r8
  int v12; // r10d
  int v13; // r10d
  char v14; // al
  int v16; // eax
  unsigned int v18; // [rsp+Ch] [rbp-3Ch]
  int v19; // [rsp+Ch] [rbp-3Ch]

  v4 = 1;
  v6 = a1 + 8;
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xF8 | 2;
  v7 = sub_2209890(a2, a3);
  v8 = (unsigned int)(v7 + 1);
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v9 + 64 > 0x7F )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v4 = (v9 + 64) >> 6;
  }
  if ( (unsigned int)v8 < v9 )
  {
    *(_DWORD *)(a1 + 16) = v9 - 1;
    sub_220AA50(v6, v4, a2, v8, 0);
    v13 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = v7;
    v18 = v8 - v9;
    v10 = sub_2209840(a2, a3);
    v11 = v18;
    v12 = 0;
    if ( v18 > v10 )
    {
      if ( v18 == v10 + 1 )
      {
        v12 = 2;
      }
      else if ( v18 > a3 << 6 || (v16 = sub_22097E0(a2, v18 - 1), v12 = 3, v11 = v18, !v16) )
      {
        v12 = 1;
      }
    }
    v19 = v12;
    sub_220AA50(v6, v4, a2, v9, v11);
    v13 = v19;
  }
  v14 = *(_BYTE *)(a1 + 20);
  if ( (v14 & 6) != 0 && (v14 & 7) != 3 )
    return sub_21FAC20(a1, a4, v13);
  else
    return 0;
}
