__int64 __fastcall sub_B20B0(
        __int64 a1,
        unsigned __int64 a2,
        char *a3,
        size_t a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        _QWORD *a8,
        unsigned int a9,
        int a10,
        int a11,
        int a12)
{
  int v14; // eax
  char v15; // cl
  int v16; // edx
  unsigned __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // r14
  __int64 result; // rax
  int v21; // ecx
  __int64 (__fastcall *v22)(int, int, int, int, int, int, __int64, __int64, __int64, __int64, int); // rax
  unsigned __int64 v23; // rax
  char v24; // cl
  int v25; // edx
  int v26; // r12d
  int v27; // edx
  char v28; // si
  char *v29; // rcx
  unsigned __int64 v31; // [rsp+10h] [rbp-68h]
  int v32; // [rsp+28h] [rbp-50h]
  int v33; // [rsp+2Ch] [rbp-4Ch]
  int v34; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v35; // [rsp+38h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v14 = (a4 > 0x3FF) + 3;
  *a8 = *(_QWORD *)a7;
  a8[257] = *((_QWORD *)a7 + 257);
  v31 = (unsigned __int64)(a8 + 1);
  qmemcpy(
    (void *)((unsigned __int64)(a8 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)(a7 - ((char *)a8 - ((unsigned __int64)(a8 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * (((unsigned int)a8 - (((_DWORD)a8 + 8) & 0xFFFFFFF8) + 2064) >> 3));
  if ( a10 )
    return sub_B1F80((_DWORD *)a1, a2, a3, a4);
  v15 = 9 - a9;
  v16 = *((_DWORD *)a7 + 514);
  if ( (int)(9 - a9) > 3 )
    v15 = 3;
  v17 = 8LL << v15;
  if ( v16 == 2 )
    v17 = 6;
  if ( a4 < v17 )
    return sub_B1F80((_DWORD *)a1, a2, a3, a4);
  v18 = (a4 > 0x3FFF) + v14;
  v19 = v18;
  v32 = v18;
  result = -70;
  if ( v19 + 1 > a2 )
    return result;
  v34 = *((_DWORD *)a7 + 514);
  v21 = a12 != 0;
  if ( a9 > 3 || a4 > 0x400 )
  {
    if ( a9 > 7 )
      v21 |= 2u;
  }
  else
  {
    v21 |= 4u;
  }
  if ( a11 )
    v21 |= 8u;
  if ( v16 == 2 && v19 == 3 || a4 <= 0xFF )
  {
    v33 = 1;
    v22 = sub_11D3C0;
  }
  else
  {
    v33 = 0;
    v22 = sub_11D3F0;
  }
  v23 = v22((int)a1 + (int)v19, (int)a2 - (int)v19, (int)a3, a4, 255, 11, a5, a6, (__int64)a8, (__int64)&v34, v21);
  v24 = a9 - 1;
  v25 = 3 - (v34 == 0);
  if ( a9 <= 7 )
    v24 = 6;
  if ( v23 - 1 > 0xFFFFFFFFFFFFFF87LL || a4 - 2 - (a4 >> v24) <= v23 )
  {
    *a8 = *(_QWORD *)a7;
    a8[257] = *((_QWORD *)a7 + 257);
    qmemcpy(
      (void *)(v31 & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)(a7 - ((char *)a8 - (v31 & 0xFFFFFFFFFFFFFFF8LL))),
      8 * (((unsigned int)a8 - (v31 & 0xFFFFFFF8) + 2064) >> 3));
    return sub_B1F80((_DWORD *)a1, a2, a3, a4);
  }
  if ( v23 == 1 )
  {
    if ( a4 <= 7 )
    {
      v28 = *a3;
      if ( a4 > 1 )
      {
        if ( v28 != a3[1] )
          goto LABEL_28;
        v29 = a3 + 2;
        while ( v29 != &a3[a4] )
        {
          if ( v28 != *v29++ )
            goto LABEL_28;
        }
      }
    }
    *a8 = *(_QWORD *)a7;
    a8[257] = *((_QWORD *)a7 + 257);
    qmemcpy(
      (void *)(v31 & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)(a7 - ((char *)a8 - (v31 & 0xFFFFFFFFFFFFFFF8LL))),
      8 * (((unsigned int)a8 - (v31 & 0xFFFFFFF8) + 2064) >> 3));
    return sub_B2020(a1, a2, a3, a4);
  }
LABEL_28:
  if ( v25 == 2 )
    *((_DWORD *)a8 + 514) = 1;
  v26 = 16 * a4;
  if ( v32 == 4 )
  {
    *(_DWORD *)a1 = v26 + ((_DWORD)v23 << 18) + 8 + v25;
  }
  else if ( v32 == 5 )
  {
    *(_DWORD *)a1 = v26 + ((_DWORD)v23 << 22) + 12 + v25;
    *(_BYTE *)(a1 + 4) = v23 >> 10;
  }
  else
  {
    v27 = ((_DWORD)v23 << 14) + v26 + v25 + 4 * (v33 ^ 1);
    *(_WORD *)a1 = v27;
    *(_BYTE *)(a1 + 2) = BYTE2(v27);
  }
  return v19 + v23;
}

