signed int *__fastcall sub_B6C240(__int64 a1, unsigned int *a2)
{
  unsigned int **v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int **v6; // r13
  unsigned int **v7; // r15
  char *v8; // rcx
  unsigned int v9; // esi
  unsigned int *v10; // rax
  _DWORD *v11; // rdx
  __int64 v12; // rdx
  int v13; // ebx
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r9
  signed int *result; // rax
  unsigned int v21; // [rsp+Ch] [rbp-ACh]
  char *v22; // [rsp+18h] [rbp-A0h]
  int v23[2]; // [rsp+28h] [rbp-90h] BYREF
  void *v24; // [rsp+30h] [rbp-88h]
  int v25[2]; // [rsp+38h] [rbp-80h]
  _DWORD v26[30]; // [rsp+40h] [rbp-78h] BYREF

  v21 = sub_B645B0(a1, a2);
  v24 = v26;
  v26[0] = v21 ^ 1;
  *(_QWORD *)v25 = 0x1000000001LL;
  v5 = *(unsigned int *)(v4 + 24);
  v6 = &v3[v5];
  if ( v5 * 8 )
  {
    v7 = v3;
    do
    {
      v10 = *v7;
      if ( !*((_WORD *)*v7 + 2)
        && (v11 = *(_DWORD **)(*((_QWORD *)v10 + 2) + 24LL)) != nullptr
        && !*v11
        && v11[1] == 8
        && v10[6] == 1 )
      {
        v14 = sub_B645B0(a1, *((unsigned int **)v10 + 4));
        v13 = v14 ^ 1;
      }
      else
      {
        v12 = *(_QWORD *)(a1 + 104);
        if ( v10 == *(unsigned int **)(v12 + 856) )
        {
          v13 = dword_1C7ED6C;
          v14 = dword_1C7ED6C ^ 1;
        }
        else if ( v10 == *(unsigned int **)(v12 + 864) )
        {
          v13 = dword_1C7ED68;
          v14 = dword_1C7ED68 ^ 1;
        }
        else
        {
          v13 = 2 * *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4LL * *v10);
          v14 = v13 ^ 1;
        }
      }
      *(_QWORD *)v23 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(v14)).m128i_u64[0];
      sub_B6BA00(a1, (unsigned int *)v23);
      v15 = (unsigned int)v25[0];
      if ( v25[0] < (unsigned int)v25[1] )
      {
        v8 = (char *)v24;
      }
      else
      {
        v16 = (unsigned int)(2 * v25[1]);
        v8 = (char *)sub_186B270(4 * v16);
        v17 = (__int64 *)v24;
        v18 = 0;
        v15 = (unsigned int)v25[0];
        v19 = 4LL * (unsigned int)v25[0];
        if ( v25[0] )
        {
          do
          {
            *(_DWORD *)&v8[v18] = *(_DWORD *)((char *)v17 + v18);
            v18 += 4;
          }
          while ( v18 != v19 );
        }
        if ( v17 != (__int64 *)v26 && v17 )
        {
          v22 = v8;
          sub_186B220(v17);
          v15 = (unsigned int)v25[0];
          v8 = v22;
        }
        v24 = v8;
        v25[1] = v16;
      }
      *(_DWORD *)&v8[4 * v15] = v13;
      ++v7;
      v9 = ++v25[0];
    }
    while ( v6 != v7 );
  }
  else
  {
    v8 = (char *)v26;
    v9 = 1;
  }
  result = sub_B6A4E0(a1, v9, (unsigned int *)v8);
  if ( v24 )
  {
    result = v26;
    if ( v24 != v26 )
      return (signed int *)sub_186B220(v24);
  }
  return result;
}

