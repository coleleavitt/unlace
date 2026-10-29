void __fastcall sub_6831C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _DWORD *v3; // rax
  int v5; // eax
  __int64 *v6; // rdi
  __int64 v7; // rbx
  unsigned int i; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  char v13; // al
  __int64 v14; // rdi
  __int64 v15; // rax
  __m128i v16; // kr00_16
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-F8h]
  __int64 v24; // [rsp+10h] [rbp-F0h]
  __int64 v25; // [rsp+10h] [rbp-F0h]
  int v26[2]; // [rsp+18h] [rbp-E8h]
  __int64 v27; // [rsp+20h] [rbp-E0h]
  __int64 v28; // [rsp+20h] [rbp-E0h]
  __int64 v29; // [rsp+28h] [rbp-D8h]
  __int64 v30; // [rsp+30h] [rbp-D0h]
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v38; // [rsp+78h] [rbp-88h] BYREF
  __m128i v39; // [rsp+80h] [rbp-80h] BYREF
  __int64 v40[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v42[2]; // [rsp+B0h] [rbp-50h] BYREF
  __m128i v43[4]; // [rsp+C0h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  if ( !*(_WORD *)(v2 + 4) )
  {
    v3 = *(_DWORD **)(*(_QWORD *)(v2 + 16) + 24LL);
    if ( v3 )
    {
      if ( *v3 == *(_DWORD *)(a1 + 144) && !v3[1] )
      {
        v5 = *(_DWORD *)(v2 + 24);
        v6 = (__int64 *)(a1 + 64);
        v7 = *(_QWORD *)(v2 + 32);
        v38 = nullptr;
        v24 = *(_QWORD *)(v2 + 8LL * (unsigned int)(v5 - 1) + 32);
        v37 = *(v6 - 7);
        sub_2FCDE0(v6);
        v31 = v7;
        if ( v7 )
          ++*(_DWORD *)(v7 + 8);
        sub_6761A0((unsigned int **)(a1 + 72), &v31);
        for ( i = 1; i < *(_DWORD *)(a2 + 24); ++i )
        {
          v10 = i + 4LL;
          v11 = *(_QWORD *)(a2 + 8 * v10);
          v12 = *(_QWORD *)(v2 + 8 * v10);
          v32 = v11;
          v29 = v12;
          if ( v11 )
            ++*(_DWORD *)(v11 + 8);
          sub_6761A0((unsigned int **)(a1 + 72), &v32);
          if ( v11 != v29 )
          {
            v13 = sub_15D27F0(*(_QWORD *)(a1 + 8), v11, v29);
            v14 = *(_QWORD *)(a1 + 8);
            if ( v13 )
            {
              v9 = *(_QWORD *)(v14 + 864);
              v33 = v9;
              if ( v9 )
                ++*(_DWORD *)(v9 + 8);
              sub_6761A0(&v38, &v33);
            }
            else
            {
              v15 = sub_15E1B70(v14);
              v34 = v15;
              if ( v15 )
                ++*(_DWORD *)(v15 + 8);
              sub_6761A0(&v38, &v34);
            }
          }
        }
        sub_41C800(&v39, (unsigned __int64 *)&v37);
        v16 = v39;
        sub_676260((__int64)v40, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v39.m128i_i64[0]);
        sub_676260((__int64)v41, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), a2);
        sub_676260((__int64)v42, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v24);
        v17 = *(_QWORD *)(a1 + 8);
        if ( v41[0] != v42[0] && *(_QWORD *)(v17 + 864) != v40[0] )
        {
          v18 = *(_QWORD *)(a1 + 24);
          sub_15E1B70(*(_QWORD *)(a1 + 8));
          sub_41C800(v43, (unsigned __int64 *)&v37);
          v30 = v43[0].m128i_i64[1];
          v27 = v43[0].m128i_i64[0];
          v19 = sub_15E1B70(v17);
          v35 = v19;
          if ( v19 )
            ++*(_DWORD *)(v19 + 8);
          sub_6761A0((unsigned int **)(v18 + 24), &v35);
          sub_675460(v27, v30);
          v17 = *(_QWORD *)(a1 + 8);
        }
        v20 = sub_15DCAD0(*(_QWORD *)(a1 + 152), *(_QWORD *)(a1 + 72), 0);
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
        sub_676260((__int64)v43, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v20);
        v21 = v42[0];
        v42[0] = v43[0].m128i_i64[0];
        v43[0].m128i_i64[0] = v21;
        sub_675460(v21, v43[0].m128i_i64[1]);
        if ( v41[0] != v42[0] )
        {
          *(_QWORD *)v26 = *(_QWORD *)(a1 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v26 + 856LL) != v40[0] )
          {
            v23 = *(_QWORD *)(a1 + 24);
            sub_41C800(v43, (unsigned __int64 *)&v37);
            v25 = v43[0].m128i_i64[1];
            v28 = v43[0].m128i_i64[0];
            sub_15E1B70(*(_QWORD *)(a1 + 8));
            v22 = sub_15E1B70(v26[0]);
            v36 = v22;
            if ( v22 )
              ++*(_DWORD *)(v22 + 8);
            sub_6761A0((unsigned int **)(v23 + 24), &v36);
            sub_675460(v28, v25);
            v43[0].m128i_i64[0] = v20;
            if ( v20 )
              ++*(_DWORD *)(v20 + 8);
            sub_675F80((_QWORD *)(a1 + 56), v43);
            sub_6828A0(a1, v20);
          }
        }
        sub_675440(v20, v17);
        sub_675460(v42[0], v42[1]);
        sub_675460(v41[0], v41[1]);
        sub_675460(v40[0], v40[1]);
        sub_675460(v16.m128i_i64[0], v16.m128i_i64[1]);
        sub_2334C0(&v37);
      }
    }
  }
}

