__int64 __fastcall sub_2099F10(__int64 a1, double a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  _QWORD *i; // r13
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rax

  v2 = *(_QWORD **)(a1 + 16);
  result = *(unsigned int *)(a1 + 24);
  for ( i = &v2[result]; i != v2; ++v2 )
  {
    v5 = *v2;
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 104LL))(*v2);
    if ( v6 )
    {
      result = sub_2099F10(v6);
    }
    else
    {
      result = sub_2099960(*(_QWORD *)(a1 + 8), *(_QWORD *)(v5 + 16), v7, v8, v9, v10);
      v11 = result;
      if ( result )
      {
        v12 = sub_221A480(a2);
        v13 = sub_995540(v12, " -");
        result = sub_9954E0(v13, *(const void **)(v11 + 16), *(_QWORD *)(v11 + 24));
      }
    }
  }
  return result;
}
