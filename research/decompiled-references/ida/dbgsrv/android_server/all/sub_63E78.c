/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63E78
// Address: 0x0000000000063E78

//----- (0000000000063E78) ----------------------------------------------------
__int64 __fastcall sub_63E78(__int64 a1, char *a2, int a3)
{
  __int64 result; // x0
  __int64 v7; // x20
  __int64 v8; // x9
  _BYTE *v9; // x0
  _BYTE *v10; // x8
  __int64 v11; // x0
  int *v12; // x1
  char v13; // w2
  signed int v14; // w3
  __int64 v15; // x24
  int v16; // w23
  __int64 v17; // x8
  __int64 v18; // x22
  _BYTE *v19; // x0
  const char **v20; // x0
  unsigned int v21; // w0
  unsigned __int8 v22; // w1
  unsigned __int16 v23; // w2
  __int64 v24; // x0
  int v25; // w0
  __int64 v26; // x8
  _QWORD *v27; // x8
  __int64 v28; // x8
  int v29; // w19
  int v30; // w0
  int v31; // w0
  unsigned __int16 v32; // w22
  _QWORD *v33; // x8
  __int64 v34; // x8
  int v35; // w23
  int v36; // w0
  unsigned __int64 v37; // x8
  _UNKNOWN **v38; // x8
  bool v39; // cc
  __int64 (__fastcall ***v40)(_QWORD, char *); // x0
  __int64 v41; // x0
  unsigned __int64 v42; // x21
  __int64 v43; // x20
  __int64 *v44; // x21
  _BYTE *v45; // x22
  __int64 v46; // x8
  _BYTE *v47; // x0
  unsigned __int64 v48; // x8
  _UNKNOWN **v49; // x8
  int v50; // [xsp+Ch] [xbp-54h] BYREF
  char v51[4]; // [xsp+10h] [xbp-50h] BYREF
  char v52[4]; // [xsp+14h] [xbp-4Ch] BYREF
  __int64 v53; // [xsp+18h] [xbp-48h]

  v53 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_62274((_QWORD *)a1, a2, &v50);
  if ( (unsigned int)(v50 - 1) < 3 )
  {
    result = sub_63A14(a1, a2, 0, 0);
    if ( (_DWORD)result )
      return result;
    v7 = *(_QWORD *)(a1 + 200);
    *(_BYTE *)(a1 + 212) = -92;
    goto LABEL_4;
  }
  if ( v50 != 5 )
  {
    v20 = sub_69D00(a2);
    if ( v20 )
    {
      if ( !*(_BYTE *)(a1 + 452) && (*((_BYTE *)v20 + 36) & 4) == 0 )
      {
        set_error_string(nullptr, *v20);
        v21 = 143;
        return set_qerrno(v21);
      }
      v22 = 0;
      v23 = -13107 * ((unsigned __int64)((char *)v20 - (char *)off_164A30) >> 3);
      v24 = a1;
LABEL_17:
      sub_5EE24(v24, v22, v23);
      return 0;
    }
    v31 = sub_699FC(*(_QWORD **)(a1 + 104), a2);
    v32 = v31;
    if ( v31 == -1 )
    {
      v40 = *(__int64 (__fastcall ****)(_QWORD, char *))(a1 + 416);
      if ( v40 && (v41 = (**v40)(v40, a2), v41 != -1) && (v42 = v41, (get_aflags() & 0x800) != 0) )
      {
        sub_5EF88(a1, v42);
        v45 = (_BYTE *)(a1 + 212);
        v44 = (__int64 *)(a1 + 200);
      }
      else
      {
        sub_5EC14(a1, a2, 0);
        v44 = (__int64 *)(a1 + 200);
        v43 = *(_QWORD *)(a1 + 200);
        *(_BYTE *)(a1 + 212) = -82;
        v45 = (_BYTE *)(a1 + 212);
        v46 = *(_QWORD *)(v43 + 8);
        if ( *(_QWORD *)(v43 + 16) >= (unsigned __int64)(v46 + 1) )
        {
          v47 = *(_BYTE **)v43;
        }
        else
        {
          v47 = qvector_reserve((pthread_mutex_t *)v43, *(void **)v43, v46 + 1, 1u);
          v46 = *(_QWORD *)(v43 + 8);
          *(_QWORD *)v43 = v47;
        }
        v47[v46] = -82;
        ++*(_QWORD *)(v43 + 8);
        ++*(_DWORD *)(a1 + 208);
      }
      *v45 = -92;
      v7 = *v44;
LABEL_4:
      v8 = *(_QWORD *)(v7 + 8);
      if ( *(_QWORD *)(v7 + 16) >= (unsigned __int64)(v8 + 1) )
      {
        v10 = *(_BYTE **)v7;
      }
      else
      {
        v9 = qvector_reserve((pthread_mutex_t *)v7, *(void **)v7, v8 + 1, 1u);
        v8 = *(_QWORD *)(v7 + 8);
        v10 = v9;
        *(_QWORD *)v7 = v9;
      }
      v10[v8] = -92;
      ++*(_QWORD *)(v7 + 8);
      ++*(_DWORD *)(a1 + 208);
      return 0;
    }
    v33 = *(_QWORD **)(a1 + 104);
    v52[0] = 0;
    if ( v31 < 0 )
    {
      v48 = -v31;
      if ( qword_164A28 <= v48 )
        goto LABEL_51;
      v49 = &off_164A30[5 * v48];
      v35 = *((_DWORD *)v49 + 8);
      v36 = sub_6B064((const char *)v49[2], v52);
    }
    else
    {
      if ( v31 == 0x7FFFFFFF || v33[1] <= (unsigned __int64)v31 )
        goto LABEL_51;
      v34 = *(_QWORD *)(*v33 + 8LL * v31);
      v35 = *(_DWORD *)(v34 + 72);
      v36 = *(_DWORD *)(v34 + 24);
    }
    if ( v35 + a3 >= v36 && (v36 >= a3 || v52[0]) )
    {
      v22 = 16;
      v24 = a1;
      v23 = v32;
      goto LABEL_17;
    }
LABEL_51:
    set_error_string(nullptr, a2);
    v21 = 56;
    return set_qerrno(v21);
  }
  v11 = sub_6A3F0(*(_QWORD *)(a1 + 104), a2);
  if ( v11 )
  {
    v15 = *(_QWORD *)(a1 + 200);
    v16 = *(_DWORD *)(v11 + 28);
    *(_BYTE *)(a1 + 212) = -16;
    v17 = *(_QWORD *)(v15 + 8);
    v18 = v11;
    if ( *(_QWORD *)(v15 + 16) >= (unsigned __int64)(v17 + 1) )
    {
      v19 = *(_BYTE **)v15;
    }
    else
    {
      v19 = qvector_reserve((pthread_mutex_t *)v15, *(void **)v15, v17 + 1, 1u);
      v17 = *(_QWORD *)(v15 + 8);
      *(_QWORD *)v15 = v19;
    }
    v19[v17] = -16;
    ++*(_QWORD *)(v15 + 8);
    ++*(_DWORD *)(a1 + 208);
    sub_5EB14(a1, v16);
    while ( 1 )
    {
      v25 = sub_716E8(v18, (_QWORD *)(v18 + 32));
      if ( v25 != -1 )
        break;
      v26 = *(int *)(v18 + 24);
      if ( !(_DWORD)v26 )
      {
        if ( a3 )
          goto LABEL_51;
        return 0;
      }
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8 * v26);
    }
    v27 = *(_QWORD **)(a1 + 104);
    v51[0] = 0;
    if ( v25 < 0 )
    {
      v37 = -v25;
      if ( qword_164A28 <= v37 )
        goto LABEL_51;
      v38 = &off_164A30[5 * v37];
      v29 = *((_DWORD *)v38 + 8);
      v30 = sub_6B064((const char *)v38[2], v51);
    }
    else
    {
      if ( v25 == 0x7FFFFFFF || v27[1] <= (unsigned __int64)v25 )
        goto LABEL_51;
      v28 = *(_QWORD *)(*v27 + 8LL * v25);
      v29 = *(_DWORD *)(v28 + 72);
      v30 = *(_DWORD *)(v28 + 24);
    }
    if ( v29 + a3 + 1 < v30 )
      goto LABEL_51;
    v39 = v30 < a3 + 1;
    result = 0;
    if ( v39 && !v51[0] )
      goto LABEL_51;
  }
  else
  {
    if ( !under_debugger )
      v11 = (__int64)interr(272);
    __break(1u);
    return sub_642D8((pthread_mutex_t *)v11, v12, v13, v14);
  }
  return result;
}
// 642D5: variable 'v12' is possibly undefined
// 642D5: variable 'v13' is possibly undefined
// 642D5: variable 'v14' is possibly undefined
// 164A28: using guessed type __int64 qword_164A28;
// 164A30: using guessed type _UNKNOWN **off_164A30;
// 168DF0: using guessed type char under_debugger;
