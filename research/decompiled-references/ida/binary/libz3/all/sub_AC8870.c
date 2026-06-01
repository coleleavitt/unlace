__int64 __fastcall sub_AC8870(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 *v5; // rcx
  int v6; // edi
  unsigned int v7; // edx
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // r8
  __int64 *i; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  char v15; // al
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-40h] BYREF
  __int64 v21; // [rsp+10h] [rbp-38h] BYREF
  __int64 v22; // [rsp+18h] [rbp-30h]
  __m128i v23[2]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(unsigned int *)(a1 + 232);
  v5 = *(__int64 **)(a1 + 224);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = v4 - 1;
  v4 *= 16;
  v8 = (__int64 *)((char *)v5 + v4);
  v9 = 16LL * (v6 & v7);
  v10 = &v5[(unsigned __int64)v9 / 8];
  if ( v9 != v4 )
  {
    for ( i = &v5[(unsigned __int64)v9 / 8]; v8 != i; i += 2 )
    {
      v12 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v12 + 12) == v6 && a2 == v12 )
          return i[1];
      }
      else if ( !v12 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v10 != v5; v5 += 2 )
  {
    v19 = *v5;
    if ( (unsigned __int64)*v5 > 1 )
    {
      if ( *(_DWORD *)(v19 + 12) == v6 && a2 == v19 )
      {
        i = v5;
        return i[1];
      }
    }
    else if ( !v19 )
    {
      break;
    }
  }
LABEL_8:
  v13 = *(_QWORD *)(a1 + 8);
  v14 = *(_QWORD *)(a1 + 192);
  v21 = 0;
  v22 = v13;
  v15 = sub_C05810(v14, a2, &v21, 1);
  v16 = a1 + 224;
  if ( v15 )
  {
    v17 = v21;
    v23[0] = _mm_unpacklo_epi64((__m128i)a2, (__m128i)(unsigned __int64)v21);
    sub_686B20(v16, v23);
    v20 = v17;
    if ( v17 )
      ++*(_DWORD *)(v17 + 8);
  }
  else
  {
    v23[0] = (__m128i)a2;
    sub_686B20(v16, v23);
    v20 = 0;
    v17 = 0;
  }
  sub_AC8490((_QWORD *)(a1 + 256), &v20);
  sub_AC6F60(v21, v22);
  return v17;
}

