__int64 __fastcall sub_A02480(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // r15
  __int64 v4; // rax
  int v5; // r12d
  __int64 v6; // r15
  __int64 v7; // r12
  int *v8; // rsi
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rbp
  int *v14; // rax
  std::ostream *v15; // rbx
  _BYTE *v16; // rbp
  char v17; // si
  std::ostream *v18; // rdi
  unsigned int v19; // ebx
  std::ostream *v20; // rax
  __int64 result; // rax
  unsigned int v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 (__fastcall *v26)(__int64, unsigned int); // rax
  __int64 v27; // [rsp+8h] [rbp-70h]
  int *v28; // [rsp+10h] [rbp-68h]
  int v29; // [rsp+2Ch] [rbp-4Ch]
  int v30; // [rsp+30h] [rbp-48h]
  int v31; // [rsp+34h] [rbp-44h]

  v2 = a1;
  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = a1[4];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 - 4);
    if ( v5 > 0 )
    {
      v31 = *(_DWORD *)(v4 - 4);
      v27 = (unsigned int)v5;
      v6 = 0;
      v30 = 0;
      v7 = 0;
      v29 = 0;
      while ( 1 )
      {
        v11 = 4 * v6;
        v12 = *(_QWORD *)(a1[93] + 8 * v6);
        if ( v12 )
        {
          if ( ((*(_BYTE *)(a1[90] + v11 + 3) >> 4) & 3) == 2 )
          {
            v8 = sub_9ACE50((__int64)a1, v6);
            v12 = *(_QWORD *)(a1[93] + 8 * v6);
          }
          else
          {
            v8 = (int *)(v7 + a1[91]);
          }
          v9 = v12 + 16;
          if ( (v8[5] & 1) != 0 || v8[4] != 1 || (*(_BYTE *)(v12 + 36) & 1) != 0 || *(_DWORD *)(v12 + 32) != 1 )
          {
            v10 = sub_1848D40(qword_1C7F2C0, v8, v9);
            v9 = v12 + 16;
            if ( v10 )
              goto LABEL_9;
          }
          else
          {
            if ( (v8[1] & 1) != 0 || (*(_BYTE *)(v12 + 20) & 1) != 0 )
            {
              v23 = sub_182C7B0(qword_1C7F2C0, v8, v9);
              v9 = v12 + 16;
              v24 = v23 >> 31;
            }
            else
            {
              LOBYTE(v24) = *v8 < *(_DWORD *)(v12 + 16);
            }
            if ( (_BYTE)v24 )
              goto LABEL_9;
          }
          if ( sub_3ED680((__int64)qword_1C7F2C0, (__int64)v8, v9) && sub_927C80((__int64)(v8 + 8), v12 + 48) )
            goto LABEL_9;
        }
        v13 = *(_QWORD *)(a1[94] + 8 * v6);
        if ( !v13 )
          goto LABEL_10;
        if ( ((*(_BYTE *)(a1[90] + v11 + 3) >> 4) & 3) == 2 )
        {
          v28 = sub_9ACE50((__int64)a1, v6);
          v13 = *(_QWORD *)(a1[94] + 8 * v6);
        }
        else
        {
          v28 = (int *)(v7 + a1[91]);
        }
        if ( (*(_BYTE *)(v13 + 36) & 1) != 0 || *(_DWORD *)(v13 + 32) != 1 || (v28[5] & 1) != 0 || v28[4] != 1 )
        {
          if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, v13 + 16, v28) )
            goto LABEL_9;
        }
        else
        {
          if ( (*(_BYTE *)(v13 + 20) & 1) != 0 || (v28[1] & 1) != 0 )
            v25 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v13 + 16, v28) >> 31;
          else
            LOBYTE(v25) = *(_DWORD *)(v13 + 16) < *v28;
          if ( (_BYTE)v25 )
            goto LABEL_9;
        }
        if ( !sub_3ED680((__int64)qword_1C7F2C0, v13 + 16, (__int64)v28) )
          goto LABEL_10;
        if ( sub_927C80(v13 + 48, (__int64)(v28 + 8)) )
        {
LABEL_9:
          ++v29;
LABEL_10:
          if ( (*(_BYTE *)(a1[90] + v11 + 3) & 0x40) == 0 )
            goto LABEL_11;
          goto LABEL_22;
        }
        if ( (*(_BYTE *)(a1[90] + v11 + 3) & 0x40) == 0 )
          goto LABEL_11;
LABEL_22:
        v14 = sub_9AD4F0((__int64)a1, v6);
        if ( *v14 || (v14[13] & 1) != 0 || v14[12] != 1 )
        {
          ++v30;
LABEL_26:
          ++v6;
          v7 += 96;
          if ( v27 == v6 )
          {
LABEL_27:
            v5 = v31;
            v2 = a1;
            break;
          }
        }
        else
        {
          if ( v14[16] )
          {
            ++v30;
            goto LABEL_26;
          }
LABEL_11:
          ++v6;
          v7 += 96;
          if ( v27 == v6 )
            goto LABEL_27;
        }
      }
    }
  }
  else
  {
    v5 = 0;
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  v15 = (std::ostream *)std::ostream::operator<<();
  v16 = *(_BYTE **)((char *)v15 + *(_QWORD *)(*(_QWORD *)v15 - 24LL) + 240);
  if ( !v16 )
    std::__throw_bad_cast();
  if ( v16[56] )
  {
    v17 = v16[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v17 = 10;
    v26 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v16 + 48LL);
    if ( v26 != sub_26BE90 )
      v17 = v26((__int64)v16, 10u);
  }
  v18 = v15;
  v19 = 0;
  v20 = (std::ostream *)std::ostream::put(v18, v17);
  result = std::ostream::flush(v20);
  if ( v5 > 0 )
  {
    do
    {
      v22 = v19++;
      result = sub_A01C40(v2, a2, v22);
    }
    while ( v19 != v5 );
  }
  return result;
}

