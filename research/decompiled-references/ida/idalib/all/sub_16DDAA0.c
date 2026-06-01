__int64 __fastcall sub_16DDAA0(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+14h] [rbp-C4h] BYREF
  char v20; // [rsp+1Ch] [rbp-BCh]
  _QWORD v21[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+30h] [rbp-A8h]
  __int64 v23[11]; // [rsp+40h] [rbp-98h] BYREF
  char v24; // [rsp+98h] [rbp-40h]
  unsigned int v25; // [rsp+A0h] [rbp-38h]
  char v26; // [rsp+A4h] [rbp-34h]

  v3 = sub_EEC8C0(a2, a2, a3);
  v7 = sub_C00A40(a2, a2, v4, v5, v6);
  v8 = 0;
  if ( *(char *)(*(_QWORD *)(a1 + 232) + 15LL) >= 0 )
  {
    sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), v7, 0x1307u, 0);
    if ( v24 )
    {
      v19 = v3;
      v20 = 1;
      sub_AEC610(v23, &v19);
    }
    else if ( v26 )
    {
      v12 = sub_168B9E0(v21);
      v15 = v22;
      if ( v22 )
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
      v18 = v15;
      v16 = sub_1587BC0(v12, &v18, v10, v11, v13, v14);
      v17 = *v16 + 32LL * v25;
      v19 = v3;
      v20 = 1;
      sub_AEC610((__int64 *)(v17 + 8), &v19);
    }
    sub_15F7200(v21);
    return 1;
  }
  return v8;
}
