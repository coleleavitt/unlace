/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48A808
// Address: 0x000000000048A808

//----- (000000000048A808) ----------------------------------------------------
__int64 __fastcall sub_48A808(__int64 a1)
{
  char *v2; // x0
  char *v3; // x21
  size_t v4; // x0
  size_t v5; // x23
  size_t v6; // x22
  size_t v7; // x4
  void *v8; // x5
  __int64 v9; // x3
  void *v10; // x0
  size_t v11; // x2
  __int64 v12; // x1
  void *v14; // [xsp+30h] [xbp-20h] BYREF
  size_t v15; // [xsp+38h] [xbp-18h]
  __int64 v16; // [xsp+40h] [xbp-10h]
  __int64 v17; // [xsp+48h] [xbp-8h]

  v2 = idadir(nullptr);
  v14 = nullptr;
  v15 = 0;
  v16 = 0;
  if ( v2 )
  {
    v3 = v2;
    v4 = strlen(v2);
    v5 = v4 + 1;
    v6 = v4;
    v14 = sub_491288((__int64)&v14, nullptr, v4 + 1, 1u);
    v15 = v5;
    memmove(v14, v3, v6);
    *((_BYTE *)v14 + v6) = 0;
    v8 = v14;
    v7 = v15;
    v9 = v16;
  }
  else
  {
    v9 = 0;
    v7 = 0;
    v8 = nullptr;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v14 = *(void **)a1;
  v10 = v14;
  v15 = v11;
  v12 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(a1 + 16) = v9;
  v16 = v12;
  if ( v10 )
  {
    v15 = 0;
    j__free(v10);
  }
  return v17 ^ _stack_chk_guard;
}
// 48A808: could not find valid save-restore pair for x22
// 48A808: could not find valid save-restore pair for x23
