__int64 __fastcall sub_453C50(__int64 a1, const char *a2, __int64 a3, __int64 a4, const char *a5, __int64 a6)
{
  unsigned int v7; // ebx
  _QWORD *v9; // r12
  size_t v10; // rax
  size_t v11; // rbp
  void *v12; // rdi
  size_t v13; // r14
  __int64 v14; // rax
  __int64 v15; // [rsp+8h] [rbp-40h] BYREF
  char s[8]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( a6 && *(_BYTE *)(a6 + 72) == 2 )
    a6 = 0;
  v7 = sub_42B510(a1, a2, a3, a4, a5, a6);
  if ( (_BYTE)v7 )
  {
    v15 = 0;
    if ( (unsigned __int8)sub_453770(&v15, a4) )
    {
      pretty_print_size(s, 8, v15);
      v9 = *(_QWORD **)a2;
      v10 = strlen(s);
      v11 = v10;
      if ( v10 )
      {
        v12 = (void *)v9[3];
        v13 = v10 + 1;
        if ( v9[5] < v10 + 1 )
        {
          v14 = qvector_reserve(v9 + 3, v9[3], v13, 1);
          v9[3] = v14;
          v12 = (void *)v14;
        }
        v9[4] = v13;
        memmove(v12, s, v11);
        *(_BYTE *)(v9[3] + v11) = 0;
      }
      else
      {
        v9[4] = 0;
      }
    }
  }
  return v7;
}
