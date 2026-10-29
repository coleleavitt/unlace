_QWORD *__fastcall sub_2061BA0(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        unsigned __int8 a19)
{
  int v20; // ebp
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // rax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  int v30; // ecx
  int v31; // edx
  int v32; // eax
  _QWORD *v33; // rbp
  __int64 v34; // rax
  __int64 v37; // [rsp+8h] [rbp-50h]
  __int64 v38; // [rsp+8h] [rbp-50h]
  int v39; // [rsp+8h] [rbp-50h]
  __int64 v40; // [rsp+10h] [rbp-48h]
  int v41; // [rsp+10h] [rbp-48h]
  __int64 v42; // [rsp+10h] [rbp-48h]
  __int64 v43; // [rsp+18h] [rbp-40h]

  v20 = (int)a2;
  v21 = *(_QWORD *)(a1 + 8);
  if ( (a12 & 8) != 0 )
  {
    v37 = *(_QWORD *)(a1 + 16);
    if ( a2 && *a2 == 17 )
      v20 = 0;
    v22 = 0;
    if ( a18 )
    {
      v43 = a6;
      v40 = a5;
      v23 = sub_20B4D60(v21, a17, a18);
      a6 = v43;
      a5 = v40;
      v22 = v23;
    }
    v24 = 0;
    if ( a6 )
      v24 = sub_20B4D60(v21, a5, a6);
    v25 = 0;
    if ( a4 )
    {
      v41 = v24;
      v26 = sub_20B4D60(v21, a3, a4);
      v24 = v41;
      v25 = v26;
    }
    v27 = sub_2086B60(
            v21,
            v20,
            v25,
            v24,
            a7,
            a8,
            a9,
            a10,
            0,
            0,
            0,
            a11,
            a12,
            v37,
            a13,
            a14,
            0,
            a15,
            a16,
            v22,
            a19,
            1,
            1);
  }
  else
  {
    if ( a2 && *a2 == 17 )
      v20 = 0;
    v28 = 0;
    if ( a18 )
    {
      v42 = a6;
      v38 = a5;
      v29 = sub_20B4D60(v21, a17, a18);
      a6 = v42;
      a5 = v38;
      v28 = v29;
    }
    v30 = 0;
    if ( a6 )
      v30 = sub_20B4D60(v21, a5, a6);
    v31 = 0;
    if ( a4 )
    {
      v39 = v30;
      v32 = sub_20B4D60(v21, a3, a4);
      v30 = v39;
      v31 = v32;
    }
    v27 = sub_2086B60(v21, v20, v31, v30, a7, a8, a9, a10, 0, 0, 0, a11, a12, 0, a13, a14, 0, a15, a16, v28, a19, 0, 1);
  }
  v33 = (_QWORD *)v27;
  v34 = *(unsigned int *)(a1 + 128);
  if ( v34 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 132) )
  {
    sub_2237220(a1 + 120, a1 + 136, v34 + 1, 8);
    v34 = *(unsigned int *)(a1 + 128);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v34) = v33;
  ++*(_DWORD *)(a1 + 128);
  sub_2061AA0(a1, v33);
  return v33;
}
