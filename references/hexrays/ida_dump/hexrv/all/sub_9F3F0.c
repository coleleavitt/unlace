_QWORD *__fastcall sub_9F3F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  int v6; // r14d
  _QWORD *v7; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD v11[9]; // [rsp+0h] [rbp-48h] BYREF

  v11[3] = __readfsqword(0x28u);
  if ( (a5 & 1) == 0 )
    return nullptr;
  if ( (a5 & 2) != 0 )
    return (_QWORD *)a2;
  v5 = a3;
  if ( a3 )
  {
    v6 = *(_DWORD *)(a2 + 68);
    if ( a4 )
    {
      if ( *(_DWORD *)(a3 + 4) + *(_DWORD *)(a4 + 4) == v6 )
      {
        if ( !*(_BYTE *)(*(_QWORD *)(a1 + 480) + 145LL) )
        {
          v10 = a4;
          a4 = a3;
          v5 = v10;
        }
        sub_118550(a2 + 64, a4);
        sub_9E640(
          (__int64)v11,
          *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
          *(_QWORD *)(a2 + 24),
          a2 + 48,
          v6 - *(_DWORD *)(v5 + 4),
          1);
        v7 = sub_9ED80(a1, a2, 2, a2 + 32, (__int64)v11, v5);
        sub_9F2C0(a1, a2, (__int64)v7);
        goto LABEL_9;
      }
      if ( !under_debugger )
        sub_37DDE0(52829);
LABEL_24:
      BUG();
    }
    v9 = *(_QWORD *)(a1 + 480);
    if ( !*(_BYTE *)(v9 + 145) )
    {
      sub_118550(a2 + 64, a3);
      return (_QWORD *)a2;
    }
  }
  else
  {
    if ( !a4 )
    {
      if ( !under_debugger )
        sub_37DDE0(51077);
      goto LABEL_24;
    }
    v9 = *(_QWORD *)(a1 + 480);
    if ( *(_BYTE *)(v9 + 145) )
    {
      sub_118550(a2 + 64, a4);
      return (_QWORD *)a2;
    }
    v6 = *(_DWORD *)(a2 + 68);
    v5 = a4;
  }
  sub_9E640((__int64)v11, *(_QWORD *)(v9 + 112), *(_QWORD *)(a2 + 24), a2 + 48, v6 - *(_DWORD *)(v5 + 4), 1);
  sub_118550(a2 + 48, v11);
  sub_118550(a2 + 64, v5);
  v7 = (_QWORD *)a2;
LABEL_9:
  sub_1188E0(v11);
  return v7;
}
