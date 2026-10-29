__int64 __fastcall sub_CA2880(_QWORD *a1, int *a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int *v14; // r12
  unsigned int v15; // ebp
  __int64 v16; // rbp
  int v17; // eax
  unsigned int *v18; // r15
  __int64 v19; // r14
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r14
  unsigned int v24; // ebp
  __int64 v25; // r8
  __int64 v26; // [rsp+0h] [rbp-78h]
  __int64 v27; // [rsp+8h] [rbp-70h]
  __int64 v28; // [rsp+10h] [rbp-68h]
  __int64 v29; // [rsp+10h] [rbp-68h]
  int v30; // [rsp+18h] [rbp-60h]
  __int64 v31; // [rsp+20h] [rbp-58h]
  int v32; // [rsp+20h] [rbp-58h]
  int v33; // [rsp+28h] [rbp-50h]
  __int64 v34[8]; // [rsp+38h] [rbp-40h] BYREF

  v6 = *a2;
  if ( *a2 == 10 )
  {
    v16 = 0;
    v28 = sub_C8D540((__int64)a1, a4);
    v17 = a2[5];
    v31 = (unsigned int)(v17 - 1);
    if ( v17 )
    {
      while ( 1 )
      {
        v26 = *((_QWORD *)a2 + 1) + 56LL * (unsigned int)(a2[4] + v16);
        v18 = (unsigned int *)(*(_QWORD *)(v28 + 280) + 24 * v16);
        v19 = *(_QWORD *)(*(_QWORD *)v18 + 48LL);
        v20 = sub_CC2440(a1[61], v19);
        if ( BYTE4(v20) )
        {
          v33 = v20;
          if ( !(unsigned __int8)sub_CA2340(a1, v26, (unsigned int)v20, a3) )
            return 0;
          v34[0] = a3 | 4;
          if ( !(unsigned __int8)sub_C81290((__int64)a1, v33, v18[2], v34) )
            return 0;
        }
        else
        {
          v34[0] = a3 | 4;
          if ( !(unsigned __int8)sub_C80DD0((__int64)a1, v18[2], v34) )
            return 0;
          if ( !(unsigned __int8)sub_CA2880(a1, v26, a3, v19) )
            return 0;
          v34[0] = a3 | 4;
          if ( !(unsigned __int8)sub_C7EAC0((__int64)a1, v34) )
            return 0;
        }
        if ( v16 == v31 )
          return 1;
        ++v16;
      }
    }
    return 1;
  }
  if ( v6 != 11 )
  {
    if ( v6 != 9 )
      return 0;
    v21 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
    v22 = *(unsigned __int8 *)(v21 + 16);
    if ( (unsigned __int8)(v22 - 2) > 4u )
    {
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
        BUG();
      v21 = sub_F3F310(
              v21,
              a2,
              (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2,
              v22);
    }
    v23 = 0;
    v24 = 0;
    v29 = *(_QWORD *)(v21 + 32);
    v30 = a2[5];
    if ( v30 )
    {
      while ( 1 )
      {
        v27 = v23 + *((_QWORD *)a2 + 1);
        v25 = sub_CC2440(a1[61], v29);
        if ( BYTE4(v25) )
        {
          v32 = v25;
          if ( !(unsigned __int8)sub_CA2340(a1, v27, (unsigned int)v25, a3) )
            return 0;
          v34[0] = a3 | 4;
          if ( !(unsigned __int8)sub_C81040((__int64)a1, v32, v24, v34) )
            return 0;
        }
        else
        {
          v34[0] = a3 | 4;
          if ( !(unsigned __int8)sub_C80730((__int64)a1, v24, v34) )
            return 0;
          v34[0] = a3 | 4;
          if ( !(unsigned __int8)sub_C87C20((__int64)a1, v34) )
            return 0;
          if ( !(unsigned __int8)sub_CA2880(a1, v27, a3, v29) )
            return 0;
          v34[0] = a3 | 4;
          if ( !(unsigned __int8)sub_C7EAC0((__int64)a1, v34) )
            return 0;
        }
        ++v24;
        v23 += 56;
        if ( v24 == v30 )
          return 1;
      }
    }
    return 1;
  }
  v8 = *((_QWORD *)a2 + 1);
  v9 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
    v9 = *(_QWORD *)v9;
  v10 = *(_BYTE *)(v9 + 8);
  v11 = v9 - 64;
  if ( (v10 & 0x7Fu) - 58 >= 4 )
    v11 = 0;
  v12 = sub_C8D530((__int64)a1, v11);
  v13 = *((_QWORD *)a2 + 2);
  v14 = (unsigned int *)sub_E0DFD0(v12, v8);
  v15 = sub_CC2440(a1[61], *(_QWORD *)(*(_QWORD *)v14 + 48LL));
  if ( !(unsigned __int8)sub_CA2340(a1, v13, v15, a3) )
    return 0;
  v34[0] = a3 | 4;
  return sub_C81290((__int64)a1, v15, v14[2], v34);
}

