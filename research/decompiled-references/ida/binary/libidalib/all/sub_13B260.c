__int64 __fastcall sub_13B260(int a1, __int64 a2)
{
  _BYTE v3[2]; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  if ( a1 == -1 || a1 == 55 )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, _BYTE *))a2)(a2, 55, v3) )
      (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 56, (v3[0] & 4) != 0);
  }
  return 1;
}

