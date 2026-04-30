__int64 __fastcall sub_34A6D0(int a1, __int64 a2)
{
  unsigned __int8 (__fastcall **v2)(__int64, __int64, _QWORD **); // rax
  const char *v4; // rsi
  _QWORD *v6; // [rsp+0h] [rbp-28h] BYREF
  __int128 v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( ((a1 + 1) & 0xFFFFFFFD) == 0 )
  {
    v2 = *(unsigned __int8 (__fastcall ***)(__int64, __int64, _QWORD **))a2;
    v6 = nullptr;
    v4 = (_BYTE *)(&dword_0 + 1);
    v7 = 0;
    if ( (*v2)(a2, 1, &v6) && (_QWORD)v7 )
    {
      v4 = (_BYTE *)(&dword_0 + 2);
      (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 2, *v6 == 10);
    }
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree(v6, v4);
    }
  }
  return 1;
}
