_QWORD *__fastcall sub_8A1E0(int a1, __int64 a2, __int16 a3)
{
  __int64 v4; // rbx
  _QWORD *v6; // rbx

  if ( a1 )
  {
    if ( (debug & 0x400000) != 0 )
      sub_88B80((__int64)"Using default ARM architecture support; functions variables and parameter locations might be incorrect\n");
    v4 = operator new(0x978u);
    sub_887A0(v4, a3, a2);
    return (_QWORD *)v4;
  }
  else
  {
    v6 = (_QWORD *)operator new(0x978u);
    sub_887A0((__int64)v6, a3, a2);
    *v6 = &off_C9798;
    return v6;
  }
}
