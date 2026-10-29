void __fastcall sub_3AB720(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // r12
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // rdi
  int v9; // edx
  unsigned __int64 *v10; // r10
  unsigned __int64 *v11; // r11
  unsigned int v12; // edx
  __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  int v16; // r13d
  __int64 v17; // r14
  _QWORD *v18; // r15
  _QWORD *v19; // rcx
  __int64 v20; // r14
  __int64 v21; // r8
  _QWORD *v22; // rcx
  _QWORD *v23; // rdi
  int v24; // r8d
  bool v25; // zf
  __int64 v26; // [rsp+8h] [rbp-40h]

  v2 = &a1[a2];
  v3 = *(_QWORD *)(qword_2CCB598 + 1576);
  if ( v2 != a1 )
  {
    v4 = a1;
    v5 = qword_2CCB598;
    do
    {
      v6 = *v4;
      v7 = *(_QWORD *)(*v4 + 56);
      if ( *(_DWORD *)(*v4 + 44) == 3 )
      {
        v13 = *(_QWORD *)(v5 + 1576);
        if ( v7 >= *(_QWORD *)(v13 + 56) )
        {
          if ( !under_debugger )
            interr(40028);
          BUG();
        }
        v14 = *(_QWORD *)(v13 + 48) + 32 * v7;
        v8 = *(unsigned __int64 **)v14;
        v9 = *(_QWORD *)(v14 + 8);
        if ( v9 <= 0 )
          goto LABEL_8;
      }
      else
      {
        if ( v7 == -1 )
          goto LABEL_8;
        v8 = (unsigned __int64 *)(v6 + 56);
        v9 = 1;
      }
      v10 = v8;
      v11 = &v8[v9];
      if ( *(_QWORD *)(v3 + 88) )
      {
        v15 = *v8;
        v16 = 0;
        v17 = v5;
        while ( 1 )
        {
          v26 = v17;
          v18 = (_QWORD *)(v3 + 80);
          v19 = *(_QWORD **)(v3 + 88);
          do
          {
            while ( 1 )
            {
              v20 = v19[2];
              v21 = v19[3];
              if ( v19[4] < v15 )
                break;
              v18 = v19;
              v19 = (_QWORD *)v19[2];
              if ( !v20 )
                goto LABEL_19;
            }
            v19 = (_QWORD *)v19[3];
          }
          while ( v21 );
LABEL_19:
          v17 = v26;
          if ( (_QWORD *)(v3 + 80) != v18 )
            break;
LABEL_33:
          if ( v11 == ++v10 )
            goto LABEL_29;
LABEL_22:
          v15 = *v10;
        }
        if ( v15 < v18[4] )
          goto LABEL_21;
        v22 = (_QWORD *)v18[5];
        v23 = &v22[v18[6]];
        if ( v22 == v23 )
          goto LABEL_21;
        while ( v6 != *v22 )
        {
          if ( v23 == ++v22 )
            goto LABEL_33;
        }
        if ( v22 == v23 )
        {
LABEL_21:
          if ( ++v10 != v11 )
            goto LABEL_22;
        }
        else
        {
          ++v10;
          ++v16;
          if ( v10 != v11 )
            goto LABEL_22;
        }
LABEL_29:
        v5 = v26;
        if ( v16 )
        {
          v24 = *(_DWORD *)(v6 + 76);
          v25 = v16 == v9;
          v12 = v24 | 0x18;
          if ( v25 )
            v12 = v24 & 0xFFFFFFA6 | 8;
          goto LABEL_9;
        }
      }
      else
      {
        do
          ++v10;
        while ( v11 != v10 );
      }
LABEL_8:
      v12 = *(_DWORD *)(v6 + 76) & 0xFFFFFFE7;
LABEL_9:
      ++v4;
      *(_DWORD *)(v6 + 76) = v12;
    }
    while ( v2 != v4 );
  }
}
