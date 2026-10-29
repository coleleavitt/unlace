__int64 __fastcall sub_139E5B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r10
  __int64 v12; // r12
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // r15
  __int32 v16; // r14d
  __int64 v17; // r8
  char v18; // r11
  __int64 v19; // rdx
  int v20; // r10d
  __int64 v21; // rdx
  __int64 v22; // r14
  unsigned int *v23; // rax
  __int64 v24; // r13
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbp
  unsigned __int64 v29; // r8
  __int64 v30; // rbp
  unsigned int *v31; // rax
  __int64 v32; // [rsp-10h] [rbp-A8h]
  __int64 v34; // [rsp+10h] [rbp-88h]
  __int64 v35; // [rsp+18h] [rbp-80h]
  unsigned __int64 v36; // [rsp+18h] [rbp-80h]
  __int64 v37; // [rsp+28h] [rbp-70h]
  __int64 v38; // [rsp+30h] [rbp-68h]
  __int64 v39; // [rsp+38h] [rbp-60h]
  __int64 v40; // [rsp+40h] [rbp-58h]
  int v41; // [rsp+48h] [rbp-50h]
  char v42; // [rsp+4Fh] [rbp-49h]
  int v43[15]; // [rsp+5Ch] [rbp-3Ch] BYREF

  v9 = *(_QWORD *)(a1 + 40);
  v10 = *(_QWORD *)(v9 + 32);
  v11 = a7;
  v12 = a7;
  v34 = v10 + 1312;
  result = *a5 + 12LL * *((unsigned int *)a5 + 2);
  v35 = result;
  if ( *a5 != result )
  {
    v38 = *(_QWORD *)(v9 + 32);
    v14 = *(_QWORD *)(a1 + 40);
    v15 = *a5;
    do
    {
      v16 = *(_DWORD *)v15;
      if ( *(_DWORD *)v15 )
      {
        result = *(unsigned int *)(v15 + 4);
        if ( (_DWORD)result )
        {
          v17 = *(_QWORD *)(v14 + 32);
          v18 = *(_BYTE *)(v15 + 8);
          v19 = 0;
          v20 = *(_DWORD *)(v17 + 1532);
          *(_DWORD *)(v17 + 1528) = 0;
          if ( !v20 )
          {
            v42 = v18;
            v41 = result;
            v40 = v17;
            sub_2237220(v17 + 1520, v17 + 1536, 1, 8);
            v17 = v40;
            v18 = v42;
            LODWORD(result) = v41;
            v19 = 8LL * *(unsigned int *)(v40 + 1528);
          }
          *(_QWORD *)(*(_QWORD *)(v17 + 1520) + v19) = 3;
          v21 = *(_QWORD *)(v14 + 32);
          ++*(_DWORD *)(v17 + 1528);
          sub_139E030(v14, v16, result, v18, v21 + 1520, a3);
          v22 = *(_QWORD *)(v14 + 32);
          v43[0] = 3;
          v23 = sub_A25EE0(v22 + 1496, v43);
          v8 &= 0xFFFFFF00FFFFFFFFLL;
          result = sub_1398530(v22 + 1312, *v23, *(_QWORD *)(v22 + 1520), *(unsigned int *)(v22 + 1528));
        }
      }
      v15 += 12;
    }
    while ( v35 != v15 );
    v9 = v14;
    v10 = v38;
    v11 = a7;
  }
  if ( v11 + (a8 << 6) != v11 )
  {
    result = (__int64)v43;
    v37 = v11 + (a8 << 6);
    v24 = v39;
    do
    {
      if ( *(_DWORD *)v12 && *(_DWORD *)(v12 + 4) )
      {
        v25 = *(_DWORD *)(v10 + 1532);
        v26 = 0;
        *(_DWORD *)(v10 + 1528) = 0;
        if ( !v25 )
        {
          sub_2237220(v10 + 1520, v10 + 1536, 1, 8);
          v26 = 8LL * *(unsigned int *)(v10 + 1528);
        }
        *(_QWORD *)(*(_QWORD *)(v10 + 1520) + v26) = 7;
        ++*(_DWORD *)(v10 + 1528);
        sub_139E030(v9, *(_DWORD *)v12, *(_DWORD *)(v12 + 4), *(_BYTE *)(v12 + 8), v10 + 1520, a3);
        v27 = *(unsigned int *)(v10 + 1528);
        v28 = *(_QWORD *)(v12 + 32);
        if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(v10 + 1532) )
        {
          sub_2237220(v10 + 1520, v10 + 1536, v27 + 1, 8);
          v27 = *(unsigned int *)(v10 + 1528);
        }
        *(_QWORD *)(*(_QWORD *)(v10 + 1520) + 8 * v27) = v28;
        ++*(_DWORD *)(v10 + 1528);
        v29 = *(_QWORD *)(v12 + 24);
        v43[0] = 7;
        v30 = *(_QWORD *)(v12 + 32);
        v36 = v29;
        v31 = sub_A25EE0(v10 + 1496, v43);
        v24 &= 0xFFFFFF00FFFFFFFFLL;
        sub_A26740(v34, *v31, *(_QWORD *)(v10 + 1520), *(unsigned int *)(v10 + 1528), v36, v30, v24);
        result = v32;
      }
      v12 += 64;
    }
    while ( v37 != v12 );
  }
  return result;
}
