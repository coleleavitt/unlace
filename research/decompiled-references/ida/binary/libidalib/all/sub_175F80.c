__int64 __fastcall sub_175F80(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdi

  v3 = (_QWORD *)operator new(0x28u);
  v3[1] = 0;
  v3[2] = 0;
  *v3 = &off_235A38;
  v3[3] = a2;
  v4 = TProgram::application;
  v3[4] = a1;
  if ( v4 )
    return sub_175D30(v4 + 136, (__int64)v3, 6, 0);
  else
    return -1;
}

