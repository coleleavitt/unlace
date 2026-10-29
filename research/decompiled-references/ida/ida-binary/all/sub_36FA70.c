unsigned __int64 __fastcall pb_chooser_t__::vfunc_9(__int64 a1, __int64 *a2, unsigned __int64 *a3)
{
  __int64 v4; // rax
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v4 = sub_36F9E0(a1, *a3);
  if ( v4 != -1 )
  {
    v6 = v4;
    v7 = *a2;
    v8 = a2[1];
    if ( a2[2] < (unsigned __int64)(v8 + 1) )
    {
      v9 = qvector_reserve(a2, v7, v8 + 1, 8);
      *a2 = v9;
      v7 = v9;
      v8 = a2[1];
    }
    *(_QWORD *)(v7 + 8 * v8) = v6;
    ++a2[1];
  }
  return v10 - __readfsqword(0x28u);
}
