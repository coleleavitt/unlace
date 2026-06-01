/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100036B8C
// Address: 0x0000000100036B8C

//----- (0000000100036B8C) ----------------------------------------------------
__int64 __fastcall sub_100036B8C(unsigned __int8 *a1, const char *a2, __int64 a3, unsigned __int64 a4, char **a5)
{
  char v5; // w25
  __int64 idc_class; // x26
  int v12; // w21
  size_t v13; // x25
  void *v14; // x0
  unsigned int v15; // w25
  unsigned __int64 v16; // x26
  _QWORD *v17; // x0
  unsigned __int8 *v18; // x24
  _QWORD *v19; // x8
  __int64 v20; // x9
  int i; // w27
  unsigned __int64 v22; // x8
  unsigned __int8 *v23; // x1
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  unsigned __int8 *v27; // x22
  __int64 v28; // x23
  int v29; // w8
  void *v30; // x0
  const char *v31; // x0
  const char *v32; // x20
  size_t v33; // x0
  size_t v34; // x21
  unsigned __int64 v35; // x22
  char *v36; // x1
  void *v38; // [xsp+0h] [xbp-110h] BYREF
  size_t v39; // [xsp+8h] [xbp-108h]
  __int64 v40; // [xsp+10h] [xbp-100h]
  unsigned __int8 v41[8]; // [xsp+98h] [xbp-78h] BYREF
  void *v42; // [xsp+A0h] [xbp-70h]
  __int64 v43; // [xsp+A8h] [xbp-68h]
  __int64 v44; // [xsp+B0h] [xbp-60h]

  if ( a2 )
  {
    idc_class = find_idc_class(a2);
    if ( !idc_class )
    {
      set_error_string(0);
LABEL_42:
      set_qerrno();
      sub_1000368F0(a1);
      if ( a5 )
      {
        v31 = j__qstrerror(-1);
        v32 = v31;
        if ( v31 && (v33 = strlen(v31)) != 0 )
        {
          v34 = v33;
          v35 = v33 + 1;
          v36 = *a5;
          if ( (unsigned __int64)a5[2] < v33 + 1 )
          {
            v36 = (char *)qvector_reserve(a5, v36, v35, 1u);
            *a5 = v36;
          }
          a5[1] = (char *)v35;
          memmove(v36, v32, v34);
          v5 = 0;
          (*a5)[v34] = 0;
        }
        else
        {
          v5 = 0;
          a5[1] = nullptr;
        }
      }
      else
      {
        v5 = 0;
      }
      return v5 & 1;
    }
  }
  else
  {
    idc_class = 0;
  }
  v41[0] = 2;
  v43 = 0;
  v44 = 0;
  v42 = nullptr;
  v12 = idcv_object(v41, idc_class);
  if ( !v12 )
  {
    if ( !idc_class )
      goto LABEL_20;
    v38 = nullptr;
    v39 = 0;
    v40 = 0;
    if ( a2 )
    {
      v13 = strlen(a2);
      if ( v13 == -1 )
      {
        v14 = nullptr;
      }
      else
      {
        v14 = qvector_reserve(&v38, nullptr, v13 + 1, 1u);
        v38 = v14;
      }
      v39 = v13 + 1;
      memmove(v14, a2, v13);
      *((_BYTE *)v38 + v13) = 0;
    }
    v15 = sub_1000360A8(idc_class, &v38);
    if ( v38 )
    {
      v39 = 0;
      qfree(v38);
    }
    if ( v15 == -1 )
    {
LABEL_20:
      move_idcv(a1, v41);
      v5 = 1;
    }
    else
    {
      v16 = a4 + 1;
      if ( (a4 + 1) >> 59 )
      {
        v18 = (unsigned __int8 *)qalloc_or_throw(0x7FFFFFFFFFFFFFFFLL);
      }
      else
      {
        v17 = operator new[]((32 * v16) | 0x10);
        *v17 = 32;
        v17[1] = v16;
        v18 = (unsigned __int8 *)(v17 + 2);
        if ( a4 != -1 )
        {
          v19 = v17 + 3;
          v20 = 32 * a4 + 32;
          do
          {
            *((_BYTE *)v19 - 8) = 2;
            v19[1] = 0;
            v19[2] = 0;
            *v19 = 0;
            v19 += 4;
            v20 -= 32;
          }
          while ( v20 );
        }
      }
      copy_idcv(v18, v41);
      for ( i = 1; ; ++i )
      {
        v22 = i - 1;
        if ( v22 >= a4 )
          break;
        v23 = (unsigned __int8 *)(a3 + 32 * v22);
        v24 = i;
        copy_idcv(&v18[32 * v24], v23);
      }
      sub_100038FB0((__int64)&v38, 0, 0);
      v5 = sub_100036F8C(&v38, nullptr, v15, (int)a4 + 1, v18, a1, a5);
      if ( v18 )
      {
        v25 = *((_QWORD *)v18 - 1);
        if ( v25 )
        {
          v26 = 32 * v25;
          v27 = &v18[v26 - 32];
          v28 = -v26;
          do
          {
            v29 = *v27;
            if ( v29 == 5 )
            {
              sub_10003307C(*((_QWORD *)v27 + 1), v27);
            }
            else if ( v29 == 7 )
            {
              v30 = *((void **)v27 + 1);
              if ( v30 )
              {
                *((_QWORD *)v27 + 2) = 0;
                qfree(v30);
                *((_QWORD *)v27 + 3) = 0;
              }
            }
            *v27 = 2;
            *((_QWORD *)v27 + 1) = 0;
            v27 -= 32;
            v28 += 32;
          }
          while ( v28 );
        }
        operator delete[](v18 - 16);
      }
      sub_100039190((__int64)&v38);
    }
  }
  if ( v41[0] == 5 )
  {
    sub_10003307C((__int64)v42, v41);
  }
  else if ( v41[0] == 7 && v42 )
  {
    v43 = 0;
    qfree(v42);
  }
  if ( v12 )
    goto LABEL_42;
  return v5 & 1;
}
// 100036EE4: variable 'v5' is possibly undefined
