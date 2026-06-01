__int64 __fastcall sub_3A4190(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  _DWORD v9[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v9[0] = a2;
  v4 = sub_4AED50(a1, v9, a3, a4);
  v5 = *(_QWORD **)(a1 + 184);
  v6 = v4;
  v7 = v5[2];
  if ( v7 )
  {
    if ( v6 >= v7 )
      return 0;
    return *(unsigned int *)(v5[1] + 4 * v6);
  }
  else
  {
    if ( v6 >= (*(int (__fastcall **)(_QWORD *))(*v5 + 32LL))(v5) )
      return 0;
    return (unsigned int)(v6 + 1);
  }
}
