__int64 __fastcall sub_40A9B0(__int64 a1, _BYTE *a2)
{
  int *v4; // rax
  int *v5; // rbx
  unsigned int v6; // r12d
  int v7; // eax
  bool v8; // zf
  int *v9; // rdi
  int v10; // eax
  int *v11; // [rsp+8h] [rbp-20h] BYREF

  if ( *a2 )
  {
    v4 = (int *)sub_48DF10(a2, 0xFFFFFFFF);
    ++*v4;
    v5 = v4;
    v6 = sub_452DF0(a1, v4, &v11);
    v7 = *v5 - 1;
    v8 = *v5 == 1;
    *v5 = v7;
    if ( v7 < 0 || v8 )
      sub_47B120(v5);
    if ( !v6 )
    {
      sub_48AFD0(a1, v11);
      v9 = v11;
      v10 = *v11 - 1;
      v8 = *v11 == 1;
      *v11 = v10;
      if ( v10 < 0 || v8 )
        sub_47B120(v9);
    }
    sub_48B940(a1);
    return v6;
  }
  else
  {
    sub_48B860(a1, "0", 1);
    return 0;
  }
}

