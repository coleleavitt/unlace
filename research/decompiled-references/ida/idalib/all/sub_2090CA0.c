__int64 __fastcall sub_2090CA0(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v9; // edi
  char v10; // r10
  int v11; // edi
  char v12; // r10
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  unsigned int v19; // ebp
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // ecx
  unsigned int v23; // ebp
  __int64 v24; // rcx
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v30; // [rsp+8h] [rbp-30h]
  __int64 v31; // [rsp+8h] [rbp-30h]
  __int64 v32; // [rsp+10h] [rbp-28h]
  __int64 v33; // [rsp+10h] [rbp-28h]

  if ( a1 == 49 )
  {
    v11 = *(unsigned __int8 *)(a4 + 8);
    if ( (unsigned int)*(unsigned __int8 *)(a3 + 8) - 17 > 1 )
    {
      v12 = 0;
      if ( v11 == 17 )
        goto LABEL_11;
    }
    else
    {
      v12 = 1;
      if ( v11 == 17 )
      {
        if ( (_DWORD)a2 != 49 )
          goto LABEL_3;
        v9 = *(unsigned __int8 *)(a5 + 8);
        goto LABEL_5;
      }
    }
    if ( (v11 == 18) != v12 )
      goto LABEL_11;
  }
  if ( (_DWORD)a2 != 49 )
    goto LABEL_3;
  v9 = *(unsigned __int8 *)(a5 + 8);
  if ( (unsigned int)*(unsigned __int8 *)(a4 + 8) - 17 <= 1 )
  {
LABEL_5:
    v10 = 1;
    if ( v9 == 17 )
      goto LABEL_3;
    goto LABEL_6;
  }
  v10 = 0;
  if ( v9 == 17 )
    goto LABEL_11;
LABEL_6:
  if ( (v9 == 18) != v10 )
  {
LABEL_11:
    if ( a1 != 49 || (_DWORD)a2 != 49 )
      return 0;
  }
LABEL_3:
  switch ( byte_26EA240[13 * (a1 - 38) - 38 + (int)a2] )
  {
    case 0:
      return 0;
    case 1:
    case 0xD:
    case 0xF:
      return a1;
    case 2:
    case 0x10:
      return (unsigned int)a2;
    case 3:
      result = 0;
      if ( (unsigned int)*(unsigned __int8 *)(a3 + 8) - 17 > 1 && *(_BYTE *)(a5 + 8) == 12 )
        return a1;
      return result;
    case 4:
      result = 0;
      if ( a4 == a5 )
        return a1;
      return result;
    case 5:
      result = 0;
      if ( *(_BYTE *)(a3 + 8) == 12 )
        return (unsigned int)a2;
      return result;
    case 6:
    case 0xA:
    case 0x11:
      return 43;
    case 7:
      result = 0;
      if ( byte_2CFD418 )
        return result;
      if ( (unsigned int)*(unsigned __int8 *)(a3 + 8) - 17 <= 1 )
        a3 = **(_QWORD **)(a3 + 16);
      v14 = *(_DWORD *)(a3 + 8) >> 8;
      if ( (unsigned int)*(unsigned __int8 *)(a5 + 8) - 17 <= 1 )
        a5 = **(_QWORD **)(a5 + 16);
      result = 0;
      v15 = *(_DWORD *)(a5 + 8) >> 8;
      if ( (_DWORD)v15 != (_DWORD)v14 )
        return result;
      v18 = sub_20C3180(a4, v15, v14, a4);
      if ( v18 == 64 )
        return 49;
      if ( a6 && a6 == a8 )
        return v18 >= (unsigned int)sub_20C3180(a6, v15, v16, v17) ? 0x31 : 0;
      break;
    case 8:
      v32 = a3;
      v30 = a5;
      v19 = sub_20C3180(a3, a2, a3, a4);
      v22 = sub_20C3180(v30, a2, v20, v21);
      if ( v32 == v30 )
        return 49;
      result = a1;
      if ( v19 >= v22 )
      {
        result = 0;
        if ( v19 > v22 )
          return (unsigned int)a2;
      }
      return result;
    case 9:
      return 39;
    case 0xB:
      v33 = a5;
      v31 = a3;
      if ( !a7 )
        return 0;
      v23 = sub_20C3180(a7, a2, a3, a4);
      v25 = sub_20C3180(v31, a2, v31, v24);
      v28 = sub_20C3180(v33, a2, v26, v27);
      if ( v23 < v25 || v25 != v28 )
        return 0;
      return 49;
    case 0xC:
      if ( (unsigned int)*(unsigned __int8 *)(a3 + 8) - 17 <= 1 )
        a3 = **(_QWORD **)(a3 + 16);
      if ( (unsigned int)*(unsigned __int8 *)(a5 + 8) - 17 <= 1 )
        a5 = **(_QWORD **)(a5 + 16);
      return (unsigned int)(*(_DWORD *)(a5 + 8) >> 8 != *(_DWORD *)(a3 + 8) >> 8) + 49;
    case 0xE:
      return 50;
  }
  return 0;
}
