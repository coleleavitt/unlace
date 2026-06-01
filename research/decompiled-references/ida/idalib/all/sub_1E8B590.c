__int64 __fastcall sub_1E8B590(__int64 a1, __int64 *a2, unsigned __int16 a3, __m128 a4)
{
  __int64 result; // rax
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r12
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v22[2]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v23[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+30h] [rbp-98h]
  unsigned __int8 *v25[11]; // [rsp+40h] [rbp-88h] BYREF
  char v26; // [rsp+98h] [rbp-30h]
  unsigned int v27; // [rsp+A0h] [rbp-28h]
  char v28; // [rsp+A4h] [rbp-24h]

  result = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 6 )
  {
    v22[0] = *a2;
    v22[1] = (__int64)(a2 + 1);
    v6 = sub_F6CCB0(v22, a4);
    sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), v6, 0x154Cu, 0);
    if ( v26 )
    {
      sub_AE9DF0(v25, 1, 2u);
    }
    else
    {
      if ( !v28 )
      {
LABEL_4:
        sub_15F7200(v23);
        return 1;
      }
      v11 = sub_168B9E0(v23);
      v12 = v24;
      if ( v24 )
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
      v21 = v12;
      v13 = sub_1587BC0(v11, &v21, v7, v8, v9, v10);
      sub_AE9DF0((unsigned __int8 **)(*v13 + 32LL * v27 + 8), 1, 2u);
    }
    if ( !v26 )
    {
      if ( v28 )
      {
        v18 = sub_168B9E0(v23);
        v19 = v24;
        if ( v24 )
          v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
        v21 = v19;
        v20 = sub_1587BC0(v18, &v21, v14, v15, v16, v17);
        sub_AE9DF0((unsigned __int8 **)(*v20 + 32LL * v27 + 8), a3, 4u);
      }
      goto LABEL_4;
    }
    sub_AE9DF0(v25, a3, 4u);
    sub_15F7200(v23);
    return 1;
  }
  return result;
}
