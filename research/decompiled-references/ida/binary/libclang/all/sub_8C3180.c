__int64 __fastcall sub_8C3180(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = sub_80F230(*(_QWORD *)(*(unsigned __int8 *)(a1 + 3) + a1));
  v2 = 0;
  if ( (*(_WORD *)v1 & 0x1FF) == 0x2F )
    return *(_QWORD *)(v1 + 24);
  return v2;
}

