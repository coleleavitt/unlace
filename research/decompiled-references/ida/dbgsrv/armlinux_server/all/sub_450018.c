/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450018
// Address: 0x0000000000450018

//----- (0000000000450018) ----------------------------------------------------
__int64 __fastcall sub_450018(__int64 *a1, __int64 *a2, char *a3, __int64 *a4, unsigned __int64 a5, __int64 a6)
{
  bool v11; // zf
  char *v12; // x0
  unsigned __int64 v13; // x26
  __int64 v14; // x27
  const char *v15; // x0
  const char *v16; // x21
  size_t v17; // x0
  size_t v18; // x23
  unsigned int v19; // w22
  __int64 *v21; // x0
  __int64 v22; // x22
  int v23; // w23
  char *v24; // x0
  unsigned __int64 v25; // x23
  __int64 v26; // x21
  __int64 *v27; // x0
  unsigned __int64 v28; // x22
  void *v29; // x0
  unsigned __int64 v30; // [xsp+60h] [xbp-110h]
  __int64 *v31; // [xsp+68h] [xbp-108h]
  void *ptr; // [xsp+78h] [xbp-F8h] BYREF
  unsigned __int64 v33; // [xsp+80h] [xbp-F0h]
  __int64 v34; // [xsp+88h] [xbp-E8h]
  _QWORD v35[19]; // [xsp+90h] [xbp-E0h] BYREF
  __int64 v36; // [xsp+128h] [xbp-48h] BYREF
  __int64 v37; // [xsp+130h] [xbp-40h]
  __int64 v38; // [xsp+138h] [xbp-38h]
  __int64 v39; // [xsp+140h] [xbp-30h]
  __int64 v40[4]; // [xsp+148h] [xbp-28h] BYREF

  LOBYTE(v36) = 2;
  if ( a3 )
    v11 = 1;
  else
    v11 = a2 == nullptr;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  if ( v11 )
  {
    if ( (unsigned int)sub_44DA00(&v36, (__int64)a2, a3, 0) )
      goto LABEL_13;
  }
  else
  {
    sub_4488B8(&v36, a2);
  }
  if ( sub_448A08(&v36, 2) )
  {
    if ( (unsigned __int8)v36 == 6 )
    {
      ptr = nullptr;
      v33 = 0;
      v34 = 0;
      if ( a2 )
      {
        v30 = a5 + 1;
        if ( a5 == -1 )
        {
          v22 = 32;
          v31 = nullptr;
          sub_4488B8(nullptr, a2);
        }
        else
        {
          memset(&v40[1], 0, 24);
          LOBYTE(v40[0]) = 2;
          v12 = (char *)sub_491288((__int64)&ptr, nullptr, a5 + 1, 0x20u);
          v13 = v33;
          ptr = v12;
          if ( a5 + 1 > v33 )
          {
            v14 = 32 * v33;
            while ( 1 )
            {
              v12[v14] = 2;
              v21 = (__int64 *)&v12[v14];
              v21[1] = 0;
              v21[2] = 0;
              v21[3] = 0;
              sub_4488B8(v21, v40);
              ++v13;
              v14 += 32;
              if ( v30 <= v13 )
                break;
              v12 = (char *)ptr;
            }
          }
          v33 = a5 + 1;
          sub_448310(v40);
          v31 = (__int64 *)ptr;
          v22 = (__int64)ptr + 32;
          sub_4488B8((__int64 *)ptr, a2);
        }
        if ( a5 )
        {
          v23 = 0;
          do
          {
            sub_4488B8((__int64 *)v22, a4);
            ++v23;
            v22 += 32;
            a4 += 4;
          }
          while ( a5 > v23 );
        }
        else
        {
          LODWORD(v30) = 1;
        }
      }
      else
      {
        LODWORD(v30) = a5;
        v31 = a4;
      }
      sub_448768((__int64)v35, 0, 0);
      v19 = (unsigned __int8)sub_44F608(v35, nullptr, v37, v30, v31, a1, a6);
      sub_44A7D8((__int64)v35);
      v24 = (char *)ptr;
      if ( ptr )
      {
        v25 = v33;
        if ( v33 )
        {
          v26 = 0;
          do
          {
            v27 = (__int64 *)&v24[32 * v26++];
            sub_448310(v27);
            v24 = (char *)ptr;
          }
          while ( v25 != v26 );
        }
        v33 = 0;
        j__free(v24);
      }
      goto LABEL_17;
    }
    sub_4869C8(1541);
  }
LABEL_13:
  sub_44D538(a1);
  if ( a6 )
  {
    v15 = sub_493840(-1);
    v16 = v15;
    if ( v15 && (v17 = strlen(v15), (v18 = v17) != 0) )
    {
      v28 = v17 + 1;
      v29 = *(void **)a6;
      if ( v28 > *(_QWORD *)(a6 + 16) )
      {
        v29 = sub_491288(a6, *(void **)a6, v28, 1u);
        *(_QWORD *)a6 = v29;
      }
      *(_QWORD *)(a6 + 8) = v28;
      v19 = 0;
      memmove(v29, v16, v18);
      *(_BYTE *)(*(_QWORD *)a6 + v18) = 0;
    }
    else
    {
      v19 = 0;
      *(_QWORD *)(a6 + 8) = 0;
    }
  }
  else
  {
    v19 = 0;
  }
LABEL_17:
  sub_448310(&v36);
  return v19;
}
