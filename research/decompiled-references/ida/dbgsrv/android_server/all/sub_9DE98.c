/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9DE98
// Address: 0x000000000009DE98

//----- (000000000009DE98) ----------------------------------------------------
__int64 __fastcall sub_9DE98(int a1, const char **a2)
{
  __int64 v4; // x22
  __int64 v5; // x21
  void *v6; // x23
  void *v7; // x1
  void *src; // [xsp+8h] [xbp-B8h] BYREF
  unsigned __int64 v10; // [xsp+10h] [xbp-B0h]
  __int64 v11; // [xsp+18h] [xbp-A8h]
  void *v12[2]; // [xsp+20h] [xbp-A0h] BYREF
  __int128 v13; // [xsp+30h] [xbp-90h]
  __int128 v14; // [xsp+40h] [xbp-80h]
  __int128 ptr; // [xsp+50h] [xbp-70h]
  __int64 v16; // [xsp+60h] [xbp-60h]
  __int64 (*v17)(char *, ...); // [xsp+68h] [xbp-58h]
  char v18; // [xsp+70h] [xbp-50h]
  __int64 v19; // [xsp+78h] [xbp-48h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  ((void (*)(void))loc_6B834)();
  if ( (sub_474C0() & 1) != 0 )
  {
    src = nullptr;
    v10 = 0;
    v11 = 0;
    if ( (qgetenv("IDA_DBGSRV_PASSWD", (__int64)&src) & 1) != 0 )
    {
      v4 = v10;
      if ( !v10 || (v5 = v10 - 1, v10 == 1) )
      {
        qword_166C98 = 0;
      }
      else
      {
        v6 = src;
        v7 = (void *)qword_166C90;
        if ( qword_166CA0 < v10 )
        {
          v7 = qvector_reserve((pthread_mutex_t *)&qword_166C90, (void *)qword_166C90, v10, 1u);
          qword_166C90 = (__int64)v7;
        }
        qword_166C98 = v4;
        memmove(v7, v6, v4 - 1);
        *(_BYTE *)(qword_166C90 + v5) = 0;
      }
    }
    sub_A84C8("IDA Android 64-bit remote debug server(ST) v%d.%d.%d. Hex-Rays (c) 2004-2026\n", 9, 3, 31);
    v16 = 0;
    v14 = 0u;
    ptr = 0u;
    *(_OWORD *)v12 = 0u;
    v13 = 0u;
    v17 = sub_A84C8;
    byte_166CA8 = byte_166BF8;
    v18 = 1;
    sub_A3C7C((__int64)&qword_166C20, (pthread_mutex_t *)v12, 1);
    cliopts_t_add((pthread_mutex_t *)v12, (__int128 *)&qword_15E5D0, 1);
    if ( byte_166CA8 )
      cliopts_t_add((pthread_mutex_t *)v12, (__int128 *)&qword_15E5F8, 2);
    cliopts_t_apply((unsigned __int8 **)v12, a1, a2, (__int64)&qword_166C20);
    sub_A3E90((__int64)&qword_166C20);
    sub_A3ED8((__int64)&qword_166C20);
    if ( (_QWORD)ptr )
    {
      *((_QWORD *)&ptr + 1) = 0;
      qfree((void *)ptr);
      *(_QWORD *)&ptr = 0;
      v16 = 0;
    }
    if ( *((_QWORD *)&v13 + 1) )
    {
      *(_QWORD *)&v14 = 0;
      qfree(*((void **)&v13 + 1));
      *((_QWORD *)&v13 + 1) = 0;
      *((_QWORD *)&v14 + 1) = 0;
    }
    if ( v12[0] )
    {
      v12[1] = nullptr;
      qfree(v12[0]);
      v12[0] = nullptr;
      *(_QWORD *)&v13 = 0;
    }
    if ( src )
    {
      v10 = 0;
      qfree(src);
      src = nullptr;
      v11 = 0;
    }
    return 0;
  }
  else
  {
    sub_A84C8("Could not initialize subsystem!");
    return 0xFFFFFFFFLL;
  }
}
// 15E5D0: using guessed type __int64 qword_15E5D0;
// 15E5F8: using guessed type __int64 qword_15E5F8;
// 166BF8: using guessed type char byte_166BF8;
// 166C20: using guessed type __int64 qword_166C20;
// 166C90: using guessed type __int64 qword_166C90;
// 166C98: using guessed type __int64 qword_166C98;
// 166CA0: using guessed type __int64 qword_166CA0;
// 166CA8: using guessed type char byte_166CA8;
