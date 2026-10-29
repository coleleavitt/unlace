void __fastcall clang_disposeOverriddenCursors(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // [rsp+0h] [rbp-10h] BYREF

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 - 24);
    v2 = *(_QWORD *)(*(_QWORD *)(a1 - 8) + 32LL);
    v4 = v1;
    v3 = *(_QWORD **)(v2 + 32);
    if ( v3 == *(_QWORD **)(v2 + 40) )
    {
      sub_63D4F0(v2 + 24, &v4);
    }
    else
    {
      *v3 = v1;
      *(_QWORD *)(v2 + 32) += 8LL;
    }
  }
}

