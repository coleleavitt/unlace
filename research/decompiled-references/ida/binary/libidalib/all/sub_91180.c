__int64 __fastcall sub_91180(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp

  if ( !*(_BYTE *)(a1 + 21) )
    return 0;
  v2 = (*(__int64 (**)(void))(*(_QWORD *)a1 + 312LL))();
  if ( !(_BYTE)v2 )
    return 0;
  *(_DWORD *)(a2 + 32) = sub_15E9C0(*(_QWORD *)(a1 + 8));
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 304LL))(*(_QWORD *)(a1 + 8), a2);
  return v2;
}

