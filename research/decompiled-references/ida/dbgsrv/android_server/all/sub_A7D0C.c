/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A7D0C
// Address: 0x00000000000A7D0C

//----- (00000000000A7D0C) ----------------------------------------------------
bool __fastcall sub_A7D0C(pthread_mutex_t *a1, struct sockaddr *sa, socklen_t salen, char a4)
{
  __int64 v7; // x8
  unsigned __int64 v8; // x24
  __int64 v9; // x0
  __int64 v10; // x8
  size_t v11; // x22
  __int64 v12; // x26
  __int64 v13; // x27
  unsigned __int64 v14; // x23
  _BYTE *align; // x0
  __int64 v16; // x8
  unsigned __int64 v17; // x21
  _BYTE *v18; // x0
  __int64 v19; // x0
  __int64 v20; // x8
  size_t v21; // x20
  __int64 v22; // x22
  __int64 v23; // x23
  unsigned __int64 v24; // x21
  _BYTE *v25; // x0
  __int64 v26; // x0
  __int64 v27; // x8
  size_t v28; // x20
  __int64 v29; // x22
  __int64 v30; // x23
  unsigned __int64 v31; // x21
  _BYTE *v32; // x0
  __int64 v33; // x8
  __int64 v34; // x21
  _BYTE *v35; // x0
  __int64 v36; // x8
  unsigned __int64 v37; // x8
  char host[1024]; // [xsp+8h] [xbp-468h] BYREF
  __int64 v40; // [xsp+408h] [xbp-68h]

  v40 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *(&a1->__align + 1);
  if ( v7 )
    v8 = v7 - 1;
  else
    v8 = 0;
  if ( (a4 & 1) != 0 && !getnameinfo(sa, salen, host, 0x400u, nullptr, 0, 4) )
  {
    v9 = __strlen_chk(host, 1024);
    v10 = *(&a1->__align + 1);
    v11 = v9;
    if ( v10 )
      v12 = v10 - 1;
    else
      v12 = 0;
    v13 = v12 + v9;
    v14 = v12 + v9 + 1;
    if ( *(&a1->__align + 2) >= v14 )
    {
      align = (_BYTE *)a1->__align;
    }
    else
    {
      align = qvector_reserve(a1, (void *)a1->__align, v14, 1u);
      a1->__align = (__int64)align;
    }
    *(&a1->__align + 1) = v14;
    align[v13] = 0;
    memmove((void *)(a1->__align + v12), host, v11);
  }
  if ( !getnameinfo(sa, salen, host, 0x400u, nullptr, 0, 2) )
  {
    v16 = *(&a1->__align + 1);
    if ( v16 )
      v17 = v16 - 1;
    else
      v17 = 0;
    if ( v17 <= v8 )
    {
      v19 = __strlen_chk(host, 1024);
      v20 = *(&a1->__align + 1);
      v21 = v19;
      if ( v20 )
        v22 = v20 - 1;
      else
        v22 = 0;
      v23 = v22 + v19;
      v24 = v22 + v19 + 1;
      if ( *(&a1->__align + 2) >= v24 )
      {
        v25 = (_BYTE *)a1->__align;
      }
      else
      {
        v25 = qvector_reserve(a1, (void *)a1->__align, v24, 1u);
        a1->__align = (__int64)v25;
      }
      *(&a1->__align + 1) = v24;
      v25[v23] = 0;
      memmove((void *)(a1->__align + v22), host, v21);
    }
    else
    {
      if ( *(&a1->__align + 2) >= v17 + 2 )
      {
        v18 = (_BYTE *)a1->__align;
      }
      else
      {
        v18 = qvector_reserve(a1, (void *)a1->__align, v17 + 2, 1u);
        a1->__align = (__int64)v18;
      }
      *(&a1->__align + 1) = v17 + 2;
      v18[v17] = 40;
      *(_BYTE *)(a1->__align + v17 + 1) = 0;
      v26 = __strlen_chk(host, 1024);
      v27 = *(&a1->__align + 1);
      v28 = v26;
      if ( v27 )
        v29 = v27 - 1;
      else
        v29 = 0;
      v30 = v29 + v26;
      v31 = v29 + v26 + 1;
      if ( *(&a1->__align + 2) >= v31 )
      {
        v32 = (_BYTE *)a1->__align;
      }
      else
      {
        v32 = qvector_reserve(a1, (void *)a1->__align, v31, 1u);
        a1->__align = (__int64)v32;
      }
      *(&a1->__align + 1) = v31;
      v32[v30] = 0;
      memmove((void *)(a1->__align + v29), host, v28);
      v33 = *(&a1->__align + 1);
      if ( v33 )
        v34 = v33 - 1;
      else
        v34 = 0;
      if ( *(&a1->__align + 2) >= (unsigned __int64)(v34 + 2) )
      {
        v35 = (_BYTE *)a1->__align;
      }
      else
      {
        v35 = qvector_reserve(a1, (void *)a1->__align, v34 + 2, 1u);
        a1->__align = (__int64)v35;
      }
      *(&a1->__align + 1) = v34 + 2;
      v35[v34] = 41;
      *(_BYTE *)(a1->__align + v34 + 1) = 0;
    }
  }
  v36 = *(&a1->__align + 1);
  if ( v36 )
    v37 = v36 - 1;
  else
    v37 = 0;
  return v37 > v8;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
