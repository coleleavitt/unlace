unsigned __int64 __fastcall sub_66E5C0(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rsi
  int func_num; // eax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  unsigned __int64 v14[3]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 16 * a3);
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
          v10 = (_QWORD *)getn_func(func_num);
          if ( v10 )
          {
            v11 = a1 + 16 * v9;
            if ( *v10 == *(_QWORD *)v11 && a3 != v9 )
            {
              v12 = *(_DWORD *)(v11 + 8);
              if ( v12 != -1 )
                *(_DWORD *)(v11 + 8) = a4 + v12;
            }
          }
        }
      }
    }
    while ( (unsigned __int8)xrefblk_t_next_to(v14) );
  }
  return v15 - __readfsqword(0x28u);
}
