void __fastcall sub_228A730(_QWORD *a1, _QWORD **a2, unsigned int a3)
{
  bool v4; // zf
  __int64 v5; // r15
  _BYTE *v6; // r14
  unsigned __int8 v7; // cl
  size_t v8; // r13
  _BYTE *v9; // r9
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  void *v12; // rdi
  _BYTE *v13; // rdi
  unsigned __int64 v14; // rax
  size_t v15; // rax
  _BYTE *v17; // [rsp+0h] [rbp-88h]
  _BYTE *v18; // [rsp+0h] [rbp-88h]
  _BYTE *v19; // [rsp+8h] [rbp-80h]
  _BYTE *v20; // [rsp+8h] [rbp-80h]
  void *src; // [rsp+10h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-70h]
  _BYTE v23[96]; // [rsp+28h] [rbp-60h] BYREF

  v4 = *((_BYTE *)a2 + 33) == 1;
  v5 = a1[1];
  v6 = (_BYTE *)*a1;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  src = v23;
  if ( v4 && (v7 = *((_BYTE *)a2 + 32), v7 <= 6u) && ((1LL << v7) & 0x7A) != 0 )
  {
    switch ( *((_BYTE *)a2 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v8 = (size_t)a2[1];
        v9 = *a2;
        break;
      case 1:
        v8 = 0;
        v9 = nullptr;
        break;
      case 3:
        v9 = *a2;
        v8 = 0;
        if ( *a2 )
        {
          v20 = *a2;
          v15 = j__strlen((const char *)*a2);
          v9 = v20;
          v8 = v15;
        }
        break;
      case 4:
        v9 = (_BYTE *)**a2;
        v8 = (*a2)[1];
        break;
      default:
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    sub_22538C0((const char **)a2, (__int64)&src);
    v8 = n[0];
    v9 = src;
  }
  if ( !v5 )
    goto LABEL_11;
  v10 = v5 - 1;
  if ( v6[v5 - 1] != 46 )
  {
    if ( v5 == 1 )
    {
LABEL_11:
      v10 = a1[1];
      goto LABEL_12;
    }
    v10 = v5 - 2;
    if ( v6[v5 - 2] != 46 )
    {
      while ( v10 )
      {
        if ( v6[--v10] == 46 )
          goto LABEL_27;
      }
      goto LABEL_11;
    }
  }
LABEL_27:
  v19 = v9;
  v14 = sub_2288500(v6, v5, a3);
  v9 = v19;
  if ( v14 > v10 )
    goto LABEL_11;
  a1[1] = v10;
LABEL_12:
  v11 = a1[2];
  if ( v8 )
  {
    if ( *v9 != 46 )
    {
      if ( v10 + 1 > v11 )
      {
        v18 = v9;
        sub_2236E10((__int64)a1, a1 + 3, v10 + 1, 1);
        v10 = a1[1];
        v9 = v18;
      }
      *(_BYTE *)(*a1 + v10) = 46;
      v10 = a1[1] + 1LL;
      v11 = a1[2];
      a1[1] = v10;
    }
    if ( v11 < v10 + v8 )
    {
      v17 = v9;
      sub_2236E10((__int64)a1, a1 + 3, v10 + v8, 1);
      v9 = v17;
      v12 = (void *)(*a1 + a1[1]);
    }
    else
    {
      v12 = (void *)(v10 + *a1);
    }
    memcpy(v12, v9, v8);
    v10 = a1[1];
  }
  else if ( v11 < v10 )
  {
    sub_2236E10((__int64)a1, a1 + 3, v10, 1);
    v10 = a1[1];
  }
  v13 = src;
  a1[1] = v8 + v10;
  if ( v13 != v23 )
    free(v13);
}
