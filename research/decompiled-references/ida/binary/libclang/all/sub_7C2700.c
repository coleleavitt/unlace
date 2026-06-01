__int16 __fastcall sub_7C2700(__int64 a1, __int64 a2)
{
  __int64 **v3; // rax
  __int64 *v4; // rbx
  unsigned __int64 v5; // rax
  __int64 *i; // rbp
  __int64 v7; // rdx
  int v8; // r13d
  int v9; // r15d
  __int64 v10; // rdi
  _WORD *v11; // rdx

  v3 = (__int64 **)sub_79A2B0(a2);
  v4 = *v3;
  v5 = *((unsigned int *)v3 + 2);
  for ( i = &v4[v5]; i != v4; ++v4 )
  {
    v5 = *(unsigned __int16 *)(*v4 + 32);
    if ( (unsigned __int16)v5 > 0x120u )
    {
      LOWORD(v5) = v5 - 406;
      if ( (unsigned __int16)v5 <= 7u )
      {
        v7 = 133;
        if ( _bittest64(&v7, v5) )
        {
LABEL_8:
          v8 = 0;
          LOWORD(v5) = sub_7652A0(*v4, *(_QWORD *)a1, a1 + 8);
          v9 = *(_DWORD *)(a1 + 32);
          if ( v9 )
          {
            do
            {
              v10 = *(_QWORD *)a1;
              v11 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
              if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v11 > 1u )
              {
                LOWORD(v5) = 8224;
                *v11 = 8224;
                *(_QWORD *)(v10 + 32) += 2LL;
              }
              else
              {
                LOWORD(v5) = sub_26240F0(v10, "  ", 2);
              }
              ++v8;
            }
            while ( v9 != v8 );
          }
        }
      }
    }
    else if ( (unsigned __int16)v5 > 0x11Eu )
    {
      goto LABEL_8;
    }
  }
  return v5;
}

