__int64 __fastcall sub_32AD0(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  bool v4; // cf
  unsigned __int64 v5; // rdx
  unsigned __int64 v8; // rbp
  int v9; // eax
  _BYTE *v10; // r14
  _BYTE *v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // r8
  void *v14; // rsi
  unsigned __int64 v15; // rdx
  void *v16; // rax
  unsigned __int64 v17; // [rsp+0h] [rbp-58h]
  __int64 v18; // [rsp+8h] [rbp-50h]
  void *src[9]; // [rsp+10h] [rbp-48h] BYREF

  src[1] = (void *)__readfsqword(0x28u);
  v3 = *a2;
  v4 = __CFADD__(*a2, a3);
  v5 = *a2 + a3;
  if ( !v4 )
  {
    src[0] = (void *)*a2;
    v8 = v5;
    v9 = sub_28F80((unsigned __int64 *)src, v5);
    v10 = src[0];
    *(_DWORD *)(a1 + 12) = v9;
    if ( v3 < (unsigned __int64)v10 )
    {
      v11 = v10;
      while ( (unsigned __int64)v11 < v8 )
      {
        if ( !*v11++ )
        {
          v12 = *(_QWORD *)(a1 + 24);
          v13 = v11 - v10 - 1;
          if ( v12 )
          {
            --v12;
            v13 = v11 - v10 - 1 + v12;
          }
          v14 = *(void **)(a1 + 16);
          v15 = v13 + 1;
          if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v13 + 1) )
          {
            v18 = v13;
            v17 = v13 + 1;
            v16 = sub_29E60(a1 + 16, v14, v15, 1u);
            v13 = v18;
            v15 = v17;
            *(_QWORD *)(a1 + 16) = v16;
            v14 = v16;
          }
          *(_QWORD *)(a1 + 24) = v15;
          *((_BYTE *)v14 + v13) = 0;
          memmove((void *)(v12 + *(_QWORD *)(a1 + 16)), v10, v11 - v10 - 1);
          *a2 = (unsigned __int64)v11;
          return 1;
        }
      }
    }
  }
  return 0;
}

