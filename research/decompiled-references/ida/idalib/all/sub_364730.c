__int64 __fastcall sub_364730(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        void *a5,
        __int64 a6,
        __int64 a7,
        char *a8,
        const char *a9)
{
  __int64 v9; // r15
  __int64 *v11; // rax
  int v12; // eax
  __int64 v13; // r8
  int v14; // ecx
  unsigned __int64 data_elsize; // rax
  unsigned __int64 v17; // rax
  __int64 *v18; // rax
  int v19; // eax
  int v20; // ecx
  __int64 *v21; // rax
  int v22; // eax
  int v23; // ecx
  __int64 *v24; // rax
  int v25; // eax
  int v26; // eax
  __int64 v28; // [rsp+50h] [rbp-50h]
  __int64 v29; // [rsp+50h] [rbp-50h]
  __int64 v30; // [rsp+50h] [rbp-50h]
  __int64 v31; // [rsp+50h] [rbp-50h]
  __int64 v32; // [rsp+50h] [rbp-50h]
  __int64 v33; // [rsp+58h] [rbp-48h]
  __int64 v34; // [rsp+58h] [rbp-48h]
  __int64 v35; // [rsp+58h] [rbp-48h]
  __int64 v36; // [rsp+58h] [rbp-48h]
  __int64 v37; // [rsp+60h] [rbp-40h]
  __int64 v38; // [rsp+60h] [rbp-40h]
  __int64 v39; // [rsp+60h] [rbp-40h]
  __int64 v40; // [rsp+60h] [rbp-40h]

  v9 = a4;
  if ( (a4 & 0x600) != 0x400 )
    goto LABEL_2;
  v29 = a6;
  sub_382A40(a1, a2, 0);
  a6 = v29;
  v17 = (unsigned int)v9 & 0xF0000000;
  if ( v17 == 0x80000000 )
  {
    data_elsize = get_data_elsize(-1, 2147484672LL, 0);
    a6 = v29;
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 120LL);
    goto LABEL_20;
  }
  if ( v17 <= 0x80000000 )
  {
    if ( v17 == 0x40000000 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 136LL);
      data_elsize = *(_QWORD *)(**(_QWORD **)(a1 + 88) + 1048LL);
    }
    else if ( v17 <= 0x40000000 )
    {
      switch ( v17 )
      {
        case 0x20000000uLL:
          v24 = *(__int64 **)(a1 + 88);
          v36 = v29;
          v40 = *v24;
          v32 = *(_QWORD *)(*v24 + 1168);
          v25 = nbits(a2);
          v13 = v32;
          a6 = v36;
          if ( v25 != 8 && *(_DWORD *)(v40 + 948) == 8 )
            v13 = *(_QWORD *)(v40 + 1176);
          data_elsize = 4;
          if ( v13 )
            return sub_361EB0(
                     a1,
                     a2,
                     a3,
                     v9,
                     v13,
                     data_elsize,
                     (__int64)a5,
                     *(_QWORD *)a6,
                     *(_DWORD *)(a6 + 8),
                     a7,
                     a8,
                     a9,
                     nullptr);
          v13 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 88LL);
          data_elsize = 2;
          break;
        case 0x30000000uLL:
          v21 = *(__int64 **)(a1 + 88);
          v35 = v29;
          v39 = *v21;
          v31 = *(_QWORD *)(*v21 + 1176);
          v22 = nbits(a2);
          v13 = v31;
          a6 = v35;
          v23 = v22;
          data_elsize = 8;
          if ( v23 != 8 && *(_DWORD *)(v39 + 948) == 8 )
            v13 = *(_QWORD *)(v39 + 1184);
          break;
        case 0x10000000uLL:
          v18 = *(__int64 **)(a1 + 88);
          v34 = v29;
          v38 = *v18;
          v30 = *(_QWORD *)(*v18 + 1160);
          v19 = nbits(a2);
          v13 = v30;
          a6 = v34;
          v20 = v19;
          data_elsize = 2;
          if ( v20 != 8 && *(_DWORD *)(v38 + 948) == 8 )
            v13 = *(_QWORD *)(v38 + 1168);
          break;
        default:
          goto LABEL_2;
      }
    }
    else
    {
      if ( v17 == 1610612736 )
        return sub_3640E0(a1, a2, a3, a5, a8, a9);
      if ( v17 != 1879048192 )
      {
        if ( v17 != 1342177280 )
          goto LABEL_2;
        return sub_364C70(a1, a2, (__int64)a9, 0, 0);
      }
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 112LL);
      data_elsize = 16;
    }
LABEL_20:
    if ( v13 )
      return sub_361EB0(
               a1,
               a2,
               a3,
               v9,
               v13,
               data_elsize,
               (__int64)a5,
               *(_QWORD *)a6,
               *(_DWORD *)(a6 + 8),
               a7,
               a8,
               a9,
               nullptr);
LABEL_2:
    v11 = *(__int64 **)(a1 + 88);
    v33 = a6;
    v37 = *v11;
    v28 = *(_QWORD *)(*v11 + 1152);
    v12 = nbits(a2);
    v13 = v28;
    a6 = v33;
    v14 = v12;
    data_elsize = 1;
    if ( v14 != 8 && *(_DWORD *)(v37 + 948) == 8 )
      v13 = *(_QWORD *)(v37 + 1160);
    return sub_361EB0(
             a1,
             a2,
             a3,
             v9,
             v13,
             data_elsize,
             (__int64)a5,
             *(_QWORD *)a6,
             *(_DWORD *)(a6 + 8),
             a7,
             a8,
             a9,
             nullptr);
  }
  if ( v17 == 3489660928 )
  {
    v26 = sub_362AD0(a1, a2, a3, v9, (__int64)a5, v29, a7, a8, a9);
    a6 = v29;
    if ( v26 == -1 )
    {
      v9 = 1024;
      goto LABEL_2;
    }
    return v26 & 1;
  }
  else
  {
    if ( v17 > 0xD0000000 )
    {
      if ( v17 == 3758096384 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 400LL);
        data_elsize = 32;
      }
      else
      {
        if ( v17 != 4026531840 )
          goto LABEL_2;
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 408LL);
        data_elsize = 64;
      }
      goto LABEL_20;
    }
    if ( v17 == 2684354560 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 144LL);
      data_elsize = *(_QWORD *)(**(_QWORD **)(a1 + 88) + 1048LL);
      goto LABEL_20;
    }
    if ( v17 != 2952790016 )
    {
      if ( v17 != 2415919104 )
        goto LABEL_2;
      data_elsize = get_data_elsize(-1, 2415920128LL, 0);
      a6 = v29;
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 128LL);
      goto LABEL_20;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 632) + 248LL) )
      goto LABEL_2;
    return sub_35D3B0((_QWORD *)a1, a3, v9, (__int64)a5, a8, a9);
  }
}
