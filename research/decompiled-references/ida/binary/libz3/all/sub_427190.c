__int64 __fastcall sub_427190(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 *v4; // rcx
  int *v5; // rdi
  int v6; // edx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 *v9; // r8
  __int64 *i; // rax
  __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  char **v21; // r12
  char **v22; // r15
  char *v23; // r13
  __int64 v24; // rbp
  char *v25; // r14
  char *v26; // rbp
  __int64 v27; // rdi
  unsigned int v28; // [rsp+0h] [rbp-68h]
  char **v29; // [rsp+8h] [rbp-60h]
  int v30; // [rsp+10h] [rbp-58h] BYREF
  __int128 v31; // [rsp+18h] [rbp-50h]
  char **v32; // [rsp+28h] [rbp-40h]

  if ( !*(_BYTE *)(a1 + 16) )
  {
    v18 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 16) = 1;
    *(_QWORD *)a1 = v18;
  }
  v2 = *(_QWORD *)(a1 + 288);
  v3 = *(unsigned int *)(a1 + 272);
  v4 = *(__int64 **)(a1 + 264);
  v5 = (int *)*(unsigned int *)(v2 + 12);
  v6 = v3 - 1;
  v3 *= 16;
  v7 = (__int64)v4 + v3;
  v8 = 16LL * ((unsigned int)v5 & v6);
  v9 = &v4[(unsigned __int64)v8 / 8];
  if ( v8 != v3 )
  {
    for ( i = &v4[(unsigned __int64)v8 / 8]; (__int64 *)v7 != i; i += 2 )
    {
      v11 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v11 + 12) == (_DWORD)v5 && v2 == v11 )
        {
LABEL_14:
          v13 = i[1];
          v14 = 0;
          v15 = *(unsigned int *)(a1 + 680);
          v31 = 0;
          *(_QWORD *)(a1 + 304) = v13;
          LOBYTE(v13) = *(_BYTE *)(a1 + 667);
          v32 = nullptr;
          LOBYTE(v30) = v13;
          if ( (_DWORD)v15 )
          {
            while ( 1 )
            {
              sub_3FFF20(a1);
              if ( (unsigned int)sub_180B130(a1) )
              {
                if ( (unsigned __int8)sub_186A530(0.0) )
                {
                  sub_186A4C0(0.0);
                  sub_180B150(a1, v7);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  v16 = std::ostream::_M_insert<unsigned long>();
                  std::__ostream_insert<char,std::char_traits<char>>();
                  sub_186A500(v16, "\n");
                }
                else
                {
                  sub_180B150(a1, v7);
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::_M_insert<unsigned long>();
                  std::__ostream_insert<char,std::char_traits<char>>();
                }
              }
              *(_DWORD *)(a1 + 552) = v14;
              v7 = (unsigned int)v14;
              *(_DWORD *)(a1 + 368) = -1;
              if ( (unsigned __int8)sub_426C80(a1, v14, (__int64)&v30) )
                break;
              if ( v14 )
              {
                v7 = *(unsigned int *)(a1 + 368);
                if ( (unsigned __int8)sub_41B960((std::chrono::_V2::steady_clock *)a1, v7, v14, 0xFFFFFFFF, 0.0) )
                {
                  v28 = -1;
                  goto LABEL_36;
                }
              }
              if ( v15 == ++v14 )
                goto LABEL_33;
            }
            v28 = 1;
          }
          else
          {
LABEL_33:
            v19 = *(_QWORD *)(a1 + 160);
            if ( v19 )
              *(_DWORD *)(v19 + 2988) = 5;
            v28 = 0;
          }
LABEL_36:
          v5 = &v30;
          sub_426B30((__int64)&v30);
          v29 = v32;
          if ( v32 )
          {
            v20 = *((unsigned int *)v32 - 1);
            if ( (_DWORD)v20 )
            {
              v21 = v32;
              v22 = &v32[3 * v20];
              do
              {
                v23 = *v21;
                if ( *v21 )
                {
                  v24 = *((unsigned int *)v21 + 2);
                  if ( (_DWORD)v24 )
                  {
                    v25 = *v21;
                    v26 = &v23[16 * v24];
                    do
                    {
                      while ( 1 )
                      {
                        v27 = *((_QWORD *)v25 + 1);
                        if ( !v27 )
                          break;
                        v25 += 16;
                        sub_186B220((void *)(v27 - 8));
                        if ( v26 == v25 )
                          goto LABEL_44;
                      }
                      v25 += 16;
                    }
                    while ( v25 != v26 );
                  }
LABEL_44:
                  sub_186B220(v23);
                }
                v21 += 3;
              }
              while ( v22 != v21 );
            }
            v5 = (int *)(v29 - 1);
            sub_186B220(v29 - 1);
          }
          if ( *(_BYTE *)(a1 + 16) )
            goto LABEL_11;
          return v28;
        }
      }
      else if ( !v11 )
      {
        goto LABEL_10;
      }
    }
  }
  for ( ; v9 != v4; v4 += 2 )
  {
    v17 = *v4;
    if ( (unsigned __int64)*v4 > 1 )
    {
      if ( *(_DWORD *)(v17 + 12) == (_DWORD)v5 && v2 == v17 )
      {
        i = v4;
        goto LABEL_14;
      }
    }
    else if ( !v17 )
    {
      break;
    }
  }
LABEL_10:
  v28 = -1;
LABEL_11:
  *(_QWORD *)(a1 + 8) += std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)v5) - *(_QWORD *)a1;
  *(_BYTE *)(a1 + 16) = 0;
  return v28;
}

