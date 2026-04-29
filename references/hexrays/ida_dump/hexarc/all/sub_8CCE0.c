__int64 __fastcall sub_8CCE0(__int64 a1)
{
  __int64 v1; // rbp

  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL) + 112LL);
  if ( (unsigned __int8)sub_11F4D0(*(_QWORD *)(a1 + 40), v1, *(_QWORD *)(a1 + 32), 0) )
  {
    **(_DWORD **)(a1 + 32) = 4;
    sub_11FC20(*(_QWORD *)(a1 + 32) + 32LL, *(_QWORD *)(a1 + 48));
    sub_1212F0(
      *(_QWORD *)(a1 + 32) + 32LL,
      v1,
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL),
      (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 48) + 68LL) / 2));
    sub_1166E0(*(_QWORD *)(a1 + 32) + 48LL);
    *(_BYTE *)(a1 + 56) = 1;
  }
  return 0;
}
