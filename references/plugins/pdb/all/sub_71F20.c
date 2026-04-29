__int64 __fastcall sub_71F20(__int64 a1, unsigned int a2)
{
  _DWORD *v3; // rax
  _DWORD *v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v7; // rsi
  __int64 *v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[1] = (__int64 *)__readfsqword(0x28u);
  v3 = sub_5F700((_QWORD *)(a1 + 224), a2);
  if ( v3 )
  {
    v4 = v3;
    v5 = (unsigned int)v3[4];
    if ( (_DWORD)v5 != -1 )
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 8 * v5) + 296LL))(*(_QWORD *)(*(_QWORD *)a1 + 8 * v5));
    (*(void (__fastcall **)(__int64 **, _QWORD, __int64))(**(_QWORD **)(a1 + 608) + 24LL))(v8, *(_QWORD *)(a1 + 608), 4);
    if ( v8[0] )
    {
      v7 = (unsigned int)v4[3];
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int64))(*v8[0] + 40))(v8[0], v7) )
      {
        v7 = (unsigned __int64)(v4 + 4);
        if ( (unsigned __int8)sub_6F9D0((_QWORD *)a1, v4 + 4, a2, v8, *((_WORD *)v4 + 10), 0) )
        {
          v5 = (unsigned int)v4[4];
          if ( (_DWORD)v5 != -1 )
          {
            if ( v8[0] )
            {
              (*(void (__fastcall **)(__int64 *))(*v8[0] + 8))(v8[0]);
              v5 = (unsigned int)v4[4];
            }
            return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 8 * v5) + 296LL))(*(_QWORD *)(*(_QWORD *)a1 + 8 * v5));
          }
        }
      }
      if ( (*(_DWORD *)debug & 0x400000) == 0 )
        goto LABEL_8;
    }
    else if ( (*(_DWORD *)debug & 0x400000) == 0 )
    {
      return 0;
    }
    v7 = a2;
    sub_29350();
LABEL_8:
    if ( v8[0] )
      (*(void (__fastcall **)(__int64 *, unsigned __int64))(*v8[0] + 8))(v8[0], v7);
    return 0;
  }
  if ( (*(_DWORD *)debug & 0x400000) != 0 )
    sub_29350();
  if ( a2 <= 0xFFF || sub_5F700((_QWORD *)(a1 + 168), a2) )
    return a2;
  else
    return 0;
}
