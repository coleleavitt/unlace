/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4767C0
// Address: 0x00000000004767C0

//----- (00000000004767C0) ----------------------------------------------------
__int64 __fastcall sub_4767C0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // x0
  _QWORD *v7; // x23
  unsigned __int64 *v8; // x0
  unsigned __int64 *v9; // x22
  unsigned __int64 *v10; // x19
  __int64 v11; // x25
  unsigned __int64 *v12; // x1
  unsigned __int64 *v13; // x2
  _BOOL4 v14; // w0
  unsigned __int64 *v16; // x0

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v6 = *(_QWORD *)(a1 + 88);
  v7 = (_QWORD *)(v6 + 8);
  v8 = *(unsigned __int64 **)(v6 + 24);
  v9 = v7 + 1;
  if ( !v8 )
  {
    v10 = v7 + 1;
LABEL_7:
    v11 = (__int64)v10;
    v10 = (unsigned __int64 *)sub_49E050(0x30u);
    v10[4] = a2;
    v10[5] = 0;
    v13 = sub_476678(v7, v11, v10 + 4);
    if ( v12 )
    {
      v14 = v9 == v12;
      if ( v13 )
        v14 = 1;
      if ( !v14 )
        LOBYTE(v14) = v10[4] < v12[4];
      sub_49F830(v14, (__int64)v10, v12, v7 + 1);
      ++v7[5];
    }
    else
    {
      v16 = v10;
      v10 = v13;
      j__free_0(v16);
    }
    goto LABEL_13;
  }
  v10 = v7 + 1;
  do
  {
    while ( v8[4] >= a2 )
    {
      v10 = v8;
      v8 = (unsigned __int64 *)v8[2];
      if ( !v8 )
        goto LABEL_5;
    }
    v8 = (unsigned __int64 *)v8[3];
  }
  while ( v8 );
LABEL_5:
  if ( v9 == v10 || v10[4] > a2 )
    goto LABEL_7;
LABEL_13:
  v10[5] = a3;
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88));
}
// 476860: variable 'v12' is possibly undefined
