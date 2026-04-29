__int64 __fastcall sub_359660(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rdx
  const char *v7; // rsi
  __int64 v8; // rbx
  const char *v10; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 176);
  v11 = 0;
  v10 = nullptr;
  get_func_name(&v10, *(_QWORD *)(v6 + 120LL * a4 + 32));
  v7 = s1;
  if ( (_QWORD)v11 )
    v7 = v10;
  v8 = qstrncpy(a2, v7, a3);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return v8;
}
