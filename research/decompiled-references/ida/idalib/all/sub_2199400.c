__int64 __fastcall sub_2199400(__int64 a1, unsigned int *a2)
{
  char v2; // bl
  __int64 result; // rax
  __int64 v4[7]; // [rsp+0h] [rbp-38h] BYREF

  (*(void (__fastcall **)(__int64 *, __int64, unsigned int *))(*(_QWORD *)a1 + 40LL))(v4, a1, a2);
  v2 = v4[0];
  sub_A0AE90(v4);
  result = v2 & 0x10;
  if ( (v2 & 0x10) != 0 )
    return (unsigned int)(1 << ((sub_2195C60(a1, a2) >> 56) & 0xF));
  return result;
}
