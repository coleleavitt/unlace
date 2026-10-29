__int64 __fastcall sub_1761BF0(__int64 *a1, __int64 a2)
{
  unsigned __int16 *v2; // rax
  int v3; // r14d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned __int16 **v7; // r15
  _QWORD *v8; // rdx
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  int v16; // r9d
  int v17; // edx
  int v18; // eax
  __int64 v19; // rdi
  unsigned __int64 v20; // [rsp+8h] [rbp-E0h]
  __m128i v21; // [rsp+10h] [rbp-D8h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+28h] [rbp-C0h]
  _BYTE v24[184]; // [rsp+30h] [rbp-B8h] BYREF

  ptr = v24;
  v23 = 0x1000000000LL;
  v2 = (unsigned __int16 *)sub_EB5A20(a2);
  v3 = (int)v2;
  if ( v2 )
  {
    v4 = sub_175B800(a1, v2);
    v3 = v4 & 0xFFFFFFFE;
    if ( v4 == 1 )
    {
LABEL_12:
      v14 = 0;
      goto LABEL_13;
    }
  }
  v5 = *(unsigned int *)(a2 + 16);
  if ( HIDWORD(v23) < *(_DWORD *)(a2 + 16) )
  {
    sub_2237220(&ptr, v24, v5, 8);
    v5 = *(unsigned int *)(a2 + 16);
  }
  v6 = a2 + 8 * v5 + 40;
  if ( v6 != a2 + 40 )
  {
    v7 = (unsigned __int16 **)(a2 + 40);
    while ( 1 )
    {
      v10 = sub_175B800(a1, *v7);
      if ( v10 == 1 )
        goto LABEL_12;
      v11 = (unsigned int)v23;
      v12 = v10 & 0xFFFFFFFFFFFFFFFELL;
      v13 = (unsigned int)v23 + 1LL;
      if ( v13 <= HIDWORD(v23) )
      {
        v8 = ptr;
      }
      else
      {
        v20 = v12;
        sub_2237220(&ptr, v24, v13, 8);
        v11 = (unsigned int)v23;
        v8 = ptr;
        v12 = v20;
      }
      v8[v11] = v12;
      ++v7;
      v9 = v23 + 1;
      LODWORD(v23) = v23 + 1;
      if ( (unsigned __int16 **)v6 == v7 )
        goto LABEL_17;
    }
  }
  v9 = v23;
LABEL_17:
  v16 = *(_DWORD *)a2;
  v17 = *(_DWORD *)(a2 + 4);
  v18 = *(_DWORD *)(a2 + 12);
  v19 = *(_QWORD *)(*a1 + 760);
  v21 = _mm_loadu_si128((const __m128i *)(a2 + 20));
  v14 = sub_1B39770(v19, (unsigned int)&v21, v3, (_DWORD)ptr, v9, v16, v18, v17);
LABEL_13:
  if ( ptr != v24 )
    free(ptr);
  return v14;
}
