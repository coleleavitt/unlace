__int64 __fastcall sub_2149E60(__int64 a1)
{
  _DWORD **v2; // rdi
  __int64 result; // rax
  const char *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v7[8]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v8[4]; // [rsp+10h] [rbp-38h] BYREF
  __int16 v9; // [rsp+30h] [rbp-18h]

  if ( (unsigned __int8)sub_2153CB0(*(_QWORD *)(a1 + 8), &v6) )
  {
    v4 = "expected identifier in directive";
    goto LABEL_9;
  }
  v2 = *(_DWORD ***)(a1 + 8);
  if ( *v2[6] == 26 )
  {
    (*((void (__fastcall **)(_DWORD **))*v2 + 19))(v2);
    result = sub_2153C90(*(_QWORD *)(a1 + 8), v7);
    if ( (_BYTE)result )
      return result;
    v2 = *(_DWORD ***)(a1 + 8);
    if ( *v2[6] == 9 )
    {
      (*((void (__fastcall **)(_DWORD **))*v2 + 19))(v2);
      v4 = "directive '.lsym' is unsupported";
LABEL_9:
      v5 = *(_QWORD *)(a1 + 8);
      v8[0] = v4;
      v9 = 259;
      return sub_21543E0(v5, v8, 0, 0);
    }
  }
  v9 = 259;
  v8[0] = "unexpected token in '.lsym' directive";
  return sub_21543E0(v2, v8, 0, 0);
}
