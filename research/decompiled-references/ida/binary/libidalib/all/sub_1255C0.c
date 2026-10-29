__int64 __fastcall sub_1255C0(int a1, __int64 a2)
{
  unsigned __int8 (__fastcall **v2)(__int64, __int64, _QWORD **); // rax
  _QWORD *v4; // [rsp+0h] [rbp-28h] BYREF
  __int128 v5; // [rsp+8h] [rbp-20h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  if ( ((a1 + 1) & 0xFFFFFFFD) == 0 )
  {
    v2 = *(unsigned __int8 (__fastcall ***)(__int64, __int64, _QWORD **))a2;
    v4 = nullptr;
    v5 = 0;
    if ( (*v2)(a2, 1, &v4) && (_QWORD)v5 )
      (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 2, *v4 == 10);
    if ( v4 )
    {
      *(_QWORD *)&v5 = 0;
      qfree();
    }
  }
  return 1;
}

