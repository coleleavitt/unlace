unsigned __int64 __fastcall sub_D8AB40(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 == 1 )
  {
    v4 = *(_QWORD *)(a1 + 32);
  }
  else if ( v2 )
  {
    if ( v2 == 2 || v2 == 3 )
    {
      sub_CEF5A0(nullptr);
      BUG();
    }
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 32);
      v5 = *(unsigned int *)(a1 + 40);
      if ( *(_DWORD *)(v4 + 24) != (_DWORD)v5 && (_DWORD)v5 )
        v4 = *(_QWORD *)(v3 + v5 + 32);
    }
    else
    {
      v4 = 64;
    }
  }
  result = sub_CEF5A0((__int64 *)v4);
  v9 = result;
  if ( *(_BYTE *)(v4 + 60) )
  {
    v13 = result & 0xFFFFFFFFFFFFFFF0LL;
    v10 = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v14 + 16) != 42 )
      return sub_CEF620(v4, a2, v14, v7, v8);
    v11 = *(unsigned __int8 *)(v10 + 16);
    goto LABEL_19;
  }
  if ( *(_QWORD *)(v4 + 32) || !*(_BYTE *)(v4 + 52) )
  {
    v10 = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
    v7 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    v11 = *(unsigned __int8 *)(v10 + 16);
    if ( (_BYTE)v7 != 42 )
    {
      v12 = (unsigned int)(v11 - 2);
      if ( (unsigned __int8)v12 > 4u )
      {
        v15 = (unsigned int)(v7 - 2);
        if ( (unsigned __int8)v15 > 4u )
          return v9;
        v10 = sub_F63050(v10, a2, v12, v15);
        if ( !v10 )
          return v9;
      }
      return *(_QWORD *)(v10 + 32);
    }
LABEL_19:
    if ( (_BYTE)v11 != 42 )
      v10 = sub_F63050(v10, a2, v11, v7);
    return *(_QWORD *)(v10 + 32);
  }
  return result;
}
