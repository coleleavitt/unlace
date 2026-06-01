__int64 __fastcall sub_6E9A40(__int64 *a1, __int64 *a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r15
  __int64 v8; // rax
  __m128i v9; // rdi
  unsigned int v10; // ebx
  int v11; // r14d
  unsigned __int64 *v13; // rsi
  _QWORD *v14; // rax
  unsigned int *v15; // r12
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __m128i v19; // kr00_16
  __int64 v20; // r12
  int v21; // eax
  bool v22; // zf
  _DWORD *v23; // rdx
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-F0h]
  __int64 v31; // [rsp+8h] [rbp-F0h]
  __int64 v35; // [rsp+30h] [rbp-C8h]
  unsigned int *v36; // [rsp+48h] [rbp-B0h] BYREF
  __m128i v37; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v38[4]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v39[4]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD v40[11]; // [rsp+A0h] [rbp-58h] BYREF

  if ( a3 )
  {
    v7 = a2[2];
    if ( !v7 )
    {
      sub_6E03A0(a2, "sup", a2 + 2);
      v7 = a2[2];
    }
  }
  else
  {
    v7 = *a2;
    if ( !*a2 )
    {
      sub_6E03A0(a2, "inf", a2);
      v7 = *a2;
    }
  }
  v9.m128i_i64[1] = *a1;
  v8 = a2[6];
  v37.m128i_i64[0] = 0;
  v37.m128i_i64[1] = v9.m128i_i64[1];
  v9.m128i_i64[0] = v8;
  if ( v8 )
  {
    v10 = 0;
    do
    {
      if ( v10 >= *(_DWORD *)(v8 - 4) )
        break;
      v11 = *(_DWORD *)(a2[8] + 4LL * v10);
      if ( v11 == 1 )
      {
        v13 = (unsigned __int64 *)(a2[7] + 16LL * v10);
        v38[1] = a1;
        v38[2] = v7;
        v38[0] = off_1C53298;
        if ( a3 )
        {
          v39[1] = a1;
          v39[0] = off_1C53318;
          v39[2] = v38;
          sub_6E7B10((__int64)v39, (__int64)v13, &v37);
        }
        else
        {
          v40[1] = a1;
          v40[0] = off_1C53358;
          v40[2] = v38;
          sub_6E8470((__int64)v40, v13, 1u, &v37);
        }
        v30 = v37.m128i_i64[0];
        v14 = (_QWORD *)sub_186B270(0x18u);
        v15 = (unsigned int *)(v14 + 1);
        v14[1] = v30;
        *v14 = 0x100000002LL;
        do
        {
          v16 = (unsigned int)(v11 - 1);
          v17 = *(_QWORD *)&v15[2 * v16];
          *(v15 - 1) = v16;
          if ( !*(_WORD *)(v17 + 4)
            && (v23 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL)) != nullptr
            && !*v23
            && ((v24 = v23[1], v24 == 5) || v24 == 6) )
          {
            v25 = *(unsigned int *)(v17 + 24);
            if ( (_DWORD)v25 )
            {
              v26 = *(_QWORD *)(v17 + 32);
              v27 = v17;
              v28 = v17 + 8 * v25;
              while ( 1 )
              {
                if ( (_DWORD)v16 == *(v15 - 2) )
                {
                  v35 = v27;
                  v31 = v28;
                  v36 = v15;
                  sub_3A6B20(&v36);
                  v15 = v36;
                  v27 = v35;
                  v28 = v31;
                  LODWORD(v16) = *(v36 - 1);
                }
                v29 = (unsigned int)v16;
                v27 += 8;
                LODWORD(v16) = v16 + 1;
                *(_QWORD *)&v15[2 * v29] = v26;
                *(v15 - 1) = v16;
                if ( v28 == v27 )
                  break;
                v26 = *(_QWORD *)(v27 + 32);
              }
            }
          }
          else
          {
            v40[0] = v17;
            ++*(_DWORD *)(v17 + 8);
            sub_6DE970((unsigned int **)(a5 + 8), v40);
          }
          v11 = *(v15 - 1);
        }
        while ( v11 );
        sub_186B220(v15 - 2);
        v18 = sub_15E1B70(*a1);
        v19 = v37;
        v20 = v18;
        if ( v18 )
        {
          v21 = *(_DWORD *)(v18 + 8) + 1;
          *(_DWORD *)(v20 + 8) = v21;
          if ( v19.m128i_i64[0] )
          {
            v22 = (*(_DWORD *)(v19.m128i_i64[0] + 8))-- == 1;
            if ( v22 )
              sub_15D7BC0(v19.m128i_i64[1], v19.m128i_i64[0]);
            v37.m128i_i64[0] = v20;
            v21 = *(_DWORD *)(v20 + 8);
            v38[0] = v20;
          }
          else
          {
            v37.m128i_i64[0] = v20;
            v38[0] = v20;
          }
          *(_DWORD *)(v20 + 8) = v21 + 1;
        }
        else
        {
          if ( v37.m128i_i64[0] )
          {
            v22 = (*(_DWORD *)(v37.m128i_i64[0] + 8))-- == 1;
            if ( v22 )
              sub_15D7BC0(v19.m128i_i64[1], v19.m128i_i64[0]);
          }
          v37.m128i_i64[0] = 0;
          v38[0] = 0;
        }
        sub_6DE920((unsigned int **)(a4 + 8), v38);
        v8 = a2[6];
      }
      else if ( v11 != 2 )
      {
        sub_1872CE0("");
        sub_1873130(114, 1573);
      }
      ++v10;
    }
    while ( v8 );
    v9 = v37;
  }
  return sub_6DE2A0(v9.m128i_i64[0], v9.m128i_i64[1]);
}

