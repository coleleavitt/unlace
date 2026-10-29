__int64 __fastcall sub_1981400(__int64 *a1, _DWORD *a2, double a3, __m128 a4)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rbp
  unsigned __int16 **v6; // r15
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v15; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+18h] [rbp-C0h]
  _BYTE v18[184]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = (unsigned int)a2[4];
  v17 = 0x1000000000LL;
  ptr = v18;
  if ( v4 > 0x10 )
  {
    sub_2237220(&ptr, v18, v4, 8);
    v4 = (unsigned int)a2[4];
  }
  v5 = (__int64)&a2[2 * v4 + 16];
  v6 = (unsigned __int16 **)(a2 + 16);
  if ( (_DWORD *)v5 != a2 + 16 )
  {
    while ( 1 )
    {
      v8 = sub_190CCA0(a1, *v6, a3, a4);
      if ( v8 == 1 )
        goto LABEL_12;
      v9 = (unsigned int)v17;
      v10 = v8 & 0xFFFFFFFFFFFFFFFELL;
      v11 = (unsigned int)v17 + 1LL;
      if ( v11 <= HIDWORD(v17) )
      {
        v7 = ptr;
      }
      else
      {
        v15 = v10;
        sub_2237220(&ptr, v18, v11, 8);
        v9 = (unsigned int)v17;
        v7 = ptr;
        v10 = v15;
      }
      ++v6;
      v7[v9] = v10;
      LODWORD(v17) = v17 + 1;
      if ( (unsigned __int16 **)v5 == v6 )
      {
        v4 = (unsigned int)a2[4];
        break;
      }
    }
  }
  v12 = sub_190CCA0(a1, *(unsigned __int16 **)&a2[10 * v4 + 16], a3, a4);
  if ( v12 == 1 )
  {
LABEL_12:
    v13 = 0;
    goto LABEL_13;
  }
  v13 = sub_1B43520(
          *(_QWORD *)(*a1 + 760),
          (_DWORD)ptr,
          v17,
          (unsigned int)v12 & 0xFFFFFFFE,
          *a2,
          a2[3],
          a2[12],
          a2[13],
          a2[14],
          a2[15],
          a2[1]);
LABEL_13:
  if ( ptr != v18 )
    free(ptr);
  return v13;
}
