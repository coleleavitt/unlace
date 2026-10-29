__int64 __fastcall sub_4C7A70(__int64 a1, __int64 a2)
{
  const QT::QString *v2; // r12
  int v3; // eax
  __int64 *v4; // rax
  __int64 v5; // rbx
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int64 *v8; // [rsp+8h] [rbp-50h]
  __int64 v9; // [rsp+10h] [rbp-48h]
  __m128i v10; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v2 = *(const QT::QString **)(a2 + 56);
  sub_4C7620(&v10);
  QT::QMimeData::data((QT::QMimeData *)&ptr, v2);
  if ( v10.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v10.m128i_i64[0], 1u) )
  {
    free((void *)v10.m128i_i64[0]);
    if ( v9 > 7 )
      goto LABEL_4;
LABEL_12:
    v5 = 0;
    goto LABEL_7;
  }
  if ( v9 <= 7 )
    goto LABEL_12;
LABEL_4:
  v3 = *(_DWORD *)(a2 + 48);
  *(_BYTE *)(a2 + 12) = 1;
  *(_DWORD *)(a2 + 44) = v3;
  v4 = v8;
  if ( !v8 )
    v4 = (__int64 *)&QT::QByteArray::_empty;
  v5 = *v4;
LABEL_7:
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v5;
}
