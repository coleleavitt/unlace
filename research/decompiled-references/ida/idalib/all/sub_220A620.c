__int64 __fastcall sub_220A620(__int64 a1, __int64 a2, __int64 a3, bool *a4)
{
  unsigned __int64 v5; // r13
  unsigned int v6; // r9d
  unsigned __int64 v7; // rax
  int v9; // eax
  unsigned __int64 **v10; // r11
  int v11; // r10d
  unsigned int v12; // r13d
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r9d
  unsigned int v18; // eax

  v5 = *(unsigned int *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 8);
  if ( *(_DWORD *)(a3 + 8) > 0x40u )
  {
    v9 = sub_2206780((__int64 *)a3);
    if ( (unsigned int)(v11 - v9) > 0x40 )
      goto LABEL_3;
    v7 = **v10;
    if ( v5 < v7 )
      goto LABEL_3;
LABEL_10:
    v12 = v7;
    *a4 = v6 <= (unsigned int)v7;
    if ( v6 <= (unsigned int)v7 )
      goto LABEL_4;
    if ( v6 > 0x40 )
    {
      *a4 = (unsigned int)v7 > (unsigned int)sub_2206780((__int64 *)a2);
      *(_DWORD *)(a1 + 8) = v17;
      sub_2205510(a1, (const void **)a2);
      v18 = *(_DWORD *)(a1 + 8);
      if ( v18 > 0x40 )
      {
        sub_220A060(*(_QWORD **)a1, ((unsigned __int64)v18 + 63) >> 6, v12);
        sub_CF8100((unsigned __int64 *)a1);
        return a1;
      }
      if ( v18 == v12 )
      {
        v16 = 0;
        goto LABEL_16;
      }
    }
    else
    {
      v13 = *(_QWORD *)a2;
      v14 = v6;
      if ( *(_QWORD *)a2 )
      {
        _BitScanReverse64(&v15, v13);
        v14 = v6 - 64 + (v15 ^ 0x3F);
      }
      *a4 = v12 > v14;
      *(_DWORD *)(a1 + 8) = v6;
      *(_QWORD *)a1 = v13;
    }
    v16 = *(_QWORD *)a1 << v12;
LABEL_16:
    *(_QWORD *)a1 = v16;
    sub_CF8100((unsigned __int64 *)a1);
    return a1;
  }
  v7 = *(_QWORD *)a3;
  if ( v5 >= *(_QWORD *)a3 )
    goto LABEL_10;
LABEL_3:
  *a4 = 1;
LABEL_4:
  *(_DWORD *)(a1 + 8) = v6;
  if ( v6 > 0x40 )
    sub_2205470(a1, 0, 0);
  else
    *(_QWORD *)a1 = 0;
  return a1;
}
