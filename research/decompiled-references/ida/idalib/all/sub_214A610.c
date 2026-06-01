__int64 __fastcall sub_214A610(__int64 a1)
{
  _DWORD **v2; // rdi
  __int64 v3; // rdi
  void (*v4)(); // rdx
  __int64 result; // rax
  const char *v6; // [rsp+10h] [rbp-38h] BYREF
  __int16 v7; // [rsp+30h] [rbp-18h]

  v2 = *(_DWORD ***)(a1 + 8);
  if ( *v2[6] == 9 )
  {
    (*((void (__fastcall **)(_DWORD **))*v2 + 19))(v2);
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    v4 = *(void (**)())(*(_QWORD *)v3 + 240LL);
    result = 0;
    if ( v4 != nullsub_1397 )
    {
      ((void (__fastcall *)(__int64, __int64))v4)(v3, 4);
      return 0;
    }
  }
  else
  {
    v6 = "unexpected token in '.end_data_region' directive";
    v7 = 259;
    return sub_21543E0(v2, &v6, 0, 0);
  }
  return result;
}
