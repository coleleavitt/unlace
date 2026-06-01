void __fastcall sub_1868580(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( (unsigned int)sub_B77D20(a2) != 2 )
  {
    v2 = (_QWORD *)sub_B77A30(a2);
    if ( !v2 || (*(_BYTE *)sub_BC3640(v2) & 4) == 0 )
      sub_1868380(a1, a2, v3, v4);
  }
}
