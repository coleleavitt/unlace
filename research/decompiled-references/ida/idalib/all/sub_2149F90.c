__int64 __fastcall sub_2149F90(__int64 a1)
{
  _DWORD **v2; // rdi
  const char *v4; // [rsp+0h] [rbp-38h] BYREF
  __int16 v5; // [rsp+20h] [rbp-18h]

  v2 = *(_DWORD ***)(a1 + 8);
  if ( *v2[6] == 9 )
  {
    (*((void (__fastcall **)(_DWORD **))*v2 + 19))(v2);
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 1504LL) = 0;
    return 0;
  }
  else
  {
    v4 = "unexpected token in '.secure_log_reset' directive";
    v5 = 259;
    return sub_21543E0(v2, &v4, 0, 0);
  }
}
