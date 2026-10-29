__int64 __fastcall sub_7EC3D0(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  bool v4; // cf
  unsigned __int64 v5; // rdx
  unsigned __int64 v8; // rbp
  int v9; // eax
  _BYTE *v10; // r15
  _BYTE *v11; // rbx
  __int64 v12; // r8
  size_t v13; // r9
  size_t v14; // r10
  __int64 v15; // rsi
  size_t v16; // rdx
  __int64 v17; // rax
  size_t v18; // [rsp+0h] [rbp-68h]
  size_t v19; // [rsp+8h] [rbp-60h]
  __int64 v20; // [rsp+18h] [rbp-50h]
  void *src[9]; // [rsp+20h] [rbp-48h] BYREF

  src[1] = (void *)__readfsqword(0x28u);
  v3 = *a2;
  v4 = __CFADD__(*a2, a3);
  v5 = *a2 + a3;
  if ( !v4 )
  {
    src[0] = (void *)*a2;
    v8 = v5;
    v9 = unpack_dd(src);
    v10 = src[0];
    *(_DWORD *)a1 = v9;
    if ( v3 < (unsigned __int64)v10 )
    {
      v11 = v10;
      while ( (unsigned __int64)v11 < v8 )
      {
        if ( !*v11++ )
        {
          v12 = *(_QWORD *)(a1 + 16);
          v13 = v11 - v10 - 1;
          v14 = v13;
          if ( v12 )
          {
            --v12;
            v14 = v13 + v12;
          }
          v15 = *(_QWORD *)(a1 + 8);
          v16 = v14 + 1;
          if ( *(_QWORD *)(a1 + 24) < v14 + 1 )
          {
            v20 = v12;
            v19 = v14;
            v18 = v14 + 1;
            v17 = qvector_reserve(a1 + 8, v15, v16, 1);
            v12 = v20;
            v13 = v11 - v10 - 1;
            *(_QWORD *)(a1 + 8) = v17;
            v14 = v19;
            v15 = v17;
            v16 = v18;
          }
          *(_QWORD *)(a1 + 16) = v16;
          *(_BYTE *)(v15 + v14) = 0;
          memmove((void *)(v12 + *(_QWORD *)(a1 + 8)), v10, v13);
          src[0] = v11;
          *(_QWORD *)(a1 + 32) = unpack_dq(src, v8);
          if ( v11 < src[0] )
          {
            *a2 = (unsigned __int64)src[0];
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return 0;
}

