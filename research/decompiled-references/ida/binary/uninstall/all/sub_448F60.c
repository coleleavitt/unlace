__int64 __fastcall sub_448F60(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  _QWORD *v8; // rax

  v8 = (_QWORD *)sub_40FB00(16);
  *v8 = a2;
  v8[1] = a3;
  return sub_4ADF10(a1, sub_448F20, v8, a4, a5);
}

