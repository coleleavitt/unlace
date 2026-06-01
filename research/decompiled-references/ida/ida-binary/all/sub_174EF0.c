__int64 __fastcall sub_174EF0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp

  if ( !*(_BYTE *)(a1 + 29) )
    return 0;
  v2 = (*(__int64 (**)(void))(*(_QWORD *)a1 + 392LL))();
  if ( !(_BYTE)v2 )
    return 0;
  *(_DWORD *)(a2 + 32) = sub_1EB590(*(_QWORD *)(a1 + 16));
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 584LL))(*(_QWORD *)(a1 + 16), a2);
  return v2;
}
