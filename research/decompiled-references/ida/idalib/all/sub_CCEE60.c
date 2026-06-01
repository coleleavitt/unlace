__int64 __fastcall sub_CCEE60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // ebp
  __int64 v7; // r14
  char v9; // r15
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rcx
  unsigned int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // r15d
  __int64 v21; // r12
  __int64 v23; // rax
  unsigned int v24; // r15d
  __int64 v25; // rax
  unsigned int v26; // r15d
  unsigned int v27; // r14d
  unsigned int v28; // [rsp+Ch] [rbp-6Ch]
  __int64 v29; // [rsp+18h] [rbp-60h]
  __int64 v30; // [rsp+18h] [rbp-60h]
  __int64 v31; // [rsp+20h] [rbp-58h]
  unsigned int v32; // [rsp+28h] [rbp-50h]
  unsigned __int8 v33; // [rsp+2Eh] [rbp-4Ah]
  __int64 v34[8]; // [rsp+38h] [rbp-40h] BYREF

  v6 = *(unsigned __int8 *)(a1 + 584);
  v7 = *(_QWORD *)(a2 + 16);
  if ( (_BYTE)v6 )
    return (unsigned int)sub_CC7500(a1, *(_QWORD *)(a2 + 16), a3, a4, a5);
  v9 = *(_BYTE *)(a2 + 2) >> 3;
  if ( v9 == 12 )
    return (unsigned int)sub_CCC710(a1, *(_QWORD *)(a2 + 16));
  if ( ((v9 + 26) & 0x1Fu) > 3 )
  {
    if ( v9 != 4 )
    {
      v34[0] = a2 | 4;
      return (unsigned int)sub_CAAFE0(a1, v34);
    }
    return (unsigned int)sub_CCC710(a1, *(_QWORD *)(a2 + 16));
  }
  if ( (v9 & 0x1D) == 4 )
    return (unsigned int)sub_CCC710(a1, *(_QWORD *)(a2 + 16));
  if ( !*(_BYTE *)(a1 + 586) )
  {
    v34[0] = v7 | 2;
    v23 = sub_CBC410(a1, v34, 0, 0, 1, 0);
    if ( !BYTE4(v23) )
      return 0;
    v34[0] = a2 | 4;
    if ( !(unsigned __int8)sub_CA4BA0(a1, v23, v34) )
      return 0;
  }
  v34[0] = v7 | 2;
  v28 = sub_CBEFF0(a1, v34, 13, 1u, 0, 1, 0);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v7) )
    return v6;
  v10 = a2 | 4;
  v34[0] = a2 | 4;
  v33 = sub_CA5390(a1, 13, v28, v34);
  if ( !v33 )
    return v6;
  v13 = *(_QWORD *)(v7 + 8);
  v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
  v29 = v14;
  if ( (unsigned int)*(unsigned __int8 *)(v14 + 16) - 57 > 1 )
  {
    v25 = sub_CAEB00(v14, v13, v11, v12);
    v13 = *(_QWORD *)(v7 + 8);
    v29 = v25;
  }
  v16 = sub_CB1F00(a1, v13, v11, v12);
  switch ( v9 )
  {
    case 8:
      if ( *(_DWORD *)(v29 + 20) )
      {
        if ( v16 == 10 )
        {
          v27 = 0;
          while ( 1 )
          {
            v34[0] = v10;
            if ( !(unsigned __int8)sub_CA48C0(a1, 13, v28, v34) )
              break;
            v34[0] = v10;
            if ( !(unsigned __int8)sub_CA3F50(a1, 10, v27, v34) )
              break;
            v34[0] = v10;
            if ( !(unsigned __int8)sub_CA1FD0(a1, v34) )
              break;
            v34[0] = v10;
            if ( !(unsigned __int8)sub_CA4D80(a1, 10, v27, v34) )
              break;
            if ( ++v27 == *(_DWORD *)(v29 + 20) )
              return v33;
          }
        }
        else
        {
          v26 = 0;
          while ( 1 )
          {
            v34[0] = v10;
            if ( !(unsigned __int8)sub_CA48C0(a1, 13, v28, v34) )
              break;
            v34[0] = v10;
            if ( !(unsigned __int8)sub_CA3F50(a1, v16, v26, v34) )
              break;
            v34[0] = v10;
            if ( !(unsigned __int8)sub_CA0D90(a1, v16, v34) )
              break;
            v34[0] = v10;
            if ( !(unsigned __int8)sub_CA4D80(a1, v16, v26, v34) )
              break;
            if ( *(_DWORD *)(v29 + 20) == ++v26 )
              return v33;
          }
        }
        return 0;
      }
      return v33;
    case 9:
      v31 = *(_QWORD *)(a2 + 8);
      v17 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL);
      v18 = (unsigned int)*(unsigned __int8 *)(v17 + 16) - 57;
      if ( (unsigned int)v18 > 1 )
        v17 = sub_CAEB00(v17, v13, v18, v15);
      v32 = sub_CB1440(a1, *(_QWORD *)(v17 + 32));
      v19 = v29;
      if ( *(_DWORD *)(v29 + 20) )
      {
        v20 = 0;
        v30 = a2;
        v21 = v19;
        while ( 1 )
        {
          v34[0] = v10;
          if ( !(unsigned __int8)sub_CA48C0(a1, 13, v28, v34) )
            break;
          v34[0] = v10;
          if ( !(unsigned __int8)sub_CA3F50(a1, v16, v20, v34) )
            break;
          if ( !(unsigned __int8)sub_CB1C10(a1, v16, 10, *(_QWORD *)(**(_QWORD **)(a1 + 488) + 18640LL), v30) )
            break;
          v34[0] = v10;
          if ( !(unsigned __int8)sub_CA1FD0(a1, v34) )
            break;
          if ( !(unsigned __int8)sub_CB1C10(a1, 0xAu, v16, *(_QWORD *)(v21 + 32), v30) )
            break;
          v34[0] = v10;
          if ( !(unsigned __int8)sub_CA26F0(a1, v16, v34)
            || v16 != v32 && !(unsigned __int8)sub_CB1C10(a1, v16, v32, v31, v30) )
          {
            break;
          }
          v34[0] = v10;
          if ( !(unsigned __int8)sub_CA4D80(a1, v32, v20, v34) )
            break;
          if ( ++v20 == *(_DWORD *)(v21 + 20) )
            return v33;
        }
        return 0;
      }
      return v33;
    case 7:
      v24 = 0;
      if ( *(_DWORD *)(v29 + 20) )
      {
        while ( 1 )
        {
          v34[0] = v10;
          if ( !(unsigned __int8)sub_CA48C0(a1, 13, v28, v34) )
            break;
          v34[0] = v10;
          if ( !(unsigned __int8)sub_CA3F50(a1, v16, v24, v34) )
            break;
          v34[0] = v10;
          if ( !(unsigned __int8)sub_CA26F0(a1, v16, v34) )
            break;
          v34[0] = v10;
          if ( !(unsigned __int8)sub_CA4D80(a1, v16, v24, v34) )
            break;
          if ( ++v24 == *(_DWORD *)(v29 + 20) )
            return v33;
        }
        return 0;
      }
      return v33;
  }
  return sub_CCF3E0();
}
