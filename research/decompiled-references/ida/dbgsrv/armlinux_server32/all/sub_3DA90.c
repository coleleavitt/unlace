/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DA90
// Address: 0x0003DA90

//----- (0003DA90) --------------------------------------------------------
_DWORD *__fastcall sub_3DA90(_DWORD *a1, int a2, const char *a3, int a4, int a5, int a6)
{
  unsigned __int8 *v6; // r5
  char *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r6
  int (__fastcall *v13)(unsigned __int8 *, _DWORD, void **); // r9
  int v14; // r2
  void *v15; // r1
  int v17; // r0
  void *v18; // r2
  void *v19; // r0
  void *v20; // r0
  __int64 v21; // kr00_8
  void *v22; // r0
  void *v23; // [sp+10h] [bp-1014h] BYREF
  __int64 v24; // [sp+14h] [bp-1010h]
  char v25[4]; // [sp+1Ch] [bp-1008h] BYREF

  v6 = (unsigned __int8 *)a2;
  if ( !sub_7756C(a2) && (sub_76DBC(v6) || (v6 = (unsigned __int8 *)sub_4C6BC(v25, 4096, (int)v6)) == nullptr) )
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    v19 = sub_78018((int)a1, nullptr, 0x16u, 1u);
    *a1 = v19;
    a1[1] = 22;
    qmemcpy(v19, "could not locate file", 21);
    *(_BYTE *)(*a1 + 21) = 0;
    return a1;
  }
  v10 = sub_746EC(v6);
  if ( v10 )
  {
    v11 = sub_3D5E4(v10, 0);
    v12 = v11;
    if ( v11 )
      goto LABEL_6;
LABEL_17:
    *a1 = v11;
    a1[1] = v11;
    a1[2] = v11;
    v20 = sub_78018((int)a1, v11, 0x17u, 1u);
    *a1 = v20;
    a1[1] = 23;
    qmemcpy(v20, "unknown file extension", 22);
    *(_BYTE *)(*a1 + 22) = 0;
    return a1;
  }
  v11 = sub_3D5E4("idc", 0);
  v12 = v11;
  if ( !v11 )
    goto LABEL_17;
LABEL_6:
  v13 = (int (__fastcall *)(unsigned __int8 *, _DWORD, void **))v11[7];
  if ( !v13 )
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    v22 = sub_78018((int)a1, nullptr, 0x16u, 1u);
    *a1 = v22;
    a1[1] = 22;
    qmemcpy(v22, "cannot compile script", 21);
    *(_BYTE *)(*a1 + 21) = 0;
    goto LABEL_9;
  }
  v24 = 0;
  v23 = nullptr;
  if ( v13(v6, 0, &v23) )
  {
    if ( !a3 )
    {
      if ( (v12[1] & 1) == 0 )
      {
        v18 = v23;
        goto LABEL_13;
      }
      a3 = "main";
    }
    v17 = ((int (__fastcall *)(int, const char *, int, int, void **))v12[8])(a4, a3, a5, a6, &v23);
    v18 = v23;
    if ( !v17 )
    {
      v21 = v24;
      *a1 = v23;
      *(_QWORD *)(a1 + 1) = v21;
      goto LABEL_9;
    }
LABEL_13:
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    if ( v18 )
    {
      LODWORD(v24) = 0;
      sub_77F70(v18);
    }
    goto LABEL_9;
  }
  v14 = v24;
  v15 = v23;
  a1[2] = HIDWORD(v24);
  *a1 = v15;
  a1[1] = v14;
LABEL_9:
  --v12[2];
  return a1;
}
