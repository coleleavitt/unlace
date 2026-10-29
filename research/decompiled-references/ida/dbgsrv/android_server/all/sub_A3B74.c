/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3B74
// Address: 0x00000000000A3B74

//----- (00000000000A3B74) ----------------------------------------------------
__int64 __fastcall sub_A3B74(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // x23
  __int64 **v7; // x24
  __int64 *v8; // x25
  unsigned __int64 v9; // x8
  __int64 *v10; // x22
  __int64 *v11; // x0
  __int64 v12; // x8
  __int64 *v13; // x1

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v6 = *(_QWORD *)(a1 + 88);
  v7 = (__int64 **)(v6 + 16);
  v8 = *(__int64 **)(v6 + 16);
  if ( v8 )
  {
    v7 = (__int64 **)(v6 + 16);
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = v8[4];
        if ( v9 > a2 )
          break;
        if ( v9 >= a2 )
          goto LABEL_11;
        v7 = (__int64 **)(v8 + 1);
        if ( !v8[1] )
          goto LABEL_11;
        v8 = (__int64 *)v8[1];
      }
      if ( !*v8 )
        break;
      v7 = (__int64 **)v8;
      v8 = (__int64 *)*v8;
    }
    v7 = (__int64 **)v8;
    v10 = (__int64 *)*v8;
    if ( !*v8 )
      goto LABEL_12;
  }
  else
  {
    v8 = (__int64 *)(v6 + 16);
LABEL_11:
    v10 = *v7;
    if ( !*v7 )
    {
LABEL_12:
      v11 = (__int64 *)operator new(0x30u);
      v11[4] = a2;
      v11[5] = 0;
      *v11 = 0;
      v11[1] = 0;
      v11[2] = (__int64)v8;
      *v7 = v11;
      v10 = v11;
      v12 = **(_QWORD **)(v6 + 8);
      if ( v12 )
      {
        *(_QWORD *)(v6 + 8) = v12;
        v13 = *v7;
      }
      else
      {
        v13 = v11;
      }
      sub_48ED8(*(__int64 **)(v6 + 16), v13);
      ++*(_QWORD *)(v6 + 24);
    }
  }
  v10[5] = a3;
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88));
}
