/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100029DB8
// Address: 0x0000000100029DB8

//----- (0000000100029DB8) ----------------------------------------------------
__int64 __fastcall sub_100029DB8(__int64 a1, char *a2)
{
  unsigned __int64 v3; // x1
  char v4; // w21
  __int64 v5; // x20
  _QWORD *v6; // x1
  __int64 v7; // x8
  int v9; // [xsp+4h] [xbp-2Ch] BYREF

  v3 = sub_100027CC8((__int64 *)a1, a2, &v9);
  if ( v9 <= 1 )
  {
    if ( v9 == 1 )
    {
      v4 = -7;
      goto LABEL_10;
    }
LABEL_13:
    set_qerrno();
    set_error_string(0);
    return set_qerrno();
  }
  if ( v9 == 6 )
    goto LABEL_13;
  if ( v9 == 3 )
  {
    v4 = -6;
    goto LABEL_10;
  }
  if ( v9 != 2 )
    goto LABEL_13;
  v4 = -8;
LABEL_10:
  sub_100023D70((_QWORD *)a1, v3);
  v5 = *(_QWORD *)(a1 + 200);
  v6 = *(_QWORD **)v5;
  v7 = *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)(v5 + 16) < (unsigned __int64)(v7 + 1) )
  {
    v6 = qvector_reserve(*(_QWORD **)(a1 + 200), v6, v7 + 1, 1u);
    *(_QWORD *)v5 = v6;
    v7 = *(_QWORD *)(v5 + 8);
  }
  *((_BYTE *)v6 + v7) = v4;
  ++*(_QWORD *)(v5 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
