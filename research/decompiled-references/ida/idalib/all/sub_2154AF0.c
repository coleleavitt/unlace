__int64 __fastcall sub_2154AF0(__int64 a1)
{
  _DWORD **v2; // rdi
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rdi
  void (*v8)(); // rcx
  __int64 v9; // rsi
  const char *v10; // [rsp+10h] [rbp-48h] BYREF
  __int16 v11; // [rsp+30h] [rbp-28h]

  v2 = *(_DWORD ***)(a1 + 8);
  if ( *v2[6] != 3 )
    goto LABEL_2;
  v4 = sub_2153C00((__int64)v2);
  if ( *(_DWORD *)v4 == 2 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    v6 = *(_QWORD *)(v4 + 16);
  }
  else
  {
    v9 = *(_QWORD *)(v4 + 16);
    v6 = 0;
    if ( v9 )
    {
      v6 = v9 - 1;
      if ( v9 != 1 )
        v6 = v9 - 2;
      v9 = 1;
    }
    v5 = *(_QWORD *)(v4 + 8) + v9;
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
  v2 = *(_DWORD ***)(a1 + 8);
  if ( *v2[6] == 9 )
  {
    (*((void (__fastcall **)(_DWORD **))*v2 + 19))(v2);
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    v8 = *(void (**)())(*(_QWORD *)v7 + 648LL);
    result = 0;
    if ( v8 != nullsub_1410 )
    {
      ((void (__fastcall *)(__int64, __int64, __int64))v8)(v7, v5, v6);
      return 0;
    }
  }
  else
  {
LABEL_2:
    v10 = "unexpected token in '.ident' directive";
    v11 = 259;
    return sub_21543E0((__int64)v2, (__int64)&v10, 0, 0);
  }
  return result;
}
