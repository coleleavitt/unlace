__int64 __fastcall sub_9C0A00(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  int v4; // r12d
  __int64 v5; // r14
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  std::ostream *v14; // rbp
  _BYTE *v15; // r13
  char v16; // si
  std::ostream *v17; // rdi
  unsigned int v18; // ebp
  std::ostream *v19; // rax
  __int64 result; // rax
  unsigned int v21; // edx
  __int64 (__fastcall *v22)(__int64, unsigned int); // rax
  int v24; // [rsp+18h] [rbp-40h]
  int v25; // [rsp+1Ch] [rbp-3Ch]

  std::__ostream_insert<char,std::char_traits<char>>();
  v3 = a1[4];
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 - 4);
    if ( v4 > 0 )
    {
      v25 = 0;
      v5 = 0;
      v24 = 0;
      while ( 1 )
      {
        v8 = 4 * v5;
        v9 = *(_QWORD *)(a1[77] + 8 * v5);
        if ( v9 )
        {
          if ( ((*(_BYTE *)(a1[74] + v8 + 3) >> 4) & 3) == 2 )
          {
            v6 = sub_999840((__int64)a1, v5);
            v9 = *(_QWORD *)(a1[77] + 8 * v5);
          }
          else
          {
            v6 = a1[75] + 32 * v5;
          }
          if ( (*(_BYTE *)(v6 + 20) & 1) != 0
            || *(_DWORD *)(v6 + 16) != 1
            || (*(_BYTE *)(v9 + 36) & 1) != 0
            || *(_DWORD *)(v9 + 32) != 1 )
          {
            LOBYTE(v7) = sub_1848D40(qword_1C7F2C0, v6, v9 + 16);
          }
          else if ( (*(_BYTE *)(v6 + 4) & 1) != 0 || (*(_BYTE *)(v9 + 20) & 1) != 0 )
          {
            v7 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v6, v9 + 16) >> 31;
          }
          else
          {
            LOBYTE(v7) = *(_DWORD *)v6 < *(_DWORD *)(v9 + 16);
          }
          if ( (_BYTE)v7 )
            break;
        }
        v10 = *(_QWORD *)(a1[78] + 8 * v5);
        if ( v10 )
        {
          if ( ((*(_BYTE *)(a1[74] + v8 + 3) >> 4) & 3) == 2 )
          {
            v11 = sub_999840((__int64)a1, v5);
            v10 = *(_QWORD *)(a1[78] + 8 * v5);
          }
          else
          {
            v11 = a1[75] + 32 * v5;
          }
          v12 = v10 + 16;
          if ( (*(_BYTE *)(v10 + 36) & 1) != 0
            || *(_DWORD *)(v10 + 32) != 1
            || (*(_BYTE *)(v11 + 20) & 1) != 0
            || *(_DWORD *)(v11 + 16) != 1 )
          {
            LOBYTE(v10) = sub_1848D40(qword_1C7F2C0, v12, v11);
          }
          else if ( (*(_BYTE *)(v10 + 20) & 1) != 0 || (*(_BYTE *)(v11 + 4) & 1) != 0 )
          {
            LODWORD(v10) = (unsigned int)sub_182C7B0(qword_1C7F2C0, v12, v11) >> 31;
          }
          else
          {
            LOBYTE(v10) = *(_DWORD *)(v10 + 16) < *(_DWORD *)v11;
          }
          if ( (_BYTE)v10 )
            break;
          if ( (*(_BYTE *)(a1[74] + v8 + 3) & 0x40) == 0 )
            goto LABEL_12;
LABEL_22:
          v13 = sub_999800((__int64)a1, v5);
          if ( (*(_BYTE *)(v13 + 20) & 1) == 0 && *(_DWORD *)(v13 + 16) == 1 )
            goto LABEL_12;
          ++v25;
          if ( v4 == ++v5 )
            goto LABEL_25;
        }
        else
        {
LABEL_11:
          if ( (*(_BYTE *)(a1[74] + v8 + 3) & 0x40) != 0 )
            goto LABEL_22;
LABEL_12:
          if ( v4 == ++v5 )
            goto LABEL_25;
        }
      }
      ++v24;
      goto LABEL_11;
    }
  }
  else
  {
    v4 = 0;
  }
LABEL_25:
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  v14 = (std::ostream *)std::ostream::operator<<();
  v15 = *(_BYTE **)((char *)v14 + *(_QWORD *)(*(_QWORD *)v14 - 24LL) + 240);
  if ( !v15 )
    std::__throw_bad_cast();
  if ( v15[56] )
  {
    v16 = v15[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v16 = 10;
    v22 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v15 + 48LL);
    if ( v22 != sub_26BE90 )
      v16 = v22((__int64)v15, 10u);
  }
  v17 = v14;
  v18 = 0;
  v19 = (std::ostream *)std::ostream::put(v17, v16);
  result = std::ostream::flush(v19);
  if ( v4 > 0 )
  {
    do
    {
      v21 = v18++;
      result = sub_9C0640(a1, a2, v21);
    }
    while ( v18 != v4 );
  }
  return result;
}

