__int64 __fastcall sub_55D810(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        char a6,
        char a7,
        __int16 a8)
{
  char v10; // r9
  unsigned int v11; // eax
  unsigned __int64 v12; // r13
  unsigned int v13; // ebx
  size_t v15; // r15
  size_t v16; // r8
  __int64 v17; // r14
  __int64 v18; // rsi
  size_t v20; // [rsp+8h] [rbp-68h]
  __int64 v21; // [rsp+18h] [rbp-58h] BYREF
  void *src; // [rsp+20h] [rbp-50h] BYREF
  __int128 v23; // [rsp+28h] [rbp-48h]
  unsigned __int64 v24; // [rsp+38h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  v21 = 0;
  if ( (unsigned __int8)get_type_by_tid(&v21, a5) )
  {
    v10 = a6;
    if ( (a8 & 0x1000) != 0 )
      v10 = -1;
    v23 = 0;
    src = nullptr;
    v11 = sub_55C780(*(_QWORD **)(a2 + 1480), (__int64 *)&src, &v21, a3, a4, v10, a7);
    v12 = v23;
    v13 = v11;
    if ( (_QWORD)v23 )
    {
      v15 = v23 - 1;
      if ( (_QWORD)v23 != 1 )
      {
        v16 = v23 - 1;
        v17 = a1[4];
        if ( v17 )
        {
          --v17;
          v16 = v15 + v17;
          v12 = v23 + v17;
        }
        v18 = a1[3];
        if ( a1[5] < v12 )
        {
          v20 = v16;
          v18 = qvector_reserve(a1 + 3, v18, v12, 1);
          v16 = v20;
          a1[3] = v18;
        }
        a1[4] = v12;
        *(_BYTE *)(v18 + v16) = 0;
        memcpy((void *)(v17 + a1[3]), src, v15);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v23 = 0;
      qfree(src);
    }
  }
  else
  {
    v13 = -2;
  }
  clear_tinfo_t(&v21);
  return v13;
}

