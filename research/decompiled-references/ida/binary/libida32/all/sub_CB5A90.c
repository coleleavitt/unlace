__int64 __fastcall sub_CB5A90(__int64 a1, int *a2, __int64 a3, __int64 a4)
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
  __int64 v16; // r8
  __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // r8
  unsigned int *v20; // r15
  __int64 v21; // r14
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r14
  unsigned int v26; // ebp
  __int64 v27; // r8
  __int64 v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+8h] [rbp-70h]
  __int64 v30; // [rsp+10h] [rbp-68h]
  __int64 v31; // [rsp+10h] [rbp-68h]
  int v32; // [rsp+18h] [rbp-60h]
  __int64 v33; // [rsp+20h] [rbp-58h]
  unsigned int v34; // [rsp+20h] [rbp-58h]
  unsigned int v35; // [rsp+28h] [rbp-50h]
  _QWORD v36[8]; // [rsp+38h] [rbp-40h] BYREF

  v6 = *a2;
  if ( *a2 == 10 )
  {
    v17 = 0;
    v30 = sub_C90DA0(a1, a4);
    v18 = a2[5];
    v33 = (unsigned int)(v18 - 1);
    if ( v18 )
    {
      while ( 1 )
      {
        v28 = *((_QWORD *)a2 + 1) + 56LL * (unsigned int)(a2[4] + v17);
        v20 = (unsigned int *)(*(_QWORD *)(v30 + 280) + 24 * v17);
        v21 = *(_QWORD *)(*(_QWORD *)v20 + 48LL);
        v22 = sub_CC2440(*(_QWORD *)(a1 + 1264), v21);
        if ( BYTE4(v22) )
        {
          v35 = v22;
          if ( !(unsigned __int8)sub_CB5550(a1, v28, (unsigned int)v22, a3) )
            return 0;
          v36[0] = a3 | 4;
          if ( !(unsigned __int8)sub_D02F80(a1, v35, v20[2], v36, v19) )
            return 0;
        }
        else
        {
          v36[0] = a3 | 4;
          if ( !(unsigned __int8)sub_CE2540(a1, v20[2], v36) )
            return 0;
          if ( !(unsigned __int8)sub_CB5A90(a1, v28, a3, v21) )
            return 0;
          v36[0] = a3 | 4;
          if ( !(unsigned __int8)sub_CE3FA0(a1, v36) )
            return 0;
        }
        if ( v17 == v33 )
          return 1;
        ++v17;
      }
    }
    return 1;
  }
  if ( v6 != 11 )
  {
    if ( v6 != 9 )
      return 0;
    v23 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
    v24 = *(unsigned __int8 *)(v23 + 16);
    if ( (unsigned __int8)(v24 - 2) > 4u )
    {
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
        BUG();
      v23 = sub_F3F310(
              v23,
              a2,
              (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2,
              v24);
    }
    v25 = 0;
    v26 = 0;
    v31 = *(_QWORD *)(v23 + 32);
    v32 = a2[5];
    if ( v32 )
    {
      while ( 1 )
      {
        v29 = v25 + *((_QWORD *)a2 + 1);
        v27 = sub_CC2440(*(_QWORD *)(a1 + 1264), v31);
        if ( BYTE4(v27) )
        {
          v34 = v27;
          if ( !(unsigned __int8)sub_CB5550(a1, v29, (unsigned int)v27, a3) )
            return 0;
          v36[0] = a3 | 4;
          if ( !(unsigned __int8)sub_CF5810(a1, v34, v26, v36) )
            return 0;
        }
        else
        {
          v36[0] = a3 | 4;
          if ( !(unsigned __int8)sub_CDCCE0(a1, v26, v36) )
            return 0;
          v36[0] = a3 | 4;
          if ( !(unsigned __int8)sub_D08110(a1, v36) )
            return 0;
          if ( !(unsigned __int8)sub_CB5A90(a1, v29, a3, v31) )
            return 0;
          v36[0] = a3 | 4;
          if ( !(unsigned __int8)sub_CE3FA0(a1, v36) )
            return 0;
        }
        ++v26;
        v25 += 56;
        if ( v26 == v32 )
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
  v12 = sub_C90D90(a1, v11);
  v13 = *((_QWORD *)a2 + 2);
  v14 = (unsigned int *)sub_E0DFD0(v12, v8);
  v15 = sub_CC2440(*(_QWORD *)(a1 + 1264), *(_QWORD *)(*(_QWORD *)v14 + 48LL));
  if ( !(unsigned __int8)sub_CB5550(a1, v13, v15, a3) )
    return 0;
  v36[0] = a3 | 4;
  return sub_D02F80(a1, v15, v14[2], v36, v16);
}

