__int64 __fastcall sub_2206B70(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 *v3; // r13
  int v5; // eax
  __int64 v6; // rcx
  unsigned __int64 v8; // rbp
  char *v9; // rax
  __int64 v10; // r12
  unsigned int v11; // r14d
  unsigned __int64 v12; // r12
  _QWORD *v13; // rax
  __int64 v14; // r8
  char *v15; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+8h] [rbp-30h]

  v3 = a2;
  v5 = *((_DWORD *)a2 + 2);
  if ( a3 > 0x40 )
  {
    if ( a3 == v5 )
    {
      *(_DWORD *)(a1 + 8) = a3;
      sub_2205510(a1, (const void **)a2);
      return a1;
    }
    else
    {
      v8 = ((unsigned __int64)a3 + 63) >> 6;
      v9 = (char *)operator new[](8 * v8);
      v16 = a3;
      v10 = *((unsigned int *)a2 + 2);
      v15 = v9;
      v11 = v10;
      v12 = (unsigned __int64)(v10 + 63) >> 6;
      if ( v11 > 0x40 )
        a2 = (__int64 *)*a2;
      v13 = memcpy(v9, a2, 8 * v12);
      v13[(unsigned int)(v12 - 1)] = (__int64)(v13[(unsigned int)(v12 - 1)] << (63 - ((v11 - 1) & 0x3F))) >> (63 - ((v11 - 1) & 0x3F));
      v14 = *v3;
      if ( v11 > 0x40 )
        v14 = *(_QWORD *)(v14 + 8LL * ((v11 - 1) >> 6));
      memset(&v15[8 * v12], -((v14 & (1LL << ((v11 - 1) & 0x3F))) != 0), (unsigned int)(8 * (v8 - v12)));
      sub_CF8100((unsigned __int64 *)&v15);
      *(_DWORD *)(a1 + 8) = v16;
      *(_QWORD *)a1 = v15;
      return a1;
    }
  }
  else
  {
    v6 = 0;
    if ( v5 )
      v6 = *a2 << (64 - (unsigned __int8)v5) >> (64 - (unsigned __int8)v5);
    *(_DWORD *)(a1 + 8) = a3;
    *(_QWORD *)a1 = v6;
    sub_CF8100((unsigned __int64 *)a1);
    return a1;
  }
}
