__int64 __fastcall sub_390200(__int64 a1)
{
  unsigned int v2; // ebp
  unsigned __int64 *v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // [rsp+8h] [rbp-60h] BYREF
  __int64 v13; // [rsp+10h] [rbp-58h] BYREF
  __int64 tinfo_property; // [rsp+18h] [rbp-50h] BYREF
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __int128 v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  sub_38B490(a1, 0);
  v2 = sub_38D820(a1 + 80, &v12, &v13, *(_QWORD *)(a1 + 32));
  if ( (_BYTE)v2 )
  {
    v4 = sub_2572F0(*(_QWORD *)(a1 + 32), *(_QWORD **)(a1 + 88));
    v5 = *(_QWORD *)(a1 + 32);
    v6 = *v4;
    v16 = 0;
    v15 = 0;
    sub_257F10(v5, v6, &v15, v7);
    tinfo_property = 0;
    tinfo_property = get_tinfo_property();
    if ( sub_334F40(nullptr, &tinfo_property, v12, (__int64)&v15) >= 0 )
    {
      sub_25E960(*(_QWORD *)(a1 + 32), v6, (__int64)&v15);
      v8 = *(__int64 **)(a1 + 32);
      v9 = *v8;
      sub_2B7C90(*(_QWORD *)(v8[27] + 112), *v8, v8[12]);
      sub_3901D0(a1, v9, v10, v11);
    }
    clear_tinfo_t();
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15);
    }
  }
  return v2;
}
