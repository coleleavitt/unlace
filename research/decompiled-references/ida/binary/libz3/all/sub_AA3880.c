__int64 __fastcall sub_AA3880(__int64 a1, char *a2, __m128i a3)
{
  unsigned int v4; // r12d
  char v6; // bp
  int v7; // r12d
  int v8; // eax
  __int64 v9; // rdi
  __int64 *v10; // rbp
  __int64 *v11; // r15
  __int64 v12; // r13
  __int64 v13; // r14
  _DWORD *v14; // rax
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rdi
  unsigned int v18; // eax
  int v19; // eax
  unsigned int **v20; // rbp
  unsigned int **v21; // r13
  int v22; // eax

  if ( (unsigned __int8)sub_AA2F20(a1) )
    return 1;
  *(_BYTE *)(a1 + 768) = 0;
  v6 = 0;
  if ( (unsigned int)sub_180B130(a1) > 0xB )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
    {
      sub_186A4C0(*(double *)a3.m128i_i64);
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v16 = sub_FF9DB0(*(_QWORD *)(a1 + 504));
      sub_10213D0(v16, "final-check ");
      a2 = "\n";
      v17 = std::operator<<<std::char_traits<char>>();
      std::operator<<<std::char_traits<char>>();
      sub_186A500(v17, "\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v18 = sub_FF9DB0(*(_QWORD *)(a1 + 504));
      sub_10213D0(v18, "final-check ");
      std::operator<<<std::char_traits<char>>();
      a2 = "\n";
      std::operator<<<std::char_traits<char>>();
    }
  }
  if ( !(unsigned __int8)sub_FFA850(*(_QWORD *)(a1 + 504)) || (unsigned __int8)sub_FF9CD0(*(_QWORD *)(a1 + 504)) )
  {
    v7 = sub_1010850(*(_QWORD *)(a1 + 504));
    if ( !(unsigned __int8)sub_FFA850(*(_QWORD *)(a1 + 504)) )
    {
      if ( v7 != 1 )
        return 2 - (unsigned int)(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8));
      sub_A9E240(a1);
      return 1;
    }
  }
  v8 = sub_AA2540((unsigned __int64 *)a1, a3);
  if ( v8 == 1 )
    return 1;
  v4 = 0;
  if ( v8 == 2 )
  {
    v6 = 1;
    v4 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 112LL) + 285LL);
  }
  if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) )
    goto LABEL_39;
  v9 = *(_QWORD *)(a1 + 328);
  if ( v9 && (unsigned __int8)sub_1021C70(v9, a2) )
  {
    v19 = sub_1021C80(*(_QWORD *)(a1 + 328));
    if ( v19 == -1 )
    {
      sub_A9E480(a1);
      return 1;
    }
    if ( v19 != 1 )
LABEL_39:
      v4 = 2;
  }
  if ( (unsigned __int8)sub_A893E0(a1) )
  {
    ++*(_DWORD *)(a1 + 484);
    return 1;
  }
  if ( !v6 )
  {
    v20 = *(unsigned int ***)(a1 + 200);
    if ( v20 )
    {
      v21 = &v20[*((unsigned int *)v20 - 1)];
      if ( v20 != v21 )
      {
        while ( (unsigned __int8)sub_A81320((__int64 *)a1, *v20, *(double *)a3.m128i_i64) )
        {
          if ( v21 == ++v20 )
            goto LABEL_18;
        }
        ++*(_DWORD *)(a1 + 492);
        return 1;
      }
    }
  }
LABEL_18:
  v10 = *(__int64 **)(a1 + 184);
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    while ( v11 != v10 )
    {
      v12 = *v10;
      v13 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
      if ( !(unsigned int)sub_8E7030(v13)
        || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v13 + 7488) + 56LL))(
             *(_QWORD *)(v13 + 7488),
             v12) )
      {
        if ( *(_WORD *)(v12 + 4) )
          goto LABEL_21;
        v14 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
        if ( !v14 || *v14 != 5 )
          goto LABEL_21;
        v15 = v14[1];
        if ( v15 == 22 )
        {
          v22 = sub_AA1270((__int64 *)a1, v12);
          if ( v22 == 1 )
            return 1;
          if ( v22 == 2 )
          {
LABEL_21:
            if ( v4 == 1 )
              return 1;
            v4 = 2;
            goto LABEL_23;
          }
        }
        else if ( v15 != 23 )
        {
          goto LABEL_21;
        }
        if ( v4 == 1 )
          return 1;
      }
LABEL_23:
      ++v10;
    }
  }
  return v4;
}

