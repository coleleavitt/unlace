__int64 __fastcall sub_78FCB0(__int64 a1, __int64 a2, const char **a3)
{
  const char *v4; // r12
  size_t v5; // rax
  __int64 result; // rax
  void (*v7)(); // rax

  v4 = *a3;
  v5 = strlen(*a3);
  *a3 = &v4[v5];
  sub_78F8A0(a1, a2, &v4[v5], *(_DWORD *)(a1 + 128));
  if ( *(*a3 - 1) == *(_BYTE *)(a1 + 184) )
  {
    v7 = *(void (**)())(*(_QWORD *)a2 + 40LL);
    if ( v7 != nullsub_244 )
      ((void (__fastcall *)(__int64, __int64))v7)(a2, 16);
    result = *(unsigned int *)(a1 + 128);
  }
  else
  {
    result = *(unsigned int *)(a1 + 116);
  }
  *(_DWORD *)(a1 + 176) = result;
  return result;
}
