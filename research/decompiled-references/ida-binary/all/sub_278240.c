__int64 sub_278240()
{
  __int64 v0; // rax
  QT::QObject *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int8 v6; // [rsp+Fh] [rbp-39h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h] BYREF
  __int128 v8; // [rsp+18h] [rbp-30h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v0 = sub_277DF0();
  if ( *(_BYTE *)(v0 + 104) )
    return 0;
  v1 = *(QT::QObject **)(v0 + 96);
  if ( !v1 )
    return 0;
  v6 = sub_273600(*(_QWORD *)(v0 + 96)) ^ 1;
  sub_273610(v1, v6);
  v2 = sub_5313F0(unk_8CA668);
  if ( v2 )
    sub_537630(v2, 7, &v6);
  v3 = unk_8CA668;
  v8 = 0;
  v7 = 0;
  v7 = qvector_reserve(&v7, 0, 1, 16);
  v4 = 16 * v8 + v7;
  *(_QWORD *)v4 = v3;
  *(_BYTE *)(v4 + 8) = 0;
  *(_QWORD *)&v8 = v8 + 1;
  sub_531B30(1, 0, &v7);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7, nullptr);
  }
  return 1;
}
