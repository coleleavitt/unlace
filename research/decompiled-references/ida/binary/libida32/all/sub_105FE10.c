__int64 __fastcall sub_105FE10(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // r13
  unsigned __int64 v6; // rdx
  _BYTE *v7; // r15
  unsigned __int64 v8; // r12
  _BYTE *v9; // rdi
  char *v10; // rax
  unsigned __int64 v11; // r12
  _BYTE *v12; // rax
  void *v13; // rsi
  _QWORD *v14; // rax
  _BYTE *v15; // rdi
  __int64 v16; // rcx
  size_t v17; // rdx
  void *src; // [rsp+8h] [rbp-80h] BYREF
  void *v19; // [rsp+10h] [rbp-78h]
  __int64 v20; // [rsp+18h] [rbp-70h]
  int v21; // [rsp+20h] [rbp-68h] BYREF
  char v22; // [rsp+24h] [rbp-64h]
  char v23; // [rsp+25h] [rbp-63h]
  void *v24; // [rsp+30h] [rbp-58h]
  size_t n; // [rsp+38h] [rbp-50h]
  _QWORD v26[9]; // [rsp+40h] [rbp-48h] BYREF

  v3 = *(_QWORD **)(a2 + 8);
  v4 = *(_QWORD **)a2;
  if ( *(_QWORD **)a2 != v3 )
  {
    while ( sub_990D60((__int64)v4, "+hvx-length64b") )
    {
      if ( sub_990D60((__int64)v4, "+hvx-length128b") )
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
            v22 = 118;
            *(_BYTE *)(a1 + 576) = 1;
            v19 = &v21;
            v21 = 2021025835;
            v20 = 5;
            v23 = 0;
            if ( v4[1] <= 4u )
              std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
            v24 = v26;
            v11 = v4[1];
            v12 = (_BYTE *)*v4;
            if ( v11 <= 4 )
              std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
            v13 = v12 + 5;
            if ( &v12[v11] && v12 == (_BYTE *)-5LL )
              std::__throw_logic_error("basic_string::_M_construct null not valid");
            if ( v11 - 5 > 0xF )
            {
              if ( (__int64)(v11 - 5) < 0 )
                std::__throw_length_error("basic_string::_M_create");
              src = v12 + 5;
              v14 = (_QWORD *)operator new(v11 - 4);
              v26[0] = v11 - 5;
              v13 = src;
              v24 = v14;
              goto LABEL_40;
            }
            if ( v11 == 6 )
            {
              LOBYTE(v26[0]) = v12[5];
              v14 = v26;
              goto LABEL_26;
            }
            v14 = v26;
            if ( v11 != 5 )
            {
LABEL_40:
              memcpy(v14, v13, v11 - 5);
              v14 = v24;
            }
LABEL_26:
            n = v11 - 5;
            *((_BYTE *)v14 + v11 - 5) = 0;
            v15 = *(_BYTE **)(a1 + 544);
            if ( v24 == v26 )
            {
              v17 = n;
              if ( n )
              {
                if ( n == 1 )
                  *v15 = v26[0];
                else
                  memcpy(v15, v26, n);
                v17 = n;
                v15 = *(_BYTE **)(a1 + 544);
              }
              *(_QWORD *)(a1 + 552) = v17;
              v15[v17] = 0;
              v15 = v24;
              goto LABEL_30;
            }
            if ( v15 == (_BYTE *)(a1 + 560) )
            {
              src = (void *)v26[0];
              *(_QWORD *)(a1 + 544) = v24;
              *(__m128 *)(a1 + 552) = _mm_loadh_ps((const double *)&src);
            }
            else
            {
              src = (void *)v26[0];
              v16 = *(_QWORD *)(a1 + 560);
              *(_QWORD *)(a1 + 544) = v24;
              *(__m128 *)(a1 + 552) = _mm_loadh_ps((const double *)&src);
              if ( v15 )
              {
                v24 = v15;
                v26[0] = v16;
LABEL_30:
                n = 0;
                *v15 = 0;
                if ( v24 != v26 )
                  operator delete(v24);
                if ( v19 != &v21 )
                  operator delete(v19);
                goto LABEL_4;
              }
            }
            v24 = v26;
            v15 = v26;
            goto LABEL_30;
          }
        }
LABEL_34:
        if ( sub_990D60((__int64)v4, "-hvx") )
        {
          if ( sub_990D60((__int64)v4, "+long-calls") )
          {
            if ( sub_990D60((__int64)v4, "-long-calls") )
            {
              if ( !sub_990D60((__int64)v4, "+audio") )
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
  if ( sub_990D60(a1 + 512, "hexagonv68") >= 0 )
  {
    *(_BYTE *)(a1 + 276) = 1;
    *(_BYTE *)(a1 + 279) = 1;
  }
  return 1;
}

