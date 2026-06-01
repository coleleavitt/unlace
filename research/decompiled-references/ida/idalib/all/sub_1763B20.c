__int64 __fastcall sub_1763B20(__int64 *a1, unsigned int *a2)
{
  unsigned __int64 v2; // rdx
  char v3; // bl
  __int64 v4; // rbp
  unsigned __int16 **v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int16 *v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+28h] [rbp-60h]
  _BYTE v20[88]; // [rsp+30h] [rbp-58h] BYREF

  v2 = a2[4];
  ptr = v20;
  v19 = 0x400000000LL;
  if ( v2 > 4 )
  {
    sub_2237220(&ptr, v20, v2, 8);
    v2 = a2[4];
  }
  v3 = 0;
  v4 = (__int64)&a2[2 * v2 + 6];
  v5 = (unsigned __int16 **)(a2 + 6);
  if ( a2 + 6 == (unsigned int *)v4 )
  {
    v16 = *a1;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v11 = *v5;
        if ( *v5 )
          break;
        v12 = (unsigned int)v19;
        v13 = (unsigned int)v19 + 1LL;
        if ( v13 > HIDWORD(v19) )
        {
          sub_2237220(&ptr, v20, v13, 8);
          v12 = (unsigned int)v19;
        }
        ++v5;
        *((_QWORD *)ptr + v12) = 0;
        v10 = (unsigned int)(v19 + 1);
        LODWORD(v19) = v19 + 1;
        if ( (unsigned __int16 **)v4 == v5 )
          goto LABEL_15;
      }
      v6 = sub_175B800(a1, *v5);
      if ( v6 == 1 )
      {
        v14 = 0;
        goto LABEL_19;
      }
      v7 = (unsigned int)v19;
      v8 = v6 & 0xFFFFFFFFFFFFFFFELL;
      v9 = (unsigned int)v19 + 1LL;
      if ( v11 != (unsigned __int16 *)v8 )
        v3 = 1;
      if ( v9 > HIDWORD(v19) )
      {
        v17 = v8;
        sub_2237220(&ptr, v20, v9, 8);
        v7 = (unsigned int)v19;
        v8 = v17;
      }
      ++v5;
      *((_QWORD *)ptr + v7) = v8;
      v10 = (unsigned int)(v19 + 1);
      LODWORD(v19) = v19 + 1;
    }
    while ( (unsigned __int16 **)v4 != v5 );
LABEL_15:
    v16 = *a1;
    if ( v3 )
      goto LABEL_18;
  }
  v14 = (__int64)a2;
  if ( *(_DWORD *)(v16 + 12632) )
  {
    v10 = (unsigned int)v19;
LABEL_18:
    v14 = sub_1B12760(*(_QWORD *)(v16 + 760), ptr, v10, *a2, a2[3], a2[1]);
  }
LABEL_19:
  if ( ptr != v20 )
    free(ptr);
  return v14;
}
