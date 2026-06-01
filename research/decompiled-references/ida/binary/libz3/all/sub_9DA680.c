__int64 __fastcall sub_9DA680(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r8
  __int64 v5; // r14
  __int64 v6; // r12
  unsigned int v9; // eax
  unsigned int *v10; // rcx
  __int64 v11; // rsi
  __int64 v13; // rax
  signed int v14; // edx
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rax
  int *v18; // r14
  int v19; // ebp
  __int64 v20; // rsi
  __int64 v21; // rdi
  int v22; // edx
  __int64 v23; // r10
  _DWORD *v24; // rcx
  __int64 v25; // r9
  unsigned int *v26; // r8
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  void *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // rax
  unsigned int v37[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v3 = a2;
  v4 = a3;
  v5 = 4LL * a2;
  v6 = 32LL * a2;
  v9 = *(_DWORD *)(a1 + 848);
  v10 = (unsigned int *)(v5 + *(_QWORD *)(a1 + 856));
  if ( v9 >= *v10 )
  {
    v28 = *(_QWORD *)(a1 + 608);
    v29 = *(_QWORD *)(a1 + 600);
    v30 = qword_1C7F2C0;
    *v10 = v9 + 1;
    sub_27B950((__int64)v30, v6 + v28, (int *)(v6 + v29));
    v31 = *(_QWORD *)(a1 + 840);
    v4 = a3;
    if ( !v31 || (v32 = *(unsigned int *)(v31 - 4), (_DWORD)v32 == *(_DWORD *)(v31 - 8)) )
    {
      sub_2FD3F0((unsigned int **)(a1 + 840));
      v33 = *(_QWORD *)(a1 + 840);
      v4 = a3;
      *(_DWORD *)(v33 + 4LL * (unsigned int)(*(_DWORD *)(v33 - 4))++) = a2;
    }
    else
    {
      *(_DWORD *)(v31 + 4 * v32) = a2;
      ++*(_DWORD *)(v31 - 4);
    }
  }
  v11 = *(_QWORD *)(a1 + 600);
  *(_BYTE *)(a1 + 1185) = 1;
  sub_2FC4A0((__int64)qword_1C7F2C0, v6 + v11, v4, v6 + v11);
  if ( a2 != -1 && ((*(_BYTE *)(*(_QWORD *)(a1 + 592) + v5 + 3) >> 4) & 3) == 1 )
  {
    v13 = *(_QWORD *)(a1 + 808);
    v14 = v13 ? *(_DWORD *)(v13 - 4) : 0;
    if ( (int)a2 >= v14 || !*(_DWORD *)(v13 + 4 * v3) )
    {
      if ( (v15 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8 * v3)) != 0
        && (v16 = sub_999800(a1, a2), sub_3ED700((__int64)qword_1C7F2C0, v16, v15 + 16))
        || (v34 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8 * v3)) != 0
        && (v35 = sub_999800(a1, a2), sub_3ED700((__int64)qword_1C7F2C0, v34 + 16, v35)) )
      {
        v17 = *(_QWORD *)(a1 + 800);
        v37[0] = a2;
        v18 = (int *)(*(_QWORD *)(a1 + 808) + v5);
        if ( v17 )
        {
          v19 = *(_DWORD *)(v17 - 4);
          *v18 = v19;
          sub_98D100((_QWORD *)(a1 + 800), v37);
          v20 = *(_QWORD *)(a1 + 800);
          v21 = (unsigned int)v19;
          v22 = v19 >> 1;
          v23 = *(_QWORD *)(a1 + 808);
          v24 = (_DWORD *)(v20 + 4LL * (unsigned int)v19);
          v25 = (unsigned int)*v24;
          if ( v19 >> 1 )
          {
            while ( 1 )
            {
              v24 = (_DWORD *)(v20 + 4 * v21);
              v26 = (unsigned int *)(v20 + 4LL * (unsigned int)v22);
              v27 = *v26;
              if ( (int)v25 >= (int)v27 )
                break;
              *v24 = v27;
              *(_DWORD *)(v23 + 4 * v27) = v19;
              v19 = v22;
              v22 >>= 1;
              if ( !v22 )
              {
                v24 = v26;
                v19 = 1;
                break;
              }
              v21 = (unsigned int)v19;
            }
          }
        }
        else
        {
          *v18 = 0;
          v19 = 0;
          sub_98D100((_QWORD *)(a1 + 800), v37);
          v24 = *(_DWORD **)(a1 + 800);
          v23 = *(_QWORD *)(a1 + 808);
          v25 = (unsigned int)*v24;
        }
        *v24 = v25;
        *(_DWORD *)(v23 + 4 * v25) = v19;
      }
    }
  }
  return sub_18290A0(*(_QWORD *)(a1 + 24));
}

