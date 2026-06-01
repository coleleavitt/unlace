__int64 __fastcall sub_383AF0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  int v3; // eax
  unsigned __int64 v4; // rdx
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  const void *v9; // r12
  void *v10; // rax
  void *v11; // r13
  __int128 v12; // kr00_16
  void *v14; // rdi
  void *v15; // rdi
  __int64 v16; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v18; // [rsp+8h] [rbp-40h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v2 = *(__int64 **)(a1 + 96);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 144);
    v4 = v2[1];
    if ( (v3 & 1) == 0 || (v3 & 2) != 0 || !v4 )
    {
      v6 = *v2;
      if ( v4 < *(int *)(a1 + 104) )
      {
        if ( v2[2] < v4 + 1 )
        {
          v16 = qvector_reserve(*(_QWORD *)(a1 + 96), v6, v4 + 1, 24);
          v4 = v2[1];
          *v2 = v16;
          v6 = v16;
        }
        v7 = v6 + 24 * v4;
        *(_QWORD *)v7 = 0;
        *(_OWORD *)(v7 + 8) = 0;
        ++v2[1];
        v8 = *(_QWORD *)(a2 + 8);
        if ( !v8 || (v9 = *(const void **)a2, v18 = 0, ptr = nullptr, v8 == 1) )
        {
          v11 = nullptr;
          v12 = 0u;
        }
        else
        {
          v10 = (void *)qvector_reserve(&ptr, 0, v8, 1);
          *(_QWORD *)&v18 = v8;
          ptr = v10;
          memmove(v10, v9, v8 - 1);
          *((char *)ptr + v8 - 1) = 0;
          v11 = ptr;
          v12 = v18;
        }
        ptr = nullptr;
        v18 = 0;
        v14 = *(void **)v7;
        if ( *(_QWORD *)v7 )
        {
          *(_QWORD *)(v7 + 8) = 0;
          qfree(v14);
        }
        *(_QWORD *)v7 = v11;
        v15 = ptr;
        *(_OWORD *)(v7 + 8) = v12;
        if ( v15 )
        {
          *(_QWORD *)&v18 = 0;
          qfree(v15);
        }
        return 0;
      }
      sub_35A790((char **)(v6 + 24 * v4 - 24));
      remember_problem(10, *(_QWORD *)(a1 + 16), 0);
    }
    return 1;
  }
  return 0;
}
