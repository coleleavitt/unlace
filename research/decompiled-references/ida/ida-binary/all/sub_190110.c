unsigned __int64 __fastcall sub_190110(__int64 a1, __int64 a2)
{
  QT::QLabel *v2; // r12
  size_t v3; // rax
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rax
  void *ptr[4]; // [rsp+0h] [rbp-248h] BYREF
  char s[520]; // [rsp+20h] [rbp-228h] BYREF
  unsigned __int64 v10; // [rsp+228h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( a2 != -1 )
  {
    *(_QWORD *)(a1 + 120) = a2;
    ea2str(s, 512, a2);
    v2 = *(QT::QLabel **)(a1 + 40);
    v3 = strlen(s);
    QT::QString::fromUtf8(ptr, v3, s);
    QT::QLabel::setText(v2, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v4 = *(__int64 **)(a1 + 72);
    v5 = &v4[*(_QWORD *)(a1 + 80)];
    while ( v5 != v4 )
    {
      v6 = *v4++;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 48) + 416LL))(
        *(_QWORD *)(v6 + 48),
        *(_QWORD *)(a1 + 120));
    }
    *(_BYTE *)(a1 + 112) = 1;
  }
  return v10 - __readfsqword(0x28u);
}
