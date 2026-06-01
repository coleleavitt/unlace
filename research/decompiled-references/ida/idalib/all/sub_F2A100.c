__int64 __fastcall sub_F2A100(__int64 a1, unsigned int *a2)
{
  char v3; // r15
  __int64 v4; // r14
  __int64 v5; // rax
  size_t v6; // rdx
  size_t v7; // r12
  char *v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // [rsp+8h] [rbp-70h]
  char *v13; // [rsp+10h] [rbp-68h] BYREF
  __int64 v14; // [rsp+18h] [rbp-60h]
  void *v15[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF

  v3 = *(_BYTE *)(a1 + 1104);
  v4 = *(_QWORD *)(a1 + 1096);
  if ( a2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v4 + 24LL))(*(_QWORD *)(a1 + 1096), 4, 1, 0);
    v5 = sub_20EB760(a2[2], 0);
    v7 = v6;
    v8 = (char *)v5;
    v12 = sub_995540(*(_QWORD *)(a1 + 1096), "OMP");
    if ( v7 )
    {
      --v7;
      v13 = v8++;
      v14 = 1;
    }
    else
    {
      v13 = v8;
      v14 = 0;
    }
    sub_2246780(v15, &v13);
    v9 = sub_227BF10(v12, v15[0], v15[1]);
    v10 = sub_9954E0(v9, v8, v7);
    sub_995540(v10, "Clause");
    if ( v15[0] != &v16 )
      operator delete(v15[0]);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    sub_F29AE0(a1, (__int64)a2);
    sub_F2A050(a1, *(_QWORD *)a2);
    result = *a2;
    if ( !(_DWORD)result )
      return sub_995540(*(_QWORD *)(a1 + 1096), " <implicit>");
  }
  else if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 24LL))(*(_QWORD *)(a1 + 1096), 4, 0, 0);
    sub_995540(*(_QWORD *)(a1 + 1096), "<<<NULL>>> OMPClause");
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  }
  else
  {
    return sub_995540(*(_QWORD *)(a1 + 1096), "<<<NULL>>> OMPClause");
  }
  return result;
}
