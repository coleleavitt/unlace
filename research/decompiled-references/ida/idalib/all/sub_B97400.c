_BOOL8 __fastcall sub_B97400(__int64 a1)
{
  unsigned __int64 v1; // rdi
  _BOOL8 result; // rax
  __int64 (*v3)(void); // rax
  __int64 v4; // rax

  v1 = sub_B97300(a1);
  result = 0;
  if ( v1 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)v1 + 32LL);
    if ( (char *)v3 == (char *)sub_B94CD0 )
      v4 = sub_B709C0(v1);
    else
      v4 = v3();
    return (*(_BYTE *)(v4 + 82) & 0x40) != 0;
  }
  return result;
}
