void __fastcall sub_40DC90(__int64 a1)
{
  __int64 i; // rax
  int *v3; // rdi
  int v4; // eax
  bool v5; // zf
  _BYTE v6[56]; // [rsp+0h] [rbp-38h] BYREF

  if ( a1 )
  {
    for ( i = sub_457E20(a1, v6); i; i = sub_457DE0(v6) )
    {
      v3 = *(int **)(i + 24);
      if ( v3 )
      {
        v4 = *v3 - 1;
        v5 = *v3 == 1;
        *v3 = v4;
        if ( v4 < 0 || v5 )
          sub_47B120(v3);
      }
    }
    sub_457CE0(a1);
  }
}

