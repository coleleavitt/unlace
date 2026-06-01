__int64 __fastcall sub_6D4B20(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 (*v9)(); // rax

  v2 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v3 = v2;
  v4 = *(_QWORD *)(*(_QWORD *)(sub_B0D320(*v2) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v4 + 16) != 13 || (v2 = nullptr, ((*(_WORD *)(v4 + 18) >> 3) & 0x1FF) != 0x1E7) )
  {
    v5 = sub_B167E0(*v3, v2);
    v6 = 0;
    v7 = *(_QWORD *)&byte_8[v5 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v7 & 8) != 0 )
      v6 = *(__int64 *)((char *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL));
    v2 = (_QWORD *)(v6 >> 9);
  }
  v8 = *(_QWORD *)(a1 + 17288);
  v9 = *(__int64 (**)())(*(_QWORD *)v8 + 40LL);
  if ( v9 == sub_6A67B0 )
    return 0;
  else
    return ((__int64 (__fastcall *)(__int64, _QWORD *))v9)(v8, v2);
}

