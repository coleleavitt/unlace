__int64 __fastcall clang_Type_getValueType(
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
  __int64 v10; // rdi
  __int64 v12; // rax

  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) > 0xF
    && (v10 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 7) )
  {
    if ( *(_BYTE *)(v10 + 16) == 7 )
    {
      sub_690DD0(a1, *(_QWORD *)(v10 + 32), a9);
    }
    else
    {
      v12 = sub_B0D320(v10);
      sub_690DD0(a1, *(_QWORD *)(v12 + 32), a9);
    }
    return a1;
  }
  else
  {
    sub_690DD0(a1, 0, a9);
    return a1;
  }
}

