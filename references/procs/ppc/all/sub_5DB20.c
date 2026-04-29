unsigned __int64 __fastcall sub_5DB20(__int64 a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 result; // rax
  const char *v3; // rsi
  __int64 segm_name; // rdx
  char *v5; // rbx
  int v6; // edx
  unsigned __int64 v7; // [rsp+8h] [rbp-30h]
  char *s1; // [rsp+10h] [rbp-28h] BYREF
  __int128 v9; // [rsp+18h] [rbp-20h]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 8);
  v10 = __readfsqword(0x28u);
  if ( v1 <= 0x7FFF )
    return 0;
  if ( !(unsigned __int8)is_mapped(v1 - 0x8000) )
    return 0;
  v3 = (const char *)getseg(v1 - 0x8000);
  if ( !v3 )
    return 0;
  s1 = nullptr;
  v9 = 0;
  segm_name = get_segm_name(&s1, v3, 0);
  v5 = s1;
  result = 0;
  if ( segm_name > 0 )
  {
    if ( (_QWORD)v9 )
    {
      v3 = ".got";
      v6 = strcmp(s1, ".got");
      result = 0x8000;
      if ( v6 )
      {
        v3 = ".got2";
        result = (unsigned __int64)(strcmp(v5, ".got2") == 0) << 15;
      }
    }
  }
  if ( v5 )
  {
    v7 = result;
    *(_QWORD *)&v9 = 0;
    qfree(v5, v3);
    return v7;
  }
  return result;
}
