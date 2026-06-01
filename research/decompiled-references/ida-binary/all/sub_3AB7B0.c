__int64 __fastcall ask_offset_codec_t__::vfunc_1(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  _QWORD *v4; // rax
  unsigned __int64 v6; // r13
  const void *v7; // r14
  const char *v8; // rsi
  __int128 v10; // [rsp+0h] [rbp-D8h] BYREF
  char *v11; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v12; // [rsp+18h] [rbp-C0h]
  __int64 v13; // [rsp+28h] [rbp-B0h]
  __int128 v14; // [rsp+30h] [rbp-A8h]
  _OWORD v15[3]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v16; // [rsp+70h] [rbp-68h]
  int v17; // [rsp+78h] [rbp-60h]
  __int64 v18; // [rsp+80h] [rbp-58h]
  char v19; // [rsp+88h] [rbp-50h]
  unsigned __int64 v20; // [rsp+98h] [rbp-40h]

  v4 = *(_QWORD **)(a1 + 8);
  v20 = __readfsqword(0x28u);
  if ( (get_tinfo_property(*v4, 2) & 0x2F) != 0xD )
    return 0;
  v6 = *(_QWORD *)(a3 + 8);
  v11 = nullptr;
  v13 = 0;
  v16 = 1;
  v17 = -1;
  v18 = 0;
  v19 = 0;
  v10 = 0;
  v12 = 0;
  v14 = 0;
  v15[0] = 0;
  if ( v6 >= 2 )
  {
    v7 = *(const void **)a3;
    v11 = (char *)qvector_reserve(&v11, 0, v6, 1);
    *(_QWORD *)&v12 = v6;
    memmove(v11, v7, v6 - 1);
    v11[v6 - 1] = 0;
  }
  v8 = **(const char ***)(a1 + 8);
  if ( (int)find_tinfo_udt_member(&v10, v8, 3) < 0 )
  {
    clear_tinfo_t(v15);
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13, v8);
    }
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11, v8);
    }
    return 0;
  }
  *a2 = (unsigned __int64)v10 >> 3;
  clear_tinfo_t(v15);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13, v8);
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11, v8);
  }
  return 1;
}
