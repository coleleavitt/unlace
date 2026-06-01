__int64 __fastcall sub_1083B50(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // r13
  unsigned __int64 v6; // rdx
  _BYTE *v7; // r15
  unsigned __int64 v8; // r12
  _BYTE *v9; // rdi
  char *v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r12
  _BYTE *v13; // rax
  void *v14; // rsi
  _QWORD *v15; // rax
  _BYTE *v16; // rdi
  __int64 v17; // rcx
  size_t v18; // rdx
  void *src; // [rsp+8h] [rbp-80h] BYREF
  void *v20; // [rsp+10h] [rbp-78h]
  __int64 v21; // [rsp+18h] [rbp-70h]
  int v22; // [rsp+20h] [rbp-68h] BYREF
  char v23; // [rsp+24h] [rbp-64h]
  char v24; // [rsp+25h] [rbp-63h]
  void *v25; // [rsp+30h] [rbp-58h]
  size_t n; // [rsp+38h] [rbp-50h]
  _QWORD v27[9]; // [rsp+40h] [rbp-48h] BYREF

  v3 = *(_QWORD **)(a2 + 8);
  v4 = *(_QWORD **)a2;
  if ( *(_QWORD **)a2 != v3 )
  {
    while ( sub_9B4AA0((__int64)v4, "+hvx-length64b") )
    {
      if ( sub_9B4AA0((__int64)v4, "+hvx-length128b") )
      {
        v6 = v4[1];
        if ( v6 )
        {
          v7 = (_BYTE *)*v4;
          v8 = *v4 + v6;
          if ( v6 > 4 )
          {
            v9 = (_BYTE *)*v4;
            while ( 1 )
            {
              v10 = (char *)memchr(v9, 43, v6 - 4);
              if ( !v10 )
                goto LABEL_34;
              if ( *(_DWORD *)v10 == 2021025835 && v10[4] == 118 )
                break;
              v9 = v10 + 1;
              v6 = v8 - (_QWORD)(v10 + 1);
              if ( v6 <= 4 )
                goto LABEL_34;
            }
            if ( v10 - v7 == -1 )
              goto LABEL_34;
            v23 = 118;
            *(_BYTE *)(a1 + 576) = 1;
            v20 = &v22;
            v22 = 2021025835;
            v21 = 5;
            v24 = 0;
            v11 = v4[1];
            if ( v11 <= 4 )
              std::__throw_out_of_range_fmt(
                "%s: __pos (which is %zu) > this->size() (which is %zu)",
                "basic_string::substr",
                5u,
                v11);
            v25 = v27;
            v12 = v4[1];
            v13 = (_BYTE *)*v4;
            if ( v12 <= 4 )
              std::__throw_out_of_range_fmt(
                "%s: __pos (which is %zu) > this->size() (which is %zu)",
                "basic_string::basic_string",
                5u,
                v4[1]);
            v14 = v13 + 5;
            if ( &v13[v12] && v13 == (_BYTE *)-5LL )
              std::__throw_logic_error("basic_string::_M_construct null not valid");
            if ( v12 - 5 > 0xF )
            {
              if ( (__int64)(v12 - 5) < 0 )
                std::__throw_length_error("basic_string::_M_create");
              src = v13 + 5;
              v15 = (_QWORD *)operator new(v12 - 4);
              v27[0] = v12 - 5;
              v14 = src;
              v25 = v15;
              goto LABEL_40;
            }
            if ( v12 == 6 )
            {
              LOBYTE(v27[0]) = v13[5];
              v15 = v27;
              goto LABEL_26;
            }
            v15 = v27;
            if ( v12 != 5 )
            {
LABEL_40:
              memcpy(v15, v14, v12 - 5);
              v15 = v25;
            }
LABEL_26:
            n = v12 - 5;
            *((_BYTE *)v15 + v12 - 5) = 0;
            v16 = *(_BYTE **)(a1 + 544);
            if ( v25 == v27 )
            {
              v18 = n;
              if ( n )
              {
                if ( n == 1 )
                  *v16 = v27[0];
                else
                  memcpy(v16, v27, n);
                v18 = n;
                v16 = *(_BYTE **)(a1 + 544);
              }
              *(_QWORD *)(a1 + 552) = v18;
              v16[v18] = 0;
              v16 = v25;
              goto LABEL_30;
            }
            if ( v16 == (_BYTE *)(a1 + 560) )
            {
              src = (void *)v27[0];
              *(_QWORD *)(a1 + 544) = v25;
              *(__m128 *)(a1 + 552) = _mm_loadh_ps((const double *)&src);
            }
            else
            {
              src = (void *)v27[0];
              v17 = *(_QWORD *)(a1 + 560);
              *(_QWORD *)(a1 + 544) = v25;
              *(__m128 *)(a1 + 552) = _mm_loadh_ps((const double *)&src);
              if ( v16 )
              {
                v25 = v16;
                v27[0] = v17;
LABEL_30:
                n = 0;
                *v16 = 0;
                if ( v25 != v27 )
                  operator delete(v25);
                if ( v20 != &v22 )
                  operator delete(v20);
                goto LABEL_4;
              }
            }
            v25 = v27;
            v16 = v27;
            goto LABEL_30;
          }
        }
LABEL_34:
        if ( sub_9B4AA0((__int64)v4, "-hvx") )
        {
          if ( sub_9B4AA0((__int64)v4, "+long-calls") )
          {
            if ( sub_9B4AA0((__int64)v4, "-long-calls") )
            {
              if ( !sub_9B4AA0((__int64)v4, "+audio") )
                *(_BYTE *)(a1 + 579) = 1;
            }
            else
            {
              *(_BYTE *)(a1 + 580) = 0;
            }
          }
          else
          {
            *(_BYTE *)(a1 + 580) = 1;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 578) = 0;
          *(_WORD *)(a1 + 576) = 0;
        }
LABEL_4:
        v4 += 4;
        if ( v3 == v4 )
          goto LABEL_8;
      }
      else
      {
        v4 += 4;
        *(_BYTE *)(a1 + 578) = 1;
        *(_BYTE *)(a1 + 576) = 1;
        if ( v3 == v4 )
          goto LABEL_8;
      }
    }
    *(_WORD *)(a1 + 576) = 257;
    goto LABEL_4;
  }
LABEL_8:
  if ( sub_9B4AA0(a1 + 512, "hexagonv68") >= 0 )
  {
    *(_BYTE *)(a1 + 276) = 1;
    *(_BYTE *)(a1 + 279) = 1;
  }
  return 1;
}
