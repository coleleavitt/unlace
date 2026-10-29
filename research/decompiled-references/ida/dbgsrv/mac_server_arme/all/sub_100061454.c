/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061454
// Address: 0x0000000100061454

//----- (0000000100061454) ----------------------------------------------------
__int64 __fastcall sub_100061454(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // x23
  __int64 *v7; // x8
  __int64 **v8; // x24
  __int64 **v9; // x21
  unsigned __int64 v10; // x8
  __int64 *v11; // x25
  __int64 v12; // x8
  __int64 *v13; // x1
  __int64 (*v14)(void); // x1
  __int64 _48; // [xsp+48h] [xbp+8h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v6 = *(_QWORD *)(a1 + 88);
  v8 = (__int64 **)(v6 + 16);
  v7 = *(__int64 **)(v6 + 16);
  if ( v7 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = (__int64 **)v7;
        v10 = v7[4];
        if ( v10 <= (unsigned __int64)a2 )
          break;
        v7 = *v9;
        v8 = v9;
        if ( !*v9 )
          goto LABEL_8;
      }
      if ( v10 >= (unsigned __int64)a2 )
        break;
      v7 = v9[1];
      if ( !v7 )
      {
        v8 = v9 + 1;
        goto LABEL_8;
      }
    }
  }
  else
  {
    v9 = (__int64 **)(v6 + 16);
LABEL_8:
    v11 = (__int64 *)v9;
    v9 = (__int64 **)operator new(0x30u);
    v9[4] = a2;
    v9[5] = nullptr;
    *v9 = nullptr;
    v9[1] = nullptr;
    v9[2] = v11;
    *v8 = (__int64 *)v9;
    v12 = **(_QWORD **)(v6 + 8);
    v13 = (__int64 *)v9;
    if ( v12 )
    {
      *(_QWORD *)(v6 + 8) = v12;
      v13 = *v8;
    }
    sub_10000BD00(*(__int64 **)(v6 + 16), v13);
    ++*(_QWORD *)(v6 + 24);
  }
  v9[5] = a3;
  v14 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 88) + 24LL);
  if ( ((_48 ^ (2 * _48)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v14();
}
// 10006156C: variable '_48' is possibly undefined
