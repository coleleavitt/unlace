void __fastcall sub_1240770(__int64 a1, __int64 a2, __int64 *a3)
{
  const void *v4; // rax
  unsigned __int64 v5; // rdx
  size_t v6; // r13
  char *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 *v12; // rdi
  void **v13; // rbp
  __int64 v14; // rax
  void **v15; // r12
  void **v16; // rbx
  void **v17; // rdi
  void **v18; // rdi
  void **v19; // rbx
  void **v20; // r12
  __int64 v21; // rdx
  const void *v22; // [rsp+8h] [rbp-190h]
  char *v23; // [rsp+10h] [rbp-188h] BYREF
  __int16 v24; // [rsp+30h] [rbp-168h]
  char v25[32]; // [rsp+40h] [rbp-158h] BYREF
  __int16 v26; // [rsp+60h] [rbp-138h]
  char v27[32]; // [rsp+70h] [rbp-128h] BYREF
  __int16 v28; // [rsp+90h] [rbp-108h]
  char v29[32]; // [rsp+A0h] [rbp-F8h] BYREF
  __int16 v30; // [rsp+C0h] [rbp-D8h]
  void *ptr; // [rsp+D0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-C0h]
  __int64 v33; // [rsp+E8h] [rbp-B0h] BYREF
  void *v34; // [rsp+F0h] [rbp-A8h]
  __int64 v35; // [rsp+100h] [rbp-98h] BYREF
  __int16 v36; // [rsp+110h] [rbp-88h]

  if ( (unsigned __int8)sub_21B7850(a2, 3085, 3016, 1) )
  {
    v4 = (const void *)sub_21B7BC0(a2, 2113, &byte_22F0C30, 0);
    v6 = v5;
    if ( v5 )
    {
      v7 = (char *)&v33;
      ptr = &v33;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( v5 > 0x80 )
      {
        v22 = v4;
        sub_2236E10(&ptr, &v33, v5, 1);
        v4 = v22;
        v7 = (char *)ptr + si128.m128i_i64[0];
      }
      memcpy(v7, v4, v6);
      v30 = 257;
      v28 = 257;
      v26 = 257;
      v24 = 259;
      v23 = "include";
      si128.m128i_i64[0] += v6;
      sub_228A3B0(&ptr, &v23, v25, v27, v29);
      v8 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 16LL))(a2, ptr, si128.m128i_i64[0]);
      v9 = *((unsigned int *)a3 + 2);
      v10 = v8;
      if ( v9 + 2 > (unsigned __int64)*((unsigned int *)a3 + 3) )
      {
        sub_2237220(a3, a3 + 2, v9 + 2, 8);
        v9 = *((unsigned int *)a3 + 2);
      }
      v11 = *a3;
      *(_QWORD *)(v11 + 8 * v9) = "-isystem";
      *(_QWORD *)(v11 + 8 * v9 + 8) = v10;
      v12 = (__int64 *)ptr;
      *((_DWORD *)a3 + 2) += 2;
      if ( v12 != &v33 )
        free(v12);
    }
    else
    {
      sub_FC70B0((__int64)&ptr, **(_QWORD **)(a1 + 8), 0, 361);
      if ( (_BYTE)v36 )
      {
        sub_FC7790(si128.m128i_i64[1], (__int64 *)&ptr, SHIBYTE(v36));
        si128.m128i_i64[1] = 0;
        v36 = 0;
      }
      if ( v34 != &v35 )
        operator delete(v34);
      v13 = (void **)ptr;
      if ( ptr )
      {
        v14 = si128.m128i_i64[0];
        if ( si128.m128i_i64[0] )
        {
          if ( (unsigned __int64)ptr >= si128.m128i_i64[0] && (unsigned __int64)ptr <= si128.m128i_i64[0] + 14848 )
          {
            v21 = *(unsigned int *)(si128.m128i_i64[0] + 14976);
            *(_DWORD *)(si128.m128i_i64[0] + 14976) = v21 + 1;
            *(_QWORD *)(v14 + 8 * v21 + 14848) = v13;
          }
          else
          {
            v15 = *((void ***)ptr + 66);
            v16 = &v15[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
            if ( v15 != v16 )
            {
              do
              {
                while ( 1 )
                {
                  v16 -= 8;
                  v17 = (void **)v16[3];
                  if ( v17 == v16 + 5 )
                    break;
                  operator delete(v17);
                  if ( v15 == v16 )
                    goto LABEL_21;
                }
              }
              while ( v15 != v16 );
LABEL_21:
              v16 = (void **)v13[66];
            }
            if ( v16 != v13 + 68 )
              free(v16);
            v18 = (void **)v13[52];
            if ( v18 != v13 + 54 )
              free(v18);
            v19 = v13 + 48;
            v20 = v13 + 8;
            do
            {
              while ( *v19 != v19 + 2 )
              {
                operator delete(*v19);
                v19 -= 4;
                if ( v19 == v20 )
                  goto LABEL_29;
              }
              v19 -= 4;
            }
            while ( v20 != v19 );
LABEL_29:
            operator delete(v13, 0x3A0u);
          }
        }
      }
    }
  }
}
