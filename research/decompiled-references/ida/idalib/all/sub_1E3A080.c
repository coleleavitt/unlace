unsigned __int64 __fastcall sub_1E3A080(__int64 *a1, __int64 a2, __m128 a3, __m128 a4, __m128i a5)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rcx
  _BYTE *v13; // rdx
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int64 v15; // [rsp+18h] [rbp-80h]
  _BYTE v16[120]; // [rsp+20h] [rbp-78h] BYREF

  v5 = (__int64 *)(a2 + 64);
  v15 = 0x800000000LL;
  v6 = *(unsigned int *)(a2 + 56);
  ptr = v16;
  v7 = a2 + 64 + 8 * v6;
  if ( v7 == a2 + 64 )
  {
    v12 = 0;
    v13 = v16;
LABEL_8:
    v8 = sub_183D840(*a1, a2, v13, v12);
    if ( sub_1DFEFF0(a2) )
      sub_1DC20B0(*(_QWORD *)(*a1 + 11280), a2, v8, v10);
  }
  else
  {
    while ( 1 )
    {
      v8 = sub_1E38470(*a1, *(_DWORD *)(a2 + 24), *v5, a1[4], 0, a3, a4, a5);
      if ( !v8 )
        break;
      v9 = (unsigned int)v15 + 1LL;
      if ( v9 > HIDWORD(v15) )
        sub_2237220(&ptr, v16, v9, 8);
      *((_QWORD *)ptr + (unsigned int)v15) = v8;
      ++v5;
      v12 = (unsigned int)(v15 + 1);
      LODWORD(v15) = v15 + 1;
      if ( (__int64 *)v7 == v5 )
      {
        v13 = ptr;
        goto LABEL_8;
      }
    }
  }
  if ( ptr != v16 )
    free(ptr);
  return v8;
}
