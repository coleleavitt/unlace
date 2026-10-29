__int64 __fastcall sub_1789140(__int64 a1, unsigned int a2, _BYTE *a3, signed __int64 a4)
{
  _DWORD *v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // r12d
  __int64 *v10; // rax
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r12
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r14
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v27[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v29[11]; // [rsp+30h] [rbp-98h] BYREF
  char v30; // [rsp+88h] [rbp-40h]
  unsigned int v31; // [rsp+90h] [rbp-38h]
  char v32; // [rsp+94h] [rbp-34h]

  v7 = *(_QWORD *)(a1 + 4616);
  v6 = (_DWORD *)(v7 + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  LOBYTE(v7) = *v6 <= 1u || *v6 == 3;
  if ( (_BYTE)v7 || (unsigned int)(v6[148] - 3) > 1 )
  {
    sub_168B9F0((__int64)v27, (__int64 *)(a1 + 8), a2, 0xDCDu, 0);
    if ( v30 )
    {
      sub_AEC220(v29, a3, a4);
    }
    else if ( v32 )
    {
      v16 = sub_168B9E0(v27);
      v17 = v28;
      if ( v28 )
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
      v26 = v17;
      v18 = sub_1587BC0(v16, &v26, v12, v13, v14, v15);
      sub_AEC220((unsigned __int8 **)(*v18 + 32LL * v31 + 8), a3, a4);
    }
    v8 = 0;
    sub_15F7200(v27);
  }
  else
  {
    v10 = *(__int64 **)(a1 + 608);
    if ( v10 && (v8 = v7, v11 = *((_DWORD *)v10 + 2), (v11 & 1) == 0) )
    {
      while ( (v11 & 0x1000000) == 0 )
      {
        v10 = (__int64 *)*v10;
        if ( v10 )
        {
          v11 = *((_DWORD *)v10 + 2);
          if ( (v11 & 1) == 0 )
            continue;
        }
        return 1;
      }
      sub_168B9F0((__int64)v27, (__int64 *)(a1 + 8), a2, 0xDD0u, 0);
      if ( v30 )
      {
        sub_AEC220(v29, a3, a4);
      }
      else if ( v32 )
      {
        v23 = sub_168B9E0(v27);
        v24 = v28;
        if ( v28 )
          v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
        v26 = v24;
        v25 = sub_1587BC0(v23, &v26, v19, v20, v21, v22);
        sub_AEC220((unsigned __int8 **)(*v25 + 32LL * v31 + 8), a3, a4);
      }
      sub_15F7200(v27);
    }
    else
    {
      return 1;
    }
  }
  return v8;
}
