__int64 __fastcall sub_416E90(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rax
  _DWORD *v5; // rbx
  __int64 result; // rax
  int v7; // eax
  bool v8; // zf

  if ( a3 <= 1 )
  {
    sub_458930(a2, 1, a4, "list ?index...?");
    return 1;
  }
  else
  {
    if ( a3 == 3 )
      v4 = sub_4704A0(a2, *(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
    else
      v4 = sub_4702F0(a2, *(_QWORD *)(a4 + 8), (unsigned int)(a3 - 2), a4 + 16);
    v5 = (_DWORD *)v4;
    result = 1;
    if ( v5 )
    {
      sub_48AFD0(a2, v5);
      v7 = *v5 - 1;
      v8 = *v5 == 1;
      *v5 = v7;
      if ( v7 < 0 || v8 )
        sub_47B120(v5);
      return 0;
    }
  }
  return result;
}

