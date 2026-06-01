__int64 __fastcall sub_40A300(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // ebx
  __int64 result; // rax
  unsigned int v6; // ebx
  int *v7; // rdi
  int v8; // eax
  bool v9; // zf
  _QWORD *v10; // [rsp+8h] [rbp-30h] BYREF
  int v11; // [rsp+14h] [rbp-24h] BYREF
  int *v12; // [rsp+18h] [rbp-20h] BYREF

  v4 = sub_452DF0(a1, a2, &v12);
  result = 1;
  if ( !v4 )
  {
    v6 = sub_47CE30(a1, v12, &v10, &v11);
    if ( !v6 )
    {
      if ( v11 == 4 )
        *a3 = *v10;
      else
        v6 = sub_47BA50(a1, v12, a3);
    }
    v7 = v12;
    v8 = *v12 - 1;
    v9 = *v12 == 1;
    *v12 = v8;
    if ( v8 < 0 || v9 )
      sub_47B120(v7);
    return v6;
  }
  return result;
}

