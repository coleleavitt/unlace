__int64 __fastcall sub_9F3E00(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v7; // rbx
  unsigned int *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rbx
  __int64 v12; // rax
  signed int v13; // edx
  __int64 v14; // rbx
  int *v15; // rax
  __int64 v16; // rax
  int *v17; // r13
  int v18; // ebx
  __int64 v19; // rsi
  __int64 v20; // rdi
  int v21; // edx
  __int64 v22; // r10
  _DWORD *v23; // rcx
  __int64 v24; // r9
  unsigned int *v25; // r8
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rbx
  int *v33; // rax
  __int64 v34; // [rsp+8h] [rbp-50h]
  unsigned int v35[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v3 = a2;
  v7 = 96LL * a2;
  v34 = 4LL * a2;
  v8 = (unsigned int *)(v34 + *(_QWORD *)(a1 + 984));
  v9 = *(_DWORD *)(a1 + 976);
  if ( v9 >= *v8 )
  {
    v27 = *(_QWORD *)(a1 + 728);
    v28 = *(_QWORD *)(a1 + 736);
    *v8 = v9 + 1;
    sub_98B5F0(v7 + v28, (int *)(v7 + v27));
    v29 = *(_QWORD *)(a1 + 968);
    if ( !v29 || (v30 = *(unsigned int *)(v29 - 4), (_DWORD)v30 == *(_DWORD *)(v29 - 8)) )
    {
      sub_2FD3F0((unsigned int **)(a1 + 968));
      v31 = *(_QWORD *)(a1 + 968);
      *(_DWORD *)(v31 + 4LL * (unsigned int)(*(_DWORD *)(v31 - 4))++) = a2;
    }
    else
    {
      *(_DWORD *)(v29 + 4 * v30) = a2;
      ++*(_DWORD *)(v29 - 4);
    }
  }
  *(_BYTE *)(a1 + 1377) = 1;
  v10 = *(_QWORD *)(a1 + 728) + v7;
  sub_2FC4A0((__int64)qword_1C7F2C0, v10, a3, v10);
  sub_2FC4A0((__int64)qword_1C7F2C0, v10 + 32, a3 + 32, v10 + 32);
  sub_2FC4A0((__int64)qword_1C7F2C0, v10 + 64, a3 + 64, v10 + 64);
  if ( a2 != -1 && ((*(_BYTE *)(*(_QWORD *)(a1 + 720) + v34 + 3) >> 4) & 3) == 1 )
  {
    v12 = *(_QWORD *)(a1 + 936);
    v13 = v12 ? *(_DWORD *)(v12 - 4) : 0;
    if ( (int)a2 >= v13 || !*(_DWORD *)(v12 + 4 * v3) )
    {
      if ( (v14 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8 * v3)) != 0
        && (v15 = sub_9AD4F0(a1, a2), sub_33D280((__int64)v15, v14 + 16))
        || (v32 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v3)) != 0
        && (v33 = sub_9AD4F0(a1, a2), sub_33D280(v32 + 16, (__int64)v33)) )
      {
        v16 = *(_QWORD *)(a1 + 928);
        v35[0] = a2;
        v17 = (int *)(*(_QWORD *)(a1 + 936) + v34);
        if ( v16 )
        {
          v18 = *(_DWORD *)(v16 - 4);
          *v17 = v18;
          sub_98D100((_QWORD *)(a1 + 928), v35);
          v19 = *(_QWORD *)(a1 + 928);
          v20 = (unsigned int)v18;
          v21 = v18 >> 1;
          v22 = *(_QWORD *)(a1 + 936);
          v23 = (_DWORD *)(v19 + 4LL * (unsigned int)v18);
          v24 = (unsigned int)*v23;
          if ( v18 >> 1 )
          {
            while ( 1 )
            {
              v23 = (_DWORD *)(v19 + 4 * v20);
              v25 = (unsigned int *)(v19 + 4LL * (unsigned int)v21);
              v26 = *v25;
              if ( (int)v24 >= (int)v26 )
                break;
              *v23 = v26;
              *(_DWORD *)(v22 + 4 * v26) = v18;
              v18 = v21;
              v21 >>= 1;
              if ( !v21 )
              {
                v23 = v25;
                v18 = 1;
                break;
              }
              v20 = (unsigned int)v18;
            }
          }
        }
        else
        {
          *v17 = 0;
          v18 = 0;
          sub_98D100((_QWORD *)(a1 + 928), v35);
          v23 = *(_DWORD **)(a1 + 928);
          v22 = *(_QWORD *)(a1 + 936);
          v24 = (unsigned int)*v23;
        }
        *v23 = v24;
        *(_DWORD *)(v22 + 4 * v24) = v18;
      }
    }
  }
  return sub_18290A0(*(_QWORD *)(a1 + 24));
}

