unsigned __int64 __fastcall sub_15B84F0(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v6; // r13
  char v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 *v10; // r15
  __int64 *v11; // r14
  __int64 v12; // rdi
  unsigned __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  void *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  char v27; // [rsp+Bh] [rbp-6Dh]
  char v28; // [rsp+Ch] [rbp-6Ch]
  unsigned __int64 v29; // [rsp+18h] [rbp-60h]
  void *v30[11]; // [rsp+20h] [rbp-58h] BYREF

  v28 = a4;
  v27 = 0;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    result = a2;
    if ( (_BYTE)a4 )
      return 0;
    return result;
  }
  v6 = a3;
  v7 = a4;
  v8 = a2;
  v9 = 64;
  v10 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  while ( 1 )
  {
    v11 = v10;
    v12 = *v10;
    if ( !v7 )
      goto LABEL_4;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
    {
      if ( *(_BYTE *)(v12 + 16) != 42 )
        v12 = sub_F63050(v12, a2, a3, a4);
      result = *(_QWORD *)(v12 + 32);
      v10 = (__int64 *)(result & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_35;
    }
    a2 = (unsigned __int64)a1;
    sub_15B7680((__int64)v30, (__int64)a1, v8, (*a1 + 18248) | 6);
    v21 = v30[0];
    if ( v30[1] != v30[0] )
    {
      v22 = sub_F6A860(*v10);
      v21 = v30[0];
      if ( v22 )
      {
        a3 = *(unsigned int *)(v22 + 20);
        if ( (_DWORD)a3 )
        {
          a3 = *(_DWORD *)(v22 + 48) & 0x7FFFFFFF;
          if ( (_DWORD)a3 == 1 )
          {
            result = *(_QWORD *)(v22 + 56);
            v10 = (__int64 *)(result & 0xFFFFFFFFFFFFFFF0LL);
            if ( v30[0] )
            {
              v29 = result;
              operator delete(v30[0]);
              result = v29;
            }
LABEL_35:
            if ( v10 )
            {
              if ( v8 == result )
                return result;
              v27 = v7;
              v6 = 0;
              goto LABEL_11;
            }
            goto LABEL_43;
          }
        }
      }
    }
    if ( v21 )
    {
      operator delete(v21);
LABEL_43:
      v12 = *v11;
      goto LABEL_4;
    }
    v12 = *v10;
LABEL_4:
    if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 43 <= 1 )
      goto LABEL_5;
    v15 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v16 = *(unsigned __int8 *)(v15 + 16);
    if ( (unsigned int)(v16 - 43) <= 1 )
    {
      v12 = sub_F63050(v12, a2, v16, v15);
      if ( v12 )
      {
LABEL_5:
        while ( 1 )
        {
          result = *(_QWORD *)(v12 + 32);
          if ( (*(_BYTE *)(v12 + 18) & 0x10) == 0 )
            break;
          while ( 1 )
          {
            v12 = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 43 <= 1 )
              break;
            v14 = sub_F63050(v12, a2, a3, a4);
            result = *(_QWORD *)(v14 + 32);
            if ( (*(_BYTE *)(v14 + 18) & 0x10) == 0 )
              goto LABEL_8;
          }
        }
LABEL_8:
        v6 = 0;
        goto LABEL_9;
      }
      v12 = *v11;
      v17 = *(_QWORD *)(*v11 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v15 = *(_QWORD *)v17;
      v16 = *(unsigned __int8 *)(*(_QWORD *)v17 + 16LL);
    }
    if ( (_BYTE)v16 != 13 || !v6 || ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) != 0x1F1 )
    {
      v18 = sub_F57E80(v12);
      if ( !v18 )
        break;
      if ( *(_BYTE *)(v18 + 16) != 16 )
        break;
      if ( !v6 )
        break;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 16 )
        break;
      if ( (*(_WORD *)v6 & 0x1FF) != 0x47 )
        break;
      v23 = *(_QWORD *)(v6 + 16);
      if ( (*(_BYTE *)(v23 + 28) & 0x7Fu) - 40 > 6 )
        break;
      v6 = sub_B73640(v23);
      if ( !v6 )
        break;
    }
    a2 = v6;
    result = sub_15B8230(a1, v6, v16, v15, a5, a6);
LABEL_9:
    if ( result == v8 )
      goto LABEL_29;
    v10 = (__int64 *)(result & 0xFFFFFFFFFFFFFFF0LL);
    if ( (result & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
LABEL_12:
      if ( !v28 )
        return result;
      goto LABEL_13;
    }
LABEL_11:
    v8 = result;
    if ( !--v9 )
      goto LABEL_12;
  }
  v19 = *v11;
  if ( *v11 )
  {
    if ( *(_BYTE *)(v19 + 16) == 50 )
    {
      v20 = *(_QWORD *)(v19 + 32);
      if ( v20 )
      {
        if ( (*(_QWORD *)(v20 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          if ( !(_BYTE)byte_2CCC480 && __cxa_guard_acquire(&byte_2CCC480) )
          {
            a2 = 0xFFFFFFFE00000000LL;
            qword_2CCC4A0 &= 0xFFFFFFFE00000000LL;
            qword_2CCC4A8 = 0;
            qword_2CCC4B8 = 0;
            __cxa_guard_release(&byte_2CCC480);
          }
          a4 = *(_QWORD *)(v20 + 72) & 0xFFFFFFFFFFFFFFF8LL;
          if ( a4 )
          {
            a3 = *(_QWORD *)(v20 + 72) & 0xFFFFFFFFFFFFFFF8LL;
            v24 = (*(__int64 *)(v20 + 72) >> 1) & 3;
            if ( v24 == 1 )
            {
              v25 = *(_QWORD *)(a4 + 72);
              a3 = 0;
              if ( !v25 )
                goto LABEL_54;
              a3 = *(_QWORD *)(a4 + 72) & 0xFFFFFFFFFFFFFFF8LL;
              if ( ((v25 >> 1) & 3) != 2 || !a3 )
                goto LABEL_54;
            }
            else if ( v24 != 2 )
            {
              goto LABEL_54;
            }
            a3 = *(_QWORD *)(a3 + 8);
          }
          else
          {
            a3 = (unsigned __int64)&qword_2CCC4A0;
          }
LABEL_54:
          if ( (*(_DWORD *)a3 & 0x7FFFFFFF) != 1 )
            goto LABEL_29;
          result = *(_QWORD *)(a3 + 8);
          goto LABEL_8;
        }
      }
    }
  }
LABEL_29:
  result = v8;
  if ( !v28 )
    return result;
LABEL_13:
  if ( !v27 )
    return 0;
  return result;
}
