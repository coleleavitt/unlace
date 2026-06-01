/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000AE14
// Address: 0x000000010000AE14

//----- (000000010000AE14) ----------------------------------------------------
void __fastcall sub_10000AE14(__int64 a1, void *a2, unsigned int a3, char *__s, __int64 a5)
{
  size_t v10; // x23
  void *v11; // x0
  size_t v12; // x23
  size_t v13; // x23
  __int64 **v14; // x20
  size_t v15; // x19
  size_t v16; // x19
  char *v17; // x9
  char **v18; // x23
  char **v19; // x22
  unsigned __int64 v20; // x9
  char *v21; // x1
  void *v22; // x9
  void *v23; // x8
  __int64 v24; // x9
  __int64 *v25; // x8
  void *__src; // [xsp+0h] [xbp-D0h] BYREF
  __int128 v27; // [xsp+8h] [xbp-C8h]
  void *v28; // [xsp+18h] [xbp-B8h]
  __int128 v29; // [xsp+20h] [xbp-B0h]
  void *v30; // [xsp+30h] [xbp-A0h]
  __int128 v31; // [xsp+38h] [xbp-98h]
  __int128 v32; // [xsp+48h] [xbp-88h]
  void *v33; // [xsp+58h] [xbp-78h]
  size_t v34; // [xsp+60h] [xbp-70h]
  size_t v35; // [xsp+68h] [xbp-68h]
  void *v36; // [xsp+70h] [xbp-60h]
  size_t v37; // [xsp+78h] [xbp-58h]
  size_t v38; // [xsp+80h] [xbp-50h]

  if ( *(void **)(*(_QWORD *)(a1 + 16) + 1768LL) != a2 )
  {
    __src = nullptr;
    v27 = 0u;
    if ( __s )
    {
      v10 = strlen(__s);
      if ( v10 == -1 )
      {
        v11 = nullptr;
      }
      else
      {
        v11 = qvector_reserve(&__src, nullptr, v10 + 1, 1u);
        __src = v11;
      }
      *(_QWORD *)&v27 = v10 + 1;
      memmove(v11, __s, v10);
      *((_BYTE *)__src + v10) = 0;
      v12 = v27;
      *(_QWORD *)&v32 = a2;
      *((_QWORD *)&v32 + 1) = a3;
      v34 = 0;
      v35 = 0;
      v33 = nullptr;
      if ( (_QWORD)v27 )
      {
        v33 = qalloc_or_throw(v27);
        v35 = v12;
        memcpy(v33, __src, v12);
        v34 = v12;
      }
    }
    else
    {
      *(_QWORD *)&v32 = a2;
      *((_QWORD *)&v32 + 1) = a3;
      v34 = 0;
      v35 = 0;
      v33 = nullptr;
    }
    v36 = nullptr;
    v37 = 0;
    v38 = 0;
    v13 = *(_QWORD *)(a5 + 8);
    if ( v13 )
    {
      v36 = qalloc_or_throw(*(_QWORD *)(a5 + 8));
      v38 = v13;
      memcpy(v36, *(const void **)a5, v13);
      v37 = v13;
    }
    if ( __src )
    {
      *(_QWORD *)&v27 = 0;
      qfree(__src);
    }
    v14 = *(__int64 ***)(a1 + 8);
    __src = a2;
    v27 = v32;
    v29 = 0u;
    v28 = nullptr;
    v15 = v34;
    if ( v34 )
    {
      v28 = qalloc_or_throw(v34);
      *((_QWORD *)&v29 + 1) = v15;
      memcpy(v28, v33, v15);
      *(_QWORD *)&v29 = v15;
    }
    v30 = nullptr;
    v31 = 0u;
    v16 = v37;
    if ( v37 )
    {
      v30 = qalloc_or_throw(v37);
      *((_QWORD *)&v31 + 1) = v16;
      memcpy(v30, v36, v16);
      *(_QWORD *)&v31 = v16;
    }
    v18 = (char **)(v14 + 1);
    v17 = (char *)v14[1];
    if ( v17 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v19 = (char **)v17;
          v20 = *((_QWORD *)v17 + 4);
          if ( (unsigned __int64)__src >= v20 )
            break;
          v17 = *v19;
          v18 = v19;
          if ( !*v19 )
            goto LABEL_25;
        }
        if ( v20 >= (unsigned __int64)__src )
          break;
        v17 = v19[1];
        if ( !v17 )
        {
          v18 = v19 + 1;
          goto LABEL_25;
        }
      }
    }
    else
    {
      v19 = (char **)(v14 + 1);
LABEL_25:
      v21 = (char *)operator new(0x68u);
      v22 = v28;
      *((_QWORD *)v21 + 4) = __src;
      *(_OWORD *)(v21 + 40) = v27;
      *((_QWORD *)v21 + 7) = v22;
      v28 = nullptr;
      *((_OWORD *)v21 + 4) = v29;
      v29 = 0u;
      v23 = v30;
      v24 = *((_QWORD *)&v31 + 1);
      v30 = nullptr;
      *((_QWORD *)v21 + 10) = v23;
      *((_QWORD *)v21 + 11) = v16;
      *((_QWORD *)v21 + 12) = v24;
      v31 = 0u;
      *(_OWORD *)v21 = 0u;
      *((_QWORD *)v21 + 2) = v19;
      *v18 = v21;
      v25 = (__int64 *)**v14;
      if ( v25 )
      {
        *v14 = v25;
        v21 = *v18;
      }
      sub_10000BD00(v14[1], (__int64 *)v21);
      v14[2] = (__int64 *)((char *)v14[2] + 1);
    }
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v30);
      v30 = nullptr;
      *((_QWORD *)&v31 + 1) = 0;
    }
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28);
    }
    if ( v36 )
    {
      v37 = 0;
      qfree(v36);
      v36 = nullptr;
      v38 = 0;
    }
    if ( v33 )
    {
      v34 = 0;
      qfree(v33);
    }
  }
}
