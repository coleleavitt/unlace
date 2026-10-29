unsigned __int64 __fastcall sub_4D0E70(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int *v4; // rax
  char *v5; // rdx
  char *v6; // rbx
  char *i; // r12
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v10 = 0;
  QT::qt_qFindChildren_helper(a1, 0, 0, &QT::QPushButton::staticMetaObject, ptr, 1);
  v4 = (int *)ptr[0];
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
  {
    sub_4D0A90((__int64)ptr, 0, 0, 0, v2, v3);
    v4 = (int *)ptr[0];
  }
  v5 = (char *)ptr[1];
  v6 = (char *)ptr[1];
  if ( !v4 || *v4 > 1 )
  {
    sub_4D0A90((__int64)ptr, 0, 0, 0, v2, v3);
    v5 = (char *)ptr[1];
  }
  for ( i = &v5[8 * v10]; i != v6; v6 += 8 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v6 + 104LL))(*(_QWORD *)v6, a2);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v11 - __readfsqword(0x28u);
}
