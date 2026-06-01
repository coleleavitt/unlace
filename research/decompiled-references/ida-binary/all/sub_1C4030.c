unsigned __int64 __fastcall sub_1C4030(__int64 a1)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // [rsp+10h] [rbp-38h] BYREF
  __int128 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( (int)sub_4A0D70(*(_QWORD *)(a1 + 128)) > 0 && !(unsigned __int8)sub_4A71A0(*(_QWORD *)(a1 + 128)) )
  {
    v3 = *(_QWORD *)(a1 + 128);
    v9 = 0;
    v4 = *(_QWORD *)(v3 + 2472);
    v10 = 0;
    v5 = sub_499340(v4, 0, 0);
    v6 = 0;
    if ( v5 == -1 )
      v5 = 0;
    v7 = v10;
    if ( *((_QWORD *)&v10 + 1) < (unsigned __int64)(v10 + 1) )
    {
      v9 = qvector_reserve(&v9, 0, v10 + 1, 8);
      v6 = v9;
      v7 = v10;
    }
    *(_QWORD *)(v6 + 8 * v7) = v5;
    v8 = *(_QWORD *)(a1 + 128);
    *(_QWORD *)&v10 = v10 + 1;
    sub_4A8AF0(v8, &v9, -1);
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree(v9, (const char *)&v9);
    }
  }
  return v11 - __readfsqword(0x28u);
}
