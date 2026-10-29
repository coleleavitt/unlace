__int64 __fastcall sub_1761390(__int64 *a1, _DWORD *a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int16 **v7; // rbx
  unsigned __int16 **v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned __int64 v15; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int64 v17; // [rsp+18h] [rbp-60h]
  _BYTE v18[88]; // [rsp+20h] [rbp-58h] BYREF

  v2 = (unsigned int)a2[4];
  v17 = 0x400000000LL;
  ptr = v18;
  if ( v2 > 4 )
  {
    sub_2237220(&ptr, v18, v2, 8);
    v2 = (unsigned int)a2[4];
  }
  v3 = 2 * v2;
  v4 = *(_QWORD *)&a2[v3 + 6];
  v5 = v3 * 4 + 24;
  if ( v4 )
  {
    v6 = sub_175B800(a1, *(unsigned __int16 **)&a2[v3 + 6]);
    if ( v6 == 1 )
    {
      v13 = 0;
      goto LABEL_13;
    }
    LODWORD(v4) = v6 & 0xFFFFFFFE;
    v5 = 8LL * (unsigned int)a2[4] + 24;
  }
  v7 = (unsigned __int16 **)((char *)a2 + v5);
  v8 = (unsigned __int16 **)(a2 + 6);
  if ( v7 != (unsigned __int16 **)(a2 + 6) )
  {
    do
    {
      v9 = sub_175B800(a1, *v8);
      if ( v9 != 1 )
      {
        v10 = (unsigned int)v17;
        v11 = v9 & 0xFFFFFFFFFFFFFFFELL;
        v12 = (unsigned int)v17 + 1LL;
        if ( v12 > HIDWORD(v17) )
        {
          v15 = v11;
          sub_2237220(&ptr, v18, v12, 8);
          v10 = (unsigned int)v17;
          v11 = v15;
        }
        *((_QWORD *)ptr + v10) = v11;
        LODWORD(v17) = v17 + 1;
      }
      ++v8;
    }
    while ( v7 != v8 );
  }
  v13 = sub_1B270B0(*(_QWORD *)(*a1 + 760), *a2, a2[3], a2[5], a2[1], v4, (__int64)ptr, (unsigned int)v17);
LABEL_13:
  if ( ptr != v18 )
    free(ptr);
  return v13;
}
