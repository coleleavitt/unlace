void __fastcall sub_18685D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9[4]; // [rsp+8h] [rbp-20h] BYREF

  v9[0] = a3;
  if ( a3 )
  {
    sub_1CB44B0(a1, v9);
    v5 = v9[0];
    if ( (*(_BYTE *)(v9[0] + 28) & 0x7F) == 0x26 )
      sub_184ADA0(a1, v9[0], v3, v4);
    if ( *(char *)(v5 + 28) >= 0 && (unsigned int)sub_B77D20(v5) != 2 )
    {
      v6 = (_QWORD *)sub_B77A30(v5);
      if ( !v6 || (*(_BYTE *)sub_BC3640(v6) & 4) == 0 )
        sub_1868380(a1, v5, v7, v8);
    }
  }
}
