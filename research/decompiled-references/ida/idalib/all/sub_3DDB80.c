__int64 __fastcall sub_3DDB80(__int64 a1, __int64 a2)
{
  char v3; // al
  unsigned int v4; // edi
  __int64 (***v5)(); // rax
  __int64 (***v6)(); // rdi
  __int64 (*v7)(); // rax

  v3 = *(_BYTE *)(a1 + 88);
  v4 = v3 & 0xF0;
  if ( (v3 & 0xF0) == 0xC0 )
    v4 = *(_DWORD *)(a1 + 28);
  if ( v4 <= 0x10 )
    v4 = getinf(99);
  get_custom_callcnv(v4);
  v6 = v5;
  if ( v5 && (v7 = **v5, v7 != sub_3DB850) )
    return ((__int64 (__fastcall *)(__int64 (***)(), __int64, __int64))v7)(v6, a1, a2);
  else
    return 1;
}
