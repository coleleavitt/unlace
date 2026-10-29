void __fastcall sub_E1EC40(__int64 a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  void (__fastcall *v4)(_QWORD *, _QWORD *, __int64); // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi

  v2 = *(_QWORD **)(a1 + 8);
  v3 = *(_QWORD **)a1;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      while ( 1 )
      {
        v4 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v3[2];
        if ( !v4 )
          break;
        v5 = v3;
        v6 = v3;
        v3 += 4;
        v4(v6, v5, 3);
        if ( v2 == v3 )
          goto LABEL_4;
      }
      v3 += 4;
    }
    while ( v2 != v3 );
LABEL_4:
    v3 = *(_QWORD **)a1;
  }
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
}

