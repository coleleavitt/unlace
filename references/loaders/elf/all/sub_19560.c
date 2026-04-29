__int64 __fastcall sub_19560(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // eax
  unsigned int v8; // r15d
  unsigned int v10; // ebx
  __int64 v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // r15d
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 i; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // [rsp+0h] [rbp-48h]

  v7 = sub_3BD30(*(_QWORD *)(a1 + 16) + 80LL, 19);
  if ( v7 )
  {
    v10 = v7;
    if ( !(unsigned __int8)sub_3FD90(a4, v7) )
    {
      v11 = sub_3BD50(*(_QWORD *)(a1 + 16) + 80LL, v10);
      if ( v11 )
      {
        v12 = sub_3BD30(*(_QWORD *)(a1 + 16) + 80LL, 7);
        v13 = v12;
        if ( v12 )
        {
          if ( !(unsigned __int8)sub_3FD90(a4, v12) )
          {
            v14 = v13;
            v15 = sub_3BD50(*(_QWORD *)(a1 + 16) + 80LL, v13);
            if ( v15 )
            {
              v21 = a2 - *(_QWORD *)(v15 + 16);
              if ( v21 >= 0 && *(_QWORD *)(v15 + 32) - 4LL >= (unsigned __int64)(a2 - *(_QWORD *)(v15 + 16)) )
              {
                v16 = *(_QWORD *)(v11 + 16);
                for ( i = v16 + *(_QWORD *)(v11 + 32); i != v16; v16 += 8 )
                {
                  v8 = is_loaded(v16);
                  if ( !(_BYTE)v8 )
                    break;
                  if ( (unsigned __int16)get_word(v16) == 0xA3FF
                    && (unsigned int)get_dword(v16 + 2, v14, v18, v19, v20) == v21 )
                  {
                    put_byte(v16 + 1, 37);
                    sub_40E20(a1, v16, 0);
                    sub_42050(a1, v16 + 2, a2, a2, 0, 4, 0, 8, 0);
                    auto_mark_range(v16, v16 + 1, 20);
                    sub_40E60(a1, v16, a3, ".", "");
                    return v8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
