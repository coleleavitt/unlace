unsigned __int64 __fastcall sub_1E6FFC0(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int v7; // eax
  unsigned __int64 result; // rax
  __int64 v10; // r12
  char v11; // dl
  __int64 v12; // r8
  __int64 v13; // rsi
  size_t v14; // rax
  __int64 *v15; // rsi
  unsigned int v16; // ecx
  size_t v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30[2]; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v31; // [rsp+18h] [rbp-E0h] BYREF
  void *v32; // [rsp+20h] [rbp-D8h] BYREF
  signed __int64 v33; // [rsp+28h] [rbp-D0h]
  _BYTE v34[16]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v35[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-A8h]
  unsigned __int8 *v37; // [rsp+60h] [rbp-98h] BYREF
  char v38; // [rsp+B8h] [rbp-40h]
  unsigned int v39; // [rsp+C0h] [rbp-38h]
  char v40; // [rsp+C4h] [rbp-34h]

  v30[0] = a2;
  v7 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL);
  if ( (unsigned int)(v7 - 43) <= 1 )
  {
    sub_168B9F0((__int64)v35, a1 + 1, a3, 0xF5Du, 0);
    v31 = a4;
    if ( a4 )
    {
      sub_B86A00((__int64)&v32, &v31);
      if ( !v38 )
        goto LABEL_4;
    }
    else
    {
      v32 = v34;
      v14 = j__strlen("type name");
      sub_1E5E4B0(&v32, "type name", (__int64)&aTypeName[v14]);
      if ( !v38 )
      {
LABEL_4:
        if ( v40 )
        {
          v20 = sub_168B9E0(v35);
          v23 = v36;
          if ( v36 )
            v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36);
          v31 = v23;
          v24 = sub_1587BC0(v20, &v31, v18, v19, v21, v22);
          sub_AEC220((unsigned __int8 **)(*v24 + 32LL * v39 + 8), v32, v33);
        }
        goto LABEL_5;
      }
    }
    sub_AEC220(&v37, v32, v33);
LABEL_5:
    sub_1605D30((__int64)v35, v30);
    if ( v32 != v34 )
      operator delete(v32);
    goto LABEL_7;
  }
  v10 = a1[29];
  if ( (unsigned int)(v7 - 25) <= 1 && (*(_BYTE *)(v10 + 47) & 0x20) != 0 )
  {
    v17 = j__strlen("__cl_clang_function_pointers");
    if ( !sub_FF8450((__int64)(a1 + 25), (__int64)"__cl_clang_function_pointers", v17, v10) )
    {
      v15 = a1 + 1;
      v16 = 4683;
      goto LABEL_19;
    }
    v10 = a1[29];
  }
  if ( (*(_BYTE *)(v10 + 89) & 1) != 0 && a3 )
  {
    v15 = a1 + 1;
    v16 = 3912;
LABEL_19:
    sub_168B9F0((__int64)v35, v15, a3, v16, 0);
    LODWORD(v32) = 0;
    sub_1587D10((__int64)v35, (int *)&v32);
LABEL_7:
    sub_15F7200(v35);
    return 0;
  }
  v11 = sub_1E6FC20((__int64)a1, v30[0], a3, 1, a5);
  result = 0;
  if ( !v11 )
  {
    v13 = v30[0];
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 35 <= 1 )
      return sub_A74EC0(a1[31], v30[0]);
    v25 = a1[29];
    if ( (*(_BYTE *)(v25 + 107) & 4) != 0 )
    {
      v30[0] = sub_1E62FD0((__int64)a1, v30[0], a3, 0, v12);
      v25 = a1[29];
    }
    if ( (*(_BYTE *)(v25 + 47) & 0x20) != 0 )
    {
      v13 = v30[0];
      v30[0] = sub_1E5D3C0((__int64)a1, v30[0]);
    }
    v26 = a1[31];
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v26 + 17448) + 248LL) - 55) <= 1 )
    {
      if ( sub_F65EB0(v30) )
      {
        v15 = a1 + 1;
        v16 = 5468;
        goto LABEL_19;
      }
      v29 = sub_F63050(*(_QWORD *)(v30[0] & 0xFFFFFFFFFFFFFFF0LL), v13, v27, v28);
      if ( sub_F65F60(v29) )
      {
        v15 = a1 + 1;
        v16 = 5478;
        goto LABEL_19;
      }
      v26 = a1[31];
    }
    return sub_A70010(v26, v30[0]);
  }
  return result;
}
