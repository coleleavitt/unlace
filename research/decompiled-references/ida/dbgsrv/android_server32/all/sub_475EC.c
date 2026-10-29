/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475EC
// Address: 0x000475EC

//----- (000475EC) --------------------------------------------------------
int __fastcall sub_475EC(int a1, int *a2)
{
  int v3; // r6
  int v4; // r7
  int v5; // r1
  int result; // r0
  _DWORD *v7; // r0
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r6
  int v12; // r1
  int v13; // r2
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r4
  unsigned __int8 v19[8]; // [sp+14h] [bp-1Ch] BYREF
  void *v20; // [sp+1Ch] [bp-14h]
  int v21; // [sp+20h] [bp-10h]
  int v22; // [sp+24h] [bp-Ch]
  int v23; // [sp+28h] [bp-8h]

  v3 = *(_DWORD *)(a1 + 12);
  v4 = 24 * (*(_DWORD *)(a1 + 16) - 1);
  v5 = idcv_string(v3 + v4);
  result = 0;
  if ( !v5 )
  {
    v7 = (_DWORD *)(v3 + v4);
    v8 = *a2;
    *a2 = *(_DWORD *)(v3 + v4 + 8);
    v9 = a2[1];
    a2[1] = *(_DWORD *)(v3 + v4 + 12);
    v10 = *(_DWORD *)(v3 + v4 + 16);
    v11 = a2[2];
    a2[2] = v10;
    v7 += 2;
    *v7 = v8;
    v7[1] = v9;
    v7[2] = v11;
    v12 = *(_DWORD *)(a1 + 12);
    v13 = *(_DWORD *)(a1 + 16);
    v19[0] = 2;
    v23 = 0;
    v22 = 0;
    v21 = 0;
    v20 = nullptr;
    copy_idcv(v19, (unsigned __int8 *)(v12 + 24 * v13 - 24));
    v14 = *(_DWORD *)(a1 + 16);
    if ( v14 )
    {
      v15 = v14 - 1;
      *(_DWORD *)(a1 + 16) = v15;
      free_idcv((unsigned __int8 *)(*(_DWORD *)(a1 + 12) + 24 * v15));
    }
    if ( v19[0] == 5 )
    {
      sub_448A0((int)v20, v19);
    }
    else if ( v19[0] == 7 && v20 )
    {
      v21 = 0;
      qfree(v20);
      v22 = 0;
      v20 = nullptr;
    }
    v16 = *(_DWORD *)(a1 + 12);
    v17 = 24 * (*(_DWORD *)(a1 + 16) - 1);
    if ( *(_BYTE *)(v16 + v17) == 5 )
    {
      return *(_DWORD *)(v16 + v17 + 8);
    }
    else
    {
      set_qerrno(1532);
      return 0;
    }
  }
  return result;
}
