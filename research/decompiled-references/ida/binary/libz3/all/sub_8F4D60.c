__int64 __fastcall sub_8F4D60(__int64 a1, unsigned int a2, double a3, __m128 a4)
{
  __int64 v4; // rbp
  int v5; // r13d
  bool v6; // r14
  unsigned __int64 v7; // r15
  _QWORD *v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned int v12; // eax
  unsigned int **v13; // rbp
  unsigned int *v14; // rsi
  unsigned int v15; // eax
  unsigned int **v16; // rbp
  __int64 v17; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  char v21; // dl
  _DWORD v22[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v4 = 2 * a2;
  v5 = *(char *)(*(_QWORD *)(a1 + 8848) + v4);
  v6 = v5 == -1;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8656) + 8LL * **(unsigned int **)(*(_QWORD *)(a1 + 8840) + 8LL * a2));
  if ( *(char *)(v7 + 44) < 0 )
  {
    v8 = *(_QWORD **)(a1 + 8648);
    if ( v5 != -1 )
      v8 = *(_QWORD **)(a1 + 8640);
    sub_8F4690(a1, (_QWORD *)v7, v8, 8LL * (v6 + (unsigned int)v4) + 2, a3, a4);
  }
  result = *(_QWORD *)(a1 + 7496);
  if ( result )
  {
    if ( *(_QWORD *)(result + 216) )
    {
      result = sub_B39350(v7, *(unsigned int *)(result + 8));
      if ( (_DWORD)result != -1 )
      {
        v10 = *(_QWORD *)(a1 + 104);
        v22[0] = v4 + v6;
        v11 = *(_QWORD *)(v10 + 864);
        if ( v5 != -1 )
          v11 = *(_QWORD *)(v10 + 856);
        v12 = sub_B39350(v7, *(unsigned int *)(*(_QWORD *)(a1 + 7496) + 8LL));
        result = sub_B35800(*(_QWORD *)(a1 + 7496), v12, v11, 1, v22);
      }
    }
  }
  v13 = *(unsigned int ***)(v7 + 8);
  if ( *(unsigned int ***)(a1 + 8640) != v13 && *(unsigned int ***)(a1 + 8648) != v13 )
  {
    if ( (unsigned int **)v7 != v13 )
    {
      v14 = *v13;
      v15 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
      if ( v15 > *(_DWORD *)(a1 + 184) )
        v15 = *(_DWORD *)(a1 + 184);
      if ( !v15 )
      {
LABEL_19:
        result = (unsigned int)*(char *)(*(_QWORD *)(a1 + 8848)
                                       + (unsigned int)(2 * *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4LL * *v14)));
        if ( v5 == (_DWORD)result )
          return result;
        goto LABEL_20;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 7488) + 56LL))(
             *(_QWORD *)(a1 + 7488),
             v14) )
      {
        v14 = *v13;
        goto LABEL_19;
      }
    }
LABEL_20:
    v16 = *(unsigned int ***)(v7 + 16);
    for ( result = a1 + 8400; (unsigned int **)v7 != v16; v16 = (unsigned int **)v16[2] )
    {
      v17 = (unsigned int)(2 * *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4LL * **v16));
      result = (unsigned int)*(char *)(*(_QWORD *)(a1 + 8848) + v17);
      if ( v5 != (_DWORD)result )
      {
        v18 = sub_180C100(a1 + 8400, 32);
        *(_QWORD *)(v18 + 8) = 2;
        v19 = *(_QWORD *)(a1 + 8848);
        *(_QWORD *)v18 = off_1C577D8;
        *(__m128i *)(v18 + 16) = _mm_unpacklo_epi64((__m128i)v7, (__m128i)(unsigned __int64)v16);
        v20 = v6 + (unsigned int)v17;
        v21 = *(_BYTE *)(v19 + v20);
        result = v18 | 3;
        if ( v21 == -1 )
        {
          if ( *(_QWORD *)(a1 + 8984) == qword_1C7EC50 && !*(_BYTE *)(a1 + 2416) )
          {
            *(_QWORD *)(a1 + 8984) = result;
            *(_DWORD *)(a1 + 8992) = v20 ^ 1;
          }
        }
        else if ( !v21 )
        {
          result = (__int64)sub_8F28B0(a1, v20, result, 0);
        }
      }
    }
  }
  return result;
}

