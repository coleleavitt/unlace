__int64 __fastcall sub_1FF0C00(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v4; // rbp
  _QWORD *v5; // rbx
  void (__fastcall *v6)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v7)(_QWORD *, _QWORD *, __int64); // rax
  _QWORD *v8; // rbx
  void (__fastcall *v9)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v10)(_QWORD *, _QWORD *, __int64); // rax

  switch ( a3 )
  {
    case 2:
      v4 = (_QWORD *)*a2;
      v5 = (_QWORD *)operator new(0x40u);
      v5[2] = 0;
      v6 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v4[2];
      if ( v6 )
      {
        v6(v5, v4, 2);
        v5[3] = v4[3];
        v5[2] = v4[2];
      }
      v5[6] = 0;
      v7 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v4[6];
      if ( v7 )
      {
        v7(v5 + 4, v4 + 4, 2);
        v5[7] = v4[7];
        v5[6] = v4[6];
      }
      *a1 = v5;
      return 0;
    case 3:
      v8 = (_QWORD *)*a1;
      if ( !*a1 )
        return 0;
      v9 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v8[6];
      if ( v9 )
        v9(v8 + 4, v8 + 4, 3);
      v10 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))v8[2];
      if ( v10 )
        v10(v8, v8, 3);
      operator delete(v8, 0x40u);
      return 0;
    case 1:
      *a1 = *a2;
      return 0;
    default:
      return 0;
  }
}
