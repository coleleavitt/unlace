/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_680B0
// Address: 0x000680B0

//----- (000680B0) --------------------------------------------------------
int __fastcall sub_680B0(int a1, int a2, int a3, int a4)
{
  unsigned __int8 *v6; // r0
  char *v7; // r6
  int v8; // r0
  int v9; // r0
  char *v10; // r0
  char *v11; // r1
  char *v12; // r2
  size_t v14; // r0
  char *v15; // r1
  size_t v16; // r2
  unsigned int v17; // r3
  void *v18; // r0
  unsigned int v20; // [sp+8h] [bp-18h]
  size_t v21; // [sp+Ch] [bp-14h]
  char *v22; // [sp+10h] [bp-10h]
  char *s; // [sp+14h] [bp-Ch] BYREF
  char *v24; // [sp+18h] [bp-8h]

  v6 = (unsigned __int8 *)(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 8))(
                            a1,
                            *(unsigned __int8 *)(*(_DWORD *)a2 + 4));
  if ( v6 )
  {
    v7 = (char *)v6;
    v8 = (((v6[3] << 8) + v6[2]) << 16) + (v6[1] << 8) + *v6;
    s = v7 + 5;
    v24 = &v7[v8 + 5];
    v9 = unpack_dd((unsigned int *)&s, (unsigned int)v24);
    a3 = v9;
    if ( a4 && v9 < 0 )
    {
      v10 = s;
      v11 = s;
      do
      {
        if ( v11 >= v24 )
          goto LABEL_12;
        v12 = v11 + 1;
      }
      while ( *v11++ != 0 );
      s = v12;
      if ( !v10 || (v22 = v10, v14 = strlen(v10), v15 = v22, !v14) )
      {
LABEL_12:
        *(_DWORD *)(a4 + 4) = 0;
        goto LABEL_13;
      }
      v16 = v14;
      v17 = v14 + 1;
      v21 = v14;
      if ( *(_DWORD *)(a4 + 8) >= v14 + 1 )
      {
        v18 = *(void **)a4;
      }
      else
      {
        v20 = v14 + 1;
        v18 = qvector_reserve(a4, *(void **)a4, v17, 1u);
        v17 = v20;
        v16 = v21;
        v15 = v22;
        *(_DWORD *)a4 = v18;
      }
      *(_DWORD *)(a4 + 4) = v17;
      memmove(v18, v15, v16);
      *(_BYTE *)(*(_DWORD *)a4 + v21) = 0;
    }
LABEL_13:
    qfree(v7);
  }
  return a3;
}
