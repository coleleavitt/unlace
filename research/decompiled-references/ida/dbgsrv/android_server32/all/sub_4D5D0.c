/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D5D0
// Address: 0x0004D5D0

//----- (0004D5D0) --------------------------------------------------------
int __fastcall sub_4D5D0(int a1, int a2, char *a3, int a4)
{
  int v5; // r2
  int v7; // r0
  int v8; // r7
  _BYTE *v10; // r0
  char *v12; // [sp+Ch] [bp-34h]
  int *v14; // [sp+18h] [bp-28h] BYREF
  _DWORD *v15[2]; // [sp+1Ch] [bp-24h] BYREF
  unsigned __int8 v16[8]; // [sp+24h] [bp-1Ch] BYREF
  void *v17; // [sp+2Ch] [bp-14h]
  int v18; // [sp+30h] [bp-10h]
  int v19; // [sp+34h] [bp-Ch]
  int v20; // [sp+38h] [bp-8h]
  int v21; // [sp+3Ch] [bp-4h]

  v5 = a2;
  v7 = *(_DWORD *)(a1 + 4);
  v8 = v7 - 1;
  if ( !v7 )
    v8 = 0;
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v8 + 2) )
  {
    v10 = *(_BYTE **)a1;
  }
  else
  {
    v12 = a3;
    v10 = qvector_reserve(a1, *(void **)a1, v8 + 2, 1u);
    v5 = a2;
    a3 = v12;
    *(_DWORD *)a1 = v10;
  }
  *(_DWORD *)(a1 + 4) = v8 + 2;
  v10[v8] = 10;
  *(_BYTE *)(*(_DWORD *)a1 + v8 + 1) = 0;
  v16[0] = 2;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = nullptr;
  get_idcv_attr((int)v16, v5, a3, 1);
  v15[1] = nullptr;
  v15[0] = nullptr;
  v14 = (int *)v15;
  sub_43E4C(a1, v16, a3, a4, &v14);
  sub_4D7F2((int)&v14, v15[0]);
  if ( v16[0] == 5 )
  {
    sub_448A0((int)v17, v16);
  }
  else if ( v16[0] == 7 && v17 )
  {
    v18 = 0;
    qfree(v17);
    v19 = 0;
    v17 = nullptr;
  }
  return _stack_chk_guard - v21;
}
