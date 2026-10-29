void __fastcall clang_disposeString(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // [rsp+0h] [rbp-10h] BYREF

  if ( a2 == 1 )
  {
    if ( a1 )
      free(a1);
  }
  else if ( a2 == 2 )
  {
    v2 = a1[19];
    v5 = a1;
    v3 = *(_QWORD *)(v2 + 16);
    v4 = *(_QWORD **)(v3 + 8);
    if ( v4 == *(_QWORD **)(v3 + 16) )
    {
      sub_690850(v3, &v5);
    }
    else
    {
      *v4 = a1;
      *(_QWORD *)(v3 + 8) += 8LL;
    }
  }
}

