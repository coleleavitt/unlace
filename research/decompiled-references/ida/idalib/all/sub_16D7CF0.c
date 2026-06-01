__int64 __fastcall sub_16D7CF0(__int64 a1, unsigned __int64 a2, int a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 *v5; // rax
  int v6; // r8d
  unsigned __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r12
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v23[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v25; // [rsp+30h] [rbp-98h] BYREF
  char v26; // [rsp+88h] [rbp-40h]
  unsigned int v27; // [rsp+90h] [rbp-38h]
  char v28; // [rsp+94h] [rbp-34h]

  result = 0;
  if ( *(_DWORD *)(a1 + 12596) >= *(_DWORD *)(a1 + 11320) )
  {
    v5 = *(__int64 **)(a1 + 608);
    if ( !v5 )
      goto LABEL_9;
    while ( 1 )
    {
      v6 = *((_DWORD *)v5 + 2);
      if ( (v6 & 0x100000) != 0 )
        break;
      v5 = (__int64 *)*v5;
      if ( !v5 )
        goto LABEL_9;
    }
    if ( (a3 & v6) != 0 )
    {
      return 0;
    }
    else
    {
LABEL_9:
      v8 = sub_BFD550(*(_QWORD *)(a2 + 32));
      v12 = sub_C00A40(a2, a2, v9, v10, v11);
      sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), v12, a4, 0);
      v13 = 0;
      if ( (*(_QWORD *)(*(_QWORD *)(v8 + 16) + 40LL) & 7) == 0 )
        v13 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 40LL) & 0xFFFFFFFFFFFFFFF8LL;
      v14 = v13;
      if ( v26 )
      {
        sub_AE9DF0(&v25, v13, 5u);
      }
      else if ( v28 )
      {
        v19 = sub_168B9E0(v23);
        v20 = v24;
        if ( v24 )
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
        v22 = v20;
        v21 = sub_1587BC0(v19, &v22, v15, v16, v17, v18);
        sub_AE9DF0((unsigned __int8 **)(*v21 + 32LL * v27 + 8), v14, 5u);
      }
      sub_15F7200(v23);
      return 1;
    }
  }
  return result;
}
