__int64 __fastcall sub_AF01C0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  size_t v5; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_F83A90(a1);
  sub_971800(a2, "__attribute__((lock_returned");
  sub_971800(a2, "(");
  sub_971800(a2, &byte_22CD811);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = j__strlen("\n");
  sub_EE3EC0(v4, a2, 0, a3, 0, 0, (__int64)"\n", v5);
  sub_971800(a2, &byte_22CD811);
  sub_971800(a2, ")");
  return sub_971800(a2, "))");
}

