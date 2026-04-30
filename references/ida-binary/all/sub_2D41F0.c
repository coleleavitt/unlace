__int64 __fastcall sub_2D41F0(__int64 a1, __int64 a2, const char *a3)
{
  __int64 result; // rax
  unsigned int v7; // [rsp+Ch] [rbp-3Ch]
  char *v8; // [rsp+10h] [rbp-38h] BYREF
  __int128 v9; // [rsp+18h] [rbp-30h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( dword_8CC5F0 >= 0 )
    return 0;
  v9 = 0;
  v8 = nullptr;
  if ( !(unsigned __int8)sub_384790(a2, a3, a1 + 100, &v8) )
  {
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v8, a3);
    }
    return 0;
  }
  sub_2D4060(a1, &v8);
  result = *(unsigned int *)(a1 + 100);
  if ( v8 )
  {
    v7 = *(_DWORD *)(a1 + 100);
    *(_QWORD *)&v9 = 0;
    qfree(v8, (const char *)&v8);
    return v7;
  }
  return result;
}
