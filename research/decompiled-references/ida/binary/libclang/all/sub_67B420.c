bool __fastcall sub_67B420(__int64 a1)
{
  unsigned int (__fastcall *v1)(_QWORD, _QWORD); // rax

  v1 = **(unsigned int (__fastcall ***)(_QWORD, _QWORD))(a1 + 24);
  return v1 && v1(*(_QWORD *)(a1 + 16), 0) != 0;
}

