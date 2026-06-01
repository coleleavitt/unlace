__int64 __fastcall sub_3FD000(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v8; // rdi
  char v11; // r15
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  bool v16; // r15
  int *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rbp
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // [rsp+0h] [rbp-148h]
  __int64 v28; // [rsp+8h] [rbp-140h]
  int v29; // [rsp+10h] [rbp-138h]
  int v30; // [rsp+10h] [rbp-138h]
  __int64 *v31; // [rsp+18h] [rbp-130h]
  int v32; // [rsp+20h] [rbp-128h]
  int v33; // [rsp+28h] [rbp-120h]
  unsigned int v34; // [rsp+2Ch] [rbp-11Ch] BYREF
  __int64 v35; // [rsp+30h] [rbp-118h] BYREF
  __int64 v36; // [rsp+38h] [rbp-110h]
  __int64 v37; // [rsp+40h] [rbp-108h]
  int v38; // [rsp+48h] [rbp-100h] BYREF
  int v39; // [rsp+50h] [rbp-F8h]
  void *v40; // [rsp+58h] [rbp-F0h]
  __int64 v41; // [rsp+60h] [rbp-E8h]
  int v42; // [rsp+68h] [rbp-E0h]
  int v43; // [rsp+70h] [rbp-D8h]
  int v44; // [rsp+78h] [rbp-D0h]
  int v45; // [rsp+80h] [rbp-C8h]
  int v46; // [rsp+88h] [rbp-C0h]
  __int64 v47; // [rsp+90h] [rbp-B8h]
  unsigned __int64 v48; // [rsp+108h] [rbp-40h] BYREF

  v8 = *a1;
  v48 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_615160(v8, 2, 4) )
    return 0;
  v11 = 0;
  v34 = a3;
  v12 = sub_375980(0x43u, a2, a3, a5, &v34);
  if ( v12 < 0 )
    return 0;
  v13 = a1 + 194;
  if ( v12 )
  {
    v20 = sub_4EE820(v13, v34);
    v21 = v20;
    if ( v20 )
    {
      if ( a5 )
      {
        if ( *(_BYTE *)(v20 + 96) == 2 && (~(_WORD)a4 & 0x600) != 0 && (sub_614FB0(*a1, 10) & 0x40) != 0 )
        {
          v22 = sub_39CC50((__int64)a1);
          v23 = sub_39D100((__int64)a1, v34, 5 * (unsigned int)(v22 == 25) + 20);
          if ( v34 == v23 )
          {
            v24 = sub_3B9AA0((__int64)a1, v34, 4);
            sub_3FC940(a1, v34, v24, v21, a2, nullptr, 1);
          }
        }
      }
    }
    return 1;
  }
  v28 = sub_4EE820(v13, a3);
  if ( !v28 )
    return 0;
  v14 = getseg(a2);
  if ( v14 && (*(_WORD *)(v14 + 24) & 0x18) == 8 )
  {
    v15 = getseg(a3);
    v11 = 1;
    if ( !v15 )
      return 0;
  }
  else
  {
    v15 = getseg(a3);
    if ( !v15 )
      goto LABEL_10;
  }
  if ( ((*(_WORD *)(v15 + 24) & 0x18) == 8) != v11 )
    return 0;
LABEL_10:
  v16 = *(_BYTE *)(v28 + 96) == 2;
  if ( a2 == -1 )
  {
    if ( !a5 )
      goto LABEL_12;
    if ( (unsigned int)sub_582310(a3, a4, *(unsigned int *)(v28 + 4), *(_BYTE *)(v28 + 96) == 2) )
      return 1;
  }
  else if ( !a5 )
  {
    goto LABEL_12;
  }
  if ( (unsigned int)((unsigned __int8)sub_614FB0(*a1, 52) >> 2) - 1 <= 2
    && (unsigned __int8)sub_3FB320(
                          *a1,
                          a3,
                          a4,
                          v28,
                          v25,
                          v26,
                          v27,
                          v28,
                          v29,
                          (int)v31,
                          v32,
                          v33,
                          v35,
                          (void *)v36,
                          v37,
                          v38,
                          v39,
                          v40,
                          v41,
                          v42,
                          v43,
                          v44,
                          v45,
                          v46,
                          v47) )
  {
    return 1;
  }
LABEL_12:
  if ( (debug & 1) != 0 )
    sub_383DA0();
  v30 = a4;
  if ( v34 != a3 )
    v30 = sub_3B9AA0((__int64)a1, v34, 4);
  v35 = -1;
  v37 = 0;
  v36 = 0xFFFFFFFFLL;
  v17 = &v38;
  do
  {
    *(_WORD *)v17 = 0;
    v17 += 6;
    *((_WORD *)v17 - 11) = 0;
    *((_WORD *)v17 - 10) = 0;
    *(v17 - 1) = 0;
    *((_WORD *)v17 - 9) = 0;
    *((_QWORD *)v17 - 2) = 0;
    *(v17 - 2) = 0;
  }
  while ( &v48 != (unsigned __int64 *)v17 );
  if ( a5 )
  {
    if ( v16 )
    {
      v31 = &v35;
      if ( (unsigned __int8)sub_3FB8B0(a1, (__int64)&v35, v34, v30) )
      {
        if ( (sub_614FB0(*a1, 10) & 0x40) != 0 )
          sub_3FC940(a1, v34, v30, v28, a2, &v35, 0);
        return 1;
      }
    }
  }
  if ( (debug & 1) != 0 )
    sub_383DA0();
  if ( (sub_614FB0(*a1, 10) & 0x40) != 0 && v16 && (unsigned __int8)sub_3FC940(a1, v34, v30, v28, a2, &v35, 1) )
    return 1;
  if ( (debug & 1) != 0 )
    sub_383DA0();
  if ( !a5 )
    return 0;
  if ( (unsigned __int8)sub_615160(*a1, 10, &stru_100000)
    && (unsigned __int8)sub_3FBBB0(a1, a3, a4, v28, (*(_BYTE *)(a1[2] + 12LL) & 8) != 0) )
  {
    return 1;
  }
  if ( (unsigned int)((unsigned __int8)sub_614FB0(*a1, 52) >> 2) - 1 <= 2 )
    return 0;
  return sub_3FB320(
           *a1,
           a3,
           a4,
           v28,
           v18,
           v19,
           v27,
           v28,
           v30,
           (int)v31,
           v32,
           v33,
           v35,
           (void *)v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47);
}

