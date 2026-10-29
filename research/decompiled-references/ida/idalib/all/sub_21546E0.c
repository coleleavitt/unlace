__int64 __fastcall sub_21546E0(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // r12
  _DWORD **v4; // rdi
  _QWORD *v5; // rdi
  __int64 v6; // r13
  _QWORD *v7; // rdi
  unsigned int v8; // ebp
  __int64 v9; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  void (__fastcall *v16)(__int64, unsigned __int64, unsigned __int64, __int64); // r14
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r13
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-A8h]
  __int64 v24; // [rsp+8h] [rbp-A0h]
  __int64 v25; // [rsp+18h] [rbp-90h] BYREF
  void **v26; // [rsp+20h] [rbp-88h] BYREF
  __int64 v27; // [rsp+28h] [rbp-80h]
  void **v28; // [rsp+30h] [rbp-78h] BYREF
  __int64 v29; // [rsp+38h] [rbp-70h]
  void **v30; // [rsp+40h] [rbp-68h] BYREF
  __int64 v31; // [rsp+48h] [rbp-60h]
  __int16 v32; // [rsp+60h] [rbp-48h]

  v2 = *(_QWORD **)(a1 + 8);
  v26 = nullptr;
  v27 = 0;
  v3 = v2[23];
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void ***))(*v2 + 160LL))(v2, &v26) )
    goto LABEL_11;
  v4 = *(_DWORD ***)(a1 + 8);
  if ( *v4[6] != 26 )
  {
LABEL_8:
    v30 = (void **)"expected a comma";
    v32 = 259;
    return (unsigned int)sub_21543E0((__int64)v4, (__int64)&v30, 0, 0);
  }
  (*((void (__fastcall **)(_DWORD **))*v4 + 19))(v4);
  v5 = *(_QWORD **)(a1 + 8);
  v28 = nullptr;
  v29 = 0;
  v6 = v5[23];
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void ***))(*v5 + 160LL))(v5, &v28) )
  {
LABEL_11:
    v4 = *(_DWORD ***)(a1 + 8);
    v30 = (void **)"expected identifier in directive";
    v32 = 259;
    return (unsigned int)sub_21543E0((__int64)v4, (__int64)&v30, 0, 0);
  }
  v4 = *(_DWORD ***)(a1 + 8);
  if ( *v4[6] != 26 )
    goto LABEL_8;
  (*((void (__fastcall **)(_DWORD **))*v4 + 19))(v4);
  v7 = *(_QWORD **)(a1 + 8);
  v32 = 259;
  v30 = (void **)"expected integer";
  v8 = sub_2154400(v7, &v25, (__int64)&v30);
  if ( !(_BYTE)v8 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    if ( **(_DWORD **)(v9 + 48) == 9 )
    {
      v11 = *(_QWORD *)(v9 + 16);
      v32 = 261;
      v30 = v26;
      v31 = v27;
      v24 = sub_21093A0(v11, &v30);
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      v32 = 261;
      v30 = v28;
      v31 = v29;
      v13 = sub_21093A0(v12, &v30);
      v14 = *(_QWORD *)(a1 + 8);
      v15 = *(_QWORD *)(v14 + 24);
      v16 = *(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)v15 + 1192LL);
      v23 = v25;
      v19 = sub_210EA90(v13, 0, *(_QWORD **)(v14 + 16), v6, v17, v18);
      v22 = sub_210EA90(v24, 0, *(_QWORD **)(*(_QWORD *)(a1 + 8) + 16LL), v3, v20, v21);
      v16(v15, v22, v19, v23);
    }
    else
    {
      v32 = 259;
      v30 = (void **)"unexpected token in directive";
      return (unsigned int)sub_21543E0(v9, (__int64)&v30, 0, 0);
    }
  }
  return v8;
}
