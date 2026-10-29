char __fastcall sub_9CAFB0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 **v5; // rdx
  __int64 v6; // rax
  __int64 *v7; // r15
  __int64 v8; // rdx
  __int64 *v9; // r13
  __int64 v10; // r12
  void *v11; // rdi
  __int64 v12; // rbx
  char v13; // bp
  unsigned int v14; // eax
  void *v16; // rdi
  bool v17; // al
  __int64 *v18; // rbp
  __int64 *v19; // rbp
  __int64 *v20; // rbp
  __int64 v22; // [rsp+0h] [rbp-88h]
  __int64 *v23; // [rsp+10h] [rbp-78h]
  __int64 *v24; // [rsp+18h] [rbp-70h]
  __int64 *v25; // [rsp+20h] [rbp-68h]
  __int64 *v26; // [rsp+28h] [rbp-60h]
  char v27; // [rsp+37h] [rbp-51h]
  char v29[8]; // [rsp+48h] [rbp-40h] BYREF

  v2 = (__int64)a1;
  v3 = a1[87];
  v4 = *(unsigned int *)(a2 + 8);
  *(_QWORD *)v29 = a2;
  v5 = (__int64 **)(v3 + 8 * v4);
  v6 = a1[2];
  if ( !*(_BYTE *)(v6 + 10320) )
  {
    LOBYTE(v6) = sub_98CE40(a1 + 94, v29);
    return v6;
  }
  v7 = *v5;
  if ( !*v5 )
    return v6;
  v8 = *((unsigned int *)v7 - 1);
  v9 = &v7[v8];
  if ( v7 == v9 )
  {
    v25 = v7;
    goto LABEL_23;
  }
  v25 = &v7[v8];
  v26 = v25;
  v23 = v25;
  v27 = *(_BYTE *)(a2 + 152) & 3;
  v24 = v25;
  v22 = a2 + 88;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v10 = *v7;
            v11 = qword_1C7F2C0;
            v12 = *v7 + 88;
            v13 = *(_BYTE *)(*v7 + 152) & 3;
            if ( (*(_BYTE *)(a2 + 92) & 1) != 0 || (*(_BYTE *)(v10 + 92) & 1) != 0 )
            {
              v11 = qword_1C7F2C0;
              if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v22, *v7 + 88) )
                goto LABEL_8;
            }
            else if ( *(_DWORD *)(a2 + 88) != *(_DWORD *)(v10 + 88) )
            {
              goto LABEL_8;
            }
            if ( (*(_BYTE *)(a2 + 108) & 1) != 0 || (*(_BYTE *)(v10 + 108) & 1) != 0
               ? (unsigned int)sub_182C7B0(v11, a2 + 104, v10 + 104) == 0
               : *(_DWORD *)(a2 + 104) == *(_DWORD *)(v10 + 104) )
            {
              v16 = qword_1C7F2C0;
              if ( (*(_BYTE *)(a2 + 124) & 1) != 0 || (*(_BYTE *)(v10 + 124) & 1) != 0 )
              {
                v16 = qword_1C7F2C0;
                v17 = (unsigned int)sub_182C7B0(qword_1C7F2C0, a2 + 120, v10 + 120) == 0;
              }
              else
              {
                v17 = *(_DWORD *)(a2 + 120) == *(_DWORD *)(v10 + 120);
              }
              if ( v17 )
                break;
            }
LABEL_8:
            if ( v13 )
              goto LABEL_40;
LABEL_9:
            if ( (*(_BYTE *)(v10 + 108) & 1) != 0
              || *(_DWORD *)(v10 + 104) != 1
              || (*(_BYTE *)(a2 + 108) & 1) != 0
              || *(_DWORD *)(a2 + 104) != 1 )
            {
              LOBYTE(v14) = sub_1848D40(qword_1C7F2C0, v12, v22);
            }
            else if ( (*(_BYTE *)(v10 + 92) & 1) != 0 || (*(_BYTE *)(a2 + 92) & 1) != 0 )
            {
              v14 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v12, v22) >> 31;
            }
            else
            {
              LOBYTE(v14) = *(_DWORD *)(v10 + 88) < *(_DWORD *)(a2 + 88);
            }
            if ( (_BYTE)v14
              || sub_3ED680((__int64)qword_1C7F2C0, v12, v22) && sub_3ED700((__int64)qword_1C7F2C0, v10 + 120, a2 + 120) )
            {
              if ( v9 == v24 || sub_927C80(*v24 + 88, v12) )
                v24 = v7;
              goto LABEL_16;
            }
            v20 = v23;
            if ( v9 == v23 )
            {
              v23 = v7++;
              if ( v9 == v7 )
                goto LABEL_17;
            }
            else
            {
              if ( sub_927C80(v12, *v23 + 88) )
                v20 = v7;
              ++v7;
              v23 = v20;
              if ( v9 == v7 )
                goto LABEL_17;
            }
          }
          if ( (*(_BYTE *)(a2 + 140) & 1) == 0 && (*(_BYTE *)(v10 + 140) & 1) == 0 )
          {
            if ( *(_DWORD *)(a2 + 136) == *(_DWORD *)(v10 + 136) )
              goto LABEL_38;
            goto LABEL_8;
          }
          if ( (unsigned int)sub_182C7B0(v16, a2 + 136, v10 + 136) )
            goto LABEL_8;
LABEL_38:
          if ( v27 != v13 )
            break;
LABEL_16:
          if ( v9 == ++v7 )
            goto LABEL_17;
        }
        if ( !v13 )
          goto LABEL_9;
LABEL_40:
        if ( !sub_927C80(v12, v22) )
          break;
        v18 = v26;
        if ( v9 == v26 )
        {
          v26 = v7++;
          if ( v9 == v7 )
            goto LABEL_17;
        }
        else
        {
          if ( sub_927C80(*v26 + 88, v12) )
            v18 = v7;
          ++v7;
          v26 = v18;
          if ( v9 == v7 )
            goto LABEL_17;
        }
      }
      v19 = v25;
      if ( v9 != v25 )
        break;
      v25 = v7++;
      if ( v9 == v7 )
        goto LABEL_17;
    }
    if ( sub_927C80(v12, *v25 + 88) )
      v19 = v7;
    ++v7;
    v25 = v19;
  }
  while ( v9 != v7 );
LABEL_17:
  v2 = (__int64)a1;
  if ( v24 != v7 )
    sub_9B3B50((__int64)a1, a2, *v24);
  if ( v23 != v7 )
    sub_9B3B50((__int64)a1, a2, *v23);
  if ( v26 != v7 )
    sub_9B3B50((__int64)a1, a2, *v26);
LABEL_23:
  LOBYTE(v6) = (_BYTE)v25;
  if ( v7 != v25 )
    LOBYTE(v6) = sub_9B3B50(v2, a2, *v25);
  return v6;
}

