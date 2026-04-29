__int64 __fastcall sub_32CC60(__int64 a1, __int64 **a2, double a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbp
  _QWORD *v7; // rbx
  unsigned __int64 v8; // r13
  const void *v10; // r15
  void *v11; // rdi
  __int64 v12; // rax

  v6 = *a2;
  v7 = (_QWORD *)((a6 << 6) + **(_QWORD **)(a1 + 184));
  if ( *a2 == v7 + 1 )
  {
LABEL_4:
    if ( !*v7 )
      return sub_3242C0(v6 + 3, (__int64)(v7 + 7), nullptr, 0);
LABEL_9:
    sub_F4410(v6, (__int64)"+0x%a", a3);
    v6 = *a2;
    return sub_3242C0(v6 + 3, (__int64)(v7 + 7), nullptr, 0);
  }
  v8 = v7[2];
  if ( v8 <= 1 )
  {
    v6[1] = 0;
    v6 = *a2;
    goto LABEL_4;
  }
  v10 = (const void *)v7[1];
  v11 = (void *)*v6;
  if ( v6[2] < v8 )
  {
    v12 = qvector_reserve(v6, *v6, v7[2], 1);
    *v6 = v12;
    v11 = (void *)v12;
  }
  v6[1] = v8;
  memmove(v11, v10, v8 - 1);
  *(_BYTE *)(*v6 + v8 - 1) = 0;
  v6 = *a2;
  if ( *v7 )
    goto LABEL_9;
  return sub_3242C0(v6 + 3, (__int64)(v7 + 7), nullptr, 0);
}
