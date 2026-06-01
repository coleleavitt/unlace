_QWORD *__fastcall sub_AED2F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char *v3; // rcx
  size_t v7; // r14
  unsigned __int64 v8; // r9
  _BYTE *v9; // r15
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rax
  _BYTE *v12; // r10
  _QWORD *v13; // r11
  __int64 v14; // r12
  unsigned __int64 v15; // rdi
  _BYTE *v16; // rax
  size_t v17; // r9
  _BYTE *v18; // r10
  _BYTE *v19; // rsi
  _BYTE *v20; // rdi
  _QWORD *v21; // rdx
  __int64 v22; // rax
  _BYTE *v24; // rdi
  _BYTE *v25; // rdi
  _QWORD *v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // esi
  unsigned __int64 v29; // rax
  char *v30; // rdx
  char *v31; // r8
  unsigned int v32; // esi
  unsigned int v33; // esi
  unsigned int v34; // edx
  __int64 v35; // rdi
  unsigned int v36; // ecx
  unsigned __int64 v37; // rax
  char *v38; // rdx
  char *v39; // rdi
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // edx
  __int64 v43; // rsi
  char *dest; // [rsp+8h] [rbp-50h]
  char *desta; // [rsp+8h] [rbp-50h]
  char *destb; // [rsp+8h] [rbp-50h]
  _BYTE *destc; // [rsp+8h] [rbp-50h]
  _QWORD *destd; // [rsp+8h] [rbp-50h]
  _QWORD *deste; // [rsp+8h] [rbp-50h]
  size_t n; // [rsp+10h] [rbp-48h]
  size_t na; // [rsp+10h] [rbp-48h]
  _BYTE *src; // [rsp+18h] [rbp-40h]

  v3 = (char *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD *)(a3 + 8);
  v9 = *(_BYTE **)a2;
  v10 = v8 + v7;
  if ( a2 + 16 == *(_QWORD *)a2 )
  {
    v12 = *(_BYTE **)a3;
    if ( v10 > 0xF )
    {
      v13 = (_QWORD *)(a3 + 16);
      if ( (_BYTE *)(a3 + 16) != v12 )
      {
        if ( *(_QWORD *)(a3 + 16) >= v10 )
        {
          if ( 0x7FFFFFFFFFFFFFFFLL - v8 >= v7 )
            goto LABEL_30;
          goto LABEL_73;
        }
        if ( 0x7FFFFFFFFFFFFFFFLL - v7 < v8 )
          goto LABEL_82;
      }
      if ( (v10 & 0x8000000000000000LL) == 0LL )
      {
        if ( v10 > 0x1D )
        {
LABEL_8:
          v14 = v8 + v7;
          v15 = v10 + 1;
          if ( (__int64)(v10 + 1) >= 0 )
          {
LABEL_9:
            src = v12;
            n = *(_QWORD *)(a3 + 8);
            dest = (char *)(a2 + 16);
            v16 = (_BYTE *)operator new(v15);
            v3 = (char *)(a2 + 16);
            v17 = n;
            v18 = src;
            v9 = v16;
            if ( v7 )
            {
              v19 = *(_BYTE **)a2;
              if ( v7 == 1 )
              {
                *v16 = *v19;
              }
              else
              {
                memcpy(v16, v19, v7);
                v18 = src;
                v17 = n;
                v3 = dest;
              }
            }
            if ( v18 && v17 )
            {
              v20 = &v9[v7];
              if ( v17 == 1 )
              {
                *v20 = *v18;
              }
              else
              {
                desta = v3;
                memcpy(v20, v18, v17);
                v3 = desta;
              }
            }
            if ( v3 != *(char **)a2 )
            {
              destb = v3;
              operator delete(*(void **)a2, *(_QWORD *)(a2 + 16) + 1LL);
              v3 = destb;
            }
            *(_QWORD *)a2 = v9;
            *(_QWORD *)(a2 + 16) = v14;
            goto LABEL_19;
          }
LABEL_61:
          std::__throw_bad_alloc();
        }
        v14 = 30;
LABEL_50:
        v15 = v14 + 1;
        goto LABEL_9;
      }
LABEL_81:
      std::__throw_length_error("basic_string::_M_create");
    }
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 16);
    v12 = *(_BYTE **)a3;
    if ( v11 < v10 )
    {
      v13 = (_QWORD *)(a3 + 16);
      if ( (_BYTE *)(a3 + 16) == v12 )
      {
        if ( v10 > 0xF )
        {
LABEL_5:
          if ( 0x7FFFFFFFFFFFFFFFLL - v7 >= v8 )
          {
            if ( (v10 & 0x8000000000000000LL) == 0LL )
            {
              v14 = 2 * v11;
              if ( v10 >= 2 * v11 )
                goto LABEL_8;
              if ( (v11 & 0x4000000000000000LL) != 0 )
                goto LABEL_61;
              goto LABEL_50;
            }
            goto LABEL_81;
          }
LABEL_82:
          std::__throw_length_error("basic_string::append");
        }
      }
      else if ( *(_QWORD *)(a3 + 16) < v10 )
      {
        goto LABEL_5;
      }
      if ( 0x7FFFFFFFFFFFFFFFLL - v8 >= v7 )
      {
LABEL_30:
        if ( v9 >= v12 && &v12[v8] >= v9 )
        {
          deste = v13;
          std::string::_M_replace_cold();
          v12 = *(_BYTE **)a3;
          v13 = deste;
        }
        else
        {
          if ( v8 )
          {
            if ( !v7 )
              goto LABEL_38;
            v25 = &v12[v7];
            if ( v8 == 1 )
            {
              *v25 = *v12;
            }
            else
            {
              na = (size_t)v13;
              destc = v12;
              memmove(v25, v12, *(_QWORD *)(a3 + 8));
              v12 = destc;
              v13 = (_QWORD *)na;
            }
          }
          else if ( !v7 )
          {
            goto LABEL_38;
          }
          if ( v7 == 1 )
          {
            *v12 = *v9;
            v12 = *(_BYTE **)a3;
          }
          else
          {
            destd = v13;
            memcpy(v12, v9, v7);
            v12 = *(_BYTE **)a3;
            v13 = destd;
          }
        }
LABEL_38:
        v26 = a1 + 2;
        *(_QWORD *)(a3 + 8) = v10;
        v12[v10] = 0;
        *a1 = a1 + 2;
        if ( *(_QWORD **)a3 == v13 )
        {
          v27 = *(_QWORD *)(a3 + 8);
          v36 = v27 + 1;
          if ( (unsigned int)(v27 + 1) >= 8 )
          {
            a1[2] = *v13;
            *(_QWORD *)((char *)v26 + v36 - 8) = *(_QWORD *)((char *)v13 + v36 - 8);
            v37 = (unsigned __int64)(a1 + 3) & 0xFFFFFFFFFFFFFFF8LL;
            v38 = (char *)v26 - v37;
            v39 = (char *)((char *)v13 - v38);
            v40 = ((_DWORD)v38 + v36) & 0xFFFFFFF8;
            if ( v40 >= 8 )
            {
              v41 = v40 & 0xFFFFFFF8;
              v42 = 0;
              do
              {
                v43 = v42;
                v42 += 8;
                *(_QWORD *)(v37 + v43) = *(_QWORD *)&v39[v43];
              }
              while ( v42 < v41 );
            }
          }
          else
          {
            if ( (v36 & 4) != 0 )
            {
              *((_DWORD *)a1 + 4) = *(_DWORD *)v13;
              *(_DWORD *)((char *)v26 + v36 - 4) = *(_DWORD *)((char *)v13 + v36 - 4);
              v27 = *(_QWORD *)(a3 + 8);
              goto LABEL_41;
            }
            if ( (_DWORD)v27 == -1 )
            {
LABEL_41:
              a1[1] = v27;
              *(_QWORD *)a3 = v13;
              *(_QWORD *)(a3 + 8) = 0;
              *(_BYTE *)(a3 + 16) = 0;
              return a1;
            }
            *((_BYTE *)a1 + 16) = *(_BYTE *)v13;
            if ( (v36 & 2) != 0 )
            {
              *(_WORD *)((char *)v26 + v36 - 2) = *(_WORD *)((char *)v13 + v36 - 2);
              v27 = *(_QWORD *)(a3 + 8);
              goto LABEL_41;
            }
          }
        }
        else
        {
          *a1 = *(_QWORD *)a3;
          a1[2] = *(_QWORD *)(a3 + 16);
        }
        v27 = *(_QWORD *)(a3 + 8);
        goto LABEL_41;
      }
LABEL_73:
      std::__throw_length_error("basic_string::_M_replace");
    }
  }
  if ( 0x7FFFFFFFFFFFFFFFLL - v7 < v8 )
    goto LABEL_82;
  if ( v8 )
  {
    v24 = &v9[v7];
    if ( v8 == 1 )
    {
      *v24 = *v12;
      v9 = *(_BYTE **)a2;
    }
    else
    {
      memcpy(v24, v12, *(_QWORD *)(a3 + 8));
      v9 = *(_BYTE **)a2;
      v3 = (char *)(a2 + 16);
    }
  }
LABEL_19:
  v21 = a1 + 2;
  *(_QWORD *)(a2 + 8) = v10;
  v9[v10] = 0;
  *a1 = a1 + 2;
  if ( v3 != *(char **)a2 )
  {
    *a1 = *(_QWORD *)a2;
    a1[2] = *(_QWORD *)(a2 + 16);
LABEL_21:
    v22 = *(_QWORD *)(a2 + 8);
    goto LABEL_22;
  }
  v22 = *(_QWORD *)(a2 + 8);
  v28 = v22 + 1;
  if ( (unsigned int)(v22 + 1) >= 8 )
  {
    a1[2] = *(_QWORD *)(a2 + 16);
    *(_QWORD *)((char *)v21 + v28 - 8) = *(_QWORD *)&v3[v28 - 8];
    v29 = (unsigned __int64)(a1 + 3) & 0xFFFFFFFFFFFFFFF8LL;
    v30 = (char *)v21 - v29;
    v31 = (char *)(v3 - v30);
    v32 = ((_DWORD)v30 + v28) & 0xFFFFFFF8;
    if ( v32 >= 8 )
    {
      v33 = v32 & 0xFFFFFFF8;
      v34 = 0;
      do
      {
        v35 = v34;
        v34 += 8;
        *(_QWORD *)(v29 + v35) = *(_QWORD *)&v31[v35];
      }
      while ( v34 < v33 );
    }
    goto LABEL_21;
  }
  if ( (v28 & 4) != 0 )
  {
    *((_DWORD *)a1 + 4) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)((char *)v21 + v28 - 4) = *(_DWORD *)&v3[v28 - 4];
    v22 = *(_QWORD *)(a2 + 8);
    goto LABEL_22;
  }
  if ( (_DWORD)v22 != -1 )
  {
    *((_BYTE *)a1 + 16) = *(_BYTE *)(a2 + 16);
    if ( (v28 & 2) != 0 )
    {
      *(_WORD *)((char *)v21 + v28 - 2) = *(_WORD *)&v3[v28 - 2];
      v22 = *(_QWORD *)(a2 + 8);
      goto LABEL_22;
    }
    goto LABEL_21;
  }
LABEL_22:
  a1[1] = v22;
  *(_QWORD *)a2 = v3;
  *(_QWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a2 + 16) = 0;
  return a1;
}

