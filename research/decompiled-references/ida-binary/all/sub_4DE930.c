__int64 __fastcall sub_4DE930(int a1, int a2, __int64 a3)
{
  __int64 v4; // rbx

  if ( a1 < 0 )
    return 0;
  v4 = operator new(0x18u);
  *(_DWORD *)(v4 + 16) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 296LL))(a3, (unsigned int)a1);
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)v4 = bucket_column_sorting_t___vtable;
  *(_DWORD *)(v4 + 12) = a1;
  *(_BYTE *)(v4 + 20) = a2 == 1;
  return v4;
}
