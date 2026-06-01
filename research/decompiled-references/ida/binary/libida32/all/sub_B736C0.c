_BOOL8 __fastcall sub_B736C0(__int64 a1)
{
  unsigned __int64 v1; // rdi
  _BOOL8 result; // rax
  __int64 (*v3)(void); // rax
  __int64 v4; // rax

  v1 = sub_B735C0(a1);
  result = 0;
  if ( v1 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)v1 + 32LL);
    if ( (char *)v3 == (char *)sub_B70F90 )
      v4 = sub_B4CC80(v1);
    else
      v4 = v3();
    return (*(_BYTE *)(v4 + 82) & 0x40) != 0;
  }
  return result;
}

