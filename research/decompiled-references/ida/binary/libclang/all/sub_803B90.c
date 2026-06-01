__int64 __fastcall sub_803B90(__int64 *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r13
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  char v6; // al
  unsigned int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // r12
  unsigned int v10; // r12d
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // r13
  __int64 v17; // r9
  __int64 v19[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = a2 + 40;
  v3 = a2 + 40 + 24LL * *(unsigned int *)(a2 + 36);
  if ( a2 + 40 == v3 )
  {
LABEL_24:
    v13 = 0;
    if ( (unsigned __int8)sub_79B790(a2) )
      v13 = sub_79AC10(a2);
    v10 = sub_7E1600(a1, v13);
    if ( !(_BYTE)v10 )
      return 0;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v14 = nullptr;
      v15 = sub_79A2B0(a2);
      v16 = *v15 + 8LL * *((unsigned int *)v15 + 2);
      if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
        v14 = (__int64 *)*sub_79A2B0(a2);
      if ( (__int64 *)v16 != v14 )
      {
        while ( 1 )
        {
          v17 = *a1;
          v19[0] = *v14;
          if ( !(unsigned __int8)sub_7F2380((__int64)a1, v19[0], v19[0], v19, a1, v17) )
            break;
          if ( (__int64 *)v16 == ++v14 )
            return v10;
        }
        return 0;
      }
    }
    return v10;
  }
  while ( 1 )
  {
    v7 = *(_DWORD *)v2 & 0x7FFFFFFF;
    if ( v7 == 8 )
    {
      v6 = sub_7EBA80(a1, *(_QWORD *)(v2 + 8));
      goto LABEL_8;
    }
    if ( v7 > 8 )
      break;
    if ( v7 == 1 )
    {
      v6 = sub_7EDF40(a1, *(_QWORD *)(v2 + 8));
      goto LABEL_8;
    }
    if ( ((v7 + 2147483642) & 0x7FFFFFFF) > 1 )
      goto LABEL_9;
    sub_B03900(v19, *(_QWORD *)(v2 + 8));
    v4 = sub_B03EA0(v19);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 8);
LABEL_7:
      v6 = sub_7EE440(a1, v5 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_8:
      if ( !v6 )
        return 0;
      goto LABEL_9;
    }
    v12 = sub_B03E80(v19);
    if ( v12 )
    {
      v5 = *(_QWORD *)(v12 + 8);
      if ( v5 > 7 )
        goto LABEL_7;
      v2 += 24;
      if ( v3 == v2 )
        goto LABEL_24;
    }
    else
    {
LABEL_9:
      v2 += 24;
      if ( v3 == v2 )
        goto LABEL_24;
    }
  }
  if ( v7 != 9 )
    goto LABEL_9;
  v8 = *(_QWORD *)(v2 + 8);
  v9 = v8 + 24LL * *(unsigned int *)(v2 + 4);
  if ( v8 == v9 )
    goto LABEL_9;
  while ( (unsigned __int8)sub_7EE760(a1, v8) )
  {
    v8 += 24;
    if ( v9 == v8 )
      goto LABEL_9;
  }
  return 0;
}

