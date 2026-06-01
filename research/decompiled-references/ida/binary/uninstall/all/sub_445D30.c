__int64 __fastcall sub_445D30(__int64 a1, __int64 a2, __int64 *a3)
{
  void *v4; // r12
  __int64 v5; // rbp
  __int64 result; // rax
  __int64 v7; // rax
  void (__fastcall *v8)(__int64); // rax

  v4 = (void *)sub_47B3B0(a2);
  if ( *(_UNKNOWN ***)(a2 + 24) != &off_6555C0 )
  {
    v5 = sub_445140(a1, v4);
    result = 1;
    if ( !v5 )
      return result;
    v7 = *(_QWORD *)(a2 + 24);
    if ( v7 )
    {
      v8 = *(void (__fastcall **)(__int64))(v7 + 8);
      if ( v8 )
        v8(a2);
    }
    *(_QWORD *)(a2 + 32) = v5;
    *(_QWORD *)(a2 + 24) = &off_6555C0;
  }
  *a3 = sub_445140(0, v4);
  return 0;
}

