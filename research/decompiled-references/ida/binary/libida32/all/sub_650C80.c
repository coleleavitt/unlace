unsigned __int64 __fastcall sub_650C80(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rsi
  int func_num; // eax
  __int64 v9; // rbx
  _DWORD *v10; // rax
  _DWORD *v11; // rdx
  int v12; // eax
  _DWORD v14[3]; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v6 = *(unsigned int *)(a1 + 8 * a3);
  v15 = __readfsqword(0x28u);
  if ( (unsigned __int8)xrefblk_t_first_to(v14, v6, 5) )
  {
    do
    {
      func_num = get_func_num(v14[0]);
      if ( func_num != -1 )
      {
        v9 = func_num;
        if ( func_num < a2 )
        {
          v10 = (_DWORD *)getn_func(func_num);
          if ( v10 )
          {
            v11 = (_DWORD *)(a1 + 8 * v9);
            if ( *v10 == *v11 && a3 != v9 )
            {
              v12 = v11[1];
              if ( v12 != -1 )
                v11[1] = a4 + v12;
            }
          }
        }
      }
    }
    while ( (unsigned __int8)xrefblk_t_next_to(v14) );
  }
  return v15 - __readfsqword(0x28u);
}

