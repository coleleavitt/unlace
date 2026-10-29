void __fastcall sub_C11AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rbx
  int v11; // ebp
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  int v18; // edi
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned int v24; // eax
  _QWORD v25[9]; // [rsp+0h] [rbp-48h] BYREF

  v25[0] = a2;
  v25[1] = a3;
  if ( !a2 )
    return;
  v5 = a2;
  v7 = a2 & 3;
  if ( (a2 & 3) != 0 )
    goto LABEL_17;
  a2 &= 0xFFFFFFFFFFFFFFFCLL;
  v8 = a2;
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
      goto LABEL_21;
    v9 = (unsigned __int8)(*(_WORD *)(a2 + 98) >> 4);
    if ( (_DWORD)v9 == 255 )
      v9 = (unsigned int)sub_B74880(a2);
    v10 = *(_QWORD *)(a1 + 32);
    if ( !v10 )
      goto LABEL_21;
    while ( 1 )
    {
      v11 = *(_DWORD *)(v10 + 56);
      if ( v11 == (unsigned int)sub_A4F4B0((__int64)v25) )
      {
        v12 = *(_DWORD *)(v10 + 60);
        if ( v12 == (unsigned int)sub_A4F4E0((__int64)v25) )
        {
          v15 = *(_QWORD *)(v10 + 24);
          if ( v15 )
          {
            if ( (unsigned int)sub_B76070(v15, a2, v13, v14) > (unsigned int)v9 )
              break;
          }
        }
      }
      v10 = *(_QWORD *)(v10 + 16);
      if ( !v10 )
        goto LABEL_21;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 24) + 120LL) + 8 * v9);
    if ( v8 )
    {
LABEL_21:
      sub_E33DB0(a1, *(unsigned int *)(v8 + 24), 103);
      return;
    }
    v5 = v25[0];
    if ( v25[0] )
    {
      v7 = v25[0] & 3;
LABEL_17:
      if ( v7 == 1 )
      {
        v16 = v5 & 0xFFFFFFFFFFFFFFFCLL;
        if ( v16 )
        {
          v17 = sub_C00A40(v16, a2, 1, a4, a5);
          sub_E33DB0(a1, v17, 2487);
        }
      }
      else if ( v7 == 3 )
      {
        v18 = v5 >> 3;
        if ( v18 )
        {
          v19 = *(_QWORD *)(a1 + 864);
          v20 = a1 + 856;
          if ( v19 )
          {
            v21 = (unsigned int)(v18 - 1);
            v22 = a1 + 856;
            do
            {
              while ( 1 )
              {
                v23 = (unsigned int)(*(_DWORD *)(v19 + 32) - 1);
                if ( (unsigned int)v23 < (unsigned int)v21 )
                  break;
                v22 = v19;
                v19 = *(_QWORD *)(v19 + 16);
                if ( !v19 )
                  goto LABEL_29;
              }
              v19 = *(_QWORD *)(v19 + 24);
            }
            while ( v19 );
LABEL_29:
            if ( v20 != v22 && *(_DWORD *)(v22 + 32) - 1 <= (unsigned int)v21 )
            {
              v24 = sub_C00A40(*(_QWORD *)(v22 + 96), v22, v23, v21, v20);
              sub_E33DB0(a1, v24, 2408);
            }
          }
        }
      }
    }
  }
}
