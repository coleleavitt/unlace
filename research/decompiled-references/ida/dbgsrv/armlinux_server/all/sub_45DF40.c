/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45DF40
// Address: 0x000000000045DF40

//----- (000000000045DF40) ----------------------------------------------------
bool __fastcall sub_45DF40(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  _BOOL8 result; // x0
  unsigned __int64 *v9; // x1
  __int64 v10; // x4
  unsigned __int64 v11; // x20
  unsigned __int64 *v12; // x3
  _QWORD *v13; // x0
  int v14; // w20
  __int64 (*v15)(); // x2
  char *v16; // x0
  char *v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  int (__fastcall *v20)(__int64, __int64, __int64, int *, _QWORD); // x5
  void *v21; // x0
  char *v22; // x0
  __int64 v23; // x1
  unsigned int v24; // w26
  double v25; // d0
  double v26; // d0
  unsigned int v27; // w2
  __int64 (*v28)(); // x3
  char *v29; // x0
  char *v30; // x1
  int v31; // [xsp+58h] [xbp-28h] BYREF
  void *ptr; // [xsp+60h] [xbp-20h]
  __int64 v33; // [xsp+68h] [xbp-18h]
  __int64 v34; // [xsp+70h] [xbp-10h]

  if ( (*(_QWORD *)(a1 + 800) & 0x10) != 0
    && (*((_DWORD *)a2 + 8) == 4 || a1 + 616 == sub_45DE48((_QWORD *)a1, *a2, *((_DWORD *)a2 + 107))) )
  {
    goto LABEL_3;
  }
  v9 = *(unsigned __int64 **)(a1 + 432);
  v10 = *(_QWORD *)(a1 + 440);
  v11 = *a2;
  v12 = &v9[v10];
  if ( v9 != v12 )
  {
    if ( *v9 == v11 )
    {
LABEL_24:
      if ( under_debugger )
        __break(0x3E8u);
      sub_492270(616);
    }
    v13 = *(_QWORD **)(a1 + 432);
    while ( v12 != ++v13 )
    {
      if ( *v13 == v11 )
        goto LABEL_24;
    }
  }
  if ( (unsigned __int64)(v10 + 1) > *(_QWORD *)(a1 + 448) )
  {
    v22 = (char *)sub_491288(a1 + 432, v9, v10 + 1, 8u);
    *(_QWORD *)(a1 + 432) = v22;
    v12 = (unsigned __int64 *)&v22[8 * *(_QWORD *)(a1 + 440)];
  }
  *v12 = v11;
  ++*(_QWORD *)(a1 + 440);
  if ( (a4 & 1) == 0 )
  {
    v18 = *(unsigned int *)(a1 + 784);
    v19 = *(unsigned int *)(a3 + 4);
    v20 = *(int (__fastcall **)(__int64, __int64, __int64, int *, _QWORD))(*(_QWORD *)a1 + 232LL);
    v21 = (void *)*a2;
    v31 = -2;
    ptr = v21;
    v33 = 0;
    v34 = 0;
    if ( v20(a1, v19, v18, &v31, 0) <= 0 )
    {
      v29 = *(char **)(a1 + 432);
      v30 = &v29[8 * *(_QWORD *)(a1 + 440)];
      if ( v29 != v30 )
      {
        if ( *(_QWORD *)v29 == *a2 )
        {
LABEL_55:
          memmove(v29, v29 + 8, ((v30 - v29) & 0xFFFFFFFFFFFFFFF8LL) - 8);
          --*(_QWORD *)(a1 + 440);
        }
        else
        {
          while ( 1 )
          {
            v29 += 8;
            if ( v30 == v29 )
              break;
            if ( *(_QWORD *)v29 == *a2 )
              goto LABEL_55;
          }
        }
      }
      if ( v31 >= -1 && ptr )
      {
        v33 = 0;
        j__free(ptr);
      }
      return 0;
    }
    if ( v31 >= -1 && ptr )
    {
      v33 = 0;
      j__free(ptr);
    }
  }
  v14 = 0;
  v15 = *(__int64 (**)())(*(_QWORD *)a1 + 8LL);
  if ( v15 != sub_4070F0 )
  {
    v14 = ((__int64 (__fastcall *)(__int64, _QWORD))v15)(a1, *(unsigned int *)(a3 + 4));
    if ( v14 > 0 )
    {
      v23 = *((unsigned int *)a2 + 8);
      if ( (_DWORD)v23 == 4 )
        v24 = *((_DWORD *)a2 + 12);
      else
        v24 = *((_DWORD *)a2 + 107);
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 320LL))(
              a1,
              v23,
              *a2,
              a2[5],
              v24);
      if ( v14 > 0 )
      {
        if ( (**(int (__fastcall ***)(__int64, __int64, __int64))a1)(a1, a3, (__int64)(a2 + 8)) <= 0 )
        {
          v14 = 0;
          sub_40AAF0(a1, (__int64)"%a: failed to single step\n", v25);
        }
        if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 312LL))(
               a1,
               0,
               *((unsigned int *)a2 + 8),
               *a2,
               v24) <= 0 )
        {
          v14 = 0;
          sub_40AB98(a1, (__int64)"%a: could not restore deleted bpt\n", v26);
        }
      }
      v27 = *(_DWORD *)(a3 + 4);
      v28 = *(__int64 (**)())(*(_QWORD *)a1 + 16LL);
      if ( v28 != sub_4070F8 )
      {
        if ( ((int (__fastcall *)(__int64, _QWORD))v28)(a1, v27) > 0 )
        {
          v16 = *(char **)(a1 + 432);
          v17 = &v16[8 * *(_QWORD *)(a1 + 440)];
          if ( v16 == v17 )
            goto LABEL_21;
          goto LABEL_17;
        }
        v27 = *(_DWORD *)(a3 + 4);
      }
      v14 = 0;
      sub_40AB98(a1, (__int64)"%d: could not resume suspended threads\n", v27);
    }
  }
  v16 = *(char **)(a1 + 432);
  v17 = &v16[8 * *(_QWORD *)(a1 + 440)];
  if ( v17 == v16 )
    return 0;
LABEL_17:
  if ( *(_QWORD *)v16 == *a2 )
  {
LABEL_27:
    memmove(v16, v16 + 8, ((v17 - v16) & 0xFFFFFFFFFFFFFFF8LL) - 8);
    --*(_QWORD *)(a1 + 440);
  }
  else
  {
    while ( 1 )
    {
      v16 += 8;
      if ( v16 == v17 )
        break;
      if ( *(_QWORD *)v16 == *a2 )
        goto LABEL_27;
    }
  }
LABEL_21:
  if ( v14 <= 0 || (*(_DWORD *)(a3 + 20) & 0xFFFFFFF) != 6 )
    return 0;
LABEL_3:
  result = 1;
  if ( (a4 & 2) == 0 )
    return (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, a3) > 0;
  return result;
}
// 45DF40: could not find valid save-restore pair for x26
// 45E330: variable 'v25' is possibly undefined
// 45E314: variable 'v26' is possibly undefined
// 52451C: using guessed type char under_debugger;
