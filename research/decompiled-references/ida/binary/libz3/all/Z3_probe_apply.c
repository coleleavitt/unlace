char __fastcall Z3_probe_apply(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _DWORD *); // rax
  _DWORD *v7; // rbx
  char result; // al

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29D350();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2 )
    BUG();
  v5 = *(_QWORD *)(a2 + 24);
  v6 = *(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v5 + 16LL);
  if ( !a3 || (v7 = *(_DWORD **)(a3 + 24)) == nullptr )
  {
    result = v6(v5, nullptr);
LABEL_10:
    if ( v4 )
      goto LABEL_8;
    return result;
  }
  ++v7[8];
  result = v6(v5, v7);
  if ( v7[8]-- != 1 )
    goto LABEL_10;
  sub_ED44E0(v7);
  result = sub_186B220(v7);
  if ( v4 )
  {
LABEL_8:
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  return result;
}

