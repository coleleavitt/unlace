__int64 __fastcall sub_AC75E0(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  _BYTE *v6; // r14
  __int64 **v7; // r15
  __int64 **j; // r12
  __int64 *v9; // r14
  __int64 v10; // rbp
  unsigned int v11; // esi
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // rbp
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 *v19; // rbp
  __int64 v20; // r12
  unsigned int v21; // eax
  unsigned int v22; // r12d
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 k; // rax
  __int64 v26; // r12
  _QWORD *v27; // rdi
  __int64 v28; // rdx
  __int64 i; // rdx
  char *v30; // [rsp+0h] [rbp-F8h]
  char *v32; // [rsp+10h] [rbp-E8h]
  __int64 v33; // [rsp+28h] [rbp-D0h]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+38h] [rbp-C0h]
  _BYTE v36[184]; // [rsp+40h] [rbp-B8h] BYREF

  if ( !*((_WORD *)a1 + 2) && (*((_BYTE *)a1 + 30) & 1) != 0 )
  {
    result = *(_QWORD *)(a2 + 8656);
    if ( result )
    {
      v18 = *a1;
      if ( (unsigned int)v18 < *(_DWORD *)(result - 4) )
      {
        v19 = *(__int64 **)(result + 8 * v18);
        if ( v19 )
        {
          v20 = *v19;
          if ( !(unsigned int)sub_8E7030(a2)
            || (result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 7488) + 56LL))(
                           *(_QWORD *)(a2 + 7488),
                           v20),
                (_BYTE)result) )
          {
            v21 = *(_DWORD *)(a3 + 8);
            v22 = *(_DWORD *)(a3 + 12);
            if ( v21 >= v22 )
            {
              v26 = 2 * v22;
              v23 = sub_186B270(8 * v26);
              v21 = *(_DWORD *)(a3 + 8);
              v27 = *(_QWORD **)a3;
              if ( v21 )
              {
                if ( v21 - 1 <= 2 || (_QWORD *)v23 == v27 + 1 )
                {
                  for ( i = 0; i != v21; ++i )
                    *(_QWORD *)(v23 + i * 8) = v27[i];
                }
                else
                {
                  v28 = 0;
                  do
                  {
                    *(__m128i *)(v23 + v28 * 8) = _mm_loadu_si128((const __m128i *)&v27[v28]);
                    v28 += 2;
                  }
                  while ( v28 != 2LL * (v21 >> 1) );
                  if ( (v21 & 1) != 0 )
                    *(_QWORD *)(v23 + 8LL * (v21 & 0xFFFFFFFE)) = v27[v21 & 0xFFFFFFFE];
                }
              }
              if ( v27 != (_QWORD *)(a3 + 16) && v27 )
              {
                sub_186B220(v27);
                v21 = *(_DWORD *)(a3 + 8);
              }
              *(_QWORD *)a3 = v23;
              *(_DWORD *)(a3 + 12) = v26;
            }
            else
            {
              v23 = *(_QWORD *)a3;
            }
            v24 = v21;
            result = v21 + 1;
            *(_QWORD *)(v23 + 8 * v24) = v19;
            *(_DWORD *)(a3 + 8) = result;
          }
        }
      }
    }
  }
  else
  {
    v5 = *((_QWORD *)a1 + 4);
    ptr = v36;
    v35 = 0x1000000000LL;
    sub_AC75E0(v5, a2, &ptr);
    v6 = ptr;
    v32 = (char *)ptr + 8 * (unsigned int)v35;
    if ( v32 != ptr )
    {
      v30 = (char *)ptr;
      do
      {
        v7 = *(__int64 ***)(*(_QWORD *)v30 + 56LL);
        if ( v7 )
        {
          for ( j = &v7[*((unsigned int *)v7 - 1)]; v7 != j; *(_DWORD *)(a3 + 8) = v11 + 1 )
          {
            while ( 1 )
            {
              v9 = *v7;
              v10 = **v7;
              if ( (!(unsigned int)sub_8E7030(a2)
                 || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 7488) + 56LL))(
                      *(_QWORD *)(a2 + 7488),
                      v10))
                && *((_QWORD *)a1 + 2) == *(_QWORD *)(*v9 + 16) )
              {
                break;
              }
              if ( ++v7 == j )
                goto LABEL_15;
            }
            v11 = *(_DWORD *)(a3 + 8);
            v12 = *(_DWORD *)(a3 + 12);
            if ( v11 >= v12 )
            {
              v15 = 2 * v12;
              v13 = sub_186B270(8 * v15);
              v11 = *(_DWORD *)(a3 + 8);
              v16 = *(_QWORD **)a3;
              if ( v11 )
              {
                if ( v11 - 1 <= 2 || (_QWORD *)v13 == v16 + 1 )
                {
                  for ( k = 0; k != v11; ++k )
                    *(_QWORD *)(v13 + k * 8) = v16[k];
                }
                else
                {
                  v17 = 0;
                  do
                  {
                    *(__m128i *)(v13 + v17 * 8) = _mm_loadu_si128((const __m128i *)&v16[v17]);
                    v17 += 2;
                  }
                  while ( v17 != 2LL * (v11 >> 1) );
                  if ( (v11 & 1) != 0 )
                    *(_QWORD *)(v13 + 8LL * (v11 & 0xFFFFFFFE)) = v16[v11 & 0xFFFFFFFE];
                }
              }
              if ( v16 != (_QWORD *)(a3 + 16) && v16 )
              {
                v33 = v13;
                sub_186B220(v16);
                v13 = v33;
                v11 = *(_DWORD *)(a3 + 8);
              }
              *(_QWORD *)a3 = v13;
              *(_DWORD *)(a3 + 12) = v15;
            }
            else
            {
              v13 = *(_QWORD *)a3;
            }
            ++v7;
            *(_QWORD *)(v13 + 8LL * v11) = v9;
          }
        }
LABEL_15:
        v30 += 8;
      }
      while ( v32 != v30 );
      v6 = ptr;
    }
    result = (__int64)v36;
    if ( v6 != v36 )
    {
      if ( v6 )
        return sub_186B220(v6);
    }
  }
  return result;
}

