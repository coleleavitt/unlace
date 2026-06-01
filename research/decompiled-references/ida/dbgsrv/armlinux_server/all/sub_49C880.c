/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49C880
// Address: 0x000000000049C880

//----- (000000000049C880) ----------------------------------------------------
__int64 __fastcall sub_49C880(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // w20
  unsigned __int64 v8; // x19
  int v9; // w2
  unsigned __int64 v10; // x0
  unsigned __int64 v11; // x1
  __int64 v12; // x0
  unsigned __int64 v13; // x4
  int v14; // w0
  char *v15; // x1
  unsigned __int64 v16; // x2
  int v17; // w0
  unsigned __int64 v18; // x3
  unsigned __int64 v19; // x19
  __int64 (*v20)(); // x3
  char *v22; // x0
  const char *v23; // x0
  const char *v24; // x0
  unsigned __int64 v25; // x3
  unsigned __int64 v26; // x24
  char *v27; // x0
  unsigned __int64 v28; // x0
  int v29; // [xsp+64h] [xbp-6Ch]
  int v31; // [xsp+7Ch] [xbp-54h] BYREF
  void *v32; // [xsp+80h] [xbp-50h] BYREF
  unsigned __int64 v33; // [xsp+88h] [xbp-48h]
  __int64 v34; // [xsp+90h] [xbp-40h]
  void *v35; // [xsp+98h] [xbp-38h] BYREF
  unsigned __int64 v36; // [xsp+A0h] [xbp-30h]
  unsigned __int64 v37; // [xsp+A8h] [xbp-28h]
  void *ptr; // [xsp+B0h] [xbp-20h] BYREF
  unsigned __int64 v39; // [xsp+B8h] [xbp-18h]
  unsigned __int64 v40; // [xsp+C0h] [xbp-10h]

  v8 = a1[1];
  v32 = nullptr;
  v33 = 0;
  v34 = 0;
  v35 = nullptr;
  v36 = 0;
  v37 = 0;
  if ( v8 )
  {
    v32 = sub_491288((__int64)&v32, nullptr, v8, 4u);
    memset((char *)v32 + 4 * v33, 0, 4 * (v8 - v33));
    v25 = v36;
    v26 = a1[1];
    v33 = v8;
    if ( v26 <= v36 )
    {
      if ( v26 < v36 )
        v36 = v26;
    }
    else
    {
      v27 = (char *)v35;
      if ( v26 > v37 )
      {
        v27 = (char *)sub_491288((__int64)&v35, v35, v26, 8u);
        v25 = v36;
        v35 = v27;
      }
      memset(&v27[8 * v25], 0, 8 * (v26 - v25));
      v36 = v26;
      v26 = a1[1];
    }
    if ( v26 )
    {
      v28 = 0;
      do
      {
        *((_DWORD *)v32 + v28) = *(_DWORD *)(a1[2] + 4 * v28);
        *((_QWORD *)v35 + v28) = v28;
        ++v28;
      }
      while ( a1[1] > v28 );
    }
  }
  v29 = 0;
  ptr = nullptr;
  v39 = 0;
  v40 = 0;
  while ( 1 )
  {
    v9 = v33;
    if ( !v33 )
      break;
    while ( 1 )
    {
      if ( (*(_DWORD *)a3 & 0x80000000) != 0 )
      {
        LODWORD(v13) = *(_DWORD *)(a3 + 24);
      }
      else
      {
        v10 = sub_4926B8();
        v11 = *(_QWORD *)(a3 + 16);
        v12 = (unsigned int)v10 + 1000000 * HIDWORD(v10);
        if ( v12 + 10 >= v11 )
          goto LABEL_29;
        v9 = v33;
        v13 = (v11 + 999 - v12) / 0x3E8;
        *(_DWORD *)(a3 + 24) = v13;
      }
      v14 = sub_49C4B0(&v31, (int *)v32, v9, 0, v13);
      v4 = v14;
      if ( v14 < 0 )
      {
        v24 = (const char *)sub_492F00(v14);
        sub_493A08(a2, "Could not wait for data: %s", v24);
        goto LABEL_30;
      }
      if ( !v14 && v31 == -1 )
      {
LABEL_29:
        v4 = -1;
        goto LABEL_30;
      }
      v15 = (char *)ptr;
      v16 = v39;
      if ( a4 > v39 )
      {
        if ( a4 > v40 )
        {
          v15 = (char *)sub_491288((__int64)&ptr, ptr, a4, 1u);
          v16 = v39;
          ptr = v15;
        }
        memset(&v15[v16], 0, a4 - v16);
        v15 = (char *)ptr;
        v39 = a4;
      }
      else if ( a4 < v39 )
      {
        v39 = a4;
      }
      v17 = j__read(*((_DWORD *)v32 + v31), v15, a4);
      v4 = v17;
      if ( v17 > 0 )
        break;
      if ( v17 )
      {
        v4 = -v17;
        v23 = (const char *)sub_492F00(-v17);
        sub_493A08(a2, "Could not read from a pipe: %s", v23);
        v29 = 1;
      }
      memmove((char *)v32 + 4 * v31, (char *)v32 + 4 * v31 + 4, 4 * v33-- - 4LL * v31 - 4);
      memmove((char *)v35 + 8 * v31, (char *)v35 + 8 * v31 + 8, 8 * v36 - 8LL * v31 - 8);
      v9 = v33;
      --v36;
      if ( !v33 )
        goto LABEL_24;
    }
    v18 = v39;
    v19 = v17;
    if ( v17 > v39 )
    {
      v22 = (char *)ptr;
      if ( v19 > v40 )
      {
        v22 = (char *)sub_491288((__int64)&ptr, ptr, v19, 1u);
        v18 = v39;
        ptr = v22;
      }
      memset(&v22[v18], 0, v19 - v18);
      v39 = v19;
    }
    else if ( v17 < v39 )
    {
      v39 = v17;
    }
    v20 = *(__int64 (**)())(*a1 + 16LL);
    if ( v20 != sub_4938F0
      && !((unsigned __int8 (__fastcall *)(_QWORD *, _QWORD, void **))v20)(a1, *((_QWORD *)v35 + v31), &ptr) )
    {
      v4 = -2;
      goto LABEL_30;
    }
  }
LABEL_24:
  if ( !v29 )
    v4 = 0;
LABEL_30:
  if ( ptr )
  {
    v39 = 0;
    j__free(ptr);
  }
  if ( v35 )
  {
    v36 = 0;
    j__free(v35);
  }
  if ( v32 )
  {
    v33 = 0;
    j__free(v32);
  }
  return v4;
}
// 49CAE4: variable 'v4' is possibly undefined
