__int64 __fastcall sub_1959AC0(__int64 *a1, __int64 *a2, __int64 a3, __int64 *a4, __m128 a5, __m128 a6)
{
  __int64 *v6; // r14
  __int64 *v7; // r13
  __int64 *i; // rbp
  void **v10; // rsi
  void **v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  _DWORD *v15; // rax
  int v16; // edx
  __int64 v17; // rax
  __int64 v19; // [rsp+8h] [rbp-30h]

  v6 = a4 + 2;
  v7 = &a2[a3];
  for ( i = a2; v7 != i; ++*((_DWORD *)a4 + 2) )
  {
    v15 = (_DWORD *)*i;
    v16 = *(_DWORD *)*i;
    if ( v16 )
    {
      if ( (unsigned int)(v16 - 1) > 1 )
      {
        if ( *((_BYTE *)v15 + 24) )
        {
          v12 = sub_19A5060(*a1, *((_QWORD *)v15 + 4), *((_QWORD *)v15 + 5), *((_QWORD *)v15 + 2));
        }
        else
        {
          v17 = sub_1944E10(a1, *((unsigned __int16 **)v15 + 1), a5, a6);
          if ( v17 == 1 )
            return 1;
          v12 = sub_19A52A0(*a1, v17 & 0xFFFFFFFFFFFFFFFELL);
        }
      }
      else
      {
        v12 = sub_1959950(a1, *i, a5, a6);
      }
    }
    else
    {
      v10 = (void **)(*((_QWORD *)v15 + 1) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v15[4] == 1 )
      {
        v12 = sub_19A4F40(*a1, v10);
      }
      else
      {
        v11 = sub_1946B40(a1, v10, a5, a6);
        if ( !v11 )
          return 1;
        v12 = sub_19A4EC0(*a1, v11);
      }
    }
    if ( !v12 )
      return 1;
    v13 = *((unsigned int *)a4 + 2);
    if ( v13 + 1 > (unsigned __int64)*((unsigned int *)a4 + 3) )
    {
      v19 = v12;
      sub_2237220(a4, v6, v13 + 1, 8);
      v13 = *((unsigned int *)a4 + 2);
      v14 = *a4;
      v12 = v19;
    }
    else
    {
      v14 = *a4;
    }
    ++i;
    *(_QWORD *)(v14 + 8 * v13) = v12;
  }
  return 0;
}
