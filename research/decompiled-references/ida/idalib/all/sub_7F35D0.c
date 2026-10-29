void __fastcall sub_7F35D0(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 i; // rdx
  _QWORD *v5; // rax

  *(_DWORD *)(a1 + 56) += 50;
  v2 = *(_QWORD *)(a2 + 32);
  if ( v2 )
  {
    v3 = 0;
    for ( i = 0; i != v2; ++i )
    {
      v5 = (_QWORD *)(v3 + *(_QWORD *)(a2 + 24));
      if ( v5[1] > 1u )
        *(_DWORD *)(a1 + 56) += 30;
      if ( v5[4] > 1u )
        *(_DWORD *)(a1 + 56) += 30;
      if ( v5[10] > 1u )
        *(_DWORD *)(a1 + 56) += 30;
      if ( v5[13] > 1u )
        *(_DWORD *)(a1 + 56) += 30;
      v3 += 416;
    }
  }
}
