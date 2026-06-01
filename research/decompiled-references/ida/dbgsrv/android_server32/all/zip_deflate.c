/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: zip_deflate
// Address: 0x0007A718

//----- (0007A718) --------------------------------------------------------
int __fastcall zip_deflate(int a1, int (__fastcall *a2)(int, _BYTE *, int), int (__fastcall *a3)(int, _BYTE *, int))
{
  int v4; // r2
  int v5; // r3
  int v6; // r5
  int v7; // r7
  int v8; // r0
  int v9; // r0
  int v10; // r7
  int v11; // r2
  int v13; // [sp+4h] [bp-10054h]
  void *v14; // [sp+8h] [bp-10050h]
  char *v15; // [sp+Ch] [bp-1004Ch]
  int (__fastcall *v16)(int, _BYTE *, int); // [sp+10h] [bp-10048h]
  int (__fastcall *v17)(int, _BYTE *, int); // [sp+14h] [bp-10044h]
  char v18; // [sp+18h] [bp-10040h] BYREF
  _DWORD v19[14]; // [sp+1Ch] [bp-1003Ch] BYREF
  _BYTE v20[32768]; // [sp+54h] [bp-10004h] BYREF
  _BYTE v21[32772]; // [sp+8054h] [bp-8004h] BYREF

  v16 = a3;
  v17 = a2;
  v14 = &_stack_chk_guard;
  v15 = &v18;
  memset(v19, 0, sizeof(v19));
  v19[4] = 0x8000;
  v19[3] = v20;
  v13 = 0;
  v6 = sub_856D0(v19, 0xFFFFFFFF, "1.3.1", 56);
  if ( !v6 )
  {
    v7 = 0x8000;
    while ( 1 )
    {
      v8 = v19[1];
      if ( v7 >= 1 && !v19[1] )
      {
        v8 = v17(a1, v21, 0x8000);
        v6 = -777;
        if ( v8 < 0 )
          break;
        v19[1] = v8;
        v19[0] = v21;
        v7 = v8;
      }
      if ( !v19[4] )
      {
        if ( v16(a1, v20, 0x8000) != 0x8000 )
        {
          v6 = -778;
          break;
        }
        v19[4] = 0x8000;
        v19[3] = v20;
        v8 = v19[1];
      }
      sub_865F0((int)v19, 4 * (v8 == 0), v4, v5, v13, (int)v14, (int)v15, (int)v16, (int)v17);
      if ( v9 )
      {
        v6 = v9;
        break;
      }
    }
  }
  sub_858EC(v19);
  if ( (_BYTE *)v19[3] != v20 )
  {
    v10 = v19[3] - (_DWORD)v20;
    if ( v16(a1, v20, v19[3] - (_DWORD)v20) != v10 )
      v6 = -778;
  }
  v11 = v13;
  if ( v6 < 0 )
    return -v6;
  return v11;
}
// 7A7E6: conditional instruction was optimized away because r5.4!=0
// 7A77A: variable 'v17' is possibly undefined
// 7A79C: variable 'v16' is possibly undefined
// 7A7B4: variable 'v4' is possibly undefined
// 7A7B4: variable 'v5' is possibly undefined
// 7A7B4: variable 'v13' is possibly undefined
// 7A7B4: variable 'v14' is possibly undefined
// 7A7B4: variable 'v15' is possibly undefined
// 7A7BA: variable 'v9' is possibly undefined
