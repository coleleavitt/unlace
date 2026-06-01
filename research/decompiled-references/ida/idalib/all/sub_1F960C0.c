__int64 __fastcall sub_1F960C0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD *v3; // r13
  _QWORD *v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+8h] [rbp-30h]

  result = sub_9B9C90(*(_QWORD *)(a1 + 16), (unsigned int)((__int64)(a2[1] - *a2) >> 3));
  v3 = (_QWORD *)a2[1];
  v4 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 != v3 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(a1 + 16);
        v8 = sub_1F92240(*(_QWORD *)(a1 + 8), *v4 & 0xFFFFFFFFFFFFFFF8LL);
        v9 = *(unsigned int *)(v7 + 8);
        if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 12) )
        {
          v10 = v8;
          sub_2237220(v7, v7 + 16, v9 + 1, 8);
          v9 = *(unsigned int *)(v7 + 8);
          v8 = v10;
        }
        *(_QWORD *)(*(_QWORD *)v7 + 8 * v9) = v8;
        ++*(_DWORD *)(v7 + 8);
        v5 = *(_QWORD *)(a1 + 16);
        result = *(unsigned int *)(v5 + 8);
        v6 = *v4 & 3LL;
        if ( result + 1 > (unsigned __int64)*(unsigned int *)(v5 + 12) )
          break;
        ++v4;
        *(_QWORD *)(*(_QWORD *)v5 + 8 * result) = v6;
        ++*(_DWORD *)(v5 + 8);
        if ( v3 == v4 )
          return result;
      }
      ++v4;
      sub_2237220(*(_QWORD *)(a1 + 16), v5 + 16, result + 1, 8);
      result = *(_QWORD *)v5;
      *(_QWORD *)(*(_QWORD *)v5 + 8LL * (unsigned int)(*(_DWORD *)(v5 + 8))++) = v6;
    }
    while ( v3 != v4 );
  }
  return result;
}
