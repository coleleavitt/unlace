/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140046660
// Address: 0x0000000140046660

//----- (0000000140046660) ----------------------------------------------------
char __fastcall sub_140046660(__int64 *a1)
{
  __int64 v2; // rbx
  struct _exception *v3; // rbx
  _QWORD *v4; // rax
  char v5; // bl
  int v6; // r8d
  int v7; // ecx
  bool v8; // al
  void *v10; // [rsp+30h] [rbp-D0h] BYREF
  void *Block[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B8h]
  _QWORD v13[3]; // [rsp+50h] [rbp-B0h] BYREF
  char v14; // [rsp+68h] [rbp-98h]
  void **v15; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall **v16)(); // [rsp+80h] [rbp-80h] BYREF
  void *v17; // [rsp+88h] [rbp-78h]
  __int128 v18; // [rsp+90h] [rbp-70h]
  int v19; // [rsp+C8h] [rbp-38h]
  __int16 v20; // [rsp+CCh] [rbp-34h]
  unsigned __int16 v21; // [rsp+CEh] [rbp-32h]
  unsigned __int16 v22; // [rsp+DCh] [rbp-24h]
  __int16 v23; // [rsp+DEh] [rbp-22h]
  int v24; // [rsp+2D0h] [rbp+1D0h]

  v2 = *a1;
  if ( !*a1 || *(_DWORD *)(v2 + 8) != 1 )
  {
    sub_140002CE0((struct __crt_locale_pointers *)"Input source is not local file.\n");
    return 0;
  }
  if ( *(_QWORD *)(v2 + 24) )
    v3 = *(struct _exception **)(v2 + 16);
  else
    v3 = (struct _exception *)Str1;
  v4 = sub_1400639D0(v3, 0);
  v10 = v4;
  if ( !v4 )
  {
    sub_140002CE0((struct __crt_locale_pointers *)"Cannot open file: %s.\n", (const char *)v3);
    return 0;
  }
  v15 = &v10;
  v16 = &off_140092F30;
  v17 = nullptr;
  v18 = 0;
  if ( sub_140019860((__int64)&v16, (__int64)v4, 1, 1) )
  {
    sub_14004D360((__int64)(a1 + 13));
    *(_OWORD *)Block = 0;
    v12 = 0;
    sub_14004D3D0((__int64)&v16, Block, (__int64)v10);
    v13[0] = off_140097440;
    v13[1] = a1;
    v13[2] = Block;
    v14 = 0;
    if ( v19 == 23126 )
      v6 = v24 + 40;
    else
      v6 = v22 + v24 + 24;
    sub_1400190C0((__int64)&v16, (__int64)v10, v6, v21, (__int64)v13);
    v7 = v23 & 0x8000;
    v8 = v20 == -31132 || v20 == 512 || v20 == -21916;
    *((_BYTE *)a1 + 168) = v8;
    *((_BYTE *)a1 + 169) = v7 != 0;
    v5 = v14;
    v13[0] = off_140092F00;
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
      Block[0] = nullptr;
      v12 = 0;
    }
  }
  else
  {
    sub_140002CE0((struct __crt_locale_pointers *)"Failed to read PE header from: %s\n", (const char *)v3);
    v5 = 0;
  }
  v16 = &off_140092F30;
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    j_free(v17);
    v17 = nullptr;
    *((_QWORD *)&v18 + 1) = 0;
  }
  sub_140063970(v10);
  return v5;
}
// 140092F00: using guessed type __int64 (__fastcall *off_140092F00[4])();
// 140092F30: using guessed type __int64 (__fastcall *off_140092F30)();
// 140097440: using guessed type __int64 (__fastcall *off_140097440[3])();
