__int64 __fastcall sub_3887D0(__int64 a1, char a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // rdx

  v2 = sub_1C8060(*(_QWORD *)(a1 + 24));
  result = 0;
  if ( v2 )
  {
    get_func(*v2);
    v4 = -1;
    if ( a2 )
      v4 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 588LL);
    *((_DWORD *)v2 + 16) = v4;
    update_func(v2);
    mark_builtin_widgets(8, 0, 1);
    sub_387D20(a1, 1u, v5);
    return 1;
  }
  return result;
}
