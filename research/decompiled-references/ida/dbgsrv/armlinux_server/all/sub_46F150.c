/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46F150
// Address: 0x000000000046F150

//----- (000000000046F150) ----------------------------------------------------
void *__fastcall sub_46F150(__int64 a1, unsigned __int8 a2, __int64 *a3, char a4)
{
  __int64 v4; // x26
  __int64 v5; // x27
  __int64 v6; // x28
  int v10; // w24
  _DWORD *v11; // x0
  void *v12; // x19
  int v13; // w0
  void *v14; // x0
  __int64 (__fastcall *v15)(); // x2
  __int64 v17; // x26
  void *v18; // x0
  __int64 v19; // x27
  void *v20; // x28
  void *v21; // x0
  void (*v22)(const char *, ...); // x2
  const char *v23; // x1
  void (*v24)(const char *, ...); // x2
  const char *v25; // x1
  __int64 v26; // [xsp+38h] [xbp-48h]
  __int64 v27; // [xsp+40h] [xbp-40h]
  __int64 v28; // [xsp+48h] [xbp-38h]
  void *ptr; // [xsp+60h] [xbp-20h] BYREF
  __int64 v30; // [xsp+68h] [xbp-18h]
  __int64 v31; // [xsp+70h] [xbp-10h]

  v10 = a4 & 1;
  while ( 1 )
  {
    if ( !a3[1] )
      goto LABEL_6;
    if ( (unsigned int)sub_477C00(a1, a3) )
      break;
    if ( v10 )
    {
      v12 = nullptr;
      goto LABEL_13;
    }
    if ( *(_BYTE *)(*a3 + 4) == 52 )
      sub_4922C0(1);
LABEL_6:
    v11 = sub_478B70(a1, a2);
    v12 = v11;
    if ( !v11 )
    {
      v22 = (void (*)(const char *, ...))sub_47B4D0;
      if ( *(_BYTE *)(a1 + 68) )
        v22 = (void (*)(const char *, ...))sub_40A690;
      if ( *(_QWORD *)(a1 + 24) )
        v23 = *(const char **)(a1 + 16);
      else
        v23 = (const char *)&qword_4B2D48;
      v22("%s\n", v23);
      goto LABEL_13;
    }
    v13 = *((unsigned __int8 *)v11 + 4);
    switch ( v13 )
    {
      case 1:
        sub_463688(a1, (__int64)"rpc: remote did not understand our request");
        goto LABEL_12;
      case 0:
        goto LABEL_13;
      case 2:
        sub_463688(a1, (__int64)"rpc: no remote memory");
        goto LABEL_12;
      case 6:
        sub_40A690((int)"rpc: user cancelled the operation\n");
LABEL_12:
        v14 = v12;
        v12 = nullptr;
        j__free(v14);
        goto LABEL_13;
    }
    if ( !*(_BYTE *)(a1 + 69) )
    {
      sub_47B4D0("Exploit packet has been detected and ignored\n");
      goto LABEL_12;
    }
    v26 = v4;
    v27 = v5;
    v28 = v6;
    (*(void (__fastcall **)(void **__return_ptr, __int64, void *))(*(_QWORD *)a1 + 56LL))(&ptr, a1, v12);
    v17 = v31;
    v18 = (void *)*a3;
    v20 = ptr;
    v19 = v30;
    ptr = nullptr;
    v30 = 0;
    v31 = 0;
    if ( v18 )
    {
      a3[1] = 0;
      j__free(v18);
      *a3 = (__int64)v20;
      a3[1] = v19;
      v21 = ptr;
      a3[2] = v17;
      if ( v21 )
      {
        v30 = 0;
        j__free(v21);
      }
    }
    else
    {
      *a3 = (__int64)v20;
      a3[1] = v19;
      a3[2] = v17;
    }
    j__free(v12);
    v4 = v26;
    v5 = v27;
    v6 = v28;
  }
  v24 = (void (*)(const char *, ...))sub_47B4D0;
  if ( *(_BYTE *)(a1 + 68) )
    v24 = (void (*)(const char *, ...))sub_40A690;
  if ( *(_QWORD *)(a1 + 24) )
    v25 = *(const char **)(a1 + 16);
  else
    v25 = (const char *)&qword_4B2D48;
  v12 = nullptr;
  v24("%s\n", v25);
LABEL_13:
  v15 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 64LL);
  if ( v15 != nullsub_17 )
    ((void (__fastcall *)(__int64, void *))v15)(a1, v12);
  return v12;
}
// 46F150: could not find valid save-restore pair for x26
// 46F150: could not find valid save-restore pair for x27
// 46F150: could not find valid save-restore pair for x28
// 46F27C: variable 'v4' is possibly undefined
// 46F27C: variable 'v5' is possibly undefined
// 46F284: variable 'v6' is possibly undefined
// 462620: using guessed type __int64 __fastcall nullsub_17();
// 4B2D48: using guessed type __int64 qword_4B2D48;
