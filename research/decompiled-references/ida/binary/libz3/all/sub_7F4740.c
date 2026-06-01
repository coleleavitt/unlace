char __fastcall sub_7F4740(__int64 a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int *v4; // r12
  unsigned int v5; // eax
  __int64 v8; // rdi
  unsigned int *v9; // rbp
  unsigned int *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int i; // eax

  v4 = a3;
  LOBYTE(v5) = a2 == a4 || a2 == a3;
  if ( !(_BYTE)v5 && a3 != a4 )
  {
    v8 = *(_QWORD *)a1;
    if ( !*(_BYTE *)(v8 + 8) )
    {
      v9 = a2;
      LOBYTE(v5) = sub_7CB930(v8, a2);
      if ( (_BYTE)v5 )
      {
        LOBYTE(v5) = sub_7CB930(*(_QWORD *)a1, v4);
        if ( (_BYTE)v5 )
        {
          LOBYTE(v5) = sub_7CB930(*(_QWORD *)a1, a4);
          if ( (_BYTE)v5 )
          {
            if ( *v4 >= *a2 )
            {
              v10 = v4;
              v4 = a2;
              v9 = v10;
            }
            v11 = *(_QWORD *)(a1 + 48);
            *(_QWORD *)(v11 + 16) = v4;
            *(_QWORD *)(v11 + 24) = v9;
            *(_QWORD *)(v11 + 32) = a4;
            *(_BYTE *)(v11 + 44) = 0;
            *(_DWORD *)(v11 + 40) = 0;
            sub_7F3C60(a1);
            v12 = *(_QWORD *)a1;
            v5 = *(_DWORD *)(a1 + 64) + 1;
            *(_DWORD *)(a1 + 64) = v5;
            if ( *(_DWORD *)(v12 + 924) < v5 )
            {
              *(_DWORD *)(a1 + 64) = 0;
              for ( i = *(_DWORD *)(a1 + 56); i < *(_DWORD *)(a1 + 28); i = *(_DWORD *)(a1 + 56) )
                sub_7F4130(a1, *(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL));
              v5 = 110 * i / 0x64 + 1;
              *(_DWORD *)(a1 + 56) = v5;
            }
          }
        }
      }
    }
  }
  return v5;
}

