__int64 __fastcall sub_9D7C80(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // r13
  unsigned __int64 v7; // rbp
  unsigned int v9; // eax
  unsigned int *v10; // rdx
  __int64 v11; // rbp
  __int64 v13; // rax
  signed int v14; // edx
  __int64 v15; // rbp
  int *v16; // rax
  __int64 v17; // rax
  int *v18; // r13
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
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rbp
  int *v34; // rax
  unsigned int v35[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v3 = a2;
  v5 = 4LL * a2;
  v7 = (unsigned __int64)a2 << 6;
  v9 = *(_DWORD *)(a1 + 912);
  v10 = (unsigned int *)(v5 + *(_QWORD *)(a1 + 920));
  if ( v9 >= *v10 )
  {
    v28 = *(_QWORD *)(a1 + 664);
    v29 = *(_QWORD *)(a1 + 672);
    *v10 = v9 + 1;
    sub_98B520(v7 + v29, (int *)(v7 + v28));
    v30 = *(_QWORD *)(a1 + 904);
    if ( !v30 || (v31 = *(unsigned int *)(v30 - 4), (_DWORD)v31 == *(_DWORD *)(v30 - 8)) )
    {
      sub_2FD3F0((unsigned int **)(a1 + 904));
      v32 = *(_QWORD *)(a1 + 904);
      *(_DWORD *)(v32 + 4LL * (unsigned int)(*(_DWORD *)(v32 - 4))++) = a2;
    }
    else
    {
      *(_DWORD *)(v30 + 4 * v31) = a2;
      ++*(_DWORD *)(v30 - 4);
    }
  }
  *(_BYTE *)(a1 + 1281) = 1;
  v11 = *(_QWORD *)(a1 + 664) + v7;
  sub_2FC4A0((__int64)qword_1C7F2C0, v11, a3, v11);
  sub_2FC4A0((__int64)qword_1C7F2C0, v11 + 32, a3 + 32, v11 + 32);
  if ( a2 != -1 && ((*(_BYTE *)(*(_QWORD *)(a1 + 656) + v5 + 3) >> 4) & 3) == 1 )
  {
    v13 = *(_QWORD *)(a1 + 872);
    v14 = v13 ? *(_DWORD *)(v13 - 4) : 0;
    if ( (int)a2 >= v14 || !*(_DWORD *)(v13 + 4 * v3) )
    {
      if ( (v15 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8 * v3)) != 0
        && (v16 = sub_9AA900(a1, a2), sub_927C80((__int64)v16, v15 + 16))
        || (v33 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8 * v3)) != 0
        && (v34 = sub_9AA900(a1, a2), sub_927C80(v33 + 16, (__int64)v34)) )
      {
        v17 = *(_QWORD *)(a1 + 864);
        v35[0] = a2;
        v18 = (int *)(*(_QWORD *)(a1 + 872) + v5);
        if ( v17 )
        {
          v19 = *(_DWORD *)(v17 - 4);
          *v18 = v19;
          sub_98D100((_QWORD *)(a1 + 864), v35);
          v20 = *(_QWORD *)(a1 + 864);
          v21 = (unsigned int)v19;
          v22 = v19 >> 1;
          v23 = *(_QWORD *)(a1 + 872);
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
          sub_98D100((_QWORD *)(a1 + 864), v35);
          v24 = *(_DWORD **)(a1 + 864);
          v23 = *(_QWORD *)(a1 + 872);
          v25 = (unsigned int)*v24;
        }
        *v24 = v25;
        *(_DWORD *)(v23 + 4 * v25) = v19;
      }
    }
  }
  return sub_18290A0(*(_QWORD *)(a1 + 24));
}

