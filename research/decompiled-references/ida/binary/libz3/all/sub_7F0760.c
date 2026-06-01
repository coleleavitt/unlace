void __fastcall sub_7F0760(_QWORD *ptr)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi

  if ( ptr )
  {
    v2 = ptr[2];
    if ( v2 && (v3 = ptr[3], v4 = *(_DWORD *)(v2 + 8) == 1, --*(_DWORD *)(v2 + 8), v4) )
    {
      sub_15D7BC0(v3, v2);
      v5 = (__int64 *)ptr[1];
      if ( v5 )
        goto LABEL_5;
    }
    else
    {
      v5 = (__int64 *)ptr[1];
      if ( v5 )
      {
LABEL_5:
        v6 = *((unsigned int *)v5 - 1);
        if ( (_DWORD)v6 )
        {
          v7 = &v5[5 * v6];
          do
          {
            v10 = v5[2];
            if ( v10 )
            {
              v11 = v5[3];
              v4 = (*(_DWORD *)(v10 + 8))-- == 1;
              if ( v4 )
                sub_15D7BC0(v11, v10);
            }
            v8 = *v5;
            if ( *v5 )
            {
              v9 = v5[1];
              v4 = (*(_DWORD *)(v8 + 8))-- == 1;
              if ( v4 )
                sub_15D7BC0(v9, v8);
            }
            v5 += 5;
          }
          while ( v7 != v5 );
          v5 = (__int64 *)ptr[1];
        }
        sub_186B220(v5 - 1);
      }
    }
    sub_186B220(ptr);
  }
}

