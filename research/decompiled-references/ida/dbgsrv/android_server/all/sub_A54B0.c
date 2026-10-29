/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A54B0
// Address: 0x00000000000A54B0

//----- (00000000000A54B0) ----------------------------------------------------
void __fastcall sub_A54B0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  void **v6; // x22
  unsigned __int64 v7; // x2
  unsigned __int64 v8; // x25
  unsigned __int8 *v9; // x27
  __int64 **v10; // x24
  int v11; // w28
  __int64 **v12; // x29
  int v13; // w8
  _DWORD *v14; // x1
  __int128 v15; // q0
  __int64 v16; // x8
  char *v17; // x0
  __int128 v18; // q0
  char *v19; // x8
  __int64 **v20; // [xsp+8h] [xbp-98h] BYREF
  __int64 **v21; // [xsp+10h] [xbp-90h] BYREF
  __int64 v22; // [xsp+18h] [xbp-88h]
  __int128 v23; // [xsp+20h] [xbp-80h]
  __int64 v24; // [xsp+30h] [xbp-70h]
  __int64 v25; // [xsp+38h] [xbp-68h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v21 = nullptr;
  v22 = 0;
  v20 = (__int64 **)&v21;
  v6 = (void **)(a1 + 72);
  v7 = *(_QWORD *)(a1 + 80) + a3;
  if ( *(_QWORD *)(a1 + 88) < v7 )
    *v6 = qvector_reserve((pthread_mutex_t *)(a1 + 72), *v6, v7, 0x18u);
  if ( a3 )
  {
    v8 = 0;
    while ( *(_QWORD *)(a2 + 24 * v8 + 8) )
    {
      v9 = (unsigned __int8 *)(a2 + 24 * v8);
      v10 = v21;
      v11 = *v9;
      if ( v21 )
      {
        v12 = (__int64 **)&v21;
        while ( 1 )
        {
          while ( 1 )
          {
            v13 = *((_DWORD *)v10 + 7);
            if ( v13 > v11 )
              break;
            if ( v13 >= v11 )
              goto LABEL_16;
            v12 = v10 + 1;
            if ( !v10[1] )
              goto LABEL_16;
            v10 = (__int64 **)v10[1];
          }
          if ( !*v10 )
            break;
          v12 = v10;
          v10 = (__int64 **)*v10;
        }
        v12 = v10;
        if ( *v10 )
        {
LABEL_25:
          if ( !under_debugger )
          {
            interr(1620);
            goto LABEL_27;
          }
LABEL_30:
          __break(1u);
        }
      }
      else
      {
        v10 = (__int64 **)&v21;
        v12 = (__int64 **)&v21;
LABEL_16:
        if ( *v12 )
          goto LABEL_25;
      }
      v14 = operator new(0x20u);
      v14[7] = v11;
      *(_QWORD *)v14 = 0;
      *((_QWORD *)v14 + 1) = 0;
      *((_QWORD *)v14 + 2) = v10;
      *v12 = (__int64 *)v14;
      if ( *v20 )
      {
        v20 = (__int64 **)*v20;
        v14 = *v12;
      }
      sub_48ED8((__int64 *)v21, (__int64 *)v14);
      ++v22;
      v15 = *(_OWORD *)v9;
      v24 = *((_QWORD *)v9 + 2);
      v23 = v15;
      v16 = *(_QWORD *)(a1 + 80);
      if ( *(_QWORD *)(a1 + 88) >= (unsigned __int64)(v16 + 1) )
      {
        v17 = (char *)*v6;
      }
      else
      {
        v17 = (char *)qvector_reserve((pthread_mutex_t *)v6, *v6, v16 + 1, 0x18u);
        v16 = *(_QWORD *)(a1 + 80);
        *(_QWORD *)(a1 + 72) = v17;
      }
      v18 = v23;
      v19 = &v17[24 * v16];
      ++v8;
      *((_QWORD *)v19 + 2) = v24;
      *(_OWORD *)v19 = v18;
      ++*(_QWORD *)(a1 + 80);
      if ( v8 >= a3 )
        goto LABEL_27;
    }
    if ( !under_debugger )
      interr(1619);
    goto LABEL_30;
  }
LABEL_27:
  sub_A63D0((__int64)&v20, v21);
}
// 168DF0: using guessed type char under_debugger;
