__int64 __fastcall sub_3C8B70(_BYTE *a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  char v5; // dl
  bool v6; // zf

  if ( !a1[32] )
    return 0xFFFFFFFFLL;
  if ( (*(unsigned int (**)(void))(*(_QWORD *)a1 + 96LL))() != 2 )
    return 0xFFFFFFFFLL;
  v5 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, a2, a3);
  result = 0xFFFF;
  if ( !v5 )
  {
    v6 = a3 == (*(unsigned int (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 112LL))(a1, a2, 1);
    result = 255;
    if ( v6 )
      return 0x8000;
  }
  return result;
}
