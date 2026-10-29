void __fastcall sub_7F4630(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int i; // eax

  if ( !*(_WORD *)(a2 + 4) )
  {
    v3 = a3;
    if ( !*(_WORD *)(a3 + 4) )
    {
      v4 = a2;
      if ( (unsigned __int8)sub_7CB930(*(_QWORD *)a1, (unsigned int *)a2) )
      {
        if ( *(_QWORD *)(a2 + 16) == *(_QWORD *)(v3 + 16)
          && *(_DWORD *)(a2 + 24) == *(_DWORD *)(v3 + 24)
          && (unsigned __int8)sub_7F4540((__int64 *)a1, (unsigned int *)a2, (unsigned int *)v3) )
        {
          if ( *(_DWORD *)v3 >= *(_DWORD *)a2 )
          {
            v5 = v3;
            v3 = a2;
            v4 = v5;
          }
          v6 = *(_QWORD *)(a1 + 48);
          *(_QWORD *)(v6 + 16) = v3;
          *(_QWORD *)(v6 + 24) = v4;
          *(_QWORD *)(v6 + 32) = 0;
          *(_BYTE *)(v6 + 44) = 1;
          *(_DWORD *)(v6 + 40) = 0;
          sub_7F3C60(a1);
          v7 = *(_QWORD *)a1;
          v8 = *(_DWORD *)(a1 + 64) + 1;
          *(_DWORD *)(a1 + 64) = v8;
          if ( *(_DWORD *)(v7 + 924) < v8 )
          {
            *(_DWORD *)(a1 + 64) = 0;
            for ( i = *(_DWORD *)(a1 + 56); i < *(_DWORD *)(a1 + 28); i = *(_DWORD *)(a1 + 56) )
              sub_7F4130(a1, *(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL));
            *(_DWORD *)(a1 + 56) = 110 * i / 0x64 + 1;
          }
        }
      }
    }
  }
}

