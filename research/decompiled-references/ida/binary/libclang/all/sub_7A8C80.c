__int64 __fastcall sub_7A8C80(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rdi

  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 )
    return 0;
  v2 = sub_80F120(v1);
  v3 = 0;
  if ( (*(_WORD *)v2 & 0x1FF) == 0x48 )
    return *(_QWORD *)(v2 + 16);
  return v3;
}

