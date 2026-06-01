/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4755A0
// Address: 0x00000000004755A0

//----- (00000000004755A0) ----------------------------------------------------
__int64 __fastcall sub_4755A0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  const void *v5; // r13
  __int64 v6; // r14
  size_t v7; // r12
  _BYTE *v8; // rax
  unsigned __int64 v9; // rax
  char *v10; // rdi
  char *v11; // rdx
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  char *v15; // rdx
  char *v16; // rax
  void *src[7]; // [rsp+0h] [rbp-38h] BYREF

  src[1] = (void *)__readfsqword(0x28u);
  v2 = (*(__int64 (**)(void))(qword_4C83E0 + 48))();
  v3 = (*(__int64 (__fastcall **)(__int64))(qword_4C83E0 + 24))(v2);
  (*(void (__fastcall **)(__int64))(qword_4C83E0 + 72))(v3);
  src[0] = nullptr;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, void **))(qword_4C83E0 + 8))(v3, 3, 0, src);
  *(_QWORD *)a1 = 0;
  v5 = src[0];
  *(_OWORD *)(a1 + 8) = 0;
  if ( v4 > 0 )
  {
    if ( v5 )
    {
      v6 = v4 + 1;
      v7 = v4;
      v8 = sub_481540(a1, nullptr, v4 + 1, 1u);
      *(_QWORD *)a1 = v8;
      *(_QWORD *)(a1 + 8) = v6;
      v8[v7] = 0;
      memmove(*(void **)a1, v5, v7);
      v9 = *(_QWORD *)(a1 + 8);
      if ( v9 > 1 )
      {
        v10 = *(char **)a1;
        v11 = (char *)(*(_QWORD *)a1 + v9 - 1);
        if ( *(_QWORD *)a1 < (unsigned __int64)v11 )
        {
          while ( *(v11 - 1) == 10 )
          {
            if ( v10 == --v11 )
              goto LABEL_14;
          }
        }
        v12 = v11 - v10;
        if ( v11 == v10 )
        {
LABEL_14:
          if ( v10 )
          {
            *(_QWORD *)(a1 + 8) = 0;
            j__free(v10);
            *(_QWORD *)a1 = 0;
            *(_QWORD *)(a1 + 16) = 0;
          }
        }
        else
        {
          v13 = v12 + 1;
          if ( v9 < v12 + 1 )
          {
            if ( *(_QWORD *)(a1 + 16) < v13 )
            {
              v16 = (char *)sub_481540(a1, *(void **)a1, v12 + 1, 1u);
              *(_QWORD *)a1 = v16;
              v10 = v16;
              v9 = *(_QWORD *)(a1 + 8);
            }
            memset(&v10[v9], 0, v13 - v9);
            v15 = *(char **)a1;
            *(_QWORD *)(a1 + 8) = v13;
            v11 = &v15[v12];
          }
          else if ( v9 != v12 + 1 )
          {
            *(_QWORD *)(a1 + 8) = v13;
          }
          *v11 = 0;
        }
      }
    }
  }
  (*(void (__fastcall **)(__int64))(qword_4C83E0 + 16))(v3);
  return a1;
}
// 4C83E0: using guessed type __int64 qword_4C83E0;
