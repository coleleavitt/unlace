/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_426618
// Address: 0x0000000000426618

//----- (0000000000426618) ----------------------------------------------------
__int64 __fastcall sub_426618(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // w0
  unsigned __int64 v6; // x1
  unsigned __int64 v7; // x21
  unsigned __int64 v8; // x3
  unsigned __int64 v9; // x0
  bool v10; // zf
  __int64 v11; // x23
  __int64 v12; // x0
  __int64 v13; // x4
  __int64 v14; // x24
  __int64 i; // x20
  char *v16; // x0

  v4 = *(_DWORD *)(a1 + 72);
  if ( v4 < *(_DWORD *)(a1 + 76) )
  {
LABEL_2:
    *a2 = *(_QWORD *)(a1 + 40) + 16LL * v4;
    ++*(_DWORD *)(a1 + 72);
    return 1;
  }
  v6 = *(_QWORD *)(a1 + 64);
  v7 = *(_QWORD *)(a1 + 24) - v6;
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(a1 + 48);
  if ( v7 > v8 )
  {
    v16 = *(char **)(a1 + 40);
    if ( v7 > *(_QWORD *)(a1 + 56) )
    {
      v16 = (char *)sub_491288(a1 + 40, *(void **)(a1 + 40), v7, 0x10u);
      *(_QWORD *)(a1 + 40) = v16;
      v8 = *(_QWORD *)(a1 + 48);
    }
    memset(&v16[16 * v8], 0, 16 * (v7 - v8));
    *(_QWORD *)(a1 + 48) = v7;
    v6 = *(_QWORD *)(a1 + 64);
  }
  else if ( v7 < v8 )
  {
    *(_QWORD *)(a1 + 48) = v7;
  }
  v9 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 72) = 0;
  if ( v9 )
    v10 = v6 == 0;
  else
    v10 = 1;
  if ( v10 )
  {
    if ( !v9 )
      goto LABEL_13;
  }
  else if ( !is_mul_ok(v6, v9) )
  {
LABEL_25:
    *(_DWORD *)(a1 + 76) = 0;
    return 0;
  }
  if ( !is_mul_ok(v7, v9) )
    goto LABEL_25;
LABEL_13:
  v11 = *(_QWORD *)(a1 + 8);
  v12 = sub_48C428(*(_QWORD *)(v11 + 472), 0, 1);
  v13 = *(_QWORD *)(v11 + 480);
  v14 = v12 - v13;
  if ( sub_48C428(*(_QWORD *)(v11 + 472), *(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 64) * *(_QWORD *)(a1 + 32) + v13, 0) != -1 )
  {
    for ( i = 0; i != v7; ++i )
    {
      if ( !sub_4265B0(a1, (_QWORD *)(*(_QWORD *)(a1 + 40) + 16 * i)) )
        break;
    }
    sub_48C428(*(_QWORD *)(v11 + 472), v14 + *(_QWORD *)(v11 + 480), 0);
    *(_DWORD *)(a1 + 76) = i;
    if ( (_DWORD)i )
    {
      v4 = *(_DWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 64) += (unsigned int)i;
      if ( (unsigned int)i > v4 )
        goto LABEL_2;
    }
    return 0;
  }
  sub_48C428(*(_QWORD *)(v11 + 472), v14 + *(_QWORD *)(v11 + 480), 0);
  *(_DWORD *)(a1 + 76) = 0;
  return 0;
}
