__int64 __fastcall sub_5771F0(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6, char a7, __int16 a8)
{
  char v10; // r9
  unsigned int v11; // eax
  unsigned __int64 v12; // r13
  unsigned int v13; // r12d
  size_t v15; // r15
  __int64 v16; // r14
  size_t v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rax
  size_t v21; // [rsp+0h] [rbp-70h]
  __int64 v22; // [rsp+18h] [rbp-58h] BYREF
  void *src; // [rsp+20h] [rbp-50h] BYREF
  __int128 v24; // [rsp+28h] [rbp-48h]
  unsigned __int64 v25; // [rsp+38h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  v22 = 0;
  if ( (unsigned __int8)get_type_by_tid(&v22, a5) )
  {
    v10 = a6;
    v24 = 0;
    if ( (a8 & 0x1000) != 0 )
      v10 = -1;
    src = nullptr;
    v11 = sub_576160(*(__int64 **)(a2 + 1672), (__int64 *)&src, &v22, a3, a4, v10, a7);
    v12 = v24;
    v13 = v11;
    if ( (_QWORD)v24 )
    {
      v15 = v24 - 1;
      if ( (_QWORD)v24 != 1 )
      {
        v16 = a1[4];
        v17 = v24 - 1;
        if ( v16 )
        {
          --v16;
          v17 = v15 + v16;
          v12 = v24 + v16;
        }
        v18 = a1[3];
        if ( a1[5] < v12 )
        {
          v21 = v17;
          v19 = qvector_reserve(a1 + 3, v18, v12, 1);
          a1[3] = v19;
          v17 = v21;
          v18 = v19;
        }
        a1[4] = v12;
        *(_BYTE *)(v18 + v17) = 0;
        memcpy((void *)(v16 + a1[3]), src, v15);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v24 = 0;
      qfree(src);
    }
  }
  else
  {
    v13 = -2;
  }
  clear_tinfo_t(&v22);
  return v13;
}
