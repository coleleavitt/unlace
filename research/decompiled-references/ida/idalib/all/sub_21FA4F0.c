__int64 __fastcall sub_21FA4F0(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5,
        char a6,
        _BYTE *a7)
{
  char v7; // al
  unsigned int v10; // r13d
  __int64 v11; // r15
  __int64 v12; // rcx
  int v13; // edx
  unsigned int v14; // r10d
  __int64 v15; // r14
  int v16; // edx
  unsigned int v17; // edx
  int v18; // esi
  int v19; // eax
  unsigned int v20; // r15d
  int v22; // r14d
  unsigned int v23; // eax

  *a7 = 0;
  v7 = *(_BYTE *)(a1 + 20);
  if ( (v7 & 6) == 0 )
    return 1;
  v10 = (a4 + 63) >> 6;
  if ( a4 + 63 <= 0x7F )
    v10 = 1;
  if ( (v7 & 7) == 3 )
  {
    v20 = 0;
    sub_22096E0(a2, 0, v10);
    *a7 = ((*(_BYTE *)(a1 + 20) >> 3) ^ 1) & 1;
    return v20;
  }
  v11 = a1 + 8;
  v12 = *(unsigned int *)(*(_QWORD *)a1 + 8LL);
  if ( (unsigned int)(v12 + 64) > 0x7F )
  {
    v13 = *(_DWORD *)(a1 + 16);
    v11 = *(_QWORD *)(a1 + 8);
    if ( v13 >= 0 )
      goto LABEL_7;
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 16);
    if ( v13 >= 0 )
    {
LABEL_7:
      v14 = v13 + 1;
      if ( a4 < v13 + 1 )
        return 1;
      if ( v14 < (unsigned int)v12 )
      {
        v15 = (unsigned int)v12 - v14;
        sub_220AA50(a2, v10, v11, v14, v15);
        v16 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
        goto LABEL_10;
      }
      sub_220AA50(a2, v10, v11, v12, 0);
      sub_220A060(a2);
LABEL_19:
      v20 = 0;
      goto LABEL_20;
    }
  }
  sub_22096E0(a2, 0, v10);
  v16 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  LODWORD(v15) = v16 - 1 - *(_DWORD *)(a1 + 16);
  if ( v16 - 1 == *(_DWORD *)(a1 + 16) )
    goto LABEL_19;
LABEL_10:
  v17 = v16 + 64;
  v18 = v17 >> 6;
  if ( v17 <= 0x7F )
    v18 = 1;
  v19 = sub_21F8B90(v11, v18, v15);
  v20 = v19;
  if ( !v19 )
    goto LABEL_19;
  if ( sub_21FA100(a1, a6, v19, v15) && sub_2209930(a2, 1, v10) )
    return 1;
LABEL_20:
  v22 = sub_2209890(a2, v10);
  v23 = v22 + 1;
  if ( (*(_BYTE *)(a1 + 20) & 8) != 0 )
  {
    if ( a5 )
    {
      if ( a4 == v23 )
      {
        if ( v22 != (unsigned int)sub_2209840(a2, v10) )
          return 1;
      }
      else if ( a4 < v23 )
      {
        return 1;
      }
LABEL_23:
      sub_22099F0(a2, v10);
      if ( !v20 )
      {
LABEL_24:
        *a7 = 1;
        return v20;
      }
      return 16;
    }
    if ( v22 == -1 )
      goto LABEL_23;
  }
  else if ( (a5 ^ 1) + a4 > v23 )
  {
    if ( !v20 )
      goto LABEL_24;
    return 16;
  }
  return 1;
}
