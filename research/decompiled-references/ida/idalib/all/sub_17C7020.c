__int64 __fastcall sub_17C7020(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v9; // al
  unsigned __int64 *v10; // rdx
  unsigned __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax
  bool v15; // r14
  __int64 *v16; // rsi
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  __int64 v24; // rax
  _QWORD *v25; // rax
  unsigned int v26; // edx
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v31[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v33; // [rsp+40h] [rbp-A8h] BYREF
  char v34; // [rsp+98h] [rbp-50h]
  unsigned int v35; // [rsp+A0h] [rbp-48h]
  char v36; // [rsp+A4h] [rbp-44h]

  v9 = *(_BYTE *)(a2 + 28);
  v28 = 0;
  if ( (v9 & 0x7Fu) - 64 > 2 )
  {
    v18 = *(_QWORD *)(a2 + 48);
    if ( v18 )
      v11 = v18 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v11 = sub_A7AA70(*(_QWORD *)(a1 + 248), a2, a3, a4, a5, a6);
  }
  else
  {
    v10 = (unsigned __int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
      v11 = v10[1];
    else
      v11 = *v10;
  }
  v28 = v11;
  v12 = (__int64 *)(*(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a3 + 80) & 4) != 0 )
    v13 = v12[1];
  else
    v13 = *v12;
  v29 = v13;
  if ( (*(_BYTE *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0 )
  {
    v15 = (*(_BYTE *)(a2 + 28) & 0x7F) == 65;
    sub_168B9F0((__int64)v31, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x132Fu, 0);
    if ( v34 )
    {
      sub_AE9DF0(&v33, v15, 2u);
    }
    else if ( v36 )
    {
      v23 = sub_168B9E0(v31);
      v24 = v32;
      if ( v32 )
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
      v30 = v24;
      v25 = sub_1587BC0(v23, &v30, v19, v20, v21, v22);
      sub_AE9DF0((unsigned __int8 **)(*v25 + 32LL * v35 + 8), v15, 2u);
    }
    v16 = &v29;
    v17 = v31;
  }
  else
  {
    result = 0;
    if ( v13 == v28 )
      return result;
    result = *(_BYTE *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8;
    if ( *(_BYTE *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4
       | *(_BYTE *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4 )
    {
      return result;
    }
    result = 0;
    if ( (*(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v28) & 7) == (*(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v13) & 7) )
      return result;
    v26 = *(_DWORD *)(a3 + 24);
    LODWORD(v30) = (*(_BYTE *)(a2 + 28) & 0x7F) == 65;
    sub_168B9F0((__int64)v31, (__int64 *)(a1 + 8), v26, 0x132Bu, 0);
    v27 = sub_16CF4F0((__int64)v31, (int *)&v30);
    v16 = (__int64 *)&v28;
    v17 = (_QWORD *)sub_1605D30(v27, &v29);
  }
  sub_1605D30((__int64)v17, v16);
  sub_15F7200(v31);
  if ( *(_DWORD *)(a2 + 24) )
    sub_17AE800(a1, a2, *(_DWORD *)(a3 + 24));
  sub_B88650(a3, 1);
  return 1;
}
