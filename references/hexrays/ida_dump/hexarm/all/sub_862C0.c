__int64 __fastcall sub_862C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 j; // rbp
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v17; // r12
  int v18; // eax
  char **v19; // rdi
  int v20; // eax
  __int64 v21; // r12
  bool v22; // cc
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // r13
  char **v30; // rcx
  char *v31; // r15
  char *v32; // rax
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp+8h] [rbp-90h]
  size_t n; // [rsp+18h] [rbp-80h]
  int v40; // [rsp+20h] [rbp-78h]
  unsigned int v41; // [rsp+24h] [rbp-74h]
  __int64 v42; // [rsp+28h] [rbp-70h]
  __int64 v43; // [rsp+30h] [rbp-68h] BYREF
  char *v44; // [rsp+38h] [rbp-60h]
  char **v45; // [rsp+40h] [rbp-58h] BYREF
  __int64 v46; // [rsp+48h] [rbp-50h]
  unsigned int v47; // [rsp+50h] [rbp-48h]
  unsigned __int64 v48; // [rsp+58h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v43 = a2;
  v44 = (char *)(a3 + a2);
  v3 = j__qalloc_or_throw(224);
  sub_257380(v3, a1);
  v4 = v44;
  v46 = v3;
  v45 = (char **)&v43;
  v47 = 0;
  v47 = unpack_dd(&v43);
  if ( v47 <= 5 )
  {
    v4 = (char *)(v46 + 16);
    if ( (unsigned __int8)sub_84C50(&v45, v46 + 16) )
    {
      v17 = v46;
      v18 = unpack_dd(v45);
      v19 = v45;
      *(_DWORD *)(v17 + 56) = v18;
      v20 = unpack_dd(v19);
      v21 = v46;
      v22 = v47 <= 4;
      *(_DWORD *)(v46 + 108) = v20;
      if ( v22 )
      {
LABEL_24:
        *(_DWORD *)(v3 + 108) &= 0xFFFFFFFC;
        sub_325690(v3, 0, 1);
        return v3;
      }
      *(_BYTE *)(v21 + 208) = 1;
      v4 = v45[1];
      v41 = unpack_dd(v45);
      if ( v45[1] - *v45 >= (unsigned __int64)v41 )
      {
        v23 = *(_QWORD *)(v21 + 192);
        v24 = 0;
        if ( v23 )
        {
          do
          {
            v25 = (__int64 *)(*(_QWORD *)(v21 + 184) + 24 * v24);
            v26 = *v25;
            if ( *v25 )
            {
              v25[1] = 0;
              qfree(v26);
            }
            ++v24;
          }
          while ( v23 != v24 );
        }
        *(_QWORD *)(v21 + 192) = 0;
        v42 = v21 + 184;
        if ( *(_QWORD *)(v21 + 200) < (unsigned __int64)v41 )
        {
          *(_QWORD *)(v21 + 184) = qvector_reserve(v42, *(_QWORD *)(v21 + 184), v41, 24);
        }
        else if ( !v41 )
        {
          goto LABEL_24;
        }
        v40 = 0;
        do
        {
          v27 = *(_QWORD *)(v21 + 192);
          v28 = *(_QWORD *)(v21 + 184);
          if ( *(_QWORD *)(v21 + 200) < (unsigned __int64)(v27 + 1) )
          {
            v36 = qvector_reserve(v42, v28, v27 + 1, 24);
            *(_QWORD *)(v21 + 184) = v36;
            v27 = *(_QWORD *)(v21 + 192);
            v28 = v36;
          }
          v29 = v28 + 24 * v27;
          *(_QWORD *)v29 = 0;
          v30 = v45;
          *(_OWORD *)(v29 + 8) = 0;
          ++*(_QWORD *)(v21 + 192);
          v31 = *v30;
          v32 = *v30;
          while ( v32 < v30[1] )
          {
            if ( !*v32++ )
            {
              *v30 = v32;
              if ( v31 )
              {
                v33 = *(_QWORD *)(v29 + 8);
                v34 = v32 - v31 - 1;
                n = v34;
                v38 = v34;
                if ( v33 )
                  v38 = --v33 + v34;
                v35 = *(_QWORD *)v29;
                if ( *(_QWORD *)(v29 + 16) < (unsigned __int64)(v38 + 1) )
                {
                  v37 = qvector_reserve(v29, v35, v38 + 1, 1);
                  *(_QWORD *)v29 = v37;
                  v35 = v37;
                }
                *(_QWORD *)(v29 + 8) = v38 + 1;
                *(_BYTE *)(v35 + v38) = 0;
                memmove((void *)(v33 + *(_QWORD *)v29), v31, n);
              }
              break;
            }
          }
          ++v40;
        }
        while ( v40 != v41 );
        goto LABEL_24;
      }
    }
  }
  *(_QWORD *)(v3 + 8) = 0;
  if ( v3 )
  {
    sub_258D30(v3, v4);
    v5 = *(_QWORD *)(v3 + 184);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v3 + 192);
      if ( v6 )
      {
        for ( i = 0; i != v6; ++i )
        {
          v8 = (__int64 *)(v5 + 24 * i);
          v9 = *v8;
          if ( *v8 )
          {
            v8[1] = 0;
            qfree(v9);
            v5 = *(_QWORD *)(v3 + 184);
          }
        }
      }
      *(_QWORD *)(v3 + 192) = 0;
      qfree(v5);
    }
    v10 = *(_QWORD *)(v3 + 160);
    if ( v10 )
    {
      *(_QWORD *)(v3 + 168) = 0;
      qfree(v10);
    }
    v11 = *(_QWORD *)(v3 + 128);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v3 + 136);
      if ( v12 )
      {
        for ( j = 0; j != v12; ++j )
        {
          v14 = (__int64 *)(v11 + 32 * j);
          v15 = *v14;
          if ( *v14 )
          {
            v14[1] = 0;
            qfree(v15);
            v11 = *(_QWORD *)(v3 + 128);
          }
        }
      }
      *(_QWORD *)(v3 + 136) = 0;
      qfree(v11);
    }
    sub_255410(v3 + 16);
    j__qfree(v3);
  }
  return 0;
}
