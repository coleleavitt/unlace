unsigned __int64 __fastcall sub_409B90(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __m128i v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v5 = switch_dbctx(*(int *)(a2 + 8));
  v9.m128i_i64[0] = 0;
  v10 = 0;
  v6 = *(_QWORD *)(v5 + 1480);
  v9.m128i_i64[1] = 0xFFFFFFFF00000000LL;
  if ( (unsigned __int8)sub_408580(v6, &v9, a3) )
  {
    v7 = switch_dbctx(*(int *)(a1 + 8));
    sub_4099C0(*(_QWORD **)(v7 + 1480), a3, (unsigned __int16 *)&v9);
  }
  return v11 - __readfsqword(0x28u);
}

