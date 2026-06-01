__int64 __fastcall clang_getResultType(
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
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v13; // rax

  v10 = a9;
  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) > 0xF
    && ((v11 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL), (unsigned int)*(unsigned __int8 *)(v11 + 16) - 25 <= 1)
     || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1
     && (v13 = sub_B0D320(v11), v10 = a9, (v11 = v13) != 0)) )
  {
    sub_690DD0(a1, *(_QWORD *)(v11 + 24), v10);
    return a1;
  }
  else
  {
    sub_690DD0(a1, 0, v10);
    return a1;
  }
}

