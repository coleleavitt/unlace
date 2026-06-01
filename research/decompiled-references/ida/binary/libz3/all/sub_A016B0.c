__int64 __fastcall sub_A016B0(_QWORD *a1, __int64 a2, __int64 *a3, char a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 v9; // r14
  char v10; // al
  __int64 v11; // r15
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // [rsp+8h] [rbp-80h]
  __int64 v18; // [rsp+8h] [rbp-80h]
  char v19; // [rsp+17h] [rbp-71h]
  __int64 v20; // [rsp+20h] [rbp-68h]
  void *v21[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v22[9]; // [rsp+40h] [rbp-48h] BYREF

  result = a1[89];
  v6 = *((unsigned int *)a3 + 3);
  v19 = a4;
  if ( result && (unsigned int)v6 < *(_DWORD *)(result - 4) )
  {
    if ( *(_DWORD *)(result + 16 * v6 + 8) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::operator<<<std::char_traits<char>>();
      v8 = *a3;
      if ( v8 )
      {
LABEL_5:
        v9 = v8 + 40LL * *(unsigned int *)(v8 - 4);
        if ( v9 != v8 )
        {
          if ( a4 )
          {
            do
            {
              v16 = *(unsigned int *)(v8 + 32);
              v15 = v8;
              if ( (_DWORD)v16 != -1 )
              {
                if ( v19 )
                {
                  if ( (*(_BYTE *)(v8 + 4) & 1) == 0 && *(_DWORD *)v8 == 1 )
                    goto LABEL_40;
LABEL_31:
                  sub_1850940(v21, qword_1C7F2C0, v15);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  if ( v21[0] != v22 )
                    operator delete(v21[0], v22[0] + 1LL);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  goto LABEL_34;
                }
                v14 = v8;
                while ( 1 )
                {
                  v18 = v15;
                  v8 = v14;
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v15 = v18;
                  v16 = *(unsigned int *)(v18 + 32);
                  if ( (*(_BYTE *)(v18 + 4) & 1) != 0 || *(_DWORD *)v18 != 1 )
                    goto LABEL_31;
LABEL_40:
                  if ( (*(_BYTE *)(v15 + 20) & 1) != 0 || *(_DWORD *)(v15 + 16) != 1 )
                    goto LABEL_31;
LABEL_34:
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::operator<<();
                  if ( sub_9B1230((__int64)a1, v16) )
                  {
                    std::__ostream_insert<char,std::char_traits<char>>();
                    sub_71A630(a2, (int *)(*(_QWORD *)(a1[93] + 8 * v16) + 16LL));
                  }
                  v14 = v8 + 40;
                  v15 = v8 + 40;
                  if ( v9 == v8 + 40 )
                    return std::__ostream_insert<char,std::char_traits<char>>();
                  if ( *(_DWORD *)(v8 + 72) == -1 )
                  {
                    v14 = v8 + 80;
                    if ( v9 == v8 + 80 )
                      return std::__ostream_insert<char,std::char_traits<char>>();
                    v15 = v8 + 80;
                    if ( *(_DWORD *)(v8 + 112) == -1 )
                      break;
                  }
                }
                v19 = 0;
                v8 += 80;
              }
              v8 += 40;
            }
            while ( v9 != v8 );
          }
          else
          {
            v10 = 1;
            do
            {
              v11 = *(unsigned int *)(v8 + 32);
              v12 = v8;
              if ( (_DWORD)v11 != -1 )
              {
                if ( v10 )
                {
                  if ( (*(_BYTE *)(v8 + 4) & 1) == 0 && *(_DWORD *)v8 == 1 )
                    goto LABEL_19;
LABEL_12:
                  sub_1850940(v21, qword_1C7F2C0, v12);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  if ( v21[0] != v22 )
                    operator delete(v21[0], v22[0] + 1LL);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  goto LABEL_15;
                }
                v13 = v8;
                while ( 1 )
                {
                  v20 = v12;
                  v17 = v13;
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v12 = v20;
                  v8 = v17;
                  v11 = *(unsigned int *)(v20 + 32);
                  if ( (*(_BYTE *)(v20 + 4) & 1) != 0 || *(_DWORD *)v20 != 1 )
                    goto LABEL_12;
LABEL_19:
                  if ( (*(_BYTE *)(v12 + 20) & 1) != 0 || *(_DWORD *)(v12 + 16) != 1 )
                    goto LABEL_12;
LABEL_15:
                  *(__m128 *)v21 = _mm_loadh_ps((const double *)(a1[4] + 8 * v11));
                  sub_AA7260(a2, v21);
                  v13 = v8 + 40;
                  v12 = v8 + 40;
                  if ( v9 == v8 + 40 )
                    return std::__ostream_insert<char,std::char_traits<char>>();
                  if ( *(_DWORD *)(v8 + 72) == -1 )
                  {
                    v13 = v8 + 80;
                    if ( v9 == v8 + 80 )
                      return std::__ostream_insert<char,std::char_traits<char>>();
                    v12 = v8 + 80;
                    if ( *(_DWORD *)(v8 + 112) == -1 )
                      break;
                  }
                }
                v10 = v19;
                v8 += 80;
              }
              v8 += 40;
            }
            while ( v9 != v8 );
          }
        }
      }
    }
    else
    {
      v8 = *a3;
      if ( v8 )
        goto LABEL_5;
    }
    return std::__ostream_insert<char,std::char_traits<char>>();
  }
  return result;
}

