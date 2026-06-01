void __fastcall sub_8F32C0(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v5; // rbp
  bool v6; // zf
  _QWORD *v7; // rax
  unsigned int *v8; // rbx
  __int64 v9; // r12
  int v10; // r14d
  char v11; // r15
  __int64 v12; // r14
  char v13; // al
  _QWORD *v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rdi
  unsigned __int64 v17; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD **)(a1 + 8912);
  if ( !v2 )
    return;
  v3 = *((unsigned int *)v2 - 1);
  if ( a2 < (unsigned int)v3 )
  {
    v5 = 24LL * a2;
    v17 = 24 * (a2 + (unsigned __int64)((unsigned int)v3 - a2 - 1) + 1);
    while ( 1 )
    {
      v7 = &v2[(unsigned __int64)v5 / 8];
      v8 = (unsigned int *)v2[(unsigned __int64)v5 / 8];
      v9 = v7[1];
      if ( v8 )
        ++v8[2];
      v10 = *((unsigned __int8 *)v7 + 16);
      v11 = *((_BYTE *)v7 + 17);
      sub_B6F780(a1);
      v12 = (unsigned int)(v10 + 2 * *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4LL * *v8));
      v13 = *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v12);
      if ( v13 == -1 )
      {
        if ( *(_QWORD *)(a1 + 8984) == qword_1C7EC50 && !*(_BYTE *)(a1 + 2416) )
        {
          *(_QWORD *)(a1 + 8984) = 2;
          *(_DWORD *)(a1 + 8992) = v12 ^ 1;
        }
      }
      else if ( !v13 )
      {
        sub_8F28B0(a1, v12, 2, 0);
      }
      if ( v11 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 7488) + 48LL))(
          *(_QWORD *)(a1 + 7488),
          *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * ((unsigned int)v12 >> 1)));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 7488) + 64LL))(*(_QWORD *)(a1 + 7488));
      }
      v6 = v8[2]-- == 1;
      if ( v6 )
      {
        v5 += 24;
        sub_15D7BC0(v9, v8);
        if ( v5 == v17 )
        {
LABEL_18:
          if ( *(_DWORD *)(a1 + 9464) == *(_DWORD *)(a1 + 9468) )
          {
            v2 = *(_QWORD **)(a1 + 8912);
            if ( v2 )
            {
              v3 = *((unsigned int *)v2 - 1);
              goto LABEL_22;
            }
          }
          return;
        }
      }
      else
      {
        v5 += 24;
        if ( v5 == v17 )
          goto LABEL_18;
      }
      v2 = *(_QWORD **)(a1 + 8912);
    }
  }
  if ( *(_DWORD *)(a1 + 9464) == *(_DWORD *)(a1 + 9468) )
  {
LABEL_22:
    if ( (_DWORD)v3 )
    {
      v14 = &v2[3 * v3];
      do
      {
        while ( 1 )
        {
          v15 = *v2;
          if ( *v2 )
          {
            v16 = v2[1];
            v6 = (*(_DWORD *)(v15 + 8))-- == 1;
            if ( v6 )
              break;
          }
          v2 += 3;
          if ( v14 == v2 )
            goto LABEL_28;
        }
        sub_15D7BC0(v16, v15);
        v2 += 3;
      }
      while ( v14 != v2 );
LABEL_28:
      v2 = *(_QWORD **)(a1 + 8912);
    }
    *((_DWORD *)v2 - 1) = 0;
  }
}

