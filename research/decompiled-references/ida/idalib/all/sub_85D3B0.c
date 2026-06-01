void __fastcall sub_85D3B0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( v2 )
      sub_892DC0(v2, a1);
    if ( (*(_BYTE *)(a1 + 106) & 4) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 24);
      v4 = *(_QWORD *)(v3 + 1088);
      if ( v4 )
      {
        v5 = v4 - 1;
        *(_QWORD *)(v3 + 1088) = v5;
        if ( !v5 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 8))(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 16));
      }
    }
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 8))(a1, *(_QWORD *)(a1 + 16));
  }
}
