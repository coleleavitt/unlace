__int64 __fastcall get_tinfo_from_tlc(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  const void *v10; // rbp
  void *v11; // rdi
  __int64 v13; // rax

  v6 = (_QWORD *)sub_559D40(*(_QWORD *)(qword_2CCB598 + 1656), (__int64 *)a3);
  v7 = sub_55F9A0(v6, (__int64 *)a3, a4, 1);
  if ( v7 )
  {
    v8 = v7;
    if ( a1 && (copy_tinfo_t(a1), *(_BYTE *)(a3 + 58)) )
    {
      clear_tinfo_t(a1);
      if ( a2 )
      {
LABEL_5:
        if ( a2 != (__int64 *)(v8 + 8) )
        {
          v9 = *(_QWORD *)(v8 + 16);
          if ( v9 < 2 )
          {
            a2[1] = 0;
          }
          else
          {
            v10 = *(const void **)(v8 + 8);
            v11 = (void *)*a2;
            if ( a2[2] < v9 )
            {
              v13 = qvector_reserve(a2, *a2, v9, 1);
              *a2 = v13;
              v11 = (void *)v13;
            }
            a2[1] = v9;
            memmove(v11, v10, v9 - 1);
            *(_BYTE *)(*a2 + v9 - 1) = 0;
          }
        }
      }
    }
    else if ( a2 )
    {
      goto LABEL_5;
    }
    return 1;
  }
  return 0;
}
