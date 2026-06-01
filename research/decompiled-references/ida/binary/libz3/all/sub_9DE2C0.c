__int64 __fastcall sub_9DE2C0(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // r15
  __int64 *v3; // rbp
  __int64 v4; // rax
  int v5; // r13d
  __int64 v6; // r15
  int *v7; // r12
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // r9
  int *v13; // r12
  __int64 v14; // rbp
  char v15; // al
  int *v16; // rax
  std::ostream *v17; // rbx
  _BYTE *v18; // r12
  char v19; // si
  std::ostream *v20; // rdi
  unsigned int v21; // ebx
  std::ostream *v22; // rax
  __int64 result; // rax
  unsigned int v24; // edx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  __int64 (__fastcall *v29)(__int64, unsigned int); // rax
  __int64 v30; // [rsp+8h] [rbp-60h]
  __int64 v31; // [rsp+8h] [rbp-60h]
  __int64 v32; // [rsp+8h] [rbp-60h]
  __int64 v33; // [rsp+8h] [rbp-60h]
  __int64 v34; // [rsp+8h] [rbp-60h]
  __int64 v35; // [rsp+8h] [rbp-60h]
  __int64 v36; // [rsp+10h] [rbp-58h]
  __int64 v37; // [rsp+10h] [rbp-58h]
  int v38; // [rsp+1Ch] [rbp-4Ch]
  int v39; // [rsp+20h] [rbp-48h]

  v2 = a1;
  v3 = a2;
  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = a1[4];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 - 4);
    if ( v5 > 0 )
    {
      v39 = 0;
      v6 = 0;
      v38 = 0;
      while ( 1 )
      {
        v11 = 4 * v6;
        v10 = *(_QWORD *)(a1[85] + 8 * v6);
        if ( v10 )
        {
          if ( ((*(_BYTE *)(a1[82] + v11 + 3) >> 4) & 3) == 2 )
          {
            v7 = sub_9AA360((__int64)a1, v6);
            v10 = *(_QWORD *)(a1[85] + 8 * v6);
          }
          else
          {
            v7 = (int *)(a1[83] + (v6 << 6));
          }
          v8 = v10 + 16;
          if ( (v7[5] & 1) != 0 || v7[4] != 1 || (*(_BYTE *)(v10 + 36) & 1) != 0 || *(_DWORD *)(v10 + 32) != 1 )
          {
            v36 = v10;
            v30 = v10 + 16;
            v9 = sub_1848D40(qword_1C7F2C0, v7, v8);
            v8 = v30;
            v10 = v36;
            if ( v9 )
              goto LABEL_9;
          }
          else
          {
            if ( (v7[1] & 1) != 0 || (*(_BYTE *)(v10 + 20) & 1) != 0 )
            {
              v37 = v10;
              v33 = v10 + 16;
              v25 = sub_182C7B0(qword_1C7F2C0, v7, v8);
              v8 = v33;
              v10 = v37;
              v26 = v25 >> 31;
            }
            else
            {
              LOBYTE(v26) = *v7 < *(_DWORD *)(v10 + 16);
            }
            if ( (_BYTE)v26 )
            {
LABEL_9:
              ++v38;
              goto LABEL_10;
            }
          }
          v34 = v10;
          if ( sub_3ED680((__int64)qword_1C7F2C0, (__int64)v7, v8)
            && sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v7 + 8), v34 + 48) )
          {
            goto LABEL_9;
          }
        }
        v12 = *(_QWORD *)(a1[86] + 8 * v6);
        if ( !v12 )
          goto LABEL_10;
        if ( ((*(_BYTE *)(a1[82] + v11 + 3) >> 4) & 3) == 2 )
        {
          v13 = sub_9AA360((__int64)a1, v6);
          v12 = *(_QWORD *)(a1[86] + 8 * v6);
        }
        else
        {
          v13 = (int *)(a1[83] + (v6 << 6));
        }
        v14 = v12 + 16;
        if ( (*(_BYTE *)(v12 + 36) & 1) != 0 || *(_DWORD *)(v12 + 32) != 1 || (v13[5] & 1) != 0 || v13[4] != 1 )
        {
          v31 = v12;
          v15 = sub_1848D40(qword_1C7F2C0, v12 + 16, v13);
          v12 = v31;
          if ( v15 )
            goto LABEL_9;
        }
        else
        {
          if ( (*(_BYTE *)(v12 + 20) & 1) != 0 || (v13[1] & 1) != 0 )
          {
            v35 = v12;
            v27 = sub_182C7B0(qword_1C7F2C0, v12 + 16, v13);
            v12 = v35;
            v28 = v27 >> 31;
          }
          else
          {
            LOBYTE(v28) = *(_DWORD *)(v12 + 16) < *v13;
          }
          if ( (_BYTE)v28 )
            goto LABEL_9;
        }
        v32 = v12;
        if ( sub_3ED680((__int64)qword_1C7F2C0, v14, (__int64)v13) )
        {
          if ( sub_3ED700((__int64)qword_1C7F2C0, v32 + 48, (__int64)(v13 + 8)) )
            goto LABEL_9;
          if ( (*(_BYTE *)(a1[82] + v11 + 3) & 0x40) != 0 )
            goto LABEL_22;
LABEL_11:
          if ( v5 == ++v6 )
            goto LABEL_25;
        }
        else
        {
LABEL_10:
          if ( (*(_BYTE *)(a1[82] + v11 + 3) & 0x40) == 0 )
            goto LABEL_11;
LABEL_22:
          v16 = sub_9AA900((__int64)a1, v6);
          if ( (v16[5] & 1) == 0 && v16[4] == 1 && !v16[8] )
            goto LABEL_11;
          ++v39;
          if ( v5 == ++v6 )
          {
LABEL_25:
            v3 = a2;
            v2 = a1;
            break;
          }
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
  v17 = (std::ostream *)std::ostream::operator<<();
  v18 = *(_BYTE **)((char *)v17 + *(_QWORD *)(*(_QWORD *)v17 - 24LL) + 240);
  if ( !v18 )
    std::__throw_bad_cast();
  if ( v18[56] )
  {
    v19 = v18[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v19 = 10;
    v29 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v18 + 48LL);
    if ( v29 != sub_26BE90 )
      v19 = v29((__int64)v18, 10u);
  }
  v20 = v17;
  v21 = 0;
  v22 = (std::ostream *)std::ostream::put(v20, v19);
  result = std::ostream::flush(v22);
  if ( v5 > 0 )
  {
    do
    {
      v24 = v21++;
      result = sub_9DD9E0(v2, v3, v24);
    }
    while ( v21 != v5 );
  }
  return result;
}

