__int64 __fastcall sub_1938C20(__int64 *a1, _DWORD *a2, double a3, __m128 a4)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 *v9; // rbx
  unsigned __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  unsigned __int64 v17; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v19; // [rsp+18h] [rbp-60h]
  _BYTE v20[88]; // [rsp+20h] [rbp-58h] BYREF

  v4 = (unsigned int)a2[4];
  v19 = 0x400000000LL;
  ptr = v20;
  if ( v4 > 4 )
  {
    sub_2237220(&ptr, v20, v4, 8);
    v4 = (unsigned int)a2[4];
  }
  v5 = 2 * v4;
  v6 = *(_QWORD *)&a2[v5 + 6];
  v7 = v5 * 4 + 24;
  if ( v6 )
  {
    v8 = sub_1933BC0(a1, *(_QWORD *)&a2[v5 + 6], a3, a4);
    if ( v8 == 1 )
    {
      v15 = 0;
      goto LABEL_13;
    }
    LODWORD(v6) = v8 & 0xFFFFFFFE;
    v7 = 8LL * (unsigned int)a2[4] + 24;
  }
  v9 = (unsigned __int64 *)((char *)a2 + v7);
  v10 = (unsigned __int64 *)(a2 + 6);
  if ( v9 != (unsigned __int64 *)(a2 + 6) )
  {
    do
    {
      v11 = sub_1933BC0(a1, *v10, a3, a4);
      if ( v11 != 1 )
      {
        v12 = (unsigned int)v19;
        v13 = v11 & 0xFFFFFFFFFFFFFFFELL;
        v14 = (unsigned int)v19 + 1LL;
        if ( v14 > HIDWORD(v19) )
        {
          v17 = v13;
          sub_2237220(&ptr, v20, v14, 8);
          v12 = (unsigned int)v19;
          v13 = v17;
        }
        *((_QWORD *)ptr + v12) = v13;
        LODWORD(v19) = v19 + 1;
      }
      ++v10;
    }
    while ( v9 != v10 );
  }
  v15 = sub_1B270B0(*(_QWORD *)(*a1 + 760), *a2, a2[3], a2[5], a2[1], v6, (__int64)ptr, (unsigned int)v19);
LABEL_13:
  if ( ptr != v20 )
    free(ptr);
  return v15;
}
