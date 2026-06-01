__int64 __fastcall sub_3FD2A0(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  _QWORD *v3; // rbx
  int *v5; // rax
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v7 = 0;
  v8 = 1;
  sub_3FD080(*(_QWORD *)(a1 + 136), (QT::QString *)ptr, 1);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v3 = *(_QWORD **)(a1 + 136);
  if ( !v3[20] )
    return v9 - __readfsqword(0x28u);
  v5 = (int *)v3[18];
  if ( !v5 || *v5 > 1 )
    sub_3F9FE0((__int64)(v3 + 18), 0, 0, 0, v1, v2);
  return QT::QWidget::setFocus(*(_QWORD *)(*(_QWORD *)(v3[19] + 8LL * v3[20] - 8) + 40LL), 7);
}
