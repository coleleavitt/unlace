_BYTE *__fastcall sub_EE1530(__int64 a1, __int64 a2)
{
  int v3; // ebx
  int v4; // r15d
  __int64 v5; // r12
  size_t v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  _BYTE *v9; // rax
  __int64 v10; // rdi
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 *v13; // r12
  __int64 *v14; // r14
  __int64 v15; // rbp
  _BYTE *v16; // rax
  _BYTE *result; // rax
  __int64 v18; // [rsp+8h] [rbp-50h] BYREF
  __m128 v19[4]; // [rsp+10h] [rbp-48h] BYREF

  v3 = 0;
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 > 0 )
  {
    do
    {
      v5 = *(_QWORD *)a1;
      ++v3;
      v6 = j__strlen("  ");
      sub_9717A0(v5, "  ", v6);
    }
    while ( v4 != v3 );
  }
  v7 = sub_971800(*(_QWORD *)a1, "#pragma acc ");
  sub_EE1160(v7, *(_BYTE *)(a2 + 8));
  if ( *(_QWORD *)(a2 + 32) )
  {
    v8 = *(_QWORD *)a1;
    v9 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
    if ( (unsigned __int64)v9 >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
    {
      sub_2257CD0(v8, 32);
    }
    else
    {
      *(_QWORD *)(v8 + 32) = v9 + 1;
      *v9 = 32;
    }
    v10 = *(_QWORD *)a1;
    v11 = *(__int64 **)(a2 + 24);
    v18 = a1 + 24;
    v12 = *(_QWORD *)(a2 + 32);
    v13 = &v11[v12];
    v19[0] = _mm_loadh_ps((const double *)&v18);
    if ( v11 != &v11[v12] )
    {
      v14 = &v11[v12 - 1];
      while ( 1 )
      {
        v15 = *v11;
        sub_EE12D0((__int64 *)v19, *v11);
        if ( v15 == *v14 )
          goto LABEL_9;
        v16 = *(_BYTE **)(v19[0].m128_u64[0] + 32);
        if ( (unsigned __int64)v16 < *(_QWORD *)(v19[0].m128_u64[0] + 24) )
        {
          *(_QWORD *)(v19[0].m128_u64[0] + 32) = v16 + 1;
          *v16 = 32;
LABEL_9:
          if ( v13 == ++v11 )
            goto LABEL_13;
        }
        else
        {
          ++v11;
          sub_2257CD0(v19[0].m128_u64[0], 32);
          if ( v13 == v11 )
            goto LABEL_13;
        }
      }
    }
  }
  else
  {
LABEL_13:
    v10 = *(_QWORD *)a1;
  }
  result = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v10 + 24) )
    return (_BYTE *)sub_2257CD0(v10, 10);
  *(_QWORD *)(v10 + 32) = result + 1;
  *result = 10;
  return result;
}

