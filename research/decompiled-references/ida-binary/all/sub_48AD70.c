__int64 __fastcall sub_48AD70(__int64 a1, __int64 a2)
{
  int v2; // ecx
  __int64 result; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // [rsp+7h] [rbp-31h] BYREF
  char v9; // [rsp+Fh] [rbp-29h]
  __int64 v10; // [rsp+10h] [rbp-28h] BYREF
  __int64 v11; // [rsp+18h] [rbp-20h]
  unsigned __int64 v12; // [rsp+28h] [rbp-10h]

  v2 = *(_DWORD *)a2;
  v12 = __readfsqword(0x28u);
  result = -1;
  if ( v2 >= 0 && *(int *)(a2 + 4) >= 0 && *(_QWORD *)(a2 + 16) )
  {
    v4 = *(_QWORD *)(a2 + 8);
    v5 = (unsigned int)v4;
    v6 = HIDWORD(v4);
    if ( v6 == 0xFFFFFFFFLL )
    {
      v10 = -1;
      result = 0;
      v11 = v5;
      if ( v5 )
        return result;
    }
    else
    {
      v10 = v6;
      v11 = v5;
    }
    v7 = **(_QWORD **)(a1 + 208);
    v9 = 0;
    v8 = -1;
    dirtree_resolve_cursor(&v8, v7, &v10);
    result = v8;
    if ( v8 != -1 && !v9 )
      return -1;
  }
  return result;
}
