/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74D5C
// Address: 0x0000000000074D5C

//----- (0000000000074D5C) ----------------------------------------------------
void __fastcall __noreturn sub_74D5C(__int64 a1, __int64 a2, __int128 *a3, int a4)
{
  __int128 *v8; // x8
  __int64 v9; // x9
  __int128 v10; // q0
  __int128 v11; // q1
  __int128 v12; // q1
  void *v13; // x0
  void *v14; // x0
  char *v15; // x0
  unsigned __int64 v16; // x21
  __int64 v17; // x22
  unsigned __int64 i; // x23
  __int64 v19; // x8
  int v20; // w9
  pthread_mutex_t *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  char *v29; // x8
  __int64 *p_align; // x19
  unsigned __int64 v31; // x20
  __int64 v32; // x21
  unsigned __int64 j; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  char v41; // [xsp+30h] [xbp-90h]
  void *ptr; // [xsp+38h] [xbp-88h] BYREF
  unsigned __int64 v43; // [xsp+40h] [xbp-80h]
  __int64 v44; // [xsp+48h] [xbp-78h]
  __int64 v45; // [xsp+50h] [xbp-70h] BYREF
  void *v46; // [xsp+58h] [xbp-68h]
  __int64 v47; // [xsp+60h] [xbp-60h]
  __int64 v48; // [xsp+68h] [xbp-58h]
  __int128 v49; // [xsp+70h] [xbp-50h]
  __int128 v50; // [xsp+80h] [xbp-40h]

  ptr = nullptr;
  v43 = 0;
  LOBYTE(v45) = 2;
  v47 = 0;
  v48 = 0;
  v46 = (void *)a4;
  v44 = 0;
  sub_72FB4((__int64)&ptr, a4);
  if ( a4 >= 1 )
  {
    v8 = (__int128 *)ptr;
    v9 = (unsigned int)a4;
    do
    {
      v10 = v8[1];
      --v9;
      v49 = *v8;
      v50 = v10;
      v11 = a3[1];
      *v8 = *a3;
      v8[1] = v11;
      v8 += 2;
      v12 = v50;
      *a3 = v49;
      a3[1] = v12;
      a3 += 2;
    }
    while ( v9 );
  }
  v13 = *(void **)(a1 + 48);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v13);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v14 = *(void **)(a1 + 72);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v14);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  v15 = *(char **)(a1 + 24);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a1 + 32);
    if ( v16 )
    {
      v17 = 0;
      for ( i = 1; ; ++i )
      {
        free_idcv((__int64 *)&v15[v17]);
        if ( i >= v16 )
          break;
        v15 = *(char **)(a1 + 24);
        v17 += 32;
      }
      v15 = *(char **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v15);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v19 = *(_QWORD *)(a1 + 8);
  v20 = *(_DWORD *)(v19 + 120) - 1;
  *(_DWORD *)(v19 + 120) = v20;
  if ( !v20 && off_164A40 )
    off_164A40();
  *(_DWORD *)a1 = 0;
  v21 = (pthread_mutex_t *)(*(__int64 (__fastcall **)(void *, __int64 *))(a2 + 8))(ptr, &v45);
  if ( !under_debugger )
    v21 = interr(291);
  __break(1u);
  v29 = (char *)ptr;
  p_align = &v21->__align;
  if ( ptr )
  {
    v31 = v43;
    if ( v43 )
    {
      v32 = 0;
      for ( j = 1; ; ++j )
      {
        free_idcv((__int64 *)&v29[v32]);
        if ( j >= v31 )
          break;
        v29 = (char *)ptr;
        v32 += 32;
      }
      v29 = (char *)ptr;
    }
    v43 = 0;
    qfree(v29);
    ptr = nullptr;
    v44 = 0;
  }
  if ( (unsigned __int8)v45 == 5 )
  {
    sub_6F17C((__int64)v46, (unsigned __int8 *)&v45);
  }
  else if ( (unsigned __int8)v45 == 7 )
  {
    if ( v46 )
    {
      v47 = 0;
      qfree(v46);
      v46 = nullptr;
      v48 = 0;
      Unwind_Resume(p_align, v34, v35, v36, v37, v38, v39, v40, v41);
    }
  }
  Unwind_Resume(p_align, v22, v23, v24, v25, v26, v27, v28, v41);
}
// 74F28: variable 'v34' is possibly undefined
// 74F28: variable 'v35' is possibly undefined
// 74F28: variable 'v36' is possibly undefined
// 74F28: variable 'v37' is possibly undefined
// 74F28: variable 'v38' is possibly undefined
// 74F28: variable 'v39' is possibly undefined
// 74F28: variable 'v40' is possibly undefined
// 74F28: variable 'v41' is possibly undefined
// 74F3C: variable 'v22' is possibly undefined
// 74F3C: variable 'v23' is possibly undefined
// 74F3C: variable 'v24' is possibly undefined
// 74F3C: variable 'v25' is possibly undefined
// 74F3C: variable 'v26' is possibly undefined
// 74F3C: variable 'v27' is possibly undefined
// 74F3C: variable 'v28' is possibly undefined
// 164A40: using guessed type __int64 (*off_164A40)();
// 168DF0: using guessed type char under_debugger;
