__int64 __fastcall sub_1FCFB30(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(v1 + 56);
  if ( *(_BYTE *)(v2 + 201) >> 5 )
    return sub_13C9950(*(__int64 **)(v1 + 104), *(_QWORD *)(v2 + 488), *(_QWORD *)(v2 + 496), 0, 0, 0);
  else
    return 0;
}
