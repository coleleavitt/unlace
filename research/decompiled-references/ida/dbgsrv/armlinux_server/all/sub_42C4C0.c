/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C4C0
// Address: 0x000000000042C4C0

//----- (000000000042C4C0) ----------------------------------------------------
bool __fastcall sub_42C4C0(__int64 *a1, __int64 a2, unsigned int *a3)
{
  unsigned int *v6; // x0
  _BOOL4 v7; // w24
  unsigned __int64 v8; // x23
  unsigned int v9; // w0
  unsigned int v10; // w1
  __int64 v11; // x21
  __int64 v12; // x26
  unsigned __int64 v13; // x20
  void *v14; // x0
  void *v15; // x0
  char v16; // w25
  __int64 v17; // x20
  _BYTE *v18; // x0
  void *ptr; // [xsp+50h] [xbp-20h] BYREF
  unsigned __int64 v21; // [xsp+58h] [xbp-18h]
  __int64 v22; // [xsp+60h] [xbp-10h]

  v6 = sub_42B790((__int64)a1, 1, ".gnu_debuglink");
  if ( v6 )
  {
    ptr = nullptr;
    v21 = 0;
    v22 = 0;
    sub_42C2A0(a1, (__int64)&ptr, (__int64)v6);
    v7 = v21 > 4;
    if ( v21 > 4 )
    {
      v8 = v21 - 4;
      if ( a3 )
      {
        v9 = *(_DWORD *)((char *)ptr + v8);
        v10 = bswap32(v9);
        if ( *(_BYTE *)(a1[20] + 509) == 2 )
          v9 = v10;
        *a3 = v9;
      }
      if ( a2 )
      {
        if ( *(_QWORD *)(a2 + 16) < v8 )
          *(_QWORD *)a2 = sub_491288(a2, *(void **)a2, v8, 1u);
        v11 = 0;
        while ( 1 )
        {
          v15 = ptr;
          v16 = *((_BYTE *)ptr + v11);
          if ( !v16 )
            goto LABEL_18;
          v17 = *(_QWORD *)(a2 + 8);
          if ( v17 )
          {
            v12 = v17 - 1;
            v13 = v17 + 1;
            v14 = *(void **)a2;
            if ( *(_QWORD *)(a2 + 16) >= v13 )
              goto LABEL_12;
LABEL_16:
            v18 = sub_491288(a2, v14, v13, 1u);
            *(_QWORD *)a2 = v18;
            ++v11;
            *(_QWORD *)(a2 + 8) = v13;
            v18[v12] = v16;
            *(_BYTE *)(*(_QWORD *)a2 + v12 + 1) = 0;
            if ( v11 == v8 )
              break;
          }
          else
          {
            v13 = 2;
            v12 = 0;
            v14 = *(void **)a2;
            if ( *(_QWORD *)(a2 + 16) < 2u )
              goto LABEL_16;
LABEL_12:
            *(_QWORD *)(a2 + 8) = v13;
            ++v11;
            *((_BYTE *)v14 + v12) = v16;
            *(_BYTE *)(*(_QWORD *)a2 + v12 + 1) = 0;
            if ( v11 == v8 )
              break;
          }
        }
      }
    }
    v15 = ptr;
LABEL_18:
    if ( v15 )
    {
      v21 = 0;
      j__free(v15);
    }
  }
  else
  {
    return 0;
  }
  return v7;
}
