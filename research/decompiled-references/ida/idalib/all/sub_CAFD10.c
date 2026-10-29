__int64 __fastcall sub_CAFD10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  int v7; // eax
  void *v8; // rcx
  int v9; // r12d
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  bool v12; // bl
  void *v13; // rax
  __int64 v14; // [rsp+8h] [rbp-80h] BYREF
  void *v15; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-70h]
  void *v17; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-60h]
  void *v19; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-50h]
  void *v21; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-40h]
  bool v23; // [rsp+4Ch] [rbp-3Ch]
  int v24; // [rsp+50h] [rbp-38h]

  v4 = *(unsigned __int8 *)(a1 + 584);
  if ( (_BYTE)v4 )
    return v4;
  v7 = sub_AAE100(**(_QWORD **)(a1 + 488), *(_QWORD *)(a2 + 8), a3, a4);
  v8 = *(void **)(a2 + 16);
  v9 = v7;
  v10 = *(unsigned int *)(a2 + 24);
  v11 = (unsigned __int64)(v10 + 63) >> 6;
  if ( v11 > 1 )
  {
    sub_2205610(&v15, v10, v11, v8);
    LODWORD(v10) = v16;
  }
  else
  {
    v16 = v10;
    if ( (unsigned int)v10 <= 0x40 )
    {
      v15 = v8;
      v14 = a2 | 4;
      v18 = v10;
LABEL_6:
      v12 = (v9 & 0x20000000) == 0;
      v17 = v15;
      goto LABEL_7;
    }
    sub_2205470(&v15, v8, 0);
    LODWORD(v10) = v16;
  }
  v18 = v10;
  v14 = a2 | 4;
  if ( (unsigned int)v10 <= 0x40 )
    goto LABEL_6;
  sub_2205510(&v17);
  LODWORD(v10) = v18;
  v12 = (v9 & 0x20000000) == 0;
  v20 = v18;
  if ( v18 > 0x40 )
  {
    sub_2205510(&v19);
    LODWORD(v10) = v20;
    v13 = v19;
    goto LABEL_8;
  }
LABEL_7:
  v13 = v17;
LABEL_8:
  v22 = v10;
  v24 = v9;
  v21 = v13;
  v23 = v12;
  v4 = sub_CA8770(a1, (__int64)&v21, &v14);
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  if ( v16 <= 0x40 || !v15 )
    return v4;
  operator delete[](v15);
  return v4;
}
