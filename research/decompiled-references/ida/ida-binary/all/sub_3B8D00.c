void __fastcall tos_dialog_t__::vfunc_7(_QWORD *a1, int a2)
{
  _QWORD *v3; // rdi
  __int64 (*v4)(void); // rax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  const void *v8; // r13
  void *v9; // rax

  if ( a2 == 1 && a1[37] <= 1u )
  {
    v3 = (_QWORD *)a1[32];
    v4 = *(__int64 (**)(void))(*v3 + 176LL);
    if ( (char *)v4 == (char *)atl_chooser_t__::vfunc_22 )
    {
      v5 = sub_3B8C20((__int64)v3);
      if ( v5 == -1 )
        return;
      v6 = v3[24] + 56 * v5;
    }
    else
    {
      v6 = v4();
    }
    if ( v6 && (_QWORD *)v6 != a1 + 36 )
    {
      v7 = *(_QWORD *)(v6 + 8);
      if ( v7 < 2 )
      {
        a1[37] = 0;
      }
      else
      {
        v8 = *(const void **)v6;
        v9 = (void *)a1[36];
        if ( a1[38] < v7 )
        {
          v9 = (void *)qvector_reserve(a1 + 36, a1[36], v7, 1);
          a1[36] = v9;
        }
        a1[37] = v7;
        memmove(v9, v8, v7 - 1);
        *(_BYTE *)(a1[36] + v7 - 1) = 0;
      }
    }
  }
}
