__int64 __fastcall sub_21509E0(__int64 a1)
{
  _DWORD **v2; // rdi
  const char *v3; // rax
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  void (*v10)(); // rcx
  const char *v11; // [rsp+10h] [rbp-48h] BYREF
  __int16 v12; // [rsp+30h] [rbp-28h]

  v2 = *(_DWORD ***)(a1 + 8);
  if ( *v2[6] != 3 )
  {
    v3 = "expected string";
LABEL_3:
    v11 = v3;
    v12 = 259;
    return sub_21543E0(v2, &v11, 0, 0);
  }
  v5 = sub_2153C00(v2);
  if ( *(_DWORD *)v5 == 2 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 16);
  }
  else
  {
    v8 = *(_QWORD *)(v5 + 16);
    v7 = 0;
    if ( v8 )
    {
      v7 = v8 - 1;
      if ( v8 != 1 )
        v7 = v8 - 2;
      v8 = 1;
    }
    v6 = *(_QWORD *)(v5 + 8) + v8;
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
  v2 = *(_DWORD ***)(a1 + 8);
  if ( *v2[6] != 9 )
  {
    v3 = "expected end of directive";
    goto LABEL_3;
  }
  (*((void (__fastcall **)(_DWORD **))*v2 + 19))(v2);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
  v10 = *(void (**)())(*(_QWORD *)v9 + 648LL);
  result = 0;
  if ( v10 != nullsub_1410 )
  {
    ((void (__fastcall *)(__int64, __int64, __int64))v10)(v9, v6, v7);
    return 0;
  }
  return result;
}
