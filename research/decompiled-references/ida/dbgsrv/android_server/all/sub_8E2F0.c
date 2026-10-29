/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E2F0
// Address: 0x000000000008E2F0

//----- (000000000008E2F0) ----------------------------------------------------
__int64 __fastcall sub_8E2F0(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // x0
  __int64 *v5; // x20
  _QWORD *v6; // x21
  __int64 v7; // x22
  __int64 *v8; // x8
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 *v11; // t1
  unsigned int v12; // w19
  __int64 v14; // x0
  int v15; // w8
  __int64 *v16; // x10
  _QWORD *v17; // x8
  __int64 **v18; // x9
  __int64 v19; // x10
  __int64 *v20; // x11
  __int64 **v21; // t1
  __int64 *v22; // x0
  __int64 v23; // x8

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL) + 16LL))(*(_QWORD *)(*(_QWORD *)(a1 + 448)
                                                                                                  + 88LL));
  v4 = *(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL);
  v5 = (__int64 *)v4[1];
  while ( 1 )
  {
    if ( v4 + 2 == v5 )
    {
      v12 = 0;
      goto LABEL_16;
    }
    v6 = (_QWORD *)v5[4];
    if ( v6 != (_QWORD *)a1 )
    {
      v7 = v6[55];
      if ( *(_BYTE *)(v7 + 732) )
      {
        if ( *(_DWORD *)(v7 + 528) == a2
          && ((*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v7 + 512LL))(v6[55], a2) & 1) != 0 )
        {
          break;
        }
      }
    }
    v8 = (__int64 *)v5[1];
    if ( v8 )
    {
      do
      {
        v5 = v8;
        v8 = (__int64 *)*v8;
      }
      while ( v8 );
    }
    else
    {
      v9 = (__int64)(v5 + 2);
      if ( *(__int64 **)v5[2] == v5 )
      {
        v5 = (__int64 *)v5[2];
      }
      else
      {
        do
        {
          v10 = *(_QWORD *)v9;
          v11 = *(__int64 **)(*(_QWORD *)v9 + 16LL);
          v9 = *(_QWORD *)v9 + 16LL;
          v5 = v11;
        }
        while ( *v11 != v10 );
      }
    }
    v4 = *(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL);
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 112LL))(*(_QWORD *)(a1 + 440));
  v14 = *(_QWORD *)(a1 + 440);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 40LL))(v14);
  v15 = *(unsigned __int8 *)(a1 + 184);
  *(_QWORD *)(a1 + 440) = v7;
  if ( v15 )
    sub_39FA0((__int64)"reusing previously broken debugging session\n");
  sub_A3344((__int64)v6);
  v16 = (__int64 *)v5[1];
  v17 = *(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL);
  if ( v16 )
  {
    do
    {
      v18 = (__int64 **)v16;
      v16 = (__int64 *)*v16;
    }
    while ( v16 );
  }
  else
  {
    v19 = (__int64)(v5 + 2);
    v18 = (__int64 **)v5[2];
    if ( *v18 != v5 )
    {
      do
      {
        v20 = *(__int64 **)v19;
        v21 = *(__int64 ***)(*(_QWORD *)v19 + 16LL);
        v19 = *(_QWORD *)v19 + 16LL;
        v18 = v21;
      }
      while ( *v21 != v20 );
    }
  }
  if ( (__int64 *)v17[1] == v5 )
    v17[1] = v18;
  v22 = (__int64 *)v17[2];
  --v17[3];
  sub_4AD74(v22, v5);
  operator delete(v5);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
  *(_BYTE *)(v7 + 732) = 0;
  v23 = *(_QWORD *)(a1 + 448);
  v12 = 1;
  v4 = *(_QWORD **)(v23 + 88);
LABEL_16:
  (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
  return v12;
}
