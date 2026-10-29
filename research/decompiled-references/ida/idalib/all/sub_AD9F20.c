void __fastcall sub_AD9F20(__int64 a1, const char *a2)
{
  const char *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r8

  v3 = a2;
  v4 = *((_QWORD *)a2 + 5);
  if ( (unsigned int)sub_E90000(v4) == 3 )
  {
    v8 = sub_ACAA10(v4);
    a2 = &byte_22F0C30;
    sub_AD7230(a1 + 8, &byte_22F0C30, v8, a1, v9);
    if ( !(unsigned __int8)sub_F62DD0(v3) )
      goto LABEL_3;
  }
  else if ( !(unsigned __int8)sub_F62DD0(a2) )
  {
LABEL_3:
    sub_AD8780(a1, *((_QWORD *)v3 + 4));
    return;
  }
  sub_F61C10(v3, a2, v5, v6, v7);
  v10 = sub_ACAA10(v3);
  sub_AD7230(a1 + 8, &byte_22F0C30, v10, a1, v11);
  sub_AD8780(a1, *((_QWORD *)v3 + 4));
}
