/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4146E8
// Address: 0x00000000004146E8

//----- (00000000004146E8) ----------------------------------------------------
__int64 __fastcall sub_4146E8(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  unsigned int v5; // w5
  int v8; // w0
  __int64 v9; // x21
  _QWORD *v10; // x23
  _QWORD *v11; // x0
  _QWORD *v12; // x21
  _QWORD *v13; // x22
  __int64 v14; // x25
  _QWORD *v15; // x1
  _QWORD *v16; // x2
  _BOOL4 v17; // w0
  __int64 v18; // x3
  void *v19; // x0
  int v20; // [xsp+44h] [xbp-2Ch]
  unsigned __int64 v21; // [xsp+48h] [xbp-28h] BYREF
  unsigned __int64 v22; // [xsp+50h] [xbp-20h]
  __int64 v23; // [xsp+58h] [xbp-18h] BYREF
  __int64 v24; // [xsp+60h] [xbp-10h]

  v5 = 0;
  v21 = a4;
  if ( a3 == 4 )
  {
    if ( a2 )
    {
      v20 = a5;
      v8 = sub_45DC90((_QWORD *)a1, a2, a4, a5);
      a5 = v20;
      if ( v8 < 0 )
        return (unsigned int)-2;
    }
    if ( a5 < 0 )
    {
      a5 = *(_DWORD *)(a1 + 496);
      if ( a5 <= 0 )
        goto LABEL_11;
    }
    else if ( a5 <= 0 )
    {
      goto LABEL_11;
    }
    v9 = a5;
    if ( (unsigned __int64)a5 > *(_QWORD *)(a1 + 496) )
      goto LABEL_11;
    v22 = v21;
    LOBYTE(v24) = a5;
    HIDWORD(v24) = 0;
    if ( (unsigned __int8)a5 > 7u )
    {
      if ( !under_debugger )
        sub_492270(1796);
      while ( 1 )
      {
        __break(0x3E8u);
LABEL_11:
        if ( !under_debugger )
          sub_492270(30066);
      }
    }
    if ( !(*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 288LL))(
            a1,
            v21,
            &v23,
            a5,
            0)
      || v9 != (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 296LL))(
                 a1,
                 v21,
                 &qword_4B3100,
                 v9,
                 0) )
    {
      return 0;
    }
    v10 = (_QWORD *)(a1 + 520);
    v11 = *(_QWORD **)(a1 + 528);
    if ( v11 )
    {
      v12 = (_QWORD *)(a1 + 520);
      do
      {
        if ( v11[4] < v21 )
        {
          v11 = (_QWORD *)v11[3];
        }
        else
        {
          v12 = v11;
          v11 = (_QWORD *)v11[2];
        }
      }
      while ( v11 );
      if ( v10 != v12 )
      {
        v13 = v12 + 5;
        if ( v21 >= v12[4] )
        {
LABEL_33:
          v18 = v23;
          v12[5] = v22;
          v12[6] = v18;
          v13[2] = v24;
          sub_40F7E0((_QWORD *)(a1 + 2056), &v21);
          return 1;
        }
      }
    }
    else
    {
      v12 = (_QWORD *)(a1 + 520);
    }
    v14 = (__int64)v12;
    v12 = sub_49E050(0x40u);
    v13 = v12 + 5;
    v12[4] = v21;
    v12[5] = -1;
    *((_BYTE *)v12 + 56) = 0;
    *((_DWORD *)v12 + 15) = 0;
    v16 = sub_4145A0((_QWORD *)(a1 + 512), v14, v12 + 4);
    if ( v15 )
    {
      v17 = v10 == v15;
      if ( v16 )
        v17 = 1;
      if ( !v17 )
        LOBYTE(v17) = v12[4] < v15[4];
      sub_49F830(v17, (__int64)v12, v15, (_QWORD *)(a1 + 520));
      ++*(_QWORD *)(a1 + 552);
    }
    else
    {
      v19 = v12;
      v13 = v16 + 5;
      v12 = v16;
      j__free_0(v19);
    }
    goto LABEL_33;
  }
  return v5;
}
// 4146E8: could not find valid save-restore pair for x21
// 4146E8: could not find valid save-restore pair for x22
// 4146E8: could not find valid save-restore pair for x25
// 4148DC: variable 'v15' is possibly undefined
// 4B3100: using guessed type __int64 qword_4B3100;
// 52451C: using guessed type char under_debugger;
