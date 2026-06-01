__int64 __fastcall sub_1762DE0(__int64 *a1, _DWORD *a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rbp
  unsigned __int16 **v4; // r15
  _QWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v13; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+18h] [rbp-C0h]
  _BYTE v16[184]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = (unsigned int)a2[4];
  v15 = 0x1000000000LL;
  ptr = v16;
  if ( v2 > 0x10 )
  {
    sub_2237220(&ptr, v16, v2, 8);
    v2 = (unsigned int)a2[4];
  }
  v3 = (__int64)&a2[2 * v2 + 16];
  v4 = (unsigned __int16 **)(a2 + 16);
  if ( (_DWORD *)v3 != a2 + 16 )
  {
    while ( 1 )
    {
      v6 = sub_175B800(a1, *v4);
      if ( v6 == 1 )
        goto LABEL_12;
      v7 = (unsigned int)v15;
      v8 = v6 & 0xFFFFFFFFFFFFFFFELL;
      v9 = (unsigned int)v15 + 1LL;
      if ( v9 <= HIDWORD(v15) )
      {
        v5 = ptr;
      }
      else
      {
        v13 = v8;
        sub_2237220(&ptr, v16, v9, 8);
        v7 = (unsigned int)v15;
        v5 = ptr;
        v8 = v13;
      }
      ++v4;
      v5[v7] = v8;
      LODWORD(v15) = v15 + 1;
      if ( (unsigned __int16 **)v3 == v4 )
      {
        v2 = (unsigned int)a2[4];
        break;
      }
    }
  }
  v10 = sub_175B800(a1, *(unsigned __int16 **)&a2[10 * v2 + 16]);
  if ( v10 == 1 )
  {
LABEL_12:
    v11 = 0;
    goto LABEL_13;
  }
  v11 = sub_1B43520(
          *(_QWORD *)(*a1 + 760),
          (_DWORD)ptr,
          v15,
          (unsigned int)v10 & 0xFFFFFFFE,
          *a2,
          a2[3],
          a2[12],
          a2[13],
          a2[14],
          a2[15],
          a2[1]);
LABEL_13:
  if ( ptr != v16 )
    free(ptr);
  return v11;
}
