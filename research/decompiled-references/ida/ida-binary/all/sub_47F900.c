unsigned __int64 __fastcall sub_47F900(double a1, double a2, __m128 a3, __int64 a4, QT::QFont **a5)
{
  __int64 v5; // r8
  __int64 v6; // r9
  int *v7; // rax
  QT::QObject **v8; // rdx
  QT::QObject **v9; // rbx
  QT::QObject **i; // rbp
  QT::QFont **v12; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  QT::QObject **v14; // [rsp+18h] [rbp-40h]
  __int64 v15; // [rsp+20h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v12 = a5;
  QT::QApplication::topLevelWidgets((QT::QApplication *)&ptr);
  v7 = (int *)ptr;
  if ( !ptr || *(int *)ptr > 1 )
  {
    sub_1A2030((__int64)&ptr, 0, 0, 0, v5, v6);
    v7 = (int *)ptr;
  }
  v8 = v14;
  v9 = v14;
  if ( !v7 || *v7 > 1 )
  {
    sub_1A2030((__int64)&ptr, 0, 0, 0, v5, v6);
    v8 = v14;
  }
  for ( i = &v8[v15]; i != v9; ++v9 )
    sub_47D300(&v12, *v9, a1, a2, a3);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v16 - __readfsqword(0x28u);
}
