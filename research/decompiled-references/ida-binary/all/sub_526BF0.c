bool __fastcall sub_526BF0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  const char *v4; // rsi
  __int64 v5; // rax
  const char *v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  bool result; // al
  unsigned __int64 v10; // [rsp+8h] [rbp-30h] BYREF
  __int64 v11[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 8) == 0;
  v11[1] = __readfsqword(0x28u);
  v4 = &s1;
  v10 = -1;
  if ( !v2 )
    v4 = *(const char **)a1;
  v5 = sub_526AF0((__int64 *)&v10, v4);
  v2 = *(_QWORD *)(a2 + 8) == 0;
  v11[0] = -1;
  v6 = &s1;
  v7 = v5;
  if ( !v2 )
    v6 = *(const char **)a2;
  v8 = sub_526AF0(v11, v6);
  result = 1;
  if ( v7 >= v8 )
    return v10 < v11[0];
  return result;
}
