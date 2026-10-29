void __fastcall sub_A75E40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        void *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        int a16,
        __int64 a17)
{
  _DWORD *v17; // rax
  int v18; // edx
  __int64 v19; // rdi

  if ( !*(_WORD *)(a2 + 4) )
  {
    v17 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v17 )
    {
      if ( *v17 == 5 )
      {
        v18 = v17[1];
        v19 = *(_QWORD *)(a1 + 64);
        switch ( v18 )
        {
          case 16:
            if ( *(_DWORD *)(a2 + 24) == 2 )
            {
              sub_A83560(v19, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
              return;
            }
            break;
          case 15:
            if ( *(_DWORD *)(a2 + 24) == 2 )
            {
              sub_A8AB40(
                v19,
                *(_QWORD *)(a2 + 32),
                *(_QWORD *)(a2 + 40),
                a4,
                a5,
                a6,
                a7,
                a8,
                a9,
                (_DWORD)a10,
                a11,
                a12,
                a13,
                a14,
                a15,
                a16,
                a17);
              return;
            }
            break;
          case 10:
            if ( *(_DWORD *)(a2 + 24) == 2 )
            {
              sub_A89E80(v19, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), a4, a5, a6, a7, a8, a9, (_DWORD)a10, a11, a12);
              return;
            }
            break;
          case 19:
            sub_A7A5B0(v19, a2, 19, a4, a5, a6, a7, a8, a9, (__int64)a10, a11, a12);
            return;
        }
        if ( v17[1] == 20 )
        {
          sub_A8A870(v19, a2, v18, a4, a5, a6, a7, a8, a9, (_DWORD)a10, a11);
        }
        else if ( v17[1] == 22 && *(_DWORD *)(a2 + 24) == 2 )
        {
          sub_A7F810(v19, a2, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), a5, a6, a7, a8, a9, a10, a11);
        }
      }
    }
  }
}

