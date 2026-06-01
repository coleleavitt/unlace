void __fastcall sub_BB84D0(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  int v5; // r13d
  __int64 v6; // rax
  _QWORD *v7; // r14
  _QWORD *v8; // r15
  _QWORD *v9; // rax
  unsigned int *v10; // rsi
  unsigned int *v11; // rdi
  _QWORD *v13; // rdx
  __int64 v14; // r13
  unsigned int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  _QWORD *v18; // rsi
  unsigned int v19; // r8d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rsi
  _QWORD *v23; // rdx
  unsigned int v24; // [rsp+0h] [rbp-84h]
  unsigned int *v25[2]; // [rsp+Ch] [rbp-78h] BYREF
  _QWORD v26[2]; // [rsp+1Ch] [rbp-68h] BYREF
  __int64 v27[11]; // [rsp+2Ch] [rbp-58h] BYREF

  if ( *(_BYTE *)(a1 + 4168) )
  {
    sub_1407670(v25, a1 + 1848, *(unsigned int *)(a1 + 4152));
    v5 = *(_DWORD *)(a1 + 4156);
    v6 = sub_180C100(a1 + 3960, 24);
    *(_QWORD *)(v6 + 8) = a1 + 4156;
    *(_QWORD *)v6 = off_1C55700;
    *(_DWORD *)(v6 + 16) = v5;
    v27[0] = v6;
    sub_BB4880((_QWORD *)(a1 + 3944), v27);
    *(_DWORD *)(a1 + 4156) = sub_966440(a1, v25[0]);
    v26[0] = v25[0];
    if ( v25[0] )
      ++v25[0][2];
    sub_BB70A0((_QWORD *)(a2 + 8), v26);
    v7 = *(_QWORD **)(a1 + 1136);
    v8 = &v7[2 * *(unsigned int *)(a1 + 1144)];
    if ( v7 != v8 )
    {
      while ( *v7 <= 1u )
      {
        v7 += 2;
        if ( v8 == v7 )
          goto LABEL_15;
      }
      if ( v8 != v7 )
      {
        do
        {
          if ( *((_DWORD *)v7 + 2) )
          {
            sub_1407720(v26, a1 + 1848, *v7);
            v13 = *(_QWORD **)(a2 + 8);
            v14 = v26[0];
            if ( v13 )
            {
              v15 = *((_DWORD *)v13 - 1);
              if ( v15 == *((_DWORD *)v13 - 2) )
              {
                v19 = (3 * v15 + 1) >> 1;
                v20 = 8 * v19 + 8;
                if ( 8 * v15 + 8 >= (unsigned int)v20 || v15 >= v19 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_154526(v27, "Overflow encountered when expanding vector", v3);
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v27);
                  sub_233E40((__int64)v27);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v24 = (3 * v15 + 1) >> 1;
                v21 = (unsigned int *)sub_186B300(v13 - 1, v20);
                v22 = v21[1];
                v13 = v21 + 2;
                *(_QWORD *)(a2 + 8) = v21 + 2;
                *v21 = v24;
                LODWORD(v21) = v22;
                v18 = &v13[v22];
                v17 = (_DWORD)v21 + 1;
              }
              else
              {
                v16 = v15;
                v17 = v15 + 1;
                v18 = &v13[v16];
              }
            }
            else
            {
              v23 = (_QWORD *)sub_186B270(0x18u);
              *v23 = 2;
              v17 = 1;
              v13 = v23 + 1;
              *(_QWORD *)(a2 + 8) = v13;
              v18 = v13;
            }
            *v18 = v14;
            *((_DWORD *)v13 - 1) = v17;
          }
          v9 = v7 + 2;
          if ( v8 == v7 + 2 )
            break;
          while ( 1 )
          {
            v7 = v9;
            if ( *v9 > 1u )
              break;
            v9 += 2;
            if ( v8 == v9 )
              goto LABEL_15;
          }
        }
        while ( v9 != v8 );
      }
    }
LABEL_15:
    v10 = v25[0];
    if ( v25[0] )
    {
      v11 = v25[1];
      if ( v25[0][2]-- == 1 )
        sub_15D7BC0(v11, v10);
    }
  }
}

