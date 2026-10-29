/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9C694
// Address: 0x000000000009C694

//----- (000000000009C694) ----------------------------------------------------
__int64 __fastcall sub_9C694(_QWORD *a1, _DWORD *a2, __int64 *a3, int a4, int a5)
{
  char *v10; // x24
  unsigned __int64 v11; // x26
  __int64 v12; // x27
  unsigned __int64 i; // x28
  char *v14; // x29
  void *v15; // x0
  __int64 v16; // x8
  __int64 *v17; // x28
  int v18; // w26
  int v19; // w8
  __int64 v20; // x9
  __int64 v21; // x11
  __int64 v22; // x9
  __int64 v23; // x11
  _DWORD *v24; // x24
  __int64 v25; // x8
  void *v26; // x0
  int v27; // w24
  double v28; // d0
  char v29; // w8
  __int64 *j; // x27
  __int64 v31; // x1
  __int64 v32; // x4
  int v33; // w24
  double v34; // d0
  int v35; // w8
  __int64 v37; // [xsp+8h] [xbp-78h] BYREF
  unsigned int v38; // [xsp+14h] [xbp-6Ch] BYREF
  __int64 v39; // [xsp+18h] [xbp-68h]

  v39 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a1[20] )
  {
    v10 = (char *)a1[57];
    if ( v10 )
    {
      v11 = a1[58];
      if ( v11 )
      {
        v12 = 0;
        for ( i = 1; ; ++i )
        {
          v14 = &v10[v12];
          v15 = *(void **)&v10[v12 + 8];
          if ( v15 )
          {
            *((_QWORD *)v14 + 2) = 0;
            qfree(v15);
            *((_QWORD *)v14 + 1) = 0;
            *(_QWORD *)&v10[v12 + 24] = 0;
          }
          if ( i >= v11 )
            break;
          v10 = (char *)a1[57];
          v12 += 56;
        }
        v10 = (char *)a1[57];
      }
      a1[58] = 0;
      qfree(v10);
      a1[57] = 0;
      a1[59] = 0;
    }
  }
  v16 = 7LL * a4;
  v17 = &a3[v16];
  v18 = 0;
  if ( v16 * 8 )
  {
    while ( *((_BYTE *)a3 + 40) )
    {
LABEL_39:
      a3 += 7;
      if ( a3 == v17 )
      {
        a3 = v17;
        goto LABEL_41;
      }
    }
    v19 = *((_DWORD *)a3 + 8);
    if ( v19 == 4 )
      v20 = a1[52];
    else
      LODWORD(v20) = *((_DWORD *)a3 + 9);
    v38 = v20;
    v37 = *a3;
    if ( v19 == 4 )
      (*(void (__fastcall **)(_QWORD *, __int64 *, unsigned int *))(*a1 + 544LL))(a1, &v37, &v38);
    v21 = a1[58];
    v22 = 56 * v21;
    if ( 56 * v21 )
    {
      v23 = 56 * v21;
      v24 = (_DWORD *)a1[57];
      while ( *a3 != *(_QWORD *)v24 || *((_DWORD *)a3 + 8) != v24[8] )
      {
        v23 -= 56;
        v24 += 14;
        if ( !v23 )
          goto LABEL_30;
      }
    }
    else
    {
      v24 = (_DWORD *)a1[57];
    }
    v25 = a1[57] + v22;
    if ( v24 != (_DWORD *)v25 && v24[12] == *((_DWORD *)a3 + 12) )
    {
      v26 = *((void **)v24 + 1);
      if ( v26 )
      {
        *((_QWORD *)v24 + 2) = 0;
        qfree(v26);
        *((_QWORD *)v24 + 1) = 0;
        *((_QWORD *)v24 + 3) = 0;
        v25 = a1[57] + 56LL * a1[58];
      }
      memmove(v24, v24 + 14, -56LL - (_QWORD)v24 + v25);
      --a1[58];
    }
LABEL_30:
    v27 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, _QWORD))(*a1 + 312LL))(
            a1,
            a3 + 1,
            *((unsigned int *)a3 + 8),
            v37,
            v38);
    sub_99D18((__int64)a1, "dbg_add_bpt(type=%d, ea=%a, len=%d) => %d\n", *((_DWORD *)a3 + 8), v28, v37, v38);
    if ( v27 == -2 )
    {
      v29 = 7;
    }
    else
    {
      if ( v27 == 2 )
      {
        v29 = 10;
      }
      else
      {
        if ( v27 != 1 )
        {
          v29 = 8;
          goto LABEL_38;
        }
        v29 = 0;
      }
      ++v18;
    }
LABEL_38:
    *((_BYTE *)a3 + 40) = v29;
    goto LABEL_39;
  }
LABEL_41:
  for ( j = &v17[7 * a5]; j != a3; a3 += 7 )
  {
    v31 = *((unsigned int *)a3 + 8);
    *((_BYTE *)a3 + 40) = 0;
    if ( (_DWORD)v31 == 4 )
      v32 = a3[2];
    else
      v32 = *((int *)a3 + 9);
    v33 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(*a1 + 320LL))(
            a1,
            v31,
            *a3,
            a3[1],
            v32);
    sub_99D18((__int64)a1, "dbg_del_bpt(type=%d, ea=%a) => %d\n", *((_DWORD *)a3 + 8), v34, *a3);
    if ( v33 < 1 )
    {
      *((_BYTE *)a3 + 40) = 8;
    }
    else
    {
      v35 = *((_DWORD *)a3 + 8);
      ++v18;
      if ( v35 == 8 || v35 == 4 )
        sub_9C9D4((pthread_mutex_t *)(a1 + 57), a3);
    }
  }
  if ( a2 )
    *a2 = v18;
  return 1;
}
// 9C894: variable 'v28' is possibly undefined
// 9C948: variable 'v34' is possibly undefined
