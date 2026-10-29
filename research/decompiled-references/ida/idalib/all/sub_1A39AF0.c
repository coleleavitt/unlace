char __fastcall sub_1A39AF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  _QWORD *v21; // rdi
  unsigned __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9

  v2 = a2;
  v3 = *(unsigned int *)(a1 + 10152);
  if ( (_DWORD)v3 && (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v3 - 40)) != 0 )
  {
    sub_A93970(*(_QWORD *)(a1 + 248), (_BYTE *)a2, v4, 1);
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 8);
    if ( (v13 & 6) != 0 )
      *(_QWORD *)(a2 + 8) = v13 & 0xFFFFFFFFFFFFFFF8LL | 1;
  }
  LOBYTE(v5) = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(unsigned __int8)v5 - 68 <= 6 )
  {
    v6 = *(_QWORD *)(a2 + 56);
    v7 = (__int64 *)(v6 + 24);
    v8 = v6 + 8LL * (*(_DWORD *)(v6 + 20) & 0x1FFFFFFF) + 24;
    if ( v8 != v6 + 24 )
    {
      do
      {
        a2 = *v7++;
        sub_1A39AF0(a1, a2);
      }
      while ( (__int64 *)v8 != v7 );
      LOBYTE(v5) = *(_BYTE *)(v2 + 28) & 0x7F;
    }
  }
  if ( (_BYTE)v5 == 62 )
  {
    LOBYTE(v5) = sub_B8D940(v2);
    if ( (_BYTE)v5 )
    {
      if ( *(char *)(v2 + 76) >= 0 )
      {
        sub_B7E870(v2, a2, v9, v10, v11, v12);
        v18 = sub_B7E870(v2, a2, v14, v15, v16, v17);
        if ( !v18 )
          v18 = (_QWORD *)v2;
        v5 = sub_B8E970((__int64)(v18 + 8));
        v19 = v5;
        if ( v5 )
        {
          if ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x21 )
          {
LABEL_22:
            v20 = *(_QWORD *)(v19 + 8);
            if ( (v20 & 6) != 0 )
              *(_QWORD *)(v19 + 8) = v20 & 0xFFFFFFFFFFFFFFF8LL | 1;
            v21 = (_QWORD *)(*(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(v2 + 16) & 4) != 0 )
              v21 = (_QWORD *)*v21;
            v22 = sub_B8EAA0((__int64)v21);
            if ( (sub_B94670(v22, *(_QWORD *)(v19 + 40), v23, v24, v25, v26) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
              sub_B94A80(v22, v19, v27, v28, v29, v30);
            while ( 1 )
            {
              v5 = *(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v19 = v5;
              if ( !v5 )
                break;
              if ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x21 )
                goto LABEL_22;
            }
          }
          else
          {
            while ( 1 )
            {
              v5 = *(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v19 = v5;
              if ( !v5 )
                break;
              if ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x21 )
                goto LABEL_22;
            }
          }
        }
      }
    }
  }
  return v5;
}
