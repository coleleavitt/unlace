__int64 __fastcall sub_1393730(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // r14
  _BYTE *v11; // rax
  _BYTE *v12; // r15
  signed __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rbx
  void *v16; // rdi
  __int64 v18; // r14
  __int64 v19; // rbp
  _BYTE *v20; // rsi
  _BYTE *v21; // rax
  size_t v22; // r15
  unsigned __int64 v23; // rbx
  __int64 v24; // rbx
  unsigned __int64 v25; // rdi
  void *v26; // rdi
  __int64 v27; // rbx
  void *v28; // rdi
  _BYTE *v29; // rsi
  _BYTE *v30; // rax
  size_t v31; // r11
  unsigned __int64 v32; // rbp
  __int64 v33; // rbp
  unsigned __int64 v34; // rdi
  void *v35; // rdi
  unsigned int v36; // [rsp+4h] [rbp-54h]
  _BYTE *v37; // [rsp+8h] [rbp-50h]
  __int64 v38; // [rsp+8h] [rbp-50h]
  size_t v39; // [rsp+10h] [rbp-48h]
  size_t v40; // [rsp+10h] [rbp-48h]
  _BYTE *v41; // [rsp+18h] [rbp-40h]

  if ( (__int64 *)a1 != a2 )
  {
    v4 = *(unsigned int *)(a1 + 8);
    v6 = *(_QWORD *)a1;
    v36 = *((_DWORD *)a2 + 2);
    v3 = v36;
    if ( v36 <= v4 )
    {
      v14 = *(_QWORD *)a1;
      if ( v36 )
      {
        v18 = *a2;
        v19 = *a2 + 48LL * v36;
        do
        {
          *(_QWORD *)v6 = *(_QWORD *)v18;
          *(_BYTE *)(v6 + 8) = *(_BYTE *)(v18 + 8);
          *(_DWORD *)(v6 + 12) = *(_DWORD *)(v18 + 12);
          if ( v18 != v6 )
          {
            v21 = *(_BYTE **)(v6 + 16);
            v22 = *(_QWORD *)(v18 + 24);
            if ( v21 == (_BYTE *)(v6 + 32) )
              v23 = 15;
            else
              v23 = *(_QWORD *)(v6 + 32);
            if ( v22 > v23 )
            {
              if ( (v22 & 0x8000000000000000LL) != 0LL )
LABEL_73:
                std::__throw_length_error("basic_string::_M_create");
              v24 = 2 * v23;
              if ( v22 < v24 )
              {
                v25 = v24 + 1;
                if ( v24 < 0 )
                {
                  v25 = 0x8000000000000000LL;
                  v24 = 0x7FFFFFFFFFFFFFFFLL;
                }
              }
              else
              {
                v25 = v22 + 1;
                v24 = *(_QWORD *)(v18 + 24);
              }
              v21 = (_BYTE *)operator new(v25);
              v26 = *(void **)(v6 + 16);
              if ( v26 != (void *)(v6 + 32) )
              {
                v37 = v21;
                operator delete(v26);
                v21 = v37;
              }
              *(_QWORD *)(v6 + 16) = v21;
              *(_QWORD *)(v6 + 32) = v24;
            }
            if ( v22 )
            {
              v20 = *(_BYTE **)(v18 + 16);
              if ( v22 == 1 )
                *v21 = *v20;
              else
                memcpy(v21, v20, v22);
              v21 = *(_BYTE **)(v6 + 16);
            }
            *(_QWORD *)(v6 + 24) = v22;
            v21[v22] = 0;
          }
          v18 += 48;
          v6 += 48;
        }
        while ( v18 != v19 );
        v14 = *(_QWORD *)a1;
        v4 = *(unsigned int *)(a1 + 8);
      }
      v15 = v14 + 48 * v4;
      while ( v6 != v15 )
      {
        while ( 1 )
        {
          v15 -= 48;
          v16 = *(void **)(v15 + 16);
          if ( v16 == (void *)(v15 + 32) )
            break;
          operator delete(v16);
          if ( v6 == v15 )
            goto LABEL_20;
        }
      }
      goto LABEL_20;
    }
    if ( v36 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
    {
      v27 = v6 + 48 * v4;
      while ( v6 != v27 )
      {
        while ( 1 )
        {
          v27 -= 48;
          v28 = *(void **)(v27 + 16);
          if ( v28 == (void *)(v27 + 32) )
            break;
          operator delete(v28);
          if ( v6 == v27 )
            goto LABEL_47;
        }
      }
LABEL_47:
      *(_DWORD *)(a1 + 8) = 0;
      v4 = 0;
      sub_1393590(a1, v36);
      v3 = *((unsigned int *)a2 + 2);
      v6 = *(_QWORD *)a1;
      v7 = *a2;
    }
    else
    {
      v7 = *a2;
      if ( *(_DWORD *)(a1 + 8) )
      {
        v4 *= 48LL;
        v38 = v7 + v4;
        do
        {
          *(_QWORD *)v6 = *(_QWORD *)v7;
          *(_BYTE *)(v6 + 8) = *(_BYTE *)(v7 + 8);
          *(_DWORD *)(v6 + 12) = *(_DWORD *)(v7 + 12);
          if ( v7 != v6 )
          {
            v30 = *(_BYTE **)(v6 + 16);
            v31 = *(_QWORD *)(v7 + 24);
            if ( v30 == (_BYTE *)(v6 + 32) )
              v32 = 15;
            else
              v32 = *(_QWORD *)(v6 + 32);
            if ( v31 > v32 )
            {
              if ( (v31 & 0x8000000000000000LL) != 0LL )
                goto LABEL_73;
              v33 = 2 * v32;
              if ( v31 < v33 )
              {
                v34 = v33 + 1;
                if ( v33 < 0 )
                {
                  v34 = 0x8000000000000000LL;
                  v33 = 0x7FFFFFFFFFFFFFFFLL;
                }
              }
              else
              {
                v34 = v31 + 1;
                v33 = *(_QWORD *)(v7 + 24);
              }
              v40 = *(_QWORD *)(v7 + 24);
              v30 = (_BYTE *)operator new(v34);
              v35 = *(void **)(v6 + 16);
              v31 = v40;
              if ( v35 != (void *)(v6 + 32) )
              {
                v41 = v30;
                operator delete(v35);
                v30 = v41;
                v31 = v40;
              }
              *(_QWORD *)(v6 + 16) = v30;
              *(_QWORD *)(v6 + 32) = v33;
            }
            if ( v31 )
            {
              v29 = *(_BYTE **)(v7 + 16);
              if ( v31 == 1 )
              {
                *v30 = *v29;
                v30 = *(_BYTE **)(v6 + 16);
              }
              else
              {
                v39 = v31;
                memcpy(v30, v29, v31);
                v30 = *(_BYTE **)(v6 + 16);
                v31 = v39;
              }
            }
            *(_QWORD *)(v6 + 24) = v31;
            v30[v31] = 0;
          }
          v7 += 48;
          v6 += 48;
        }
        while ( v7 != v38 );
        v3 = *((unsigned int *)a2 + 2);
        v6 = *(_QWORD *)a1;
        v7 = *a2;
      }
    }
    v8 = v4 + v6;
    v9 = v7 + v4;
    v10 = v7 + 48 * v3;
    if ( v9 == v10 )
    {
LABEL_20:
      *(_DWORD *)(a1 + 8) = v36;
      return a1;
    }
    while ( 1 )
    {
      *(_QWORD *)v8 = *(_QWORD *)v9;
      *(_DWORD *)(v8 + 8) = *(_DWORD *)(v9 + 8);
      *(_DWORD *)(v8 + 12) = *(_DWORD *)(v9 + 12);
      *(_QWORD *)(v8 + 16) = v8 + 32;
      v12 = *(_BYTE **)(v9 + 16);
      v13 = *(_QWORD *)(v9 + 24);
      if ( &v12[v13] && !v12 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v13 > 0xF )
        break;
      v11 = *(_BYTE **)(v8 + 16);
      if ( v13 == 1 )
      {
        *v11 = *v12;
        v11 = *(_BYTE **)(v8 + 16);
      }
      else if ( v13 )
      {
        goto LABEL_24;
      }
LABEL_8:
      v9 += 48;
      *(_QWORD *)(v8 + 24) = v13;
      v8 += 48;
      v11[v13] = 0;
      if ( v10 == v9 )
        goto LABEL_20;
    }
    if ( v13 < 0 )
      goto LABEL_73;
    v11 = (_BYTE *)operator new(v13 + 1);
    *(_QWORD *)(v8 + 32) = v13;
    *(_QWORD *)(v8 + 16) = v11;
LABEL_24:
    memcpy(v11, v12, v13);
    v11 = *(_BYTE **)(v8 + 16);
    goto LABEL_8;
  }
  return a1;
}
