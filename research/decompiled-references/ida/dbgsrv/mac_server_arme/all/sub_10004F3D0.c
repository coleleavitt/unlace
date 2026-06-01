/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004F3D0
// Address: 0x000000010004F3D0

//----- (000000010004F3D0) ----------------------------------------------------
__int64 __fastcall sub_10004F3D0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x0
  __int64 *v5; // x20
  __int64 v6; // x19
  _QWORD *v8; // x21
  __int64 v9; // x22
  __int64 *v10; // x9
  __int64 *v11; // x8
  bool v12; // zf
  __int64 v13; // x0
  _opaque_pthread_t *v14; // x0
  _QWORD *v15; // x8
  __int64 *v16; // x10
  __int64 *v17; // x9
  __int64 *v18; // x10
  __int64 *v19; // x0

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL) + 16LL))(*(_QWORD *)(*(_QWORD *)(a1 + 448)
                                                                                                  + 88LL));
  v4 = *(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL);
  v5 = (__int64 *)v4[1];
  if ( v5 == v4 + 2 )
  {
LABEL_2:
    v6 = 0;
  }
  else
  {
    while ( 1 )
    {
      v8 = (_QWORD *)v5[4];
      if ( v8 != (_QWORD *)a1 )
      {
        v9 = v8[55];
        if ( *(_BYTE *)(v9 + 732) == 1
          && *(_DWORD *)(v9 + 528) == (_DWORD)a2
          && (*(unsigned int (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v9 + 512LL))(v8[55], a2) )
        {
          break;
        }
      }
      v10 = (__int64 *)v5[1];
      if ( v10 )
      {
        do
        {
          v11 = v10;
          v10 = (__int64 *)*v10;
        }
        while ( v10 );
      }
      else
      {
        do
        {
          v11 = (__int64 *)v5[2];
          v12 = *v11 == (_QWORD)v5;
          v5 = v11;
        }
        while ( !v12 );
      }
      v4 = *(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL);
      v5 = v11;
      if ( v11 == v4 + 2 )
        goto LABEL_2;
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 112LL))(*(_QWORD *)(a1 + 440));
    v13 = *(_QWORD *)(a1 + 440);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 40LL))(v13);
    *(_QWORD *)(a1 + 440) = v9;
    if ( *(_BYTE *)(a1 + 184) == 1 )
      sub_100000B44();
    v14 = (_opaque_pthread_t *)v5[5];
    if ( v14 )
      qthread_free(v14);
    sub_100060BE4((__int64)v8);
    v15 = *(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL);
    v16 = (__int64 *)v5[1];
    if ( v16 )
    {
      do
      {
        v17 = v16;
        v16 = (__int64 *)*v16;
      }
      while ( v16 );
    }
    else
    {
      v18 = v5;
      do
      {
        v17 = (__int64 *)v18[2];
        v12 = *v17 == (_QWORD)v18;
        v18 = v17;
      }
      while ( !v12 );
    }
    if ( (__int64 *)v15[1] == v5 )
      v15[1] = v17;
    v19 = (__int64 *)v15[2];
    --v15[3];
    sub_10000BEF0(v19, v5);
    operator delete(v5);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
    *(_BYTE *)(v9 + 732) = 0;
    v4 = *(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL);
    v6 = 1;
  }
  (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
  return v6;
}
