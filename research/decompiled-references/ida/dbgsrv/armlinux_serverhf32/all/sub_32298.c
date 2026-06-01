/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32298
// Address: 0x00032298

//----- (00032298) --------------------------------------------------------
int __fastcall sub_32298(int a1, void **a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // r0
  int v9; // r0
  int v10; // r1
  bool v11; // zf
  void *v12; // r0
  signed int v13; // r0
  size_t v14; // r4
  size_t v15; // r3
  char *v16; // r7
  size_t v17; // r9
  void *v18; // r1
  int v19; // r5
  void *v21; // r5
  int v22; // r7
  int v23; // r8
  unsigned int v24; // r5
  void *v25; // r1
  __int64 v27; // [sp+18h] [bp-74h]
  unsigned __int8 n[100]; // [sp+20h] [bp-6Ch] BYREF

  LODWORD(v8) = sub_74C30(*(_DWORD *)(a1 + 364), 0, 1);
  v27 = v8 - *(_QWORD *)(a1 + 368);
  v9 = sub_74C30(*(_DWORD *)(a1 + 364), __PAIR64__(a4, a3) + *(_QWORD *)(a1 + 368), 0);
  v11 = ++v10 == 0;
  if ( !v10 )
    v11 = v9 == -1;
  if ( v11 )
  {
    sub_1873C((int)a2, "bad offset %08x", a3);
    v19 = 0;
    goto LABEL_19;
  }
  v12 = *a2;
  if ( *a2 )
  {
    a2[1] = nullptr;
    sub_77E08(v12);
    *a2 = nullptr;
    a2[2] = nullptr;
  }
  while ( 1 )
  {
    v13 = sub_74A28(*(_DWORD *)(a1 + 364), n, 100);
    if ( v13 < 0 )
      break;
    if ( !v13 )
      goto LABEL_12;
    v14 = n[0];
    if ( n[0] )
    {
      v15 = 0;
      while ( v13 != ++v15 )
      {
        v14 = v15;
        if ( !n[v15] )
          goto LABEL_13;
      }
LABEL_12:
      v14 = v13;
    }
LABEL_13:
    v16 = (char *)a2[1];
    v17 = v14;
    if ( v16 )
      v17 = (size_t)&(--v16)[v14];
    v18 = *a2;
    if ( v17 + 1 > (unsigned int)a2[2] )
    {
      v18 = sub_77EB0((int)a2, v18, v17 + 1, 1u);
      *a2 = v18;
    }
    a2[1] = (void *)(v17 + 1);
    *((_BYTE *)v18 + v17) = 0;
    memmove(&v16[(_DWORD)*a2], n, v14);
    if ( v14 != 100 )
    {
      v19 = 1;
      goto LABEL_19;
    }
  }
  v21 = a2[1];
  if ( v21 )
  {
    v22 = (int)v21 - 1;
    v23 = (int)v21 + 15;
    v24 = (unsigned int)v21 + 16;
    v25 = *a2;
    if ( (unsigned int)a2[2] >= v24 )
      goto LABEL_22;
LABEL_24:
    v25 = sub_77EB0((int)a2, v25, v24, 1u);
    *a2 = v25;
  }
  else
  {
    v22 = 0;
    v24 = 17;
    v23 = 16;
    v25 = *a2;
    if ( (unsigned int)a2[2] < 0x11 )
      goto LABEL_24;
  }
LABEL_22:
  a2[1] = (void *)v24;
  v19 = 0;
  *((_BYTE *)v25 + v23) = 0;
  qmemcpy((char *)*a2 + v22, "{truncated name}", 16);
LABEL_19:
  sub_74C30(*(_DWORD *)(a1 + 364), v27 + *(_QWORD *)(a1 + 368), 0);
  return v19;
}
// 322EC: variable 'v8' is possibly undefined
// 32300: variable 'v10' is possibly undefined
