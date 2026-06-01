__int64 __fastcall sub_BC5890(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 16) == 1 )
    return 1;
  else
    return (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64))(*(_QWORD *)a1 + 136LL))(
             a1,
             *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL),
             (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 8);
}
