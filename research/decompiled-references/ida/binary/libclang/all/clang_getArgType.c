__int64 __fastcall clang_getArgType(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rdi
  __int64 v12; // rax

  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    goto LABEL_4;
  v10 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) == 26 )
  {
    if ( a2 >= (unsigned __int16)(*(_DWORD *)(v10 + 20) >> 6) )
    {
LABEL_4:
      sub_690DD0(a1, 0, a9);
      return a1;
    }
  }
  else
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      goto LABEL_4;
    v12 = sub_B0D320(v10);
    v10 = v12;
    if ( !v12 || a2 >= (unsigned __int16)(*(_DWORD *)(v12 + 20) >> 6) )
      goto LABEL_4;
  }
  sub_690DD0(a1, *(_QWORD *)(v10 + 8LL * a2 + 48), a9);
  return a1;
}

