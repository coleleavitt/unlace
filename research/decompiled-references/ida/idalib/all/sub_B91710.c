char __fastcall sub_B91710(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // al
  __int64 v5; // rax
  __int64 *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rbx
  int *v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  _QWORD *v15; // r13
  unsigned __int64 v16; // r14
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 *v19; // rcx
  __int64 v20; // rax
  char v21; // dl
  __int64 v22; // rbx
  unsigned int v23; // eax
  _QWORD *v24; // rcx
  __int64 v26[8]; // [rsp+0h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( (__int64 *)v2 == a2 )
  {
    if ( *(__int64 **)(a1 + 24) == a2 )
      *(_OWORD *)(a1 + 16) = 0;
    else
      *(_QWORD *)(a1 + 16) = a2[1] & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(v2 + 8);
      if ( (__int64 *)(v3 & 0xFFFFFFFFFFFFFFF8LL) == a2 )
        break;
      v2 = *(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    }
    *(_QWORD *)(v2 + 8) = a2[1] & 0xFFFFFFFFFFFFFFF8LL | v3 & 7;
    if ( *(__int64 **)(a1 + 24) == a2 )
      *(_QWORD *)(a1 + 24) = v2;
  }
  v4 = *((_BYTE *)a2 + 28);
  a2[1] &= 7uLL;
  LODWORD(v5) = (v4 & 0x7F) - 18;
  if ( (unsigned int)v5 <= 0x3F )
  {
    v6 = a2;
    LOBYTE(v5) = sub_B87DC0((__int64)a2);
    if ( !(_BYTE)v5 )
    {
      if ( a2[5] )
      {
        v11 = a2[2] & 0xFFFFFFFFFFFFFFF8LL;
        if ( (a2[2] & 4) != 0 )
          v11 = *(_QWORD *)v11;
        while ( 1 )
        {
          v12 = *(int **)sub_B91570(v11, (__int64)a2, v7, v8, v9, v10);
          if ( !v12 )
            goto LABEL_22;
          a2 = v26;
          v26[0] = v6[5];
          v13 = sub_B91410((__int64)v12, v26);
          v14 = *(_QWORD *)(v13 + 8);
          v15 = (_QWORD *)v13;
          if ( (v14 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            break;
LABEL_34:
          *v15 = -2;
          v23 = *v12;
          ++v12[1];
          *v12 = (2 * (v23 >> 1) - 2) | v23 & 1;
LABEL_22:
          LOBYTE(v5) = *(_BYTE *)(v11 + 8);
          v21 = v5 & 0x7F;
          if ( (v5 & 0x7F) == 0x3E )
          {
            if ( *(char *)(v11 + 12) < 0 )
              return v5;
          }
          else
          {
            LOBYTE(v5) = v5 & 0x7D;
            if ( (_BYTE)v5 != 4 && v21 != 25 )
              return v5;
          }
          v5 = sub_B8C1B0(v11);
          v22 = *(_QWORD *)(v5 + 16);
          if ( (v22 & 4) != 0 )
          {
            v11 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
            if ( !v11 )
              return v5;
          }
          else
          {
            v11 = v22 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v11 )
              return v5;
          }
        }
        v16 = v14 & 0xFFFFFFFFFFFFFFFCLL;
        v17 = sub_B8C360((__int64 *)(v13 + 8));
        a2 = v26;
        v18 = nullptr;
        v26[0] = 0;
LABEL_15:
        v19 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v16 & 4) != 0 )
        {
          while ( v19 )
          {
            if ( v6 == (__int64 *)*v19 )
            {
              v16 = v19[1];
              v19[1] = *(_QWORD *)(v17 + 17496) | 4LL;
              *(_QWORD *)(v17 + 17496) = v19;
              goto LABEL_15;
            }
            *a2 = v16;
            v16 = v19[1];
            v18 = a2;
            a2 = v19 + 1;
            v19 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
            if ( (v16 & 4) == 0 )
              goto LABEL_19;
          }
        }
        else
        {
LABEL_19:
          if ( v6 == v19 )
          {
            if ( v18 )
            {
              v24 = (_QWORD *)(*v18 & 0xFFFFFFFFFFFFFFF8LL);
              *v18 = *v24 & 0xFFFFFFFFFFFFFFFBLL;
              a2 = (__int64 *)(*(_QWORD *)(v17 + 17496) | 4LL);
              v24[1] = a2;
              *(_QWORD *)(v17 + 17496) = v24;
            }
LABEL_21:
            v20 = v26[0] | v15[1] & 3LL;
            v15[1] = v20;
            if ( (v20 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              goto LABEL_22;
            goto LABEL_34;
          }
        }
        *a2 = v16;
        goto LABEL_21;
      }
    }
  }
  return v5;
}
