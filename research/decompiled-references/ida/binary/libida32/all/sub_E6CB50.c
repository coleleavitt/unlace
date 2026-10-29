void __fastcall sub_E6CB50(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int v5; // r15d
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  _QWORD *v9; // rdi
  unsigned int *v10; // r13
  _DWORD *v11; // r12
  void **v12; // rbp
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  int v18; // [rsp+Ch] [rbp-8Ch]
  _QWORD *src; // [rsp+28h] [rbp-70h] BYREF
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int64 v22; // [rsp+38h] [rbp-60h]
  _QWORD v23[11]; // [rsp+40h] [rbp-58h] BYREF

  *(_QWORD *)a1 = a3;
  *(_DWORD *)(a1 + 16) = 0;
  ptr = v23;
  v22 = 0x400000000LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)(a3 + 8);
    v5 = a4;
    v18 = HIDWORD(a4);
    v23[0] = a3;
    LODWORD(v22) = 1;
    v7 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v7 )
    {
      v9 = v23;
      LODWORD(v8) = 1;
LABEL_12:
      v10 = (unsigned int *)(a1 + 20);
      v11 = (_DWORD *)(a1 + 16);
      v12 = (void **)(a1 + 8);
      while ( 1 )
      {
        v13 = (unsigned int)v8;
        v14 = v8 - 1;
        v15 = v9[v13 - 1];
        LODWORD(v22) = v14;
        v16 = *(_QWORD *)(v15 + 16);
        if ( v16 )
        {
          v17 = (*(__int64 *)(v15 + 8) >> 1) & 3;
          if ( (_DWORD)v17 == 1 )
          {
            if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 59 <= 2 )
              goto LABEL_19;
          }
          else if ( (_DWORD)v17 == 2 )
          {
            src = sub_A5DBD0(a2, v16 & 0xFFFFFFFFFFFFFFF0LL, v5) + 1;
            sub_E6B7E0(&src, &ptr, v12, v11, v10);
            v14 = v22;
            goto LABEL_19;
          }
          LODWORD(src) = v5;
          sub_E6B7E0(&src, (_BYTE *)&src + 4, v12, v11, v10);
          v14 = v22;
        }
LABEL_19:
        if ( v14 )
          LODWORD(src) = v5;
        else
          LODWORD(src) = v18;
        sub_E6B7E0(&src, (_BYTE *)&src + 4, v12, v11, v10);
        LODWORD(v8) = v22;
        v9 = ptr;
        if ( !(_DWORD)v22 )
          goto LABEL_8;
      }
    }
    v8 = 1;
    do
    {
      if ( v8 + 1 <= (unsigned __int64)HIDWORD(v22) )
      {
        *((_QWORD *)ptr + v8) = v7;
      }
      else
      {
        sub_22134E0(&ptr, v23, v8 + 1, 8);
        *((_QWORD *)ptr + (unsigned int)v22) = v7;
      }
      v8 = (unsigned int)(v22 + 1);
      LODWORD(v22) = v22 + 1;
      v7 = *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( v7 );
    v9 = ptr;
    if ( (_DWORD)v8 )
      goto LABEL_12;
LABEL_8:
    if ( v9 != v23 )
      free(v9);
  }
}

