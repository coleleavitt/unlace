__int64 sub_203890()
{
  double v0; // xmm0_8
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rbp
  QT::QWidget *v5; // rbx
  double v6; // xmm0_8
  __int64 v7; // rdx
  __int64 v8; // rcx
  double v9; // xmm0_8
  struct _Unwind_Exception *v10; // rax
  struct _Unwind_Exception *v11; // rbp
  __int64 v12; // [rsp+0h] [rbp-E8h] BYREF
  int v13; // [rsp+8h] [rbp-E0h]
  __int64 v14; // [rsp+10h] [rbp-D8h]
  __int64 v15; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+28h] [rbp-C0h]
  __int128 v17; // [rsp+38h] [rbp-B0h]
  __int128 v18; // [rsp+48h] [rbp-A0h]
  __int64 v19; // [rsp+58h] [rbp-90h]
  __int128 v20; // [rsp+60h] [rbp-88h]
  __int64 v21; // [rsp+70h] [rbp-78h]
  __int64 v22; // [rsp+78h] [rbp-70h]
  int v23; // [rsp+80h] [rbp-68h]
  __int128 v24; // [rsp+88h] [rbp-60h]
  __int64 v25; // [rsp+98h] [rbp-50h]
  __int64 v26; // [rsp+A0h] [rbp-48h]
  char v27; // [rsp+A8h] [rbp-40h]
  __int64 v28; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v29; // [rsp+B8h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  result = unk_8CD7E8;
  if ( !unk_8CD7E8
    && (!(_QWORD)xmmword_8CB528 || (result = *(_QWORD *)qword_8CB520) == 0)
    && (byte_8CB498 || (result = qword_8CB490) == 0) )
  {
    v22 = 0xFFFFFFFFLL;
    v16 = 0;
    v19 = 0;
    v21 = 0;
    v25 = 0;
    v26 = 0;
    HIWORD(v22) = word_8BCE1C;
    v23 = 1;
    v27 = 0;
    v28 = 0;
    v17 = 0;
    v18 = 0;
    v20 = 0;
    v24 = 0;
    v2 = operator new(0x1B8u);
    sub_2876C0(v2, 0);
    *(_QWORD *)&v16 = v2;
    v15 = 8;
    v13 = 0;
    v12 = (__int64)&idaplace_t___vtable;
    v14 = -1;
    *((_QWORD *)&v24 + 1) = idaplace_t__clone(&v12);
    v3 = *((_QWORD *)&v24 + 1);
    v25 = idaplace_t__clone(&v12);
    v4 = v25;
    v5 = (QT::QWidget *)operator new(0x3E8u);
    sub_202FB0(v5, "theme helper view", (int *)&v15);
    sub_1FC230((__m128i *)v5, (__int64)&v15);
    QT::QWidget::setParent(v5, qword_8CD748);
    QT::QWidget::ensurePolished(v5);
    sub_478D00((char *)&qword_8CB480, v12);
    v6 = qfree(v3, (const char *)v5);
    v9 = qfree(v4, (const char *)v5, v6);
    if ( byte_8CB498 )
    {
      sub_1E69E0(v9, v4, (__int64)v5, v7, v8);
      v11 = v10;
      operator delete(v5, 0x3E8u);
      v0 = qfree(*((_QWORD *)&v24 + 1), (const char *)&elf_gnu_hash_bucket[36]);
      qfree(v25, (const char *)&elf_gnu_hash_bucket[36], v0);
      _Unwind_Resume(v11);
    }
    return qword_8CB490;
  }
  return result;
}
