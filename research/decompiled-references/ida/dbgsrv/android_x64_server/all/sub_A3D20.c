/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3D20
// Address: 0x00000000000A3D20

//----- (00000000000A3D20) ----------------------------------------------------
char *__fastcall sub_A3D20(__int64 **a1, unsigned __int64 *a2, __int64 a3, _QWORD **a4)
{
  void **v5; // rbx
  void **v6; // r13
  unsigned __int64 v7; // rax
  void *v8; // rcx
  void **v9; // rcx
  char *v10; // r12
  __int64 *v11; // rax
  __int64 *v12; // rsi

  v5 = (void **)a1[1];
  if ( v5 )
  {
    v6 = (void **)(a1 + 1);
    v7 = *a2;
    while ( 1 )
    {
      v8 = v5[4];
      if ( v7 >= (unsigned __int64)v8 )
      {
        if ( (unsigned __int64)v8 >= v7 )
          goto LABEL_12;
        v6 = v5 + 1;
        v9 = (void **)v5[1];
        if ( !v9 )
          goto LABEL_12;
      }
      else
      {
        v9 = (void **)*v5;
        v6 = v5;
        if ( !*v5 )
          goto LABEL_11;
      }
      v5 = v9;
    }
  }
  v5 = (void **)(a1 + 1);
LABEL_11:
  v6 = v5;
LABEL_12:
  v10 = (char *)*v6;
  if ( !*v6 )
  {
    v10 = (char *)operator new(0x1D8u);
    *((_QWORD *)v10 + 4) = **a4;
    memset(v10 + 40, 0, 0x1B0u);
    *(_OWORD *)(v10 + 104) = -1;
    *((_QWORD *)v10 + 15) = -1;
    *((_OWORD *)v10 + 10) = 0;
    *((_OWORD *)v10 + 9) = 0;
    *((_DWORD *)v10 + 44) = 0;
    *((_DWORD *)v10 + 34) = 0;
    *((_QWORD *)v10 + 16) = 0;
    *(_OWORD *)(v10 + 200) = 0;
    *(_OWORD *)(v10 + 184) = 0;
    *((_DWORD *)v10 + 54) = 0;
    *((_OWORD *)v10 + 15) = 0;
    *((_OWORD *)v10 + 14) = 0;
    *((_DWORD *)v10 + 64) = 0;
    *(_OWORD *)(v10 + 280) = 0;
    *(_OWORD *)(v10 + 264) = 0;
    *((_DWORD *)v10 + 74) = 0;
    *((_OWORD *)v10 + 20) = 0;
    *((_OWORD *)v10 + 19) = 0;
    *((_DWORD *)v10 + 84) = 0;
    *(_OWORD *)(v10 + 360) = 0;
    *(_OWORD *)(v10 + 344) = 0;
    *((_DWORD *)v10 + 94) = 0;
    *((_OWORD *)v10 + 25) = 0;
    *((_OWORD *)v10 + 24) = 0;
    *((_DWORD *)v10 + 104) = 0;
    *(_OWORD *)(v10 + 440) = 0;
    *(_OWORD *)(v10 + 424) = 0;
    *((_DWORD *)v10 + 114) = 0;
    *(_OWORD *)v10 = 0;
    *((_QWORD *)v10 + 2) = v5;
    *v6 = v10;
    v11 = (__int64 *)**a1;
    if ( v11 )
    {
      *a1 = v11;
      v12 = (__int64 *)*v6;
    }
    else
    {
      v12 = (__int64 *)v10;
    }
    sub_4A450(a1[1], v12);
    a1[2] = (__int64 *)((char *)a1[2] + 1);
  }
  return v10;
}
