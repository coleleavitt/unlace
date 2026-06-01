_QWORD *__fastcall sub_4095B0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // r14d
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r13
  _QWORD *v12; // r15
  unsigned __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 *v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 *v23; // rdi
  __int64 v24; // rax
  int v25; // [rsp+0h] [rbp-C8h]
  _QWORD *v26; // [rsp+8h] [rbp-C0h]
  __int64 *v27; // [rsp+10h] [rbp-B8h]
  __int64 *v28; // [rsp+18h] [rbp-B0h]
  __int64 *v29; // [rsp+20h] [rbp-A8h]
  __int64 *v30; // [rsp+28h] [rbp-A0h]
  __int64 v31; // [rsp+30h] [rbp-98h] BYREF
  __int64 v32; // [rsp+38h] [rbp-90h] BYREF
  __int64 v33; // [rsp+40h] [rbp-88h] BYREF
  __int64 v34; // [rsp+48h] [rbp-80h] BYREF
  __int64 v35; // [rsp+50h] [rbp-78h] BYREF
  unsigned int *v36; // [rsp+58h] [rbp-70h] BYREF
  int v37[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v38; // [rsp+68h] [rbp-60h]
  __int64 v39; // [rsp+70h] [rbp-58h] BYREF
  _QWORD *v40; // [rsp+78h] [rbp-50h]
  __int64 v41; // [rsp+80h] [rbp-48h] BYREF
  __int64 v42; // [rsp+88h] [rbp-40h]

  v26 = a1;
  if ( *(_DWORD *)(a2 + 360) == 1 )
  {
    v7 = *(_QWORD *)(a2 + 152);
    v36 = nullptr;
    v35 = v7;
    sub_400920(v37, a2, a3);
    v8 = 0;
    v9 = *(_QWORD *)(a2 + 152);
    v40 = nullptr;
    v30 = &v32;
    v29 = &v31;
    v28 = &v41;
    v39 = v9;
    v41 = 0;
    v42 = v9;
    v31 = 0;
    v32 = 0;
    v27 = &v39;
    while ( (unsigned __int8)sub_15E9C00(
                               v9,
                               v37[0],
                               (_DWORD)v27,
                               (_DWORD)v28,
                               (_DWORD)v29,
                               (_DWORD)v30,
                               v25,
                               (_DWORD)v26,
                               (_DWORD)v27,
                               (_DWORD)v28,
                               (_DWORD)v29,
                               (_DWORD)v30,
                               v31,
                               v32,
                               v33,
                               v34) )
    {
      if ( v8 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)v37 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v37 + 24LL) - 1) + 32);
        v33 = v10;
        if ( v10 )
          ++*(_DWORD *)(v10 + 8);
        sub_407600(&v36, &v33);
      }
      if ( !v40 || *((_DWORD *)v40 - 1) <= 1u )
      {
        sub_3FCDD0(*(__int64 *)v37, v38);
        *(_QWORD *)v37 = 0;
        goto LABEL_36;
      }
      v11 = v40[1];
      if ( v11 )
        ++*(_DWORD *)(v11 + 8);
      sub_3FCDD0(*(__int64 *)v37, v38);
      v12 = v40;
      *(_QWORD *)v37 = v11;
      if ( v40 )
      {
        v13 = (unsigned __int64)&v40[*((unsigned int *)v40 - 1)];
        if ( (unsigned __int64)v40 >= v13 )
          goto LABEL_25;
        do
        {
          while ( 1 )
          {
            v14 = *v12;
            if ( *v12 )
            {
              if ( (*(_DWORD *)(v14 + 8))-- == 1 )
                break;
            }
            if ( (unsigned __int64)++v12 >= v13 )
              goto LABEL_24;
          }
          sub_15D7BC0(v39, v14);
          ++v12;
        }
        while ( (unsigned __int64)v12 < v13 );
LABEL_24:
        v12 = v40;
        if ( v40 )
LABEL_25:
          *((_DWORD *)v12 - 1) = 0;
      }
      sub_3FCDF0(v41, v42);
      v41 = 0;
      if ( v31 )
        *(_DWORD *)(v31 - 4) = 0;
      v16 = v32;
      if ( v32 )
      {
        v17 = *(unsigned int *)(v32 - 4);
        if ( (_DWORD)v17 )
        {
          v18 = v32 + 16 * v17;
          do
          {
            v19 = (__int64 *)v16;
            v16 += 16;
            sub_2334C0(v19);
          }
          while ( v16 != v18 );
          v16 = v32;
        }
        *(_DWORD *)(v16 - 4) = 0;
      }
      v9 = *(_QWORD *)(a2 + 152);
      ++v8;
    }
    if ( *(_QWORD *)v37 )
    {
      v24 = *(_QWORD *)(*(_QWORD *)v37 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v37 + 24LL) - 1) + 32);
      v34 = v24;
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      sub_407600(&v36, &v34);
    }
LABEL_36:
    sub_41C800(v26, &v35);
    v20 = v32;
    if ( v32 )
    {
      v21 = *(unsigned int *)(v32 - 4);
      if ( (_DWORD)v21 )
      {
        v22 = v32 + 16 * v21;
        do
        {
          v23 = (__int64 *)v20;
          v20 += 16;
          sub_2334C0(v23);
        }
        while ( v22 != v20 );
        v20 = v32;
      }
      sub_186B220((void *)(v20 - 8));
    }
    if ( v31 )
      sub_186B220((void *)(v31 - 8));
    sub_3FCDF0(v41, v42);
    sub_2B4F40(v27);
    sub_3FCDD0(*(__int64 *)v37, v38);
    sub_2334C0(&v35);
  }
  else
  {
    sub_180B130(a1);
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v6 = sub_180B150(a1, a2);
      std::operator<<<std::char_traits<char>>();
      sub_186A500(v6, "Sat answer unavailable when result is false\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::operator<<<std::char_traits<char>>();
    }
    v4 = *(_QWORD *)(a2 + 152);
    *v26 = 0;
    v26[1] = v4;
  }
  return v26;
}

