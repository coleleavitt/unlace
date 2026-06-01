unsigned __int64 __fastcall sub_2DE260(char a1, __int64 a2)
{
  int v3; // edx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r12d
  __int64 v7; // rbx
  void (__fastcall *v8)(__int64, __int64, __int64); // rcx
  __int64 v9; // rdi
  __int64 v10; // rbp
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+10h] [rbp-48h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( QT::QCoreApplication::self )
  {
    sub_480540(&ptr, QT::QCoreApplication::self + 2, a2);
    v6 = v14;
    v7 = 8LL * ((int)v14 - 1);
    while ( v6 > 0 )
    {
      --v6;
      if ( !ptr || *(int *)ptr > 1 )
        sub_1A2030((__int64)&ptr, 0, 0, 0, v4, v5);
      v10 = *(_QWORD *)(v13 + v7);
      v8 = (void (__fastcall *)(__int64, __int64, __int64))callui;
      if ( a1 )
      {
        v9 = 62;
      }
      else
      {
        callui(63, *(_QWORD *)(v13 + v7), v3, (_DWORD)callui, v4, v5);
        v8 = (void (__fastcall *)(__int64, __int64, __int64))callui;
        v9 = 64;
      }
      v8(v9, v10, v10);
      v7 -= 8;
    }
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
  }
  return v15 - __readfsqword(0x28u);
}
