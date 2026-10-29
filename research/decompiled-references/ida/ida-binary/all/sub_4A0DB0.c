__int64 __fastcall sub_4A0DB0(__int64 a1)
{
  void (*v2)(void); // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // edx

  v2 = *(void (**)(void))(*(_QWORD *)a1 + 672LL);
  if ( v2 != nullsub_263 )
    v2();
  if ( *(_BYTE *)(a1 + 2024) )
    return *(unsigned int *)(a1 + 2016);
  v4 = *(_QWORD *)(a1 + 2392);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
    v6 = v5;
  }
  else
  {
    v6 = 0;
    v5 = 0;
  }
  *(_QWORD *)(a1 + 2016) = v5;
  *(_BYTE *)(a1 + 2024) = 1;
  return v6;
}
