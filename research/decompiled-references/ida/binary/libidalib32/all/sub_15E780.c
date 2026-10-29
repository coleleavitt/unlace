__int64 __fastcall sub_15E780(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( !(_BYTE)a2 )
  {
    if ( *(_QWORD *)(a1 + 480) )
      return (unsigned int)*(__int16 *)(a1 + 468);
LABEL_11:
    sub_1582F0(a1);
    return sub_15E7F0(a1, a2);
  }
  if ( !*(_BYTE *)(a1 + 984) )
    return MEMORY[0x3010102464C45EF](0);
  if ( !*(_QWORD *)(a1 + 480) )
    goto LABEL_11;
  v3 = 0;
  if ( *(_DWORD *)(a1 + 472) == 1 )
    v3 = *(_QWORD *)(a1 + 848);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 112LL))(v3);
}

