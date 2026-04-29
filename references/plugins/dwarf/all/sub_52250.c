__int64 __fastcall sub_52250(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  __m128i v10; // rax
  int v11; // r8d
  int v12; // r9d
  bool v13; // zf
  __int64 v14; // rdx
  int v16; // [rsp+10h] [rbp-78h]
  __int128 v17; // [rsp+20h] [rbp-68h] BYREF
  __m128i v18; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v16 = (_DWORD)a3 + 24;
  v7 = sub_5A0C0(a3 + 3, a4, a5, 4);
  v8 = v7 + 8;
  v9 = v7;
  v17 = 0;
  if ( !(unsigned __int8)sub_945B0(v7 + 8, &v17, 73)
    || (v10.m128i_i64[0] = sub_951C0(v8, &v17), v18 = v10, !(unsigned __int8)sub_4F650(a3, v8, &v18, v9 + 392)) )
  {
    if ( (*(_QWORD *)(a4 + 224) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)(a4 + 224) == -1 )
    {
      if ( under_debugger )
        BUG();
      interr(30478);
    }
    *(_QWORD *)(v9 + 400) = sub_5C3E0(a2, 0, a4 + 224);
    *(_DWORD *)(v9 + 392) = 3;
    v13 = unk_CC8D0 == 0;
    *(_QWORD *)(v9 + 408) = v14;
    if ( !v13 )
      sub_66090(v16, *a3, (unsigned int)"after_modifier_type_%p", v9, v11, v12);
  }
  *(_DWORD *)a1 = 1;
  *(_OWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = v9;
  *(_DWORD *)(a1 + 20) = 0;
  sub_84A10(&v17);
  return a1;
}
