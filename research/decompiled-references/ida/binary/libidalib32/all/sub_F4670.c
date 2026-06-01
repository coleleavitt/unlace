__int64 __fastcall sub_F4670(__int64 a1, __int64 a2)
{
  char v3; // [rsp+4h] [rbp-14h]

  if ( a2 && ((*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 112LL))(a2), get_place_class()) && (v3 & 1) != 0 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 128LL))(a2, 0);
  else
    return 0xFFFFFFFFLL;
}

