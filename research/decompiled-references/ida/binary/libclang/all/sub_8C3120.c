__int64 __fastcall sub_8C3120(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // dx
  __int64 v3; // rcx

  v1 = sub_80F230(*(_QWORD *)(*(unsigned __int8 *)(a1 + 3) + a1));
  v2 = *(_WORD *)v1 & 0x1FF;
  if ( v2 == 47 )
    return *(_QWORD *)(v1 + 16);
  v3 = 0;
  if ( ((v2 + 393) & 0x1FFu) <= 1 && ((*(_WORD *)(v1 + 2) >> 3) & 0x3Fu) <= 1 )
    return *(_QWORD *)(v1 + 16);
  return v3;
}

