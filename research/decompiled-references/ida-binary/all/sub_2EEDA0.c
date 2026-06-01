unsigned __int64 __fastcall fh_funcs_chooser_t__::vfunc_6(
        _QWORD *a1,
        void ***a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        double a6)
{
  const char *v10; // rsi
  bool v11; // zf
  void **v12; // r12
  void *v13; // r13
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rax
  const char *v17; // r8
  void *v18; // rdi
  __int64 v19; // rax
  const char *v20; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( a5 >= a1[24] )
  {
    if ( !under_debugger )
      interr(41205, a2, a3, a4, a6);
    BUG();
  }
  v10 = *(const char **)(a1[23] + 8 * a5);
  v11 = *((_BYTE *)QT::QCoreApplication::self + 745) == 0;
  v22 = 0;
  src = nullptr;
  if ( v11 )
    get_ea_name(&src, v10, 1, 0);
  else
    get_ea_name(&src, v10, 21, 0);
  v12 = *a2;
  if ( v12 != &src )
  {
    v13 = (void *)v22;
    if ( (unsigned __int64)v22 > 1 )
    {
      v17 = (const char *)src;
      v18 = *v12;
      if ( (unsigned __int64)v12[2] < (unsigned __int64)v22 )
      {
        v20 = (const char *)src;
        v19 = qvector_reserve(v12, *v12, v22, 1);
        *v12 = (void *)v19;
        v17 = v20;
        v18 = (void *)v19;
      }
      v12[1] = v13;
      v10 = v17;
      memmove(v18, v17, (size_t)v13 - 1);
      *((_BYTE *)v13 + (_QWORD)*v12 - 1) = 0;
    }
    else
    {
      v12[1] = nullptr;
    }
  }
  v14 = (_QWORD *)a1[26];
  v15 = *(int *)(v14[2] + 4 * a5);
  if ( (v15 & 0x80000000) != 0LL || v15 >= v14[6] || !*(_QWORD *)(v14[5] + 24 * v15 + 8) )
    *(_DWORD *)(a4 + 4) = 16;
  if ( src )
  {
    *(_QWORD *)&v22 = 0;
    qfree(src, v10);
  }
  return v23 - __readfsqword(0x28u);
}
