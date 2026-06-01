bool __fastcall sub_3FDA00(unsigned __int64 a1, unsigned __int64 a2, double a3)
{
  unsigned int v3; // edx
  unsigned int v4; // eax
  bool result; // al
  unsigned int v8; // edx
  unsigned int v9; // eax
  bool v10; // cf
  __int64 v11; // rsi
  unsigned int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // r12
  int *v15; // rax
  __int16 v16; // dx
  _QWORD *v17; // rcx
  _DWORD *v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  _DWORD *v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // [rsp+0h] [rbp-20h]
  __int64 v26; // [rsp+0h] [rbp-20h]

  v3 = *(unsigned __int16 *)(a1 + 72);
  v4 = *(unsigned __int16 *)(a2 + 72);
  if ( v3 != v4 )
    return v3 < v4;
  v8 = *(unsigned __int16 *)(a1 + 74);
  v9 = *(unsigned __int16 *)(a2 + 74);
  v10 = v8 < v9;
  if ( v8 != v9 )
    return v10;
  v11 = *(unsigned __int8 *)(a1 + 78);
  result = (*(_BYTE *)(a1 + 78) & 0x40) != 0;
  if ( result != ((*(_BYTE *)(a2 + 78) & 0x40) != 0) )
    return result;
  result = (v11 & 8) != 0;
  if ( result != ((*(_BYTE *)(a2 + 78) & 8) != 0) )
    return result;
  v12 = *(_DWORD *)(a1 + 136);
  v13 = *(_DWORD *)(a2 + 136);
  if ( v12 != v13 )
    return v13 < v12;
  v14 = *(_QWORD *)(a1 + 24);
  v15 = *(int **)(a2 + 24);
  v16 = *((_WORD *)v15 + 2);
  if ( !*(_WORD *)(v14 + 4) )
  {
    v17 = *(_QWORD **)(*(_QWORD *)(v14 + 16) + 24LL);
    if ( v17 )
    {
      v11 = *(unsigned int *)v17;
      if ( *v17 == 0x500000000LL )
      {
        v22 = *(_DWORD *)(v14 + 24);
        v11 = 1;
        if ( v16 )
          goto LABEL_25;
        v23 = *(_DWORD **)(*((_QWORD *)v15 + 2) + 24LL);
        if ( v23 )
        {
          if ( !*v23 && v23[1] == 5 )
            goto LABEL_29;
        }
        else
        {
          v11 = 1;
        }
LABEL_25:
        if ( (_DWORD)v11 != v22 )
          return v22 < (unsigned int)v11;
        goto LABEL_16;
      }
    }
  }
  if ( !v16 )
  {
    v18 = *(_DWORD **)(*((_QWORD *)v15 + 2) + 24LL);
    if ( v18 )
    {
      if ( !*v18 && v18[1] == 5 )
      {
        v22 = 1;
LABEL_29:
        v11 = (unsigned int)v15[6];
        goto LABEL_25;
      }
    }
  }
LABEL_16:
  v19 = *v15;
  v10 = *(_DWORD *)v14 < v19;
  if ( *(_DWORD *)v14 != v19 )
    return v10;
  v20 = **(_DWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
  v21 = **(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v20 != v21 )
    return v20 < v21;
  if ( (unsigned int)sub_180B130(a1) )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v25 = sub_180B150(a1, v11);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600(v25, *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 16LL));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v24 = std::ostream::_M_insert<unsigned long>();
      std::operator<<<std::char_traits<char>>();
      sub_186A500(v24, "\n");
    }
    else
    {
      v26 = sub_180B150(a1, v11);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600(v26, *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 16LL));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::operator<<<std::char_traits<char>>();
    }
  }
  v20 = **(_DWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
  v21 = **(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  result = a1 < a2;
  if ( v20 != v21 )
    return v20 < v21;
  return result;
}

