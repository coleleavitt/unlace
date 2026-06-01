__int64 __fastcall sub_195A000(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int16 **v4; // r15
  __int64 v5; // rbp
  _QWORD *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v13; // r8
  _BYTE *v14; // rcx
  unsigned __int64 v15; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int64 v17; // [rsp+18h] [rbp-80h]
  _BYTE v18[120]; // [rsp+20h] [rbp-78h] BYREF

  v4 = (unsigned __int16 **)(a2 + 32);
  v17 = 0x800000000LL;
  v5 = a2 + 32 + 8LL * *(unsigned int *)(a2 + 24);
  ptr = v18;
  if ( a2 + 32 == v5 )
  {
    v13 = 0;
    v14 = v18;
  }
  else
  {
    do
    {
      v7 = sub_1944E10(a1, *v4, a3, a4);
      if ( v7 == 1 )
      {
        v11 = 1;
        goto LABEL_9;
      }
      v8 = (unsigned int)v17;
      v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
      v10 = (unsigned int)v17 + 1LL;
      if ( v10 <= HIDWORD(v17) )
      {
        v6 = ptr;
      }
      else
      {
        v15 = v9;
        sub_2237220(&ptr, v18, v10, 8);
        v8 = (unsigned int)v17;
        v6 = ptr;
        v9 = v15;
      }
      v6[v8] = v9;
      ++v4;
      v13 = (unsigned int)(v17 + 1);
      LODWORD(v17) = v17 + 1;
    }
    while ( (unsigned __int16 **)v5 != v4 );
    v14 = ptr;
  }
  v11 = sub_18C4330(*a1, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v14, v13, *(_QWORD *)(a2 + 8));
LABEL_9:
  if ( ptr != v18 )
    free(ptr);
  return v11;
}
