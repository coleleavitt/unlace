unsigned __int64 __fastcall sub_1919A20(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5,
        __m128 a6,
        __m128 a7)
{
  unsigned int v7; // r12d
  unsigned __int64 result; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // [rsp+0h] [rbp-D8h]
  _BYTE v22[200]; // [rsp+10h] [rbp-C8h] BYREF

  v7 = a4;
  if ( a5 == 9 )
  {
    sub_168B9F0((__int64)v22, a1 + 1, a4, 0x143Bu, 0);
    sub_15F7200(v22);
    return 0;
  }
  result = sub_1918B10(a1, a2, a3, a4, 0, 1, a6, a7, (*(_BYTE *)(a1[29] + 13) & 4) != 0, 1, 1);
  v11 = result;
  v12 = result & 0xFFFFFFFFFFFFFFF0LL;
  if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v13 = *a2 & 0xFFFFFFFFFFFFFFFELL;
    v21 = *(_QWORD *)(v13 + 8);
    v14 = a1[29];
    if ( (*(_BYTE *)(v14 + 13) & 2) != 0 )
    {
      v15 = *(_BYTE *)(v14 + 201) & 3;
      if ( v15 )
      {
        if ( (_BYTE)v15 == 2 )
        {
LABEL_6:
          v16 = (_QWORD *)a1[31];
          if ( (*(_BYTE *)(v16[290] + 1LL) & 8) != 0 )
            return v16[2330];
          else
            return v16[2340];
        }
      }
      else
      {
        v17 = *(_QWORD *)v12;
        v18 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v12 + 16LL) - 57;
        if ( (unsigned int)v18 > 1 )
          v17 = sub_F63050(v17, a2, v18, v12);
        if ( ((*(_BYTE *)(v17 + 18) >> 3) & 0xF) == 1 )
          goto LABEL_6;
        sub_168B9F0((__int64)v22, a1 + 1, v7, 0x1AA6u, 0);
        sub_15F7200(v22);
        v13 = *a2 & 0xFFFFFFFFFFFFFFFELL;
      }
    }
    sub_18CF4F0((__int64)a1, (__int64 *)v7, v13, *a3 & 0xFFFFFFFFFFFFFFFELL, a5, *(double *)a6.m128_u64);
    if ( sub_F580C0(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL)) )
      sub_16D2360((__int64)a1, v7, *a2 & 0xFFFFFFFFFFFFFFFELL, *a3 & 0xFFFFFFFFFFFFFFFELL, a5, *(double *)a6.m128_u64);
    return sub_18C2B90((__int64)a1, v11, v19, v20);
  }
  return result;
}
