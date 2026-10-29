/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_438F88
// Address: 0x0000000000438F88

//----- (0000000000438F88) ----------------------------------------------------
__int64 __fastcall sub_438F88(__int64 a1, char *a2)
{
  unsigned __int64 v4; // x0
  char v5; // w22
  __int64 v6; // x20
  __int64 v7; // x1
  _BYTE *v8; // x0
  unsigned int v10; // [xsp+34h] [xbp-Ch] BYREF

  v4 = sub_437FB8((__int64 *)a1, a2, (int *)&v10);
  if ( v10 == 2 )
  {
    v5 = -8;
    goto LABEL_5;
  }
  if ( v10 > 2 )
  {
    if ( v10 == 3 )
    {
      v5 = -6;
      goto LABEL_5;
    }
    if ( v10 == 6 )
      sub_4869C8(1565);
    else
      sub_4869C8(1564);
LABEL_11:
    sub_486A58(0, a2);
    return sub_4869C8(53);
  }
  if ( !v10 )
  {
    sub_4869C8(53);
    goto LABEL_11;
  }
  v5 = -7;
LABEL_5:
  sub_437490(a1, v4);
  v6 = *(_QWORD *)(a1 + 200);
  v7 = *(_QWORD *)(v6 + 8);
  if ( (unsigned __int64)(v7 + 1) > *(_QWORD *)(v6 + 16) )
  {
    v8 = sub_491288(*(_QWORD *)(a1 + 200), *(void **)v6, v7 + 1, 1u);
    *(_QWORD *)v6 = v8;
    v7 = *(_QWORD *)(v6 + 8);
  }
  else
  {
    v8 = *(_BYTE **)v6;
  }
  v8[v7] = v5;
  ++*(_QWORD *)(v6 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
// 438FD4: conditional instruction was optimized away because %var_C.4==1
