__int64 __fastcall sub_17629B0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r14d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned __int16 **v7; // r15
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned __int64 v15; // [rsp+8h] [rbp-80h]
  __int16 v16; // [rsp+10h] [rbp-78h] BYREF
  void *ptr; // [rsp+18h] [rbp-70h] BYREF
  __int64 v18; // [rsp+20h] [rbp-68h]
  _BYTE v19[96]; // [rsp+28h] [rbp-60h] BYREF

  v2 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 32));
  if ( v2 == 1 )
    return 0;
  v3 = v2;
  v16 = *(_WORD *)(a2 + 24);
  v18 = 0x400000000LL;
  v4 = *(unsigned int *)(a2 + 16);
  ptr = v19;
  v5 = (unsigned int)(v4 - 1);
  if ( (unsigned int)v5 > 4 )
  {
    sub_2237220(&ptr, v19, v5, 8);
    v4 = *(unsigned int *)(a2 + 16);
  }
  v6 = a2 + 8 * v4 + 32;
  v7 = (unsigned __int16 **)(a2 + 40);
  if ( v6 == a2 + 40 )
  {
LABEL_11:
    v13 = sub_1B33F80(
            *(_QWORD *)(*a1 + 760),
            v3 & 0xFFFFFFFE,
            (unsigned int)&v16,
            *(_DWORD *)a2,
            *(_DWORD *)(a2 + 12),
            *(_DWORD *)(a2 + 20),
            *(_DWORD *)(a2 + 4));
  }
  else
  {
    while ( 1 )
    {
      v9 = sub_175B800(a1, *v7);
      if ( v9 == 1 )
        break;
      v10 = (unsigned int)v18;
      v11 = v9 & 0xFFFFFFFFFFFFFFFELL;
      v12 = (unsigned int)v18 + 1LL;
      if ( v12 <= HIDWORD(v18) )
      {
        v8 = ptr;
      }
      else
      {
        v15 = v11;
        sub_2237220(&ptr, v19, v12, 8);
        v10 = (unsigned int)v18;
        v8 = ptr;
        v11 = v15;
      }
      ++v7;
      v8[v10] = v11;
      LODWORD(v18) = v18 + 1;
      if ( (unsigned __int16 **)v6 == v7 )
        goto LABEL_11;
    }
    v13 = 0;
  }
  if ( ptr != v19 )
    free(ptr);
  return v13;
}
