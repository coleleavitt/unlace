/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: build_plugin_options
// Address: 0x00000000000AF254

//----- (00000000000AF254) ----------------------------------------------------
void __fastcall build_plugin_options(__int128 *a1, _QWORD *a2, const char *a3)
{
  _QWORD *v5; // x0
  __int64 v6; // x25
  __int64 *v7; // x27
  __int64 v8; // x29
  void *v9; // x0
  __int64 align; // x21
  __int64 v11; // x20
  __int64 v12; // x8
  size_t v13; // x22
  __int64 v14; // x24
  _QWORD *v15; // x24
  __int64 v16; // t1
  void *v17; // x1
  __int64 v18; // x10
  __int64 v19; // x19
  __int64 v20; // x23
  __int64 v21; // x23
  _QWORD *v22; // x23
  __int64 v23; // t1
  __int64 v24; // x9
  void *v25; // x1
  __int64 v26; // x19
  __int64 v27; // x8
  size_t v28; // x21
  void *v29; // x1
  __int64 v30; // x19
  __int64 v31; // x22
  __int128 v32; // q1
  __int64 v33; // x9
  char *v34; // x0
  unsigned __int64 v35; // x19
  __int64 v36; // x20
  unsigned __int64 v37; // x21
  void *v38; // x8
  char *v39; // x22
  __int128 v41; // [xsp+10h] [xbp-A0h] BYREF
  __int64 v42; // [xsp+20h] [xbp-90h]
  pthread_mutex_t ptr; // [xsp+30h] [xbp-80h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  memset(&ptr, 0, 24);
  if ( a3 )
  {
    ptr.__align = (__int64)qvector_reserve(&ptr, nullptr, 1u, 0x18u);
    v5 = (_QWORD *)(ptr.__align + 24 * *(&ptr.__align + 1));
    v5[1] = 0;
    v5[2] = 0;
    *v5 = 0;
    ++*(&ptr.__align + 1);
    sub_3C748((__int64)v5, "-O%s", a3);
  }
  v6 = 48LL * a2[1];
  if ( v6 )
  {
    v7 = (__int64 *)(*a2 + 32LL);
    do
    {
      v8 = *(&ptr.__align + 1);
      if ( *(&ptr.__align + 2) >= (unsigned __int64)(*(&ptr.__align + 1) + 1) )
      {
        align = ptr.__align;
      }
      else
      {
        v9 = qvector_reserve(&ptr, (void *)ptr.__align, *(&ptr.__align + 1) + 1, 0x18u);
        v8 = *(&ptr.__align + 1);
        align = (__int64)v9;
        ptr.__align = (__int64)v9;
      }
      v11 = align + 24 * v8;
      *(_QWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)v11 = 0;
      ++*(&ptr.__align + 1);
      v12 = *(v7 - 3);
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v12 != 1 )
        {
          v14 = align + 24 * v8;
          v16 = *(_QWORD *)(v14 + 8);
          v15 = (_QWORD *)(v14 + 8);
          v17 = *(void **)v11;
          v18 = v16 - 1;
          if ( v16 )
            v19 = v18;
          else
            v19 = 0;
          v20 = v19 + v12;
          if ( v15[1] < (unsigned __int64)(v19 + v12) )
          {
            v17 = qvector_reserve((pthread_mutex_t *)(align + 24 * v8), v17, v19 + v12, 1u);
            *(_QWORD *)v11 = v17;
          }
          *v15 = v20;
          *((_BYTE *)v17 + v19 + v13) = 0;
          memcpy((void *)(*(_QWORD *)v11 + v19), (const void *)*(v7 - 4), v13);
        }
      }
      if ( (unsigned __int64)*v7 >= 2 )
      {
        v21 = align + 24 * v8;
        v23 = *(_QWORD *)(v21 + 8);
        v22 = (_QWORD *)(v21 + 8);
        v24 = v23 - 1;
        v25 = *(void **)v11;
        if ( v23 )
          v26 = v24;
        else
          v26 = 0;
        if ( v22[1] < (unsigned __int64)(v26 + 2) )
        {
          v25 = qvector_reserve((pthread_mutex_t *)v11, v25, v26 + 2, 1u);
          *(_QWORD *)v11 = v25;
        }
        *v22 = v26 + 2;
        *((_BYTE *)v25 + v26) = 61;
        *(_BYTE *)(*(_QWORD *)v11 + v26 + 1) = 0;
        v27 = *v7;
        if ( *v7 )
        {
          v28 = v27 - 1;
          if ( v27 != 1 )
          {
            v29 = *(void **)v11;
            if ( *v22 )
              v30 = *v22 - 1LL;
            else
              v30 = 0;
            v31 = v30 + v27;
            if ( v22[1] < (unsigned __int64)(v30 + v27) )
            {
              v29 = qvector_reserve((pthread_mutex_t *)v11, v29, v30 + v27, 1u);
              *(_QWORD *)v11 = v29;
            }
            *v22 = v31;
            *((_BYTE *)v29 + v30 + v28) = 0;
            memcpy((void *)(*(_QWORD *)v11 + v30), (const void *)*(v7 - 1), v28);
          }
        }
      }
      v6 -= 48;
      v7 += 6;
    }
    while ( v6 );
  }
  sub_AF624(":", (__int64)&ptr, (__int64)&v41);
  v32 = *a1;
  *a1 = v41;
  v33 = *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 2) = v42;
  v41 = v32;
  v42 = v33;
  if ( (_QWORD)v32 )
  {
    *((_QWORD *)&v41 + 1) = 0;
    qfree((void *)v32);
    *(_QWORD *)&v41 = 0;
    v42 = 0;
  }
  v34 = (char *)ptr.__align;
  if ( ptr.__align )
  {
    v35 = *(&ptr.__align + 1);
    if ( *(&ptr.__align + 1) )
    {
      v36 = 0;
      v37 = 1;
      v38 = *(void **)ptr.__align;
      if ( *(_QWORD *)ptr.__align )
        goto LABEL_38;
      while ( v37 < v35 )
      {
        v34 = (char *)ptr.__align;
        ++v37;
        v36 += 24;
        v38 = *(void **)(ptr.__align + v36);
        if ( v38 )
        {
LABEL_38:
          v39 = &v34[v36];
          *(_QWORD *)&v34[v36 + 8] = 0;
          qfree(v38);
          *(_QWORD *)v39 = 0;
          *((_QWORD *)v39 + 2) = 0;
        }
      }
      v34 = (char *)ptr.__align;
    }
    *(&ptr.__align + 1) = 0;
    qfree(v34);
  }
}
