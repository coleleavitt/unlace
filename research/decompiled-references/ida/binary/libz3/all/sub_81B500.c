__int64 __fastcall sub_81B500(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // eax
  _DWORD *v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // r14
  char *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 *v17; // r15
  __int64 v18; // rbp
  int v19; // eax
  _DWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-40h]

  v3 = a1 + 112;
  v4 = sub_15F0200(a1 + 112);
  v5 = *(_DWORD **)(a2 + 24);
  if ( !v5 || v4 != *v5 || v5[1] != 3 )
    return 0;
  v7 = sub_15FCC40(v3, a2);
  v8 = *(_QWORD *)(a1 + 80);
  v22 = v7;
  v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 440LL);
  v10 = v9 == sub_79F010 ? v8 + 1592 : ((__int64 (*)(void))v9)();
  v11 = *(_QWORD *)sub_13D3750(v10, a2);
  if ( !v11 )
    return 0;
  v12 = v11 + 8LL * *(unsigned int *)(v11 - 4);
  if ( v12 == v11 )
    return 0;
  while ( 1 )
  {
    v13 = (char *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 176LL) + 64LL) + 88LL);
    if ( *(int *)v13 >> 8 != -1 )
    {
      while ( *(_DWORD *)(a1 + 12) != *v13 )
      {
        v13 = *((char **)v13 + 1);
        if ( !v13 )
          goto LABEL_17;
      }
      v14 = *(int *)v13 >> 8;
      if ( v14 != -1 )
      {
        do
        {
          v15 = v14;
          v16 = v14;
          v14 = *(_DWORD *)(*(_QWORD *)(a1 + 336) + 4LL * v14);
        }
        while ( v16 != v14 );
        v17 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 312) + 8 * v15) + 8LL);
        if ( v17 )
        {
          v18 = *v17;
          if ( !*(_WORD *)(*v17 + 4) )
          {
            v19 = sub_15F0200(v3);
            if ( !*(_WORD *)(v18 + 4) )
            {
              v20 = *(_DWORD **)(*(_QWORD *)(v18 + 16) + 24LL);
              if ( v20 )
              {
                if ( v19 == *v20 && !v20[1] )
                {
                  v21 = 0;
                  if ( !*(_WORD *)(*v17 + 4) )
                    v21 = *(_QWORD *)(*v17 + 16);
                  if ( v22 != v21 )
                    return 1;
                }
              }
            }
          }
        }
      }
    }
LABEL_17:
    v11 += 8;
    if ( v12 == v11 )
      return 0;
  }
}

