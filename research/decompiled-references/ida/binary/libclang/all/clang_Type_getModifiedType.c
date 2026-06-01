__int64 __fastcall clang_Type_getModifiedType(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v13; // rdi

  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    goto LABEL_7;
  v10 = a8 & 0xFFFFFFFFFFFFFFF0LL;
  v11 = sub_B0FD00(*(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v11 )
  {
    sub_690DD0(a1, *(_QWORD *)(v11 + 40), a9);
    return a1;
  }
  v13 = *(_QWORD *)v10;
  if ( *(_BYTE *)(*(_QWORD *)v10 + 16LL) == 9
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 9 && (v13 = sub_B0D320(v13)) != 0 )
  {
    sub_690DD0(a1, *(_QWORD *)(v13 + 32), a9);
    return a1;
  }
  else
  {
LABEL_7:
    sub_690DD0(a1, 0, a9);
    return a1;
  }
}

