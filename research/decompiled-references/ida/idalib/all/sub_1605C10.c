__m128i *__fastcall sub_1605C10(__int64 a1, unsigned int a2, _BYTE *a3, signed __int64 a4)
{
  __m128i *v6; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v16[16]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v18; // [rsp+30h] [rbp-A8h] BYREF
  char v19; // [rsp+88h] [rbp-50h]
  unsigned int v20; // [rsp+90h] [rbp-48h]
  char v21; // [rsp+94h] [rbp-44h]

  if ( *(_BYTE *)(a1 + 568) )
  {
    v6 = *(__m128i **)(a1 + 560);
    if ( v6 )
      return v6;
  }
  else
  {
    v6 = sub_15F3DD0(a1);
    if ( v6 )
      return v6;
  }
  if ( !*(_BYTE *)(a1 + 576) )
  {
    sub_168B9F0(v16, a1 + 8, a2, 7110, 0);
    if ( v19 )
    {
      sub_AEC220(&v18, a3, a4);
    }
    else if ( v21 )
    {
      v12 = sub_168B9E0(v16);
      v13 = v17;
      if ( v17 )
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 32LL))(v17);
      v15 = v13;
      v14 = sub_1587BC0(v12, &v15, v8, v9, v10, v11);
      sub_AEC220((unsigned __int8 **)(*v14 + 32LL * v20 + 8), a3, a4);
    }
    sub_15F7200(v16);
    *(_BYTE *)(a1 + 576) = 1;
  }
  return v6;
}
