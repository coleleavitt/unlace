__int64 __fastcall sub_A69840(__int64 a1, __int64 *a2)
{
  char *v3; // r13
  unsigned int v4; // ebp
  __int64 v6; // rbp
  __int64 *v7; // r12
  signed __int64 v8; // r14
  __int64 *v9; // r12
  _QWORD *v10; // rbp
  _QWORD *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __m128i v18; // kr00_16
  void *v19; // r14
  void *v20; // r14
  __int64 v21; // rsi
  __m128i v23; // [rsp+20h] [rbp-1C8h] BYREF
  __m128i v24; // [rsp+30h] [rbp-1B8h] BYREF
  void *v25[2]; // [rsp+40h] [rbp-1A8h] BYREF
  _BYTE v26[16]; // [rsp+50h] [rbp-198h] BYREF
  int v27; // [rsp+60h] [rbp-188h]
  char v28[16]; // [rsp+68h] [rbp-180h] BYREF
  _BYTE v29[24]; // [rsp+78h] [rbp-170h] BYREF
  __int64 v30; // [rsp+90h] [rbp-158h]
  __int64 v31; // [rsp+98h] [rbp-150h]
  void *ptr; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-140h]
  int v34[78]; // [rsp+B0h] [rbp-138h] BYREF

  ptr = v34;
  v33 = 0x1000000000LL;
  sub_A3A6A0(a1, a2, (char **)&ptr);
  v3 = (char *)ptr;
  v4 = 1;
  if ( (_DWORD)v33 )
  {
    v25[0] = nullptr;
    v6 = 16LL * (unsigned int)v33;
    sub_A5F860(v24.m128i_i64, (__m128i *)ptr, ((v6 >> 4) + 1) >> 1);
    v7 = (__int64 *)v25[0];
    v8 = 16 * v24.m128i_i64[1];
    if ( v24.m128i_i64[0] == v24.m128i_i64[1] )
    {
      sub_990D20((__int64)v3, (__int64 *)&v3[v8], (__int64 *)v25[0]);
      sub_990D20((__int64)&v3[v8], (__int64 *)&v3[v6], v7);
      sub_9923C0((__int64)v3, (__int64 *)&v3[v8], (__int64)&v3[v6], v8 >> 4, (v6 - v8) >> 4, v7);
    }
    else if ( v25[0] )
    {
      sub_A69740((__int64)v3, (__int64 *)&v3[v6], (__int64 *)v25[0], v24.m128i_i64[1]);
    }
    else
    {
      sub_98FAE0((__int64)v3, (__int64)&v3[v6]);
    }
    operator delete(v7, v8);
    v9 = (__int64 *)ptr;
    v3 = (char *)ptr + 16 * (unsigned int)v33;
    if ( ptr == v3 )
    {
      v4 = 1;
      goto LABEL_2;
    }
    while ( 1 )
    {
      v10 = *(_QWORD **)(a1 + 1560);
      if ( v10 )
      {
        v11 = &v10[*((unsigned int *)v10 - 1)];
        if ( v10 >= v11 )
          goto LABEL_17;
        do
        {
          while ( 1 )
          {
            v12 = *v10;
            if ( *v10 )
            {
              v13 = *(_QWORD *)(a1 + 1552);
              v14 = (*(_DWORD *)(v12 + 8))-- == 1;
              if ( v14 )
                break;
            }
            if ( ++v10 >= v11 )
              goto LABEL_16;
          }
          sub_15D7BC0(v13, v12);
          ++v10;
        }
        while ( v10 < v11 );
LABEL_16:
        v10 = *(_QWORD **)(a1 + 1560);
        if ( v10 )
LABEL_17:
          *((_DWORD *)v10 - 1) = 0;
      }
      sub_A3F980(&v23, a1, 0, (__int64)a2, *v9);
      v18 = v23;
      if ( !v23.m128i_i64[0] )
        goto LABEL_23;
      sub_9F4F40(&v24, a1, (unsigned int *)v23.m128i_i64[0], v15, v16, v17);
      if ( v24.m128i_i32[2] == 1 && (SLODWORD(v25[0]) > 0 || !LODWORD(v25[0]) && v29[16]) )
        break;
      if ( v27 == 1 && (*(int *)v28 < 0 || !*(_DWORD *)v28 && v29[17]) )
      {
        v21 = v31;
LABEL_27:
        if ( v21 )
        {
          sub_A31E40(a1, v21);
          sub_25A130(v28);
          sub_25A130((char *)v25);
          v4 = 0;
          sub_98B270(v18.m128i_i64[0], v18.m128i_i64[1]);
          v3 = (char *)ptr;
          goto LABEL_2;
        }
      }
      v19 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v28);
      sub_182CBA0(v19, v29);
      v20 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v25);
      sub_182CBA0(v20, v26);
      v14 = (*(_DWORD *)(v18.m128i_i64[0] + 8))-- == 1;
      if ( v14 )
        sub_15D7BC0(v18.m128i_i64[1], v18.m128i_i64[0]);
LABEL_23:
      v9 += 2;
      if ( v3 == (char *)v9 )
      {
        v3 = (char *)ptr;
        v4 = 1;
        goto LABEL_2;
      }
    }
    v21 = v30;
    goto LABEL_27;
  }
LABEL_2:
  if ( v3 && v3 != (char *)v34 )
    sub_186B220(v3);
  return v4;
}

