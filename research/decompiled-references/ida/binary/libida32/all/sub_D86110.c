void __fastcall sub_D86110(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 *v3; // r12
  __int64 v4; // r15
  unsigned __int8 *v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int8 *v8; // r12
  __int64 v9; // rax
  int v10; // r12d
  _QWORD v11[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = sub_22136C0(a1, a1 + 16, a2, 72, v11);
  v3 = *(unsigned __int8 **)a1;
  v4 = v2;
  v5 = (unsigned __int8 *)(*(_QWORD *)a1 + 72LL * *(unsigned int *)(a1 + 8));
  if ( *(unsigned __int8 **)a1 != v5 )
  {
    v6 = v2;
    do
    {
      *(_BYTE *)(v6 + 64) = -1;
      v7 = v3[64];
      if ( (_BYTE)v7 != 0xFF )
      {
        ((void (__fastcall *)(__int64 *, __int64 *))funcs_D86174[v7])((__int64 *)v6, (__int64 *)v3);
        *(_BYTE *)(v6 + 64) = v3[64];
      }
      v3 += 72;
      v6 += 72;
    }
    while ( v5 != v3 );
    v8 = *(unsigned __int8 **)a1;
    v5 = (unsigned __int8 *)(*(_QWORD *)a1 + 72LL * *(unsigned int *)(a1 + 8));
    if ( *(unsigned __int8 **)a1 != v5 )
    {
      do
      {
        while ( 1 )
        {
          v5 -= 72;
          v9 = v5[64];
          if ( (_BYTE)v9 == 0xFF )
            break;
          ((void (__fastcall *)())funcs_D80626[v9])();
          if ( v8 == v5 )
            goto LABEL_9;
        }
      }
      while ( v8 != v5 );
LABEL_9:
      v5 = *(unsigned __int8 **)a1;
    }
  }
  v10 = v11[0];
  if ( (unsigned __int8 *)(a1 + 16) != v5 )
    free(v5);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v10;
}

