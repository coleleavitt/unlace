unsigned __int64 __fastcall sub_2E9D20(QT::QWidget *this, __int64 a2)
{
  bool v2; // zf
  __int128 *v4; // rsi
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rbp
  __int128 *v10; // rbx
  void *v11; // rdi
  char *v12; // [rsp+0h] [rbp-68h] BYREF
  __int128 v13; // [rsp+8h] [rbp-60h] BYREF
  void *dest; // [rsp+18h] [rbp-50h] BYREF
  __int128 v15; // [rsp+20h] [rbp-48h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 32) == 2;
  v16 = __readfsqword(0x28u);
  if ( v2 )
  {
    v6 = sub_2E64E0(*(unsigned int *)(a2 + 72), *(_BYTE *)(a2 + 76), *(_QWORD *)(a2 + 80));
    v4 = &v13;
    LODWORD(v12) = v6;
    *(_QWORD *)&v13 = v7;
    if ( !sub_3CE4E0(v6, &v13) )
      return v16 - __readfsqword(0x28u);
  }
  else
  {
    v4 = (__int128 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    if ( !(unsigned __int8)sub_192AA0(0, (__int64)v4, -1, 1u) )
      return v16 - __readfsqword(0x28u);
  }
  QT::QWidget::close(this);
  v8 = *((_QWORD *)this + 22);
  v12 = nullptr;
  dest = nullptr;
  v13 = 0;
  v15 = 0;
  if ( v8 >= 2 )
  {
    v4 = *((__int128 **)this + 21);
    v12 = (char *)qvector_reserve(&v12, 0, v8, 1);
    *(_QWORD *)&v13 = v8;
    memmove(v12, v4, v8 - 1);
    v12[v8 - 1] = 0;
  }
  v9 = *(_QWORD *)(a2 + 16);
  if ( v9 > 1 )
  {
    v10 = *(__int128 **)(a2 + 8);
    v11 = dest;
    if ( *((_QWORD *)&v15 + 1) < v9 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v9, 1);
      v11 = dest;
    }
    v4 = v10;
    *(_QWORD *)&v15 = v9;
    memmove(v11, v10, v9 - 1);
    *((char *)dest + v9 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v15 = 0;
  }
  sub_2E9B40((const char **)&v12);
  if ( dest )
  {
    *(_QWORD *)&v15 = 0;
    qfree(dest, (const char *)v4);
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12, (const char *)v4);
  }
  return v16 - __readfsqword(0x28u);
}
