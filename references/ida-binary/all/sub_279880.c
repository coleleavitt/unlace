__int64 __fastcall sub_279880(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  const char *v8; // rdx
  const char *v9; // rbx
  __int64 v10; // rax
  char v11; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v2 = sub_277DF0();
  v3 = get_merge_state() & 8;
  v4 = *(_QWORD *)(a2 + 72);
  v11 = (v3 >> 3) ^ 1;
  v5 = sub_534430(v4);
  if ( v5 )
    sub_537630(v5, 8, &v11);
  result = 5;
  if ( !v3 )
  {
    if ( !*(_BYTE *)(v2 + 104) )
    {
      v7 = *(_QWORD *)(v2 + 96);
      if ( v7 )
      {
        v8 = "Hide 'Common' panel";
        if ( *(char *)(*(_QWORD *)(v7 + 32) + 9LL) >= 0 )
          v8 = "show 'Common' panel";
        v9 = v8;
        v10 = sub_534430(*(_QWORD *)(a2 + 72));
        if ( v10 )
          sub_537630(v10, 1, v9);
      }
    }
    return 3;
  }
  return result;
}
