__int64 __fastcall sub_17616E0(__int64 *a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rax
  unsigned __int16 *v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // r12
  unsigned __int16 **v8; // r14
  _QWORD *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  int v17; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v18; // [rsp+18h] [rbp-D0h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+28h] [rbp-C0h]
  _BYTE v21[184]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  if ( v2 )
  {
    v3 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 24));
    LODWORD(v2) = v3 & 0xFFFFFFFE;
    if ( v3 == 1 )
      return 0;
  }
  v4 = *(unsigned __int16 **)(a2 + 32);
  v17 = (int)v4;
  if ( v4 )
  {
    v5 = sub_175B800(a1, v4);
    if ( v5 != 1 )
    {
      v17 = v5 & 0xFFFFFFFE;
      goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  v6 = *(unsigned int *)(a2 + 16);
  v20 = 0x1000000000LL;
  ptr = v21;
  if ( v6 > 0x10 )
  {
    sub_2237220(&ptr, v21, v6, 8);
    v6 = *(unsigned int *)(a2 + 16);
  }
  v7 = a2 + 8 * v6 + 72;
  if ( v7 == a2 + 72 )
  {
    v10 = v20;
LABEL_16:
    v15 = sub_1B3BC90(
            *(_QWORD *)(*a1 + 760),
            v2,
            v17,
            *(_DWORD *)(a2 + 52),
            *(_DWORD *)(a2 + 60),
            *(_DWORD *)(a2 + 56),
            *(_DWORD *)(a2 + 64),
            (__int64)ptr,
            v10,
            *(_DWORD *)a2,
            *(_DWORD *)(a2 + 12),
            *(_DWORD *)(a2 + 40),
            *(_DWORD *)(a2 + 4));
  }
  else
  {
    v8 = (unsigned __int16 **)(a2 + 72);
    while ( 1 )
    {
      v11 = sub_175B800(a1, *v8);
      if ( v11 == 1 )
        break;
      v12 = (unsigned int)v20;
      v13 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v14 = (unsigned int)v20 + 1LL;
      if ( v14 <= HIDWORD(v20) )
      {
        v9 = ptr;
      }
      else
      {
        v18 = v13;
        sub_2237220(&ptr, v21, v14, 8);
        v12 = (unsigned int)v20;
        v9 = ptr;
        v13 = v18;
      }
      v9[v12] = v13;
      ++v8;
      v10 = v20 + 1;
      LODWORD(v20) = v20 + 1;
      if ( (unsigned __int16 **)v7 == v8 )
        goto LABEL_16;
    }
    v15 = 0;
  }
  if ( ptr != v21 )
    free(ptr);
  return v15;
}
