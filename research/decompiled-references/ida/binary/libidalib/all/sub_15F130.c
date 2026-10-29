__int64 __fastcall sub_15F130(__int64 a1, char a2)
{
  __int64 v3; // rax

  if ( !a2 )
  {
    if ( *(_QWORD *)(a1 + 480) )
      return (unsigned int)*(__int16 *)(a1 + 470);
LABEL_11:
    sub_158B30(a1);
    return sub_15F1A0(a1);
  }
  if ( !*(_BYTE *)(a1 + 992) )
    return MEMORY[0x3010102464C45F7](0);
  if ( !*(_QWORD *)(a1 + 480) )
    goto LABEL_11;
  v3 = 0;
  if ( *(_DWORD *)(a1 + 472) == 1 )
    v3 = *(_QWORD *)(a1 + 856);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 120LL))(v3);
}

