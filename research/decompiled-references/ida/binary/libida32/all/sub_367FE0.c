__int64 __fastcall sub_367FE0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rdi
  __int64 func; // rax
  int v5; // ebp
  int v6; // eax
  int *v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  int v10; // [rsp+8h] [rbp-30h]
  __int64 v11; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 40);
  v3 = *(unsigned int *)(a1 + 8);
  v12 = __readfsqword(0x28u);
  if ( v2 == -1 || (func = get_func(v3), v9 = 0, v11 = 0, func_tail_iterator_set(&v9, func, v2), !v9) )
  {
    v5 = -1;
  }
  else
  {
    v5 = -1;
    v6 = v10 + 1;
    if ( v10 + 1 < *(_DWORD *)(v9 + 104) )
    {
      ++v10;
      v8 = (int *)v9;
      if ( v6 >= 0 )
        v8 = (int *)(*(_QWORD *)(v9 + 112) + 8LL * v6);
      v5 = *v8;
    }
    lock_func_range(v9, 0);
  }
  *(_DWORD *)(a2 + 8) = v5;
  return 0;
}

