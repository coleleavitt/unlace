__int64 __fastcall sub_D3E980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v7; // al
  unsigned int v8; // ebp
  void *v9; // r15
  char v10; // bl
  char v11; // bl
  __int64 result; // rax
  unsigned __int8 v13; // [rsp+Fh] [rbp-E9h]
  char v14; // [rsp+1Fh] [rbp-D9h] BYREF
  void *v15; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-D0h]
  char v17; // [rsp+2Ch] [rbp-CCh]
  int v18; // [rsp+30h] [rbp-C8h]
  void *v19; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-B0h]
  char v21; // [rsp+4Ch] [rbp-ACh]
  int v22; // [rsp+50h] [rbp-A8h]
  void *v23; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v24; // [rsp+68h] [rbp-90h]
  char v25; // [rsp+6Ch] [rbp-8Ch]
  int v26; // [rsp+70h] [rbp-88h]
  int v27; // [rsp+90h] [rbp-68h]
  void *v28; // [rsp+A0h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+A8h] [rbp-50h]
  char v30; // [rsp+ACh] [rbp-4Ch]
  int v31; // [rsp+B0h] [rbp-48h]

  sub_CFE920((__int64)&v15);
  v24 = *(_DWORD *)(a5 + 8);
  if ( v24 > 0x40 )
    sub_2205510(&v23);
  else
    v23 = *(void **)a5;
  v25 = *(_BYTE *)(a5 + 12);
  v26 = *(_DWORD *)(a5 + 16);
  v20 = *(_DWORD *)(a4 + 8);
  if ( v20 > 0x40 )
    sub_2205510(&v19);
  else
    v19 = *(void **)a4;
  v7 = *(_BYTE *)(a4 + 12);
  v14 = 0;
  v21 = v7;
  v22 = *(_DWORD *)(a4 + 16);
  sub_21EF830(&v28, &v19, &v23, &v14);
  v8 = v29;
  v9 = v28;
  v29 = 0;
  v10 = v30;
  v27 = v31;
  if ( v16 > 0x40 && v15 )
  {
    operator delete[](v15);
    v15 = v9;
    v16 = v8;
    v17 = v10;
    v18 = v27;
    if ( v29 > 0x40 && v28 )
    {
      operator delete[](v28);
      v11 = v14;
      if ( v20 <= 0x40 )
        goto LABEL_10;
      goto LABEL_21;
    }
  }
  else
  {
    v15 = v28;
    v16 = v8;
    v17 = v30;
    v18 = v31;
  }
  v11 = v14;
  if ( v20 <= 0x40 )
    goto LABEL_10;
LABEL_21:
  if ( v19 )
    operator delete[](v19);
LABEL_10:
  if ( v24 > 0x40 && v23 )
    operator delete[](v23);
  sub_D0BA90(*(_QWORD *)(a1 + 176), (__int64)&v15);
  if ( v11 )
    result = sub_DF81A0(a1, a2, &v15);
  else
    result = 1;
  if ( v16 > 0x40 )
  {
    if ( v15 )
    {
      v13 = result;
      operator delete[](v15);
      return v13;
    }
  }
  return result;
}
