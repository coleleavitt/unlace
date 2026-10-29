void __fastcall sub_901600(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdi
  _QWORD v12[4]; // [rsp+0h] [rbp-20h] BYREF

  if ( *(_BYTE *)(a1 + 396) )
  {
    v2 = a1 + 112;
    *(_BYTE *)(v2 + 284) = 0;
    v12[0] = 0;
    sub_161E440(v2, v12);
    v3 = v12[0];
    if ( v12[0] )
    {
      v4 = *(unsigned int *)(v12[0] - 4LL);
      if ( (_DWORD)v4 )
      {
        v5 = v12[0] + 32 * v4;
        do
        {
          sub_C13740(*(_DWORD *)(a1 + 16) + 216);
          v3 += 32;
        }
        while ( v3 != v5 );
        sub_8EA730(*(_QWORD *)(a1 + 16));
        v6 = v12[0];
        if ( v12[0] )
        {
          v7 = *(unsigned int *)(v12[0] - 4LL);
          if ( (_DWORD)v7 )
          {
            v8 = v12[0] + 32 * v7;
            do
            {
              v9 = *(_QWORD *)(v6 + 8);
              if ( v9 )
              {
                v10 = *(_QWORD *)(v6 + 16);
                if ( (*(_DWORD *)(v9 + 8))-- == 1 )
                  sub_15D7BC0(v10, v9);
              }
              v6 += 32;
            }
            while ( v8 != v6 );
            v6 = v12[0];
          }
          sub_186B220((void *)(v6 - 8));
        }
      }
      else
      {
        sub_186B220((void *)(v12[0] - 8LL));
      }
    }
  }
}

