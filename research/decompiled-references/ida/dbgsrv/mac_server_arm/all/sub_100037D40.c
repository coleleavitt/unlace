/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100037D40
// Address: 0x0000000100037D40

//----- (0000000100037D40) ----------------------------------------------------
void __fastcall __noreturn sub_100037D40(__int64 a1, __int64 a2, _OWORD *a3, int a4)
{
  void *v7; // x0
  void *v8; // x0
  void *v9; // x0
  __int64 v10; // x21
  __int64 v11; // x22
  __int64 v12; // x8
  int v13; // w9
  bool v14; // zf
  unsigned __int8 *v16; // x8
  __int64 v17; // x9
  __int128 v18; // q0
  __int128 v19; // q1
  __int128 v20; // q2
  unsigned __int8 *v21[3]; // [xsp+8h] [xbp-A8h] BYREF
  char v22[8]; // [xsp+20h] [xbp-90h] BYREF
  __int64 v23; // [xsp+28h] [xbp-88h]
  __int64 v24; // [xsp+30h] [xbp-80h]
  __int64 v25; // [xsp+38h] [xbp-78h]
  unsigned __int8 v26[8]; // [xsp+40h] [xbp-70h] BYREF
  void *v27; // [xsp+48h] [xbp-68h]
  __int64 v28; // [xsp+50h] [xbp-60h]
  __int64 v29; // [xsp+58h] [xbp-58h]

  v22[0] = 2;
  v24 = 0;
  v25 = 0;
  v23 = a4;
  memset(v21, 0, sizeof(v21));
  if ( !a4 )
    goto LABEL_2;
  v26[0] = 2;
  v28 = 0;
  v29 = 0;
  v27 = nullptr;
  sub_100029350(v21, (unsigned __int8 *)a4, v26);
  if ( v26[0] == 5 )
  {
    sub_100031978((__int64)v27, v26);
  }
  else if ( v26[0] == 7 && v27 )
  {
    v28 = 0;
    qfree(v27);
  }
  if ( a4 >= 1 )
  {
    v16 = v21[0];
    v17 = (unsigned int)a4;
    while ( v16 )
    {
      v19 = *(_OWORD *)v16;
      v18 = *((_OWORD *)v16 + 1);
      v20 = a3[1];
      *(_OWORD *)v16 = *a3;
      *((_OWORD *)v16 + 1) = v20;
      v16 += 32;
      *a3 = v19;
      a3[1] = v18;
      a3 += 2;
      if ( !--v17 )
        goto LABEL_2;
    }
    if ( under_debugger != 1 )
      goto LABEL_31;
  }
  else
  {
LABEL_2:
    v7 = *(void **)(a1 + 48);
    if ( v7 )
    {
      *(_QWORD *)(a1 + 56) = 0;
      qfree(v7);
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 64) = 0;
    }
    v8 = *(void **)(a1 + 72);
    if ( v8 )
    {
      *(_QWORD *)(a1 + 80) = 0;
      qfree(v8);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
    v9 = *(void **)(a1 + 24);
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 32);
      if ( v10 )
      {
        v11 = 0;
        do
        {
          sub_100033200((unsigned __int8 *)(*(_QWORD *)(a1 + 24) + v11));
          v11 += 32;
          --v10;
        }
        while ( v10 );
        v9 = *(void **)(a1 + 24);
      }
      *(_QWORD *)(a1 + 32) = 0;
      qfree(v9);
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
    v12 = *(_QWORD *)(a1 + 8);
    v13 = *(_DWORD *)(v12 + 120) - 1;
    *(_DWORD *)(v12 + 120) = v13;
    if ( v13 )
      v14 = 1;
    else
      v14 = off_10009CA18 == nullptr;
    if ( !v14 )
      off_10009CA18();
    *(_DWORD *)a1 = 0;
    (*(void (__fastcall **)(unsigned __int8 *, char *))(a2 + 8))(v21[0], v22);
    if ( under_debugger != 1 )
      interr(291);
  }
  while ( 1 )
  {
    __break(1u);
LABEL_31:
    interr(2657);
  }
}
// 10009CA18: using guessed type __int64 (*off_10009CA18)();
// 10009D90D: using guessed type char under_debugger;
