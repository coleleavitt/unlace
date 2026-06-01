__int64 __fastcall sub_40A660(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // eax
  int *v7; // rdi
  int v8; // eax
  bool v9; // zf
  int *v10; // [rsp+8h] [rbp-20h] BYREF

  v4 = sub_452DF0(a1, a2, &v10);
  if ( !v4 )
  {
    v6 = sub_47BB80(a1, v10, a3);
    v7 = v10;
    v4 = v6;
    v8 = *v10 - 1;
    v9 = *v10 == 1;
    *v10 = v8;
    if ( v8 < 0 || v9 )
      sub_47B120(v7);
  }
  return v4;
}

