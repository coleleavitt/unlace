bool __fastcall add_word(unsigned int a1, __int64 a2)
{
  _QWORD *v2; // r12
  __int64 v3; // rax

  v2 = *(_QWORD **)(qword_2CA1698 + 1480);
  v3 = sub_3BA340(v2, a1);
  return sub_5806A0(v2, a1, a2 + v3);
}

