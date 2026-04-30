__int64 __fastcall sub_2DCF20(__int64 a1, __int64 a2, char a3, __int64 *a4, unsigned __int8 a5)
{
  const void *v7; // r12
  size_t v8; // rax
  size_t v9; // rbp
  void *v10; // rdi
  size_t v11; // r13
  __int64 segm_by_sel; // rax
  __int64 v13; // rax

  if ( a3 == 83 )
  {
    if ( *(_QWORD *)a2 != -1 )
    {
      segm_by_sel = get_segm_by_sel();
      if ( segm_by_sel )
        get_segm_name(a4, segm_by_sel, 0);
    }
  }
  else
  {
    if ( (a3 & 0xDF) != 0x49 )
      return sub_4FC540(a1, a2, (unsigned int)a3, a4, a5);
    if ( *(_QWORD *)(a2 + 8)
      && (v7 = *(const void **)a2) != nullptr
      && (v8 = strlen(*(const char **)a2), (v9 = v8) != 0) )
    {
      v10 = (void *)*a4;
      v11 = v8 + 1;
      if ( a4[2] < v8 + 1 )
      {
        v13 = qvector_reserve(a4, *a4, v8 + 1, 1);
        *a4 = v13;
        v10 = (void *)v13;
      }
      a4[1] = v11;
      memmove(v10, v7, v9);
      *(_BYTE *)(*a4 + v9) = 0;
    }
    else
    {
      a4[1] = 0;
    }
  }
  return 1;
}
