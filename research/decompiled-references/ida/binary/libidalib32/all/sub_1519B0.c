__int64 __fastcall sub_1519B0(__int64 a1)
{
  int v1; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40));
  if ( v1 < 0 )
  {
    sub_1518A0(*(void **)(a1 + 24));
    *(_QWORD *)(a1 + 8) = 0;
  }
  return v1;
}

