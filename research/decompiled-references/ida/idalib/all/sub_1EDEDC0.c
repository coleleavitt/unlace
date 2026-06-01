unsigned __int64 __fastcall sub_1EDEDC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 *v13; // rax
  __int64 v14; // r12
  __int64 v15; // rbp
  char *v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rax
  const void *v20; // r14
  signed __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // r12
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  __int64 *v29; // rdx
  unsigned __int64 v30; // rax
  _BYTE *v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // [rsp+0h] [rbp-D8h]
  __int64 v35; // [rsp+8h] [rbp-D0h] BYREF
  __m128i v36; // [rsp+10h] [rbp-C8h] BYREF
  char v37; // [rsp+20h] [rbp-B8h]
  char *v38; // [rsp+30h] [rbp-A8h]
  __int64 v39; // [rsp+38h] [rbp-A0h]
  char v40; // [rsp+40h] [rbp-98h] BYREF
  __int64 v41; // [rsp+60h] [rbp-78h] BYREF
  void *ptr; // [rsp+68h] [rbp-70h]
  __int64 v43; // [rsp+70h] [rbp-68h]
  _BYTE v44[96]; // [rsp+78h] [rbp-60h] BYREF

  v6 = a3;
  v7 = a4;
  v35 = a2;
  if ( *(_DWORD *)(a1 + 9408) && !a4 )
  {
    sub_1EDEBF0(&v36, a1 + 9416, &v35, 0, a5, a6);
    v18 = v36.m128i_i64[0];
    if ( v37 )
    {
      v24 = *(_QWORD *)(a1 + 9440);
      v38 = &v40;
      v25 = *(unsigned int *)(a1 + 9452);
      v41 = v35;
      ptr = v44;
      v26 = *(unsigned int *)(a1 + 9448);
      v39 = 0x400000000LL;
      v43 = 0x400000000LL;
      v27 = v26 + 1;
      v28 = 7 * v26;
      v29 = &v41;
      v30 = v24 + 8 * v28;
      if ( v27 > v25 )
      {
        v32 = a1 + 9440;
        if ( v24 > (unsigned __int64)&v41 || v30 <= (unsigned __int64)&v41 )
        {
          sub_1EDDBC0(v32, v27);
          v29 = &v41;
          v30 = *(_QWORD *)(a1 + 9440) + 56LL * *(unsigned int *)(a1 + 9448);
        }
        else
        {
          sub_1EDDBC0(v32, v27);
          v33 = *(_QWORD *)(a1 + 9440);
          v29 = (__int64 *)((char *)&v41 + v33 - v24);
          v30 = 56LL * *(unsigned int *)(a1 + 9448) + v33;
        }
      }
      *(_QWORD *)v30 = *v29;
      *(_QWORD *)(v30 + 8) = v30 + 24;
      *(_QWORD *)(v30 + 16) = 0x400000000LL;
      if ( *((_DWORD *)v29 + 4) )
        sub_1EB3E90((char ***)(v30 + 8), (char ***)v29 + 1);
      v19 = *(unsigned int *)(a1 + 9448);
      v31 = ptr;
      *(_DWORD *)(a1 + 9448) = v19 + 1;
      if ( v31 != v44 )
      {
        free(v31);
        v19 = (unsigned int)(*(_DWORD *)(a1 + 9448) - 1);
      }
      *(_DWORD *)(v18 + 8) = v19;
    }
    else
    {
      v19 = *(unsigned int *)(v36.m128i_i64[0] + 8);
    }
    v20 = *(const void **)v6;
    v21 = 8LL * *(unsigned int *)(v6 + 8);
    v22 = *(_QWORD *)(a1 + 9440) + 56 * v19;
    v23 = v21 >> 3;
    result = *(unsigned int *)(v22 + 16);
    if ( (v21 >> 3) + result > *(unsigned int *)(v22 + 20) )
    {
      sub_2237220(v22 + 8, v22 + 24, v23 + result, 8);
      result = *(unsigned int *)(v22 + 16);
    }
    if ( v21 )
    {
      memcpy((void *)(*(_QWORD *)(v22 + 8) + 8 * result), v20, v21);
      result = *(unsigned int *)(v22 + 16);
    }
    *(_DWORD *)(v22 + 16) = result + v23;
  }
  else
  {
    result = *(unsigned int *)(a3 + 8);
    if ( (_DWORD)result )
    {
      v10 = (unsigned int)(result - 1);
      if ( a4 )
      {
        v11 = 8 * v10 + 8;
        v12 = 0;
        do
        {
          while ( 1 )
          {
            v13 = (__int64 *)(v12 + *(_QWORD *)v6);
            if ( *(_QWORD *)(a1 + 128) )
              break;
            v12 += 8;
            result = sub_1EADF30(a1 + 13320, *v13);
            if ( v11 == v12 )
              return result;
          }
          result = sub_1EDB980((_QWORD *)a1, *v13, a3, a4, a5, a6);
          a4 = *(unsigned int *)(v7 + 8);
          if ( a4 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 12) )
          {
            v34 = result;
            sub_2237220(v7, v7 + 16, a4 + 1, 8);
            a4 = *(unsigned int *)(v7 + 8);
            result = v34;
          }
          a3 = *(_QWORD *)v7;
          v12 += 8;
          *(_QWORD *)(*(_QWORD *)v7 + 8 * a4) = result;
          ++*(_DWORD *)(v7 + 8);
        }
        while ( v11 != v12 );
      }
      else
      {
        v14 = 8 * v10 + 8;
        v15 = 0;
        do
        {
          v17 = *(_QWORD *)(v15 + *(_QWORD *)v6);
          if ( *(_QWORD *)(a1 + 128) )
          {
            v16 = (char *)sub_1EDB980((_QWORD *)a1, v17, a3, a4, a5, a6);
            result = sub_1ED86D0(a1, v16, v35);
          }
          else
          {
            result = sub_1EADF30(a1 + 13320, v17);
          }
          v15 += 8;
        }
        while ( v15 != v14 );
      }
    }
  }
  return result;
}
