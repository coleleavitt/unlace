unsigned __int64 __fastcall sub_22F330(__int64 a1, __int64 a2, int a3, int a4, const char *a5, __int64 a6)
{
  __int64 v7; // r13
  int v9; // edx
  __int64 v12; // rax
  __int64 v13; // rsi
  char *sa; // [rsp+0h] [rbp-A8h]
  __int64 v16; // [rsp+8h] [rbp-A0h]
  const char *src; // [rsp+18h] [rbp-90h]
  __int64 v18; // [rsp+20h] [rbp-88h] BYREF
  __int128 v19; // [rsp+28h] [rbp-80h]
  _QWORD v20[3]; // [rsp+38h] [rbp-70h] BYREF
  int v21; // [rsp+50h] [rbp-58h]
  int v22; // [rsp+54h] [rbp-54h]
  int v23; // [rsp+58h] [rbp-50h]
  unsigned __int64 v24; // [rsp+68h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 == 1 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    v9 = 1;
    if ( a4 > 0 )
      v9 = a4;
    if ( (unsigned __int8)sub_1E8630(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 8), v9) )
    {
      v12 = *(_QWORD *)(a2 + 16);
      v18 = 0;
      v19 = 0;
      v16 = v12;
      if ( a5 )
      {
        src = a5;
        sa = (char *)strlen(a5);
        v18 = qvector_reserve(&v18, 0, sa + 1, 1);
        *(_QWORD *)&v19 = sa + 1;
        memmove((void *)v18, src, (size_t)sa);
        sa[v18] = 0;
      }
      v20[0] = 0;
      if ( a6 )
      {
        copy_tinfo_t(v20, a6);
        v13 = v20[0];
      }
      else
      {
        v13 = 0;
      }
      v22 = a4;
      v20[1] = v7;
      v20[2] = v16;
      v21 = -1;
      v23 = a3;
      if ( get_tinfo_size(0, v13, 0) <= 0
        || (get_tinfo_property(v20[0], 2) & 0x3F) == 1
        || (get_tinfo_property(v20[0], 2) & 0xF) == 0xC )
      {
        clear_tinfo_t(v20);
      }
      sub_22ED40((__m128i *)(a1 + 88), (__int64)&v18, nullptr);
      clear_tinfo_t(v20);
      if ( v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v18);
      }
    }
  }
  return v24 - __readfsqword(0x28u);
}
