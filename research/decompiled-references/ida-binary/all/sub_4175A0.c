bool __fastcall sub_4175A0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 (*v4)(); // rdx

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(v1 + 32);
  if ( v3 )
  {
    v4 = *(__int64 (**)())(*(_QWORD *)v3 + 480LL);
    if ( v4 == sub_178B60 )
      return *(_QWORD *)(v1 + 104) > 1u;
    if ( !(unsigned __int8)v4() )
    {
      v1 = *(_QWORD *)(a1 + 32);
      return *(_QWORD *)(v1 + 104) > 1u;
    }
  }
  return 0;
}
