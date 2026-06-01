/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44DA00
// Address: 0x000000000044DA00

//----- (000000000044DA00) ----------------------------------------------------
__int64 __fastcall sub_44DA00(__int64 *a1, __int64 a2, char *a3, unsigned __int8 a4)
{
  int v6; // w25
  __int64 v7; // x0
  unsigned int v8; // w20
  __int64 *v10; // x24
  __int64 *v11; // x0
  __int64 v12; // x20
  size_t v13; // x0
  size_t v14; // x26
  size_t v15; // x24
  _QWORD *v16; // x24
  int v17; // w22
  pthread_mutex_t *v18; // x0
  __int64 v19; // x0
  __int64 v20; // x26
  size_t v21; // x24
  int v22; // w24
  pthread_mutex_t *v23; // x0
  size_t v24; // x22
  __int64 v25; // x0
  const char *v26; // x2
  char *v27; // x1
  __int64 *v28; // [xsp+58h] [xbp-E8h] BYREF
  void *v29; // [xsp+68h] [xbp-D8h] BYREF
  size_t v30; // [xsp+70h] [xbp-D0h]
  __int64 v31; // [xsp+78h] [xbp-C8h]
  void *ptr; // [xsp+80h] [xbp-C0h] BYREF
  size_t v33; // [xsp+88h] [xbp-B8h]
  __int64 v34; // [xsp+90h] [xbp-B0h]
  __int64 v35; // [xsp+118h] [xbp-28h] BYREF
  __int64 v36; // [xsp+120h] [xbp-20h]
  __int64 v37; // [xsp+128h] [xbp-18h]
  __int64 v38; // [xsp+130h] [xbp-10h]

  v6 = a4;
  v28 = a1;
  sub_494720((pthread_mutex_t *)qword_522288);
  v7 = sub_43CF60();
  if ( !a2 )
  {
    v10 = (__int64 *)v7;
    v11 = (__int64 *)sub_43E198(a3);
    if ( v11 )
    {
      if ( v28 )
      {
        LOBYTE(v35) = 2;
        v36 = 0;
        v37 = 0;
        v38 = 0;
        sub_4488B8(&v35, v11);
        sub_444078((unsigned __int64)v28, &v35);
        sub_448310(&v35);
LABEL_9:
        v8 = 0;
        sub_494760((pthread_mutex_t *)qword_522288);
        return v8;
      }
    }
    else
    {
      v17 = sub_43E818(v10, a3);
      if ( v17 == 0x7FFFFFFF )
      {
        sub_486A58(0, a3);
        v8 = 1538;
        sub_494760((pthread_mutex_t *)qword_522288);
        goto LABEL_4;
      }
      if ( v28 )
      {
        sub_448310(v28);
        v8 = 0;
        *(_BYTE *)v28 = 6;
        v18 = (pthread_mutex_t *)qword_522288;
        *((_DWORD *)v28 + 2) = v17;
        sub_494760(v18);
        return v8;
      }
    }
    v8 = 0;
    sub_494760((pthread_mutex_t *)qword_522288);
    return v8;
  }
  if ( *(_BYTE *)a2 != 5 )
  {
    v8 = 1532;
    sub_494760((pthread_mutex_t *)qword_522288);
LABEL_4:
    sub_4869C8(v8);
    return v8;
  }
  ptr = nullptr;
  v33 = 0;
  v34 = 0;
  v12 = *(_QWORD *)(a2 + 8);
  if ( a3 )
  {
    v13 = strlen(a3);
    v14 = v13 + 1;
    v15 = v13;
    ptr = sub_491288((__int64)&ptr, nullptr, v13 + 1, 1u);
    v33 = v14;
    memmove(ptr, a3, v15);
    *((_BYTE *)ptr + v15) = 0;
  }
  v16 = sub_444D08(v12, (const char **)&ptr);
  if ( ptr )
  {
    v33 = 0;
    j__free(ptr);
  }
  if ( v16 != (_QWORD *)(v12 + 8) )
  {
    if ( v28 )
    {
      LOBYTE(v35) = 2;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      sub_4488B8(&v35, v16 + 7);
      sub_444078((unsigned __int64)v28, &v35);
      sub_448310(&v35);
    }
    goto LABEL_9;
  }
  v19 = sub_43E578(*(int *)(v12 + 52));
  ptr = nullptr;
  v33 = 0;
  v34 = 0;
  v20 = v19;
  if ( a3 )
  {
    v21 = strlen(a3);
    ptr = sub_491288((__int64)&ptr, nullptr, v21 + 1, 1u);
    v33 = v21 + 1;
    memmove(ptr, a3, v21);
    *((_BYTE *)ptr + v21) = 0;
  }
  v22 = sub_444508(v20, (__int64)&ptr);
  if ( ptr )
  {
    v33 = 0;
    j__free(ptr);
  }
  if ( v22 != -1 )
  {
    if ( v28 )
    {
      sub_448310(v28);
      v8 = 0;
      *(_BYTE *)v28 = 6;
      v23 = (pthread_mutex_t *)qword_522288;
      *((_DWORD *)v28 + 2) = v22;
      sub_494760(v23);
      return v8;
    }
    goto LABEL_9;
  }
  sub_494760((pthread_mutex_t *)qword_522288);
  if ( v6 )
  {
    v29 = nullptr;
    v30 = 0;
    v31 = 0;
    if ( a3 )
    {
      v24 = strlen(a3);
      v29 = sub_491288((__int64)&v29, nullptr, v24 + 1, 1u);
      v30 = v24 + 1;
      memmove(v29, a3, v24);
      *((_BYTE *)v29 + v24) = 0;
    }
    sub_448768((__int64)&ptr, 0, 1u);
    if ( (unsigned __int8)sub_44D888(&ptr, v12, (const char **)&v29, &v28) )
    {
      sub_44A7D8((__int64)&ptr);
      if ( v29 )
      {
        v30 = 0;
        j__free(v29);
      }
      return 0;
    }
    sub_44A7D8((__int64)&ptr);
    if ( v29 )
    {
      v30 = 0;
      j__free(v29);
    }
  }
  ptr = nullptr;
  v33 = 0;
  v34 = 0;
  v25 = sub_43E578(*(int *)(v12 + 52));
  if ( *(_QWORD *)(v25 + 64) )
    v26 = *(const char **)(v25 + 56);
  else
    v26 = (const char *)&qword_4B2D48;
  sub_40CD68((__int64)&ptr, "%s.%s", v26, a3);
  v27 = (char *)&qword_4B2D48;
  if ( v33 )
    v27 = (char *)ptr;
  sub_486A58(0, v27);
  v8 = sub_4869C8(1538);
  if ( ptr )
  {
    v33 = 0;
    j__free(ptr);
  }
  return v8;
}
// 44DA00: could not find valid save-restore pair for x24
// 44DA00: could not find valid save-restore pair for x26
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 522288: using guessed type __int64 qword_522288;
