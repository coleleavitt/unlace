void __fastcall sub_1F097A0(__int64 **a1, __int64 a2, _DWORD *a3)
{
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // edx
  _QWORD *v11; // rsi
  unsigned __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 *v21; // r12
  unsigned __int64 *v22; // r13
  __int64 **v23; // r14
  unsigned int v24; // edx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 *v31; // rbp
  __int64 v32; // r15
  __int64 v33; // rax
  unsigned int v34; // esi
  int v35; // eax
  bool v36; // zf
  int v37; // r10d
  int v38; // eax
  int v39; // ecx
  __int64 v40; // [rsp+20h] [rbp-78h] BYREF
  __int64 v41; // [rsp+28h] [rbp-70h] BYREF
  __m128 v42; // [rsp+30h] [rbp-68h] BYREF
  __int64 v43; // [rsp+40h] [rbp-58h] BYREF

  v6 = *a1;
  v7 = *(_QWORD *)a2;
  v8 = *v6;
  v9 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v9 )
  {
    v10 = (v9 - 1) & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
    v11 = (_QWORD *)(v7 + 24LL * v10);
    if ( v8 == *v11 )
    {
LABEL_3:
      sub_1ECCF10(&v42, v11, (_QWORD *)(v7 + 24 * v9), a2, 1);
      v12 = v42.m128_u64[0];
      goto LABEL_4;
    }
    if ( *v11 != -4096 )
    {
      v39 = 1;
      do
      {
        v10 = (v9 - 1) & (v39 + v10);
        v11 = (_QWORD *)(v7 + 24LL * v10);
        if ( v8 == *v11 )
          goto LABEL_3;
        ++v39;
      }
      while ( *v11 != -4096 );
    }
  }
  sub_1ECCF10(&v42, (_QWORD *)(v7 + 24 * v9), (_QWORD *)(v7 + 24 * v9), a2, 1);
  v12 = v42.m128_u64[0];
LABEL_4:
  sub_1ECCF10(
    &v42,
    (_QWORD *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( v12 != v42.m128_u64[0] )
  {
    ++*a3;
    sub_1F07510((__int64 **)&v42, v12 + 8, v13, v14, v15, v16);
    v21 = (unsigned __int64 *)v42.m128_u64[0];
    v22 = (unsigned __int64 *)(v42.m128_u64[0] + 8LL * v42.m128_u32[2]);
    if ( (unsigned __int64 *)v42.m128_u64[0] != v22 )
    {
      v23 = a1;
      while ( 1 )
      {
        v29 = sub_1EDB980(v23[1], *v21, v17, v18, v19, v20);
        v31 = v23[2];
        v32 = v29;
        v33 = *(_QWORD *)(v29 + 40);
        v34 = *((_DWORD *)v31 + 4);
        v40 = v33;
        if ( !v34 )
          break;
        v20 = v34 - 1;
        v24 = v20 & (((unsigned int)v33 >> 9) ^ ((unsigned int)v33 >> 4));
        v25 = *v31 + 88LL * v24;
        v26 = *(_QWORD *)v25;
        if ( v33 != *(_QWORD *)v25 )
        {
          v37 = 1;
          v19 = 0;
          if ( v26 == -1 )
          {
LABEL_23:
            v38 = *((_DWORD *)v31 + 2);
            v30 = 3 * v34;
            v41 = v25;
            v35 = v38 + 1;
            v18 = (unsigned int)(4 * v35);
            if ( (unsigned int)v18 < (unsigned int)v30 )
            {
              v30 = v34 - *((_DWORD *)v31 + 3) - v35;
              v18 = v34 >> 3;
              if ( (unsigned int)v30 <= (unsigned int)v18 )
              {
LABEL_13:
                sub_1EDD430((__int64 **)v31, v34, v30, v18, v19, v20);
                sub_1EB4070(v31, &v40, &v41);
                v25 = v41;
                v35 = *((_DWORD *)v31 + 2) + 1;
              }
              v36 = *(_QWORD *)v25 == -1;
              *((_DWORD *)v31 + 2) = v35;
              if ( !v36 )
                --*((_DWORD *)v31 + 3);
              v28 = v25 + 8;
              *(_QWORD *)v25 = v40;
              *(_QWORD *)(v25 + 8) = v25 + 24;
              *(_QWORD *)(v25 + 16) = 0x800000000LL;
              v27 = 0;
              goto LABEL_9;
            }
LABEL_12:
            v34 *= 2;
            goto LABEL_13;
          }
          while ( 1 )
          {
            if ( !v19 && v26 == -2 )
              v19 = v25;
            v24 = v20 & (v24 + v37);
            v25 = *v31 + 88LL * v24;
            v26 = *(_QWORD *)v25;
            if ( v33 == *(_QWORD *)v25 )
              break;
            if ( v26 == -1 )
            {
              if ( v19 )
                v25 = v19;
              goto LABEL_23;
            }
            ++v37;
          }
        }
        v27 = *(unsigned int *)(v25 + 16);
        v18 = *(unsigned int *)(v25 + 20);
        v28 = v25 + 8;
        if ( v27 + 1 > v18 )
        {
          ++v21;
          sub_2237220(v28, v25 + 24, v27 + 1, 8);
          v17 = *(unsigned int *)(v25 + 16);
          *(_QWORD *)(*(_QWORD *)(v25 + 8) + 8 * v17) = v32;
          ++*(_DWORD *)(v25 + 16);
          if ( v22 == v21 )
          {
LABEL_18:
            v22 = (unsigned __int64 *)v42.m128_u64[0];
            goto LABEL_19;
          }
        }
        else
        {
LABEL_9:
          v17 = *(_QWORD *)v28;
          ++v21;
          *(_QWORD *)(*(_QWORD *)v28 + 8 * v27) = v32;
          ++*(_DWORD *)(v28 + 8);
          if ( v22 == v21 )
            goto LABEL_18;
        }
      }
      v41 = 0;
      goto LABEL_12;
    }
LABEL_19:
    if ( v22 != (unsigned __int64 *)&v43 )
      free(v22);
  }
}
