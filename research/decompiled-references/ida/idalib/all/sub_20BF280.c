__int64 __fastcall sub_20BF280(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v4; // r12
  __int64 v5; // rbp
  void (__fastcall *v6)(__int64, __int64, __int64); // rax
  _QWORD *v7; // rbx
  void (__fastcall *v8)(__int64, __int64, __int64); // rax

  switch ( a3 )
  {
    case 2:
      v4 = *a2;
      v5 = operator new(0x20u);
      *(_QWORD *)(v5 + 16) = 0;
      v6 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 16);
      if ( v6 )
      {
        v6(v5, v4, 2);
        *(_QWORD *)(v5 + 24) = *(_QWORD *)(v4 + 24);
        *(_QWORD *)(v5 + 16) = *(_QWORD *)(v4 + 16);
      }
      *a1 = v5;
      return 0;
    case 3:
      v7 = (_QWORD *)*a1;
      if ( !*a1 )
        return 0;
      v8 = (void (__fastcall *)(__int64, __int64, __int64))v7[2];
      if ( v8 )
        v8(*a1, *a1, 3);
      operator delete(v7, 0x20u);
      return 0;
    case 1:
      *a1 = *a2;
      return 0;
    default:
      return 0;
  }
}
