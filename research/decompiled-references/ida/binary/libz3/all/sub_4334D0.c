__int64 __fastcall sub_4334D0(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned int v4; // eax
  unsigned int v6; // r12d
  __int64 v7; // r15
  unsigned __int64 v8; // r13
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v16; // rdx
  int v17; // esi
  _DWORD *v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rax
  int v21; // edx
  __int64 v23; // rax
  __int64 *v25; // [rsp+8h] [rbp-40h]

  v3 = a2[1];
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 - 4);
    if ( a3 < v4 )
    {
      v6 = 0;
      v25 = (__int64 *)(a1 + 136);
      v7 = 8LL * a3;
      v8 = 8 * (a3 + (unsigned __int64)(v4 - a3 - 1));
      while ( 1 )
      {
        v12 = (__int64 *)(v7 + v3);
        v11 = *v12;
        if ( !*(_WORD *)(*v12 + 4) )
        {
          v16 = *(_QWORD *)(v11 + 16);
          v17 = *(_DWORD *)(v11 + 24);
          v18 = *(_DWORD **)(v16 + 24);
          if ( v18 )
          {
            if ( !*v18 && v18[1] == 8 && v17 == 1 )
            {
              v23 = *(_QWORD *)(v11 + 32);
              if ( !*(_WORD *)(v23 + 4) && !*(_DWORD *)(v23 + 24) )
              {
                v13 = *v12;
                v19 = *(_DWORD **)(*(_QWORD *)(v23 + 16) + 24LL);
                if ( !v19 )
                  goto LABEL_6;
                goto LABEL_17;
              }
            }
            else if ( !v17 )
            {
              v19 = *(_DWORD **)(v16 + 24);
LABEL_17:
              v13 = *v12;
              if ( *v19 == -1 )
                goto LABEL_6;
            }
          }
          else if ( !v17 )
          {
            v14 = *a2;
            v13 = *v12;
            ++*(_DWORD *)(v11 + 8);
            goto LABEL_9;
          }
        }
        v20 = *(_QWORD *)(a1 + 128);
        if ( v20 && (v21 = *(_DWORD *)(v20 - 4)) != 0 )
          v9 = (__int64 *)(v20 + 72LL * (unsigned int)(v21 - 1));
        else
          v9 = v25;
        v10 = sub_432CD0(v9, *v12);
        v11 = v10;
        v12 = (__int64 *)(v7 + a2[1]);
        v13 = *v12;
        LOBYTE(v10) = v10 != *v12;
        v6 |= v10;
LABEL_6:
        v14 = *a2;
        if ( v11 )
          ++*(_DWORD *)(v11 + 8);
        if ( !v13 )
        {
LABEL_10:
          *v12 = v11;
          if ( v8 == v7 )
            return v6;
          goto LABEL_11;
        }
LABEL_9:
        if ( (*(_DWORD *)(v13 + 8))-- != 1 )
          goto LABEL_10;
        sub_15D7BC0(v14, v13);
        *v12 = v11;
        if ( v8 == v7 )
          return v6;
LABEL_11:
        v3 = a2[1];
        v7 += 8;
      }
    }
  }
  return 0;
}

