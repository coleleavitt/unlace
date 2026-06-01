unsigned __int64 __fastcall sub_631660(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // rbx
  __int64 v7; // rax
  const char *v8; // rsi
  int v9; // ebp
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v11; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v1 = switch_dbctx(*(int *)(a1 + 8));
  if ( *(_BYTE *)(a1 + 128) )
  {
    v6 = v1;
    ptr = nullptr;
    v7 = v1 + 640;
    v12 = v6;
    v11 = 0;
    if ( v6 )
      v13 = *(_QWORD *)(v6 + 1520);
    else
      v13 = -1;
    v14 = v7;
    sub_631310(&v12, (__int64)&off_2B36160, (__int64 *)&ptr, v2, v3, v4);
    v8 = haystack;
    if ( (_QWORD)v11 )
      v8 = (const char *)ptr;
    sub_656330(v6, v8);
    v9 = *(_DWORD *)(v6 + 912);
    sub_6511B0(v6, 5, 0, 0, 0);
    sub_39ADA0(0xBu, 0);
    if ( *(_DWORD *)(v6 + 912) != v9 )
    {
      if ( !under_debugger )
        interr(1894);
      BUG();
    }
    if ( ptr )
    {
      *(_QWORD *)&v11 = 0;
      qfree(ptr);
    }
  }
  return v15 - __readfsqword(0x28u);
}
