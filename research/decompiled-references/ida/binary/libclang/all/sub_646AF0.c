_QWORD *__fastcall sub_646AF0(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // r12
  size_t v5; // rbp
  _BYTE *v6; // r13
  signed __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // r15
  void *v11; // rdi
  int v12; // eax
  size_t v13; // r13
  _BYTE *v14; // r10
  _BYTE *v15; // rdi
  size_t v16; // r13
  _BYTE *v17; // r10
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // rax
  _BYTE *v22; // [rsp+8h] [rbp-60h]
  _BYTE *v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+10h] [rbp-58h]
  _QWORD *v25; // [rsp+18h] [rbp-50h]

  v2 = a2[1] - *a2;
  *(_OWORD *)a1 = 0;
  v25 = a1;
  a1[2] = 0;
  if ( v2 )
  {
    if ( v2 > 0x7FFFFFFFFFFFFFF8LL )
      goto LABEL_34;
    v3 = operator new(v2);
  }
  else
  {
    v3 = 0;
  }
  a1[2] = v3 + v2;
  *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)(unsigned __int64)v3);
  v4 = *a2;
  v24 = a2[1];
  if ( *a2 != v24 )
  {
    do
    {
      a1 = (_QWORD *)(v3 + 16);
      *(_QWORD *)v3 = v3 + 16;
      v5 = *(_QWORD *)(v4 + 8);
      v6 = *(_BYTE **)v4;
      if ( v5 > 0xF )
      {
        v21 = std::string::_M_create();
        *(_QWORD *)v3 = v21;
        a1 = (_QWORD *)v21;
        *(_QWORD *)(v3 + 16) = v5;
      }
      else
      {
        if ( v5 == 1 )
        {
          *(_BYTE *)(v3 + 16) = *v6;
          goto LABEL_8;
        }
        if ( !v5 )
          goto LABEL_8;
      }
      memcpy(a1, v6, v5);
      a1 = *(_QWORD **)v3;
LABEL_8:
      *(_QWORD *)(v3 + 8) = v5;
      *((_BYTE *)a1 + v5) = 0;
      v7 = *(_QWORD *)(v4 + 40) - *(_QWORD *)(v4 + 32);
      *(_QWORD *)(v3 + 48) = 0;
      *(_OWORD *)(v3 + 32) = 0;
      if ( v7 )
      {
        if ( (unsigned __int64)v7 > 0x7FFFFFFFFFFFFFD0LL )
        {
          if ( v7 >= 0 )
            std::__throw_bad_alloc();
LABEL_34:
          sub_555886(a1);
        }
        v8 = operator new(v7);
      }
      else
      {
        v8 = 0;
      }
      *(_QWORD *)(v3 + 48) = v8 + v7;
      *(__m128i *)(v3 + 32) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v8);
      v9 = *(_QWORD *)(v4 + 40);
      if ( v9 != *(_QWORD *)(v4 + 32) )
      {
        v10 = *(_QWORD *)(v4 + 32);
        while ( 1 )
        {
          v15 = (_BYTE *)(v8 + 16);
          *(_QWORD *)v8 = v8 + 16;
          v16 = *(_QWORD *)(v10 + 8);
          v17 = *(_BYTE **)v10;
          if ( v16 > 0xF )
            break;
          if ( v16 != 1 )
          {
            if ( !v16 )
              goto LABEL_15;
            goto LABEL_21;
          }
          *(_BYTE *)(v8 + 16) = *v17;
LABEL_15:
          *(_QWORD *)(v8 + 8) = v16;
          v15[v16] = 0;
          v11 = (void *)(v8 + 56);
          v12 = *(_DWORD *)(v10 + 32);
          *(_QWORD *)(v8 + 40) = v8 + 56;
          v13 = *(_QWORD *)(v10 + 48);
          v14 = *(_BYTE **)(v10 + 40);
          *(_DWORD *)(v8 + 32) = v12;
          if ( v13 > 0xF )
          {
            v23 = v14;
            v19 = std::string::_M_create();
            v14 = v23;
            *(_QWORD *)(v8 + 40) = v19;
            v11 = (void *)v19;
            *(_QWORD *)(v8 + 56) = v13;
LABEL_25:
            memcpy(v11, v14, v13);
            v11 = *(void **)(v8 + 40);
            goto LABEL_18;
          }
          if ( v13 == 1 )
          {
            *(_BYTE *)(v8 + 56) = *v14;
          }
          else if ( v13 )
          {
            goto LABEL_25;
          }
LABEL_18:
          *(_QWORD *)(v8 + 48) = v13;
          v10 += 80;
          v8 += 80;
          *((_BYTE *)v11 + v13) = 0;
          *(_QWORD *)(v8 - 8) = *(_QWORD *)(v10 - 8);
          if ( v9 == v10 )
            goto LABEL_26;
        }
        v22 = *(_BYTE **)v10;
        v18 = std::string::_M_create();
        v17 = v22;
        *(_QWORD *)v8 = v18;
        v15 = (_BYTE *)v18;
        *(_QWORD *)(v8 + 16) = v16;
LABEL_21:
        memcpy(v15, v17, v16);
        v15 = *(_BYTE **)v8;
        goto LABEL_15;
      }
LABEL_26:
      *(_QWORD *)(v3 + 40) = v8;
      v4 += 56;
      v3 += 56;
    }
    while ( v24 != v4 );
  }
  v25[1] = v3;
  return v25;
}

