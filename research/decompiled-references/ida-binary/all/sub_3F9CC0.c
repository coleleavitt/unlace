__int64 __fastcall sub_3F9CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *func; // rax
  unsigned __int64 *v8; // r14
  unsigned __int64 v9; // r12
  char i; // al
  __int64 v11; // r15
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  unsigned __int64 *v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int64 head; // [rsp+10h] [rbp-60h] BYREF
  char v18[8]; // [rsp+18h] [rbp-58h] BYREF
  __int64 v19; // [rsp+20h] [rbp-50h]
  unsigned __int64 v20; // [rsp+30h] [rbp-40h]

  v16 = a4;
  v20 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  if ( a3 != -1 && a4 != -1 )
  {
    func = (unsigned __int64 *)get_func(a4);
    v8 = func;
    if ( func )
    {
      v9 = *func;
      head = v9;
      if ( v9 < func[1] )
      {
        do
        {
          for ( i = xrefblk_t_first_from(v18, v9, 1); i; i = xrefblk_t_next_from(v18) )
          {
            if ( v19 != a3 )
            {
              v13 = (_QWORD *)get_func(v19);
              v11 = v13 ? *v13 : -1LL;
              v12 = (_QWORD *)get_func(a3);
              if ( !v12 || v11 != *v12 || *v12 == -1 || v11 == -1 )
                continue;
            }
            v14 = *(unsigned __int64 **)(a1 + 8);
            if ( v14 == *(unsigned __int64 **)(a1 + 16) )
            {
              sub_3F9800(a1, &head);
            }
            else
            {
              *v14 = v9;
              *(_QWORD *)(a1 + 8) += 8LL;
            }
            break;
          }
          head = next_head(v9, v8[1]);
          v9 = head;
        }
        while ( head < v8[1] );
      }
    }
    else
    {
      v15 = *(_QWORD **)(a1 + 8);
      if ( v15 == *(_QWORD **)(a1 + 16) )
      {
        sub_3F9800(a1, &v16);
      }
      else
      {
        *v15 = a4;
        *(_QWORD *)(a1 + 8) += 8LL;
      }
    }
  }
  return a1;
}
