__int64 __fastcall sub_3BAF40(__int64 a1, unsigned int a2, unsigned int a3, unsigned int *a4, char *a5)
{
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // r15d
  bool v16; // zf
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r15
  unsigned int v20; // eax
  __int64 result; // rax
  bool v22; // al
  __int64 v23; // rsi
  __int64 v24; // r8
  unsigned int v25; // r13d
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned int addr; // eax
  int v29; // [rsp+0h] [rbp-40h]

  *(_OWORD *)a4 = 0;
  v10 = nbits(a2);
  v11 = v10 + 14;
  v12 = v10 + 7;
  if ( v12 >= 0 )
    v11 = v12;
  v13 = v11 >> 3;
  if ( a3 && v13 && !is_mul_ok(a3, v13) || (v14 = a3 * v13, v15 = v14, v14 > 0x10) )
  {
    *a5 = 1;
    return 1;
  }
  if ( !v14 )
  {
    *a5 = 1;
    v17 = *(_QWORD *)(a1 + 32);
LABEL_23:
    if ( !*(_QWORD *)(v17 + 152) )
      return 1;
    goto LABEL_10;
  }
  v16 = v14 == sub_3BAB10((_QWORD *)a1, a4, v14, a2, 0, 0);
  *a5 = v16;
  v17 = *(_QWORD *)(a1 + 32);
  if ( v16 )
    goto LABEL_23;
  if ( !*(_QWORD *)(v17 + 160) )
    return 1;
LABEL_10:
  if ( *(_QWORD *)(a1 + 768) && (unsigned __int8)sub_3E9F80(a1, a2) || a2 == -1 )
    return 1;
  if ( a2 != *(_DWORD *)(a1 + 1196) )
  {
    *(_DWORD *)(a1 + 1196) = a2;
    v22 = rangeset_t_find_range(a1 + 1112, a2) != 0;
    *(_BYTE *)(a1 + 1200) = v22;
    if ( !v22 )
      goto LABEL_15;
LABEL_27:
    if ( !*a5 )
    {
      v23 = a2 + v15;
      v24 = a1 + 952;
      v25 = *(_DWORD *)(*(_QWORD *)(a1 + 1136) + 4LL);
      v26 = *(_QWORD *)(a1 + 960);
      if ( v26 )
      {
        v27 = a1 + 952;
        do
        {
          if ( *(_DWORD *)(v26 + 32) >= (unsigned int)v23 )
          {
            v27 = v26;
            v26 = *(_QWORD *)(v26 + 16);
          }
          else
          {
            v26 = *(_QWORD *)(v26 + 24);
          }
        }
        while ( v26 );
        if ( v27 != v24 && v25 > *(_DWORD *)(v27 + 32) )
          v25 = *(_DWORD *)(v27 + 32);
      }
      addr = rangeset_t_next_addr(a1 + 1152, v23);
      if ( addr > v25 )
        addr = v25;
      v20 = addr - a2;
      goto LABEL_40;
    }
    return 1;
  }
  if ( *(_BYTE *)(a1 + 1200) )
    goto LABEL_27;
LABEL_15:
  if ( a2 == -2 )
    return 1;
  v18 = sub_3B9AA0(a1, a2 + 1, 1);
  if ( (v18 & 0x600) != 0x200 )
    return 1;
  if ( a3 != 1 )
  {
    if ( (a2 & 1) == 0 )
    {
      v19 = sub_3B9AA0(a1, a2 + 2, 1);
      if ( (v19 & 0x600) != 0x200 || a3 == 2 && !sub_3BAE60((_QWORD *)a1, a2 + 2, v19, a4, *a5) )
        return 1;
LABEL_21:
      v20 = ((unsigned int)v19 >> 20) + 2;
      goto LABEL_40;
    }
    goto LABEL_43;
  }
  v29 = v18;
  if ( !sub_3BAA10((_QWORD *)a1, a2 + 1, v18, a4, *a5) )
    return 1;
  LODWORD(v18) = v29;
  if ( (a2 & 1) == 0 )
  {
    v19 = sub_3B9AA0(a1, a2 + 2, 1);
    if ( (v19 & 0x600) != 0x200 || !sub_3BAA10((_QWORD *)a1, a2 + 2, v19, a4, *a5) )
      return 2;
    goto LABEL_21;
  }
LABEL_43:
  v20 = ((unsigned int)v18 >> 20) + 1;
LABEL_40:
  result = v20 / a3;
  if ( !(_DWORD)result )
    return 1;
  return result;
}

