void __fastcall sub_AB61E0(__int64 a1, const char *a2)
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
  if ( (unsigned int)sub_E6C2C0(v4) == 3 )
  {
    v8 = sub_AA6CD0(v4);
    a2 = &byte_22CD811;
    sub_AB34F0(a1 + 8, &byte_22CD811, v8, a1, v9);
    if ( !(unsigned __int8)sub_F3F090(v3) )
      goto LABEL_3;
  }
  else if ( !(unsigned __int8)sub_F3F090(a2) )
  {
LABEL_3:
    sub_AB4A40(a1, *((_QWORD *)v3 + 4));
    return;
  }
  sub_F3DED0(v3, a2, v5, v6, v7);
  v10 = sub_AA6CD0(v3);
  sub_AB34F0(a1 + 8, &byte_22CD811, v10, a1, v11);
  sub_AB4A40(a1, *((_QWORD *)v3 + 4));
}

