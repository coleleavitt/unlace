__int64 __fastcall sub_214AC90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // bp
  int v7; // eax
  _DWORD **v8; // rdi
  const char *v9; // rax
  __int64 v10; // rdi
  const char *v12; // rax
  _QWORD v13[4]; // [rsp+0h] [rbp-48h] BYREF
  __int16 v14; // [rsp+20h] [rbp-28h]

  v5 = 0;
  if ( a3 == 5 )
  {
    if ( *(_DWORD *)a2 != 1836409902 || (v7 = 0, *(_BYTE *)(a2 + 4) != 112) )
      v7 = 1;
    v5 = v7 == 0;
  }
  v8 = *(_DWORD ***)(a1 + 8);
  if ( *v8[6] != 3 )
  {
    v12 = "expected string in '.dump' or '.load' directive";
    goto LABEL_11;
  }
  (*((void (__fastcall **)(_DWORD **))*v8 + 19))(v8);
  v8 = *(_DWORD ***)(a1 + 8);
  if ( *v8[6] != 9 )
  {
    v12 = "unexpected token in '.dump' or '.load' directive";
LABEL_11:
    v13[0] = v12;
    v14 = 259;
    return sub_21543E0(v8, v13, 0, 0);
  }
  (*((void (__fastcall **)(_DWORD **))*v8 + 19))(v8);
  v9 = "ignoring directive .dump for now";
  if ( !v5 )
    v9 = "ignoring directive .load for now";
  v10 = *(_QWORD *)(a1 + 8);
  v13[0] = v9;
  v14 = 259;
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, _QWORD, _QWORD))(*(_QWORD *)v10 + 136LL))(
           v10,
           a4,
           v13,
           0,
           0);
}
