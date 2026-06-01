char *__fastcall sub_1071450(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // r12
  int v6; // eax
  __int64 v7; // rdx
  bool v8; // zf
  char *result; // rax
  __int64 v10; // rdx

  *(_DWORD *)(a1 + 616) = a2;
  v2 = sub_229FBC0(a2);
  v4 = v3;
  v5 = v2;
  *(_DWORD *)(a1 + 620) = sub_229CC10(v2, v3);
  *(_DWORD *)(a1 + 624) = sub_229CB60(v5, v4);
  *(_QWORD *)(a1 + 592) = sub_1071090(a1);
  v6 = *(_DWORD *)(a1 + 620);
  *(_QWORD *)(a1 + 600) = v7;
  if ( v6 == 2 )
  {
    v10 = 1;
    result = "R";
  }
  else if ( v6 == 3 )
  {
    v10 = 1;
    result = "M";
  }
  else
  {
    v8 = v6 == 1;
    result = "A";
    v10 = v8;
    if ( !v8 )
      result = (char *)&byte_22F0C30;
  }
  *(_QWORD *)(a1 + 576) = result;
  *(_QWORD *)(a1 + 584) = v10;
  return result;
}
