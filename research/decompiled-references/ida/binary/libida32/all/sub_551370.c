__int64 __fastcall sub_551370(
        __int64 a1,
        const char **a2,
        char a3,
        int a4,
        _QWORD *a5,
        _QWORD *a6,
        double a7,
        double a8)
{
  __int64 v11; // rcx
  __int64 v12; // r13
  char *v13; // rdi
  __int64 v14; // r12
  __int64 v15; // r14
  char *v16; // rbx
  void *v17; // rdi
  void *v18; // rdi
  char *v20; // [rsp+10h] [rbp-68h] BYREF
  void *ptr; // [rsp+18h] [rbp-60h] BYREF
  __int128 v22; // [rsp+20h] [rbp-58h]
  __int128 v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+40h] [rbp-38h]
  __int16 v25; // [rsp+48h] [rbp-30h]
  char v26; // [rsp+4Ah] [rbp-2Eh]
  char v27; // [rsp+4Bh] [rbp-2Dh]
  unsigned __int64 v28; // [rsp+50h] [rbp-28h]

  v28 = __readfsqword(0x28u);
  v27 = a3;
  v25 = 1;
  v11 = *(_QWORD *)(a1 + 24);
  ptr = nullptr;
  v24 = 0;
  v26 = 0;
  v20 = nullptr;
  v22 = 0;
  v23 = 0;
  if ( (unsigned __int8)sub_54E3B0(qword_2CA1698, (__int64)&ptr, nullptr, v11, a4, a2, &v20, nullptr, 0)
    && (unsigned __int8)sub_5501A0((__int64 *)&ptr, 0.0, a8) )
  {
    v12 = v23;
    if ( !(_QWORD)v23 )
    {
      if ( (v24 & 0x8000000000LL) == 0 )
      {
        if ( (getinf(57) & 0xF) != 6 )
          v12 = (getinf(67) & 0x80) == 0;
      }
      else
      {
        v12 = 1;
      }
    }
    if ( a5 )
      *a5 = (unsigned int)v24;
    if ( a6 )
      *a6 = *((_QWORD *)&v23 + 1);
  }
  else
  {
    v12 = -1;
  }
  v13 = (char *)ptr;
  if ( ptr )
  {
    v14 = v22;
    if ( (_QWORD)v22 )
    {
      v15 = 0;
      do
      {
        v16 = &v13[128 * v15];
        clear_tinfo_t(v16 + 64);
        v17 = *((void **)v16 + 5);
        if ( v17 )
        {
          *((_QWORD *)v16 + 6) = 0;
          qfree(v17);
        }
        v18 = *((void **)v16 + 2);
        if ( v18 )
        {
          *((_QWORD *)v16 + 3) = 0;
          qfree(v18);
        }
        v13 = (char *)ptr;
        ++v15;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v22 = 0;
    qfree(v13);
  }
  return v12;
}

