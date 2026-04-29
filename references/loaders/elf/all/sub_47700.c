__int64 __fastcall sub_47700(void **a1, __int64 a2)
{
  int v3; // eax
  __int64 bytearray_linput; // rax
  __int64 v5; // rbp
  _QWORD *v6; // rax
  __int64 *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 i; // r13
  __int64 *v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  void *v21; // rdi
  unsigned __int8 v23; // [rsp+Fh] [rbp-29h]

  v3 = sub_44DD0((__int64)a1, a1, a2);
  *((_DWORD *)a1 + 10) = v3;
  if ( v3 == 1 )
    goto LABEL_37;
  if ( v3 == 2 )
  {
    sub_EAA0((__int64)"gnu_debugdata_t: XZ decode error\n");
    return 0;
  }
  close_linput(a1[3]);
  a1[3] = nullptr;
  bytearray_linput = create_bytearray_linput(*a1, a1[1]);
  a1[3] = (void *)bytearray_linput;
  if ( !bytearray_linput )
  {
LABEL_37:
    sub_EAA0((__int64)"gnu_debugdata_t: out of memory\n");
    goto LABEL_8;
  }
  sub_44C50((__int64)a1);
  v5 = operator new(0x578u);
  sub_45020(v5, (__int64)a1[3], 0);
  *(_QWORD *)(v5 + 624) = 0;
  *(_QWORD *)(v5 + 648) = 0;
  *(_QWORD *)(v5 + 672) = 0;
  *(_QWORD *)(v5 + 696) = 0;
  *(_QWORD *)(v5 + 704) = 0;
  *(_QWORD *)(v5 + 728) = 0;
  *(_DWORD *)(v5 + 760) = 0;
  *(_QWORD *)(v5 + 768) = 0;
  *(_DWORD *)(v5 + 824) = 0;
  *(_QWORD *)(v5 + 832) = 0;
  *(_QWORD *)(v5 + 776) = v5 + 760;
  *(_QWORD *)(v5 + 784) = v5 + 760;
  v6 = (_QWORD *)(v5 + 840);
  *(_OWORD *)(v5 + 632) = 0;
  *(_OWORD *)(v5 + 656) = 0;
  *(_OWORD *)(v5 + 680) = 0;
  *(_OWORD *)(v5 + 712) = 0;
  *(_OWORD *)(v5 + 736) = 0;
  *(_OWORD *)(v5 + 792) = 0;
  *(_OWORD *)(v5 + 808) = 0;
  do
  {
    *v6 = 0;
    v6 += 4;
    *(_OWORD *)(v6 - 3) = 0;
    *((_WORD *)v6 - 4) = 0;
    *((_DWORD *)v6 - 1) = 0;
  }
  while ( (_QWORD *)(v5 + 1320) != v6 );
  *(_QWORD *)(v5 + 840) = 0;
  *(_QWORD *)(v5 + 1320) = 0;
  memset(
    (void *)((v5 + 848) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)v5 + 840 - (((_DWORD)v5 + 848) & 0xFFFFFFF8) + 488) >> 3));
  a1[4] = (void *)v5;
  *(_QWORD *)(v5 + 1328) = 0;
  *(_QWORD *)(v5 + 1352) = 0;
  *(_QWORD *)(v5 + 1376) = 0;
  *(_OWORD *)(v5 + 1336) = 0;
  *(_OWORD *)(v5 + 1360) = 0;
  *(_OWORD *)(v5 + 1384) = 0;
  if ( !(unsigned __int8)sub_39590(v5) || !(unsigned __int8)sub_39BD0(v5) || (v23 = sub_46B20((__int64)a1[4])) == 0 )
  {
    *((_DWORD *)a1 + 10) = 4;
    sub_EAA0((__int64)"gnu_debugdata_t: finfo/reader bad headers\n");
LABEL_8:
    close_linput(a1[3]);
    v7 = (__int64 *)a1[4];
    a1[3] = nullptr;
    if ( v7 )
    {
      v8 = v7[172];
      if ( v8 )
      {
        v7[173] = 0;
        qfree(v8);
      }
      v9 = v7[169];
      if ( v9 )
      {
        v7[170] = 0;
        qfree(v9);
      }
      v10 = v7[166];
      if ( v10 )
      {
        v7[167] = 0;
        qfree(v10);
      }
      sub_3F920(v7 + 78);
      v11 = v7[75];
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v12 = v7[72];
      if ( v12 )
      {
        v7[73] = 0;
        qfree(v12);
      }
      v13 = v7[36];
      if ( v13 )
      {
        v14 = v7[37];
        if ( v14 )
        {
          for ( i = 0; i != v14; ++i )
          {
            v16 = (__int64 *)(v13 + 96 * i);
            v17 = v16[3];
            if ( v17 )
            {
              v16[4] = 0;
              qfree(v17);
            }
            v18 = *v16;
            if ( *v16 )
            {
              v16[1] = 0;
              qfree(v18);
            }
            v13 = v7[36];
          }
        }
        v7[37] = 0;
        qfree(v13);
      }
      v19 = v7[14];
      if ( v19 )
      {
        v7[15] = 0;
        qfree(v19);
      }
      v20 = v7[4];
      if ( v20 )
      {
        v7[5] = 0;
        qfree(v20);
      }
      operator delete(v7, 0x578u);
    }
    v21 = *a1;
    a1[4] = nullptr;
    if ( v21 )
    {
      a1[1] = nullptr;
      qfree(v21);
      *a1 = nullptr;
      a1[2] = nullptr;
    }
    return 0;
  }
  sub_319C0((__int64)a1[4]);
  return v23;
}
