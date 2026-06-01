char __fastcall sub_A8EA40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void **v3; // r8
  void **v4; // r14
  void **v6; // r15
  _DWORD *v7; // r13
  int v8; // ebp
  void *v9; // rdi
  __int64 v10; // rsi
  unsigned int v11; // edx
  bool v12; // al
  __int64 v14; // [rsp+0h] [rbp-78h]
  __int64 v15; // [rsp+10h] [rbp-68h]
  __int64 v16; // [rsp+18h] [rbp-60h]
  _DWORD *v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+28h] [rbp-50h]
  int v19; // [rsp+34h] [rbp-44h]

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 10320LL) )
  {
    v2 = *(_QWORD *)(a1 + 240);
    v3 = *(void ***)(v2 + 8LL * *(unsigned int *)(a2 + 12));
    if ( !v3 )
      return v2;
    v2 = *((unsigned int *)v3 - 1);
    v4 = &v3[v2];
    if ( v3 == v4 )
      return v2;
    v17 = nullptr;
    v6 = v3;
    v19 = *(_DWORD *)(a2 + 56);
    v16 = 0;
    v15 = 0;
    v14 = a2 + 24;
    v18 = 0;
    while ( 1 )
    {
      v7 = *v6;
      if ( (void *)a2 == *v6 || v7[2] == *(_DWORD *)(a2 + 8) )
        goto LABEL_15;
      v8 = v7[14];
      v9 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a2 + 28) & 1) != 0 || (v7[7] & 1) != 0 )
        break;
      if ( *(_DWORD *)(a2 + 24) == v7[6] )
      {
LABEL_29:
        if ( (*(_BYTE *)(a2 + 44) & 1) != 0 || (v7[11] & 1) != 0 )
          v12 = (unsigned int)sub_182C7B0(v9, a2 + 40, v7 + 10) == 0;
        else
          v12 = *(_DWORD *)(a2 + 40) == v7[10];
        if ( v19 != v8 || !v12 )
          goto LABEL_10;
LABEL_15:
        if ( v4 == ++v6 )
          goto LABEL_16;
      }
      else
      {
LABEL_10:
        v10 = (__int64)(v7 + 6);
        if ( v8 )
        {
          if ( sub_3ED700((__int64)qword_1C7F2C0, v10, v14) )
          {
            if ( v16 )
            {
              if ( !sub_3ED700((__int64)qword_1C7F2C0, v16 + 24, (__int64)(v7 + 6)) )
                v7 = (_DWORD *)v16;
              ++v6;
              v16 = (__int64)v7;
              if ( v4 == v6 )
                goto LABEL_16;
            }
            else
            {
              ++v6;
              v16 = (__int64)v7;
              if ( v4 == v6 )
                goto LABEL_16;
            }
          }
          else if ( v17 )
          {
            if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v7 + 6), (__int64)(v17 + 6)) )
              v7 = v17;
            ++v6;
            v17 = v7;
            if ( v4 == v6 )
            {
LABEL_16:
              if ( v18 )
                sub_A7EB10(a1, a2, v18);
              if ( v15 )
                sub_A7EB10(a1, a2, v15);
              if ( v16 )
                sub_A7EB10(a1, a2, v16);
              LOBYTE(v2) = (_BYTE)v17;
              if ( v17 )
                LOBYTE(v2) = sub_A7EB10(a1, a2, (__int64)v17);
              return v2;
            }
          }
          else
          {
            ++v6;
            v17 = v7;
            if ( v4 == v6 )
              goto LABEL_16;
          }
        }
        else
        {
          if ( sub_3ED700((__int64)qword_1C7F2C0, v10, v14) )
          {
            if ( !v18 || sub_3ED700((__int64)qword_1C7F2C0, v18 + 24, (__int64)(v7 + 6)) )
              v18 = (__int64)v7;
            goto LABEL_15;
          }
          if ( v15 )
          {
            if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v7 + 6), v15 + 24) )
              v7 = (_DWORD *)v15;
            ++v6;
            v15 = (__int64)v7;
            if ( v4 == v6 )
              goto LABEL_16;
          }
          else
          {
            ++v6;
            v15 = (__int64)v7;
            if ( v4 == v6 )
              goto LABEL_16;
          }
        }
      }
    }
    v9 = qword_1C7F2C0;
    if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v14, v7 + 6) )
      goto LABEL_10;
    goto LABEL_29;
  }
  v2 = *(_QWORD *)(a1 + 528);
  if ( !v2 || (v11 = *(_DWORD *)(v2 - 4), v11 == *(_DWORD *)(v2 - 8)) )
  {
    sub_A8E970((unsigned int **)(a1 + 528));
    v2 = *(_QWORD *)(a1 + 528);
    v11 = *(_DWORD *)(v2 - 4);
  }
  *(_QWORD *)(v2 + 8LL * v11) = a2;
  *(_DWORD *)(v2 - 4) = v11 + 1;
  return v2;
}

