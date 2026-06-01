__int64 __fastcall sub_13D1DA0(__int64 a1, __int64 a2, unsigned __int8 *a3, _BYTE *a4)
{
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned int v6; // ebp
  _BYTE *i; // rbx
  __int16 v8; // ax
  __int16 v9; // dx
  __int16 v10; // ax
  __int16 v11; // dx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  void (__fastcall *v15)(__int64, unsigned __int64); // r14
  unsigned __int64 v16; // r13
  unsigned int v17; // eax
  _BYTE *v19; // rdx

  v4 = *a3;
  if ( (byte_2411740[2 * *(a3 - 1)] & 2) != 0 )
  {
    v5 = (__int64)(a3 - 1);
    v6 = 1;
    if ( !*(_QWORD *)(a1 + 168) )
      *(_QWORD *)(a1 + 168) = v5;
  }
  else
  {
    v5 = 0;
    v6 = 0;
  }
  for ( i = a3; ; ++i )
  {
    v8 = *(_WORD *)&byte_2411740[2 * v4];
    if ( (v8 & 5) != 0 )
    {
      v4 = (unsigned __int8)i[1];
      continue;
    }
    if ( (v8 & 2) == 0 )
      break;
    if ( *(_BYTE *)(a1 + 24) )
    {
      *(_QWORD *)(a1 + 152) = i;
      return 0;
    }
    if ( *i == 10 )
    {
      v5 = (__int64)i;
      if ( !*(_QWORD *)(a1 + 168) )
        *(_QWORD *)(a1 + 168) = i;
    }
    v4 = (unsigned __int8)i[1];
    v6 = 1;
  }
  if ( *(_BYTE *)(a1 + 146) > 1u )
  {
    v19 = &i[-*(_QWORD *)(a1 + 152)];
    *(_DWORD *)(a2 + 4) = (_DWORD)v19;
    *(_DWORD *)a2 = sub_13D1500(a1, *(_QWORD *)(a1 + 152), (int)v19);
    *(_WORD *)(a2 + 16) = 0;
    *(_QWORD *)(a1 + 152) = i;
    if ( (_BYTE)v6 )
      *(_WORD *)(a1 + 160) = 257;
    else
      return 1;
    return v6;
  }
  v9 = *(_WORD *)(a2 + 18);
  v10 = v9 & 0xFFFD;
  v11 = v9 | 2;
  if ( (byte_2411740[2 * (unsigned __int8)*(i - 1)] & 2) == 0 )
    v10 = v11;
  if ( (_BYTE)v6 )
  {
    *(_WORD *)(a2 + 18) = v10 | 1;
    *a4 = 1;
    v12 = *(_QWORD *)(a1 + 168);
    if ( v12 != v5 && v5 != 0 )
    {
      if ( v12 )
      {
        v13 = *(_QWORD *)(a1 + 8);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 736);
          if ( v14 )
          {
            v15 = *(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v14 + 16LL);
            v16 = (unsigned __int64)(unsigned int)sub_13D1500(a1, v5, 1) << 32;
            v17 = sub_13D1500(a1, *(_QWORD *)(a1 + 168) + 1LL, 1);
            v15(v14, v16 | v17);
          }
        }
      }
    }
  }
  else
  {
    *(_WORD *)(a2 + 18) = v10;
  }
  *(_QWORD *)(a1 + 152) = i;
  return 0;
}
