__int64 __fastcall sub_1E6CDD0(__int64 a1, __int64 a2, __int64 a3, double a4, __int64 a5, __int64 a6, __int64 a7)
{
  _DWORD *v8; // rbp
  unsigned int v10; // r14d
  __int64 v11; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r14
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+10h] [rbp-C8h] BYREF
  unsigned int v30; // [rsp+18h] [rbp-C0h]
  char v31; // [rsp+1Ch] [rbp-BCh]
  __int64 v32; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v33[11]; // [rsp+30h] [rbp-A8h] BYREF
  char v34; // [rsp+88h] [rbp-50h]
  unsigned int v35; // [rsp+90h] [rbp-48h]
  char v36; // [rsp+94h] [rbp-44h]

  v8 = (_DWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*v8 & 0x10000) != 0 )
  {
LABEL_4:
    v11 = a1 + 8;
    sub_168B9F0((__int64)&v29, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0xC57u, 0);
    if ( v34 )
    {
      v11 = a2;
      sub_AE9DF0(v33, a2, 0x10u);
      if ( !v34 )
        goto LABEL_13;
    }
    else
    {
      if ( !v36 )
      {
LABEL_6:
        v10 = 0;
        v28 = sub_EEC8C0((unsigned __int64)v8, v11, a4);
        sub_1587DB0((__int64)&v29, &v28);
        sub_15F7200(&v29);
        *(_BYTE *)(a2 + 58) |= 1u;
        return v10;
      }
      v17 = sub_168B9E0(&v29);
      v18 = v32;
      if ( v32 )
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
      v28 = v18;
      v19 = sub_1587BC0(v17, &v28, v13, v14, v15, v16);
      v11 = a2;
      sub_AE9DF0((unsigned __int8 **)(*v19 + 32LL * v35 + 8), a2, 0x10u);
      if ( !v34 )
      {
LABEL_13:
        if ( v36 )
        {
          v24 = sub_168B9E0(&v29);
          v25 = v32;
          if ( v32 )
            v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 32LL))(v32);
          v28 = v25;
          v26 = sub_1587BC0(v24, &v28, v20, v21, v22, v23);
          v11 = 1;
          sub_1E5E160((unsigned __int8 **)(*v26 + 32LL * v35 + 8), 1);
        }
        goto LABEL_6;
      }
    }
    v11 = 1;
    sub_1E5E160(v33, 1);
    goto LABEL_6;
  }
  sub_C3EB00((__int64)&v29, *(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFFCLL, *(_QWORD *)(a1 + 248), nullptr, a6, a7);
  v10 = (unsigned __int8)v32;
  if ( !(_BYTE)v32 )
  {
    sub_98E4B0((__int64)&v29);
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a3 + 8) <= 0x40u && v30 <= 0x40 )
  {
    v27 = v29;
    *(_DWORD *)(a3 + 8) = v30;
    *(_QWORD *)a3 = v27;
  }
  else
  {
    sub_22056A0(a3, &v29);
  }
  *(_BYTE *)(a3 + 12) = v31;
  sub_98E4B0((__int64)&v29);
  return v10;
}
