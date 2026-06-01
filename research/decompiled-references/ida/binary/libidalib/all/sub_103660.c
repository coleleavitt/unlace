__int64 __fastcall sub_103660(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 1248) || *(_QWORD *)(a1 + 1232) == -1 )
    return sub_16B740();
  else
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 224LL))(a1);
}

