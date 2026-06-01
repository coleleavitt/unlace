__int64 __fastcall sub_7F5540(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 i; // rax
  int v19; // ecx
  int v21; // eax
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rax
  _BYTE v26[16]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v27[56]; // [rsp+10h] [rbp-38h] BYREF

  v9 = a1[2];
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL);
  v11 = *((unsigned int *)a1 + 6);
  if ( v10 )
  {
    if ( (*(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL) & 7LL) == 1 )
      v12 = v10 >> 3;
    else
      LODWORD(v12) = *(_DWORD *)(v10 - 8);
  }
  else
  {
    LODWORD(v12) = -1640531495;
  }
  v13 = v11 - 1;
  v14 = 24 * v11;
  v15 = v9 + v14;
  v16 = 24LL * ((unsigned int)v12 & v13);
  v17 = v9 + v16;
  if ( v16 != v14 )
  {
    for ( i = v9 + v16; v15 != i; i += 24 )
    {
      v19 = *(_DWORD *)(i + 4);
      if ( v19 == 2 )
      {
        if ( (_DWORD)v12 == *(_DWORD *)i && *(_QWORD *)(i + 8) == v10 )
          return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(i + 16) + 40LL))(
                   *(_QWORD *)(i + 16),
                   a2,
                   a3,
                   a4);
      }
      else if ( !v19 )
      {
        goto LABEL_21;
      }
    }
  }
  for ( ; v17 != v9; v9 += 24 )
  {
    v21 = *(_DWORD *)(v9 + 4);
    if ( v21 == 2 )
    {
      if ( (_DWORD)v12 == *(_DWORD *)v9 && v10 == *(_QWORD *)(v9 + 8) )
      {
        i = v9;
        return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(i + 16) + 40LL))(
                 *(_QWORD *)(i + 16),
                 a2,
                 a3,
                 a4);
      }
    }
    else if ( !v21 )
    {
      break;
    }
  }
LABEL_21:
  if ( (unsigned int)sub_180B130(v17) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a5) )
    {
      sub_186A4C0(a5);
      v22 = sub_180B150(v17, v15);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v26, a2, *a1, 0, 0, 0);
      v23 = sub_160E8B0(v22, v26);
      sub_7F5300(v23, "\n");
      sub_18572D0(v27);
      sub_186A500(v27, "\n");
    }
    else
    {
      v24 = sub_180B150(v17, v15);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v26, a2, *a1, 0, 0, 0);
      v25 = sub_160E8B0(v24, v26);
      sub_7F5300(v25, "\n");
      sub_18572D0(v27);
    }
  }
  return 0;
}

