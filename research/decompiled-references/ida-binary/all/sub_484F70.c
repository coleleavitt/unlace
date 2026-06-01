unsigned __int64 __fastcall sub_484F70(__int64 a1, const char *a2, const char *a3)
{
  const char *v4; // rax
  const char *v5; // rbp
  size_t v6; // rax
  size_t v7; // r12
  const char *v8; // rsi
  void *v10; // rdi
  size_t v11; // r13
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  void *dest; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  dest = nullptr;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v17 = 0;
  if ( (unsigned __int64)a3 | (unsigned __int64)a2 )
  {
    sub_4847B0(a1, a3);
    if ( a2 && !(unsigned __int8)qisdir(a2) )
      sub_4847B0(a1, a2);
  }
  else
  {
    v4 = (const char *)(*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 424LL))(QT::QCoreApplication::self);
    v5 = v4;
    if ( v4 && (v6 = strlen(v4), (v7 = v6) != 0) )
    {
      v10 = dest;
      v11 = v6 + 1;
      if ( *((_QWORD *)&v17 + 1) < v6 + 1 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v6 + 1, 1);
        v10 = dest;
      }
      *(_QWORD *)&v17 = v11;
      memmove(v10, v5, v7);
      *((_BYTE *)dest + v7) = 0;
    }
    else
    {
      *(_QWORD *)&v17 = 0;
    }
    sub_4847B0(a1, (const char *)dest);
  }
  v8 = "*";
  if ( !sub_483CC0((__int64 *)a1, "*") )
  {
    v8 = "*.*";
    if ( !sub_483CC0((__int64 *)a1, "*.*") )
    {
      v12 = *(_QWORD *)(a1 + 8);
      v13 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v12 + 1) )
      {
        v15 = qvector_reserve(a1, v13, v12 + 1, 48);
        *(_QWORD *)a1 = v15;
        v13 = v15;
        v12 = *(_QWORD *)(a1 + 8);
      }
      v14 = v13 + 48 * v12;
      v8 = "All files|*";
      *(_QWORD *)v14 = 0;
      *(_QWORD *)(v14 + 24) = 0;
      *(_OWORD *)(v14 + 8) = 0;
      *(_OWORD *)(v14 + 32) = 0;
      ++*(_QWORD *)(a1 + 8);
      sub_4836D0((__int64 *)v14, "All files|*", nullptr);
    }
  }
  if ( dest )
  {
    *(_QWORD *)&v17 = 0;
    qfree(dest, v8);
  }
  return v18 - __readfsqword(0x28u);
}
