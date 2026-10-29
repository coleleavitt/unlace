/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44FC70
// Address: 0x000000000044FC70

//----- (000000000044FC70) ----------------------------------------------------
__int64 __fastcall sub_44FC70(__int64 *a1, char *a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v10; // x24
  int v11; // w19
  unsigned __int64 v12; // x24
  size_t v13; // x0
  _QWORD *v14; // x0
  unsigned __int64 v15; // x1
  __int64 *v16; // x23
  _QWORD *v17; // x0
  __int64 v18; // x1
  unsigned int v19; // w21
  __int64 v20; // x1
  __int64 *i; // x19
  const char *v23; // x0
  const char *v24; // x19
  size_t v25; // x0
  size_t v26; // x20
  unsigned __int64 v27; // x21
  void *v28; // x0
  size_t na; // [xsp+60h] [xbp-D0h]
  int n; // [xsp+60h] [xbp-D0h]
  void *ptr; // [xsp+70h] [xbp-C0h] BYREF
  size_t v32; // [xsp+78h] [xbp-B8h]
  __int64 v33; // [xsp+80h] [xbp-B0h]
  __int64 v34[4]; // [xsp+108h] [xbp-28h] BYREF

  if ( a2 )
  {
    v10 = sub_43E668(a2);
    if ( !v10 )
    {
      v11 = 1536;
      sub_486A58(0, a2);
      goto LABEL_27;
    }
  }
  else
  {
    v10 = 0;
  }
  memset(&v34[1], 0, 24);
  LOBYTE(v34[0]) = 2;
  v11 = sub_449F40(v34, v10);
  if ( !v11 )
  {
    if ( v10 )
    {
      ptr = nullptr;
      v32 = 0;
      v33 = 0;
      if ( a2 )
      {
        na = strlen(a2);
        ptr = sub_491288((__int64)&ptr, nullptr, na + 1, 1u);
        v32 = na + 1;
        memmove(ptr, a2, na);
        *((_BYTE *)ptr + na) = 0;
      }
      n = sub_444508(v10, (__int64)&ptr);
      if ( n != -1 )
      {
        if ( ptr )
        {
          v32 = 0;
          j__free(ptr);
        }
        v12 = a4 + 1;
        if ( a4 == -1 )
          goto LABEL_34;
        if ( v12 >> 59 )
        {
          v16 = (__int64 *)sub_491248(0x7FFFFFFFFFFFFFFFLL);
LABEL_16:
          sub_4488B8(v16, v34);
          if ( a4 )
          {
            v18 = 0;
            do
            {
              sub_4488B8(&v16[4 * v18 + 4], (__int64 *)(a3 + 32 * v18));
              v18 = ++v11;
            }
            while ( v11 < a4 );
          }
          sub_448768((__int64)&ptr, 0, 0);
          v19 = (unsigned __int8)sub_44F608(&ptr, nullptr, n, (int)a4 + 1, v16, a1, a5);
          if ( v16 )
          {
            v20 = 4 * *(v16 - 1);
            for ( i = &v16[v20]; v16 != i; sub_448310(i) )
              i -= 4;
            j_j_j__free_0_1(v16 - 1);
          }
          sub_44A7D8((__int64)&ptr);
          sub_448310(v34);
          return v19;
        }
        v13 = -1;
        if ( v12 <= 0x3FFFFFFFFFFFFFFLL )
LABEL_34:
          v13 = 32 * v12 + 8;
        v14 = sub_49ECD8(v13);
        v15 = a4;
        *v14 = v12;
        v16 = v14 + 1;
        if ( (a4 & 0x8000000000000000LL) == 0 )
        {
          v17 = v14 + 1;
          do
          {
            *(_BYTE *)v17 = 2;
            --v15;
            v17[1] = 0;
            v17[2] = 0;
            v17[3] = 0;
            v17 += 4;
          }
          while ( v15 != -1 );
        }
        goto LABEL_16;
      }
      if ( ptr )
      {
        v32 = 0;
        j__free(ptr);
      }
    }
    sub_449520(a1, v34);
    v19 = 1;
    sub_448310(v34);
    return v19;
  }
  sub_448310(v34);
LABEL_27:
  sub_4869C8((unsigned int)v11);
  v19 = 0;
  sub_44D538(a1);
  if ( a5 )
  {
    v23 = sub_493840(-1);
    v24 = v23;
    if ( v23 && (v25 = strlen(v23), (v26 = v25) != 0) )
    {
      v27 = v25 + 1;
      v28 = *(void **)a5;
      if ( v27 > *(_QWORD *)(a5 + 16) )
      {
        v28 = sub_491288(a5, *(void **)a5, v27, 1u);
        *(_QWORD *)a5 = v28;
      }
      *(_QWORD *)(a5 + 8) = v27;
      v19 = 0;
      memmove(v28, v24, v26);
      *(_BYTE *)(*(_QWORD *)a5 + v26) = 0;
    }
    else
    {
      v19 = 0;
      *(_QWORD *)(a5 + 8) = 0;
    }
  }
  return v19;
}
