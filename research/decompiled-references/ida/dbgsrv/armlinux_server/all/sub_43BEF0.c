/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43BEF0
// Address: 0x000000000043BEF0

//----- (000000000043BEF0) ----------------------------------------------------
void **__usercall sub_43BEF0@<X0>(
        const char *a1@<X0>,
        const char *a2@<X1>,
        __int64 a3@<X2>,
        __int64 a4@<X3>,
        __int64 a5@<X4>,
        void **a6@<X8>)
{
  unsigned __int8 *v11; // x21
  char *v12; // x0
  __int64 v13; // x0
  __int64 v14; // x22
  unsigned __int8 (__fastcall *v15)(unsigned __int8 *, _QWORD, void **); // x3
  void *v16; // x1
  char v18; // w0
  void *v19; // x1
  void *v20; // x0
  void *v21; // x0
  void *v22; // x2
  void *v23; // x0
  void *v24; // x0
  void *ptr; // [xsp+50h] [xbp-1020h] BYREF
  void *v26; // [xsp+58h] [xbp-1018h]
  void *v27; // [xsp+60h] [xbp-1010h]
  char v28[4096]; // [xsp+68h] [xbp-1008h] BYREF

  v11 = (unsigned __int8 *)a1;
  if ( !(unsigned __int8)sub_490268(a1)
    && (sub_48F628(v11) || (v11 = (unsigned __int8 *)sub_452250(v28, 4096, (__int64)v11)) == nullptr) )
  {
    *a6 = nullptr;
    a6[1] = nullptr;
    a6[2] = nullptr;
    v20 = sub_491288((__int64)a6, nullptr, 0x16u, 1u);
    *a6 = v20;
    a6[1] = (void *)22;
    qmemcpy(v20, "could not locate file", 21);
    *((_BYTE *)*a6 + 21) = 0;
    return a6;
  }
  v12 = sub_48BA58(v11);
  if ( !v12 )
    v12 = "idc";
  v13 = sub_43B770(v12, 0);
  v14 = v13;
  if ( !v13 )
  {
    *a6 = nullptr;
    a6[1] = nullptr;
    a6[2] = nullptr;
    v23 = sub_491288((__int64)a6, nullptr, 0x17u, 1u);
    *a6 = v23;
    a6[1] = (void *)23;
    qmemcpy(v23, "unknown file extension", 22);
    *((_BYTE *)*a6 + 22) = 0;
    return a6;
  }
  v15 = *(unsigned __int8 (__fastcall **)(unsigned __int8 *, _QWORD, void **))(v13 + 48);
  if ( !v15 )
  {
    *a6 = nullptr;
    a6[1] = nullptr;
    a6[2] = nullptr;
    v24 = sub_491288((__int64)a6, nullptr, 0x16u, 1u);
    *a6 = v24;
    a6[1] = (void *)22;
    qmemcpy(v24, "cannot compile script", 21);
    *((_BYTE *)*a6 + 21) = 0;
    goto LABEL_10;
  }
  ptr = nullptr;
  v26 = nullptr;
  v27 = nullptr;
  if ( v15(v11, 0, &ptr) )
  {
    if ( !a2 )
    {
      if ( (*(_DWORD *)(v14 + 8) & 1) == 0 )
      {
        v19 = ptr;
        goto LABEL_14;
      }
      a2 = "main";
    }
    v18 = (*(__int64 (__fastcall **)(__int64, const char *, __int64, __int64, void **))(v14 + 56))(a3, a2, a4, a5, &ptr);
    v19 = ptr;
    if ( !v18 )
    {
      v22 = v26;
      v21 = v27;
      *a6 = ptr;
      a6[1] = v22;
      a6[2] = v21;
      goto LABEL_10;
    }
LABEL_14:
    *a6 = nullptr;
    a6[1] = nullptr;
    a6[2] = nullptr;
    if ( v19 )
    {
      v26 = nullptr;
      j__free(v19);
    }
    goto LABEL_10;
  }
  v16 = v26;
  *a6 = ptr;
  a6[1] = v16;
  a6[2] = v27;
LABEL_10:
  --*(_DWORD *)(v14 + 12);
  return a6;
}
// 43BEF0: could not find valid save-restore pair for x22
