/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4645D0
// Address: 0x00000000004645D0

//----- (00000000004645D0) ----------------------------------------------------
_BYTE *__fastcall sub_4645D0(_QWORD *a1, __int64 a2, const void *a3, int a4)
{
  _BYTE *v8; // x21
  __int64 v9; // x0
  unsigned __int64 v10; // x19
  char *v11; // x23
  char *v12; // x19
  size_t v13; // x0
  size_t v14; // x23
  __int64 v16; // x26
  __int64 v17; // x26
  _QWORD *v18; // x19
  char *v19; // x20
  void *v20; // x0
  void *v21; // x0
  unsigned __int64 v22; // x25
  void *v23; // x0
  __int64 v24; // [xsp+68h] [xbp-8h]

  v8 = sub_491040((unsigned int)(a4 + 1));
  if ( v8 )
  {
    v9 = a1[30];
    v10 = a1[31];
    if ( v9 + 1 > v10 )
    {
      v11 = (char *)sub_491288((__int64)(a1 + 29), nullptr, v9 + 1, 0x48u);
      v16 = a1[30];
      v24 = a1[31];
      a1[31] = v10;
      v17 = v16 - 1;
      v18 = (_QWORD *)a1[29];
      if ( v17 >= 0 )
      {
        v19 = v11;
        do
        {
          *(_QWORD *)v19 = *v18;
          *v18 = 0;
          *((_QWORD *)v19 + 1) = v18[1];
          v18[1] = 0;
          *((_QWORD *)v19 + 2) = v18[2];
          v18[2] = 0;
          *((_QWORD *)v19 + 3) = v18[3];
          v18[3] = 0;
          *((_QWORD *)v19 + 4) = v18[4];
          v18[4] = 0;
          *((_QWORD *)v19 + 5) = v18[5];
          v18[5] = 0;
          *((_DWORD *)v19 + 12) = *((_DWORD *)v18 + 12);
          *((_QWORD *)v19 + 7) = v18[7];
          *((_QWORD *)v19 + 8) = v18[8];
          v20 = (void *)v18[3];
          if ( v20 )
          {
            v18[4] = 0;
            j__free(v20);
          }
          v21 = (void *)*v18;
          if ( *v18 )
          {
            v18[1] = 0;
            j__free(v21);
          }
          --v17;
          v18 += 9;
          v19 += 72;
        }
        while ( v17 != -1 );
        v18 = (_QWORD *)a1[29];
      }
      j__free(v18);
      a1[29] = v11;
      a1[31] = v24;
      v9 = a1[30];
    }
    else
    {
      v11 = (char *)a1[29];
    }
    v12 = &v11[72 * v9];
    *(_QWORD *)v12 = 0;
    *((_QWORD *)v12 + 1) = 0;
    *((_QWORD *)v12 + 2) = 0;
    *((_QWORD *)v12 + 3) = 0;
    *((_QWORD *)v12 + 4) = 0;
    *((_QWORD *)v12 + 5) = 0;
    ++a1[30];
    *((_QWORD *)v12 + 8) = a2;
    if ( a3 && (v13 = strlen((const char *)a3), (v14 = v13) != 0) )
    {
      v22 = v13 + 1;
      v23 = *((void **)v12 + 3);
      if ( v22 > *((_QWORD *)v12 + 5) )
      {
        v23 = sub_491288((__int64)(v12 + 24), *((void **)v12 + 3), v22, 1u);
        *((_QWORD *)v12 + 3) = v23;
      }
      *((_QWORD *)v12 + 4) = v22;
      memmove(v23, a3, v14);
      *(_BYTE *)(*((_QWORD *)v12 + 3) + v14) = 0;
    }
    else
    {
      *((_QWORD *)v12 + 4) = 0;
    }
    *((_DWORD *)v12 + 12) = a4;
    *((_QWORD *)v12 + 7) = v8;
    v8[a4] = 0;
  }
  return v8;
}
