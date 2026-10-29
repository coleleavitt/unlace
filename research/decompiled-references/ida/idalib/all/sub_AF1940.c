char __fastcall sub_AF1940(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdx
  char v13; // r12
  void *v14; // rdx
  __int64 v15; // rsi
  char v16; // bp
  void *v17; // rdx
  __int64 v18; // rsi
  char v19; // [rsp+1h] [rbp-59h]
  char v20; // [rsp+1h] [rbp-59h]
  void *v21; // [rsp+2h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+Ah] [rbp-50h]
  char v23; // [rsp+Eh] [rbp-4Ch]
  void *v24; // [rsp+12h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+1Ah] [rbp-40h]
  char v26; // [rsp+1Eh] [rbp-3Ch]
  void *v27; // [rsp+22h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+2Ah] [rbp-30h]

  if ( (*(_DWORD *)a2 & 0x7FFFFFFF) != (*(_DWORD *)a3 & 0x7FFFFFFF) )
    return 0;
  switch ( *(_DWORD *)a2 & 0x7FFFFFFF )
  {
    case 0:
    case 3:
      return 1;
    case 1:
      return sub_AF1C90(a1, *(_QWORD *)(a2 + 8), *(_QWORD *)(a3 + 8));
    case 2:
      return sub_AEDD20(a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a3 + 16));
    case 4:
      if ( !(unsigned __int8)sub_AF1C90(a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a3 + 16)) )
        goto LABEL_8;
      v13 = *(_BYTE *)(a3 + 7) >> 7;
      v14 = *(void **)(a3 + 8);
      v15 = *(_DWORD *)(a3 + 4) & 0x7FFFFFFF;
      if ( (unsigned int)v15 > 0x40 )
      {
        sub_2205600(&v27, v15, v14, ((unsigned __int64)(unsigned int)v15 + 63) >> 6);
        v26 = v13;
        v25 = v28;
        v24 = v27;
      }
      else
      {
        v25 = *(_DWORD *)(a3 + 4) & 0x7FFFFFFF;
        v24 = v14;
        v26 = v13;
      }
      v16 = *(_BYTE *)(a2 + 7) >> 7;
      v17 = *(void **)(a2 + 8);
      v18 = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
      if ( (unsigned int)v18 > 0x40 )
      {
        sub_2205600(&v27, v18, v17, ((unsigned __int64)(unsigned int)v18 + 63) >> 6);
        v23 = v16;
        v22 = v28;
        v21 = v27;
      }
      else
      {
        v22 = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
        v21 = v17;
        v23 = v16;
      }
      result = (unsigned int)sub_98E2D0((__int64 *)&v21, (__int64 *)&v24) == 0;
      if ( v22 > 0x40 && v21 )
      {
        v19 = result;
        operator delete[](v21);
        result = v19;
      }
      if ( v25 > 0x40 )
      {
        if ( v24 )
        {
          v20 = result;
          operator delete[](v24);
          return v20;
        }
      }
      return result;
    case 5:
      return sub_F1DBF0(a2, a3);
    case 6:
    case 7:
      sub_F22A90(&v27, *(_QWORD *)(a3 + 8));
      v6 = *(_QWORD *)(a2 + 8);
      v24 = v27;
      sub_F22A90(&v27, v6);
      return sub_AF3440(a1, &v27, &v24);
    case 8:
      v11 = *(_QWORD *)(a2 + 8);
      v12 = *(_QWORD *)(a3 + 8);
      if ( v11 && v12 )
        return sub_AF1120(a1, v11, v12);
      else
        return v11 == v12;
    case 9:
      v7 = 24LL * *(unsigned int *)(a2 + 4);
      if ( v7 == 24LL * *(unsigned int *)(a3 + 4) )
      {
        if ( !v7 )
          return 1;
        v8 = *(_QWORD *)(a2 + 8);
        v9 = *(_QWORD *)(a3 + 8);
        v10 = v8 + 24LL * (unsigned int)(*(_DWORD *)(a2 + 4) - 1) + 24;
        while ( (unsigned __int8)sub_AF1940(a1, v8, v9) )
        {
          v8 += 24;
          v9 += 24;
          if ( v10 == v8 )
            return 1;
        }
        result = 0;
      }
      else
      {
LABEL_8:
        result = 0;
      }
      break;
  }
  return result;
}
