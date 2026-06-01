__int64 __fastcall sub_1C45090(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, double a5)
{
  __int64 *v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  bool v15; // r14
  __int64 *v16; // r13
  unsigned int v17; // eax
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r12
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r15
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v42[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v44[11]; // [rsp+30h] [rbp-A8h] BYREF
  char v45; // [rsp+88h] [rbp-50h]
  unsigned int v46; // [rsp+90h] [rbp-48h]
  char v47; // [rsp+94h] [rbp-44h]

  if ( (*(_BYTE *)(a2 + 28) & 0x7D) == 0x24 )
  {
    v7 = (__int64 *)(*(_QWORD *)a1 + 8LL);
    v8 = sub_EEB7E0(*(_QWORD *)(a1 + 8), a2, a5);
    sub_168B9F0((__int64)v42, v7, v8, 0x1098u, 0);
    if ( v45 )
    {
      sub_1C2FE50(v44, a4);
    }
    else
    {
      if ( !v47 )
        goto LABEL_4;
      v24 = sub_168B9E0(v42);
      v25 = v43;
      if ( v43 )
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
      v41 = v25;
      v26 = sub_1587BC0(v24, &v41, v20, v21, v22, v23);
      sub_1C2FE50((unsigned __int8 **)(*v26 + 32LL * v46 + 8), a4);
    }
    v15 = (*(_BYTE *)(a2 + 28) & 0x7F) == 36;
    if ( v45 )
    {
      sub_1C2FE50(v44, v15);
      sub_15F7200(v42);
      if ( !a4 )
        goto LABEL_5;
      goto LABEL_16;
    }
    if ( v47 )
    {
      v38 = sub_168B9E0(v42);
      v39 = v43;
      if ( v43 )
        v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
      v41 = v39;
      v40 = sub_1587BC0(v38, &v41, v34, v35, v36, v37);
      sub_1C2FE50((unsigned __int8 **)(*v40 + 32LL * v46 + 8), v15);
    }
LABEL_4:
    sub_15F7200(v42);
    if ( !a4 )
    {
LABEL_5:
      v9 = a1 + 16;
      sub_168B9F0((__int64)v42, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(a1 + 40), 0x18ECu, 0);
      if ( v45 )
      {
        sub_AE9DF0(v44, v9, 0xEu);
      }
      else if ( v47 )
      {
        v31 = sub_168B9E0(v42);
        v32 = v43;
        if ( v43 )
          v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
        v41 = v32;
        v33 = sub_1587BC0(v31, &v41, v27, v28, v29, v30);
        sub_AE9DF0((unsigned __int8 **)(*v33 + 32LL * v46 + 8), v9, 0xEu);
      }
      sub_15F7200(v42);
      return 0;
    }
LABEL_16:
    v16 = (__int64 *)(*(_QWORD *)a1 + 8LL);
    v17 = sub_B73090(a2);
    sub_168B9F0((__int64)v42, v16, v17, 0x17D6u, 0);
    LOBYTE(v41) = (*(_BYTE *)(a2 + 28) & 0x7F) == 36;
    sub_1588420((__int64)v42, (unsigned __int8 *)&v41);
    sub_15F7200(v42);
    goto LABEL_5;
  }
  if ( sub_B979F0((_QWORD *)a2) )
  {
    *(_DWORD *)a3 = 1;
  }
  else
  {
    v18 = sub_B987D0((_QWORD *)a2, a2);
    v19 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v19 + 16) - 43 <= 1
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
      && (v19 = sub_F63050(v19, a2, v12, v13)) != 0 )
    {
      while ( (*(_BYTE *)(v19 + 18) & 0x10) != 0 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v19 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v19 + 16) - 43 > 1 )
          v19 = sub_F63050(v19, a2, v12, v13);
      }
      v18 = *(_QWORD *)(v19 + 32);
    }
    *(_QWORD *)(a3 + 8) = v18;
    *(_DWORD *)a3 = 2;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v14 + 16) != 26 )
    v14 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v12, v13);
  *(_QWORD *)(a3 + 16) = v14;
  return 1;
}
