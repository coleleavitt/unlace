char __fastcall sub_9C9700(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 **v5; // rdx
  __int64 v6; // rax
  __int64 *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r12
  void *v10; // rdi
  __int64 v11; // rbx
  char v12; // r13
  bool v13; // al
  unsigned int v14; // eax
  __int64 *v15; // r12
  __int64 *v16; // r13
  __int64 *v17; // r13
  int v19[2]; // [rsp+8h] [rbp-90h]
  void *v20; // [rsp+10h] [rbp-88h]
  __int64 *v21; // [rsp+20h] [rbp-78h]
  __int64 *v22; // [rsp+28h] [rbp-70h]
  __int64 *v23; // [rsp+30h] [rbp-68h]
  __int64 *v24; // [rsp+38h] [rbp-60h]
  char v25; // [rsp+47h] [rbp-51h]
  char v27[8]; // [rsp+58h] [rbp-40h] BYREF

  v2 = (__int64)a1;
  v3 = a1[79];
  v4 = *(unsigned int *)(a2 + 8);
  *(_QWORD *)v27 = a2;
  v5 = (__int64 **)(v3 + 8 * v4);
  v6 = a1[2];
  if ( !*(_BYTE *)(v6 + 10320) )
  {
    LOBYTE(v6) = sub_98CCC0(a1 + 86, v27);
    return v6;
  }
  v7 = *v5;
  if ( !*v5 )
    return v6;
  v8 = *((unsigned int *)v7 - 1);
  if ( v7 == &v7[v8] )
  {
    v22 = v7;
    goto LABEL_22;
  }
  v22 = &v7[v8];
  v23 = v22;
  v21 = v22;
  v25 = *(_BYTE *)(a2 + 88) & 3;
  v20 = (void *)(a2 + 56);
  v24 = v22;
  *(_QWORD *)v19 = v22;
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
            v9 = *v7;
            v10 = qword_1C7F2C0;
            v11 = *v7 + 56;
            v12 = *(_BYTE *)(*v7 + 88) & 3;
            if ( (*(_BYTE *)(a2 + 60) & 1) != 0 || (*(_BYTE *)(v9 + 60) & 1) != 0 )
            {
              v10 = qword_1C7F2C0;
              if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v20, *v7 + 56) )
                break;
            }
            else if ( *(_DWORD *)(a2 + 56) != *(_DWORD *)(v9 + 56) )
            {
              break;
            }
            v13 = (*(_BYTE *)(a2 + 76) & 1) != 0 || (*(_BYTE *)(v9 + 76) & 1) != 0
                ? (unsigned int)sub_182C7B0(v10, a2 + 72, v9 + 72) == 0
                : *(_DWORD *)(a2 + 72) == *(_DWORD *)(v9 + 72);
            if ( v25 != v12 || !v13 )
              break;
LABEL_15:
            if ( *(__int64 **)v19 == ++v7 )
              goto LABEL_16;
          }
          if ( v12 )
            break;
          if ( (*(_BYTE *)(v9 + 76) & 1) == 0
            && *(_DWORD *)(v9 + 72) == 1
            && (*(_BYTE *)(a2 + 76) & 1) == 0
            && *(_DWORD *)(a2 + 72) == 1 )
          {
            if ( (*(_BYTE *)(v9 + 60) & 1) != 0 || (*(_BYTE *)(a2 + 60) & 1) != 0 )
            {
              if ( (int)sub_182C7B0(qword_1C7F2C0, v11, v20) >= 0 )
                goto LABEL_46;
            }
            else if ( *(_DWORD *)(v9 + 56) >= *(_DWORD *)(a2 + 56) )
            {
              goto LABEL_46;
            }
LABEL_12:
            if ( *(__int64 **)v19 == v24 || sub_3ED700((__int64)qword_1C7F2C0, *v24 + 56, v11) )
              v24 = v7;
            goto LABEL_15;
          }
          if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, v11, v20) )
            goto LABEL_12;
LABEL_46:
          v16 = v21;
          if ( *(__int64 **)v19 == v21 )
          {
            v21 = v7++;
            if ( *(__int64 **)v19 == v7 )
              goto LABEL_16;
          }
          else
          {
            if ( sub_3ED700((__int64)qword_1C7F2C0, v11, *v21 + 56) )
              v16 = v7;
            ++v7;
            v21 = v16;
            if ( *(__int64 **)v19 == v7 )
              goto LABEL_16;
          }
        }
        if ( (*(_BYTE *)(v9 + 76) & 1) != 0
          || *(_DWORD *)(v9 + 72) != 1
          || (*(_BYTE *)(a2 + 76) & 1) != 0
          || *(_DWORD *)(a2 + 72) != 1 )
        {
          LOBYTE(v14) = sub_1848D40(qword_1C7F2C0, v11, v20);
        }
        else if ( (*(_BYTE *)(v9 + 60) & 1) != 0 || (*(_BYTE *)(a2 + 60) & 1) != 0 )
        {
          v14 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v11, v20) >> 31;
        }
        else
        {
          LOBYTE(v14) = *(_DWORD *)(v9 + 56) < *(_DWORD *)(a2 + 56);
        }
        if ( !(_BYTE)v14 )
          break;
        v15 = v23;
        if ( *(__int64 **)v19 == v23 )
        {
          v23 = v7++;
          if ( *(__int64 **)v19 == v7 )
            goto LABEL_16;
        }
        else
        {
          if ( sub_3ED700((__int64)qword_1C7F2C0, *v23 + 56, v11) )
            v15 = v7;
          ++v7;
          v23 = v15;
          if ( *(__int64 **)v19 == v7 )
            goto LABEL_16;
        }
      }
      v17 = v22;
      if ( *(__int64 **)v19 != v22 )
        break;
      v22 = v7++;
      if ( *(__int64 **)v19 == v7 )
        goto LABEL_16;
    }
    if ( sub_3ED700((__int64)qword_1C7F2C0, v11, *v22 + 56) )
      v17 = v7;
    ++v7;
    v22 = v17;
  }
  while ( *(__int64 **)v19 != v7 );
LABEL_16:
  v2 = (__int64)a1;
  if ( v24 != v7 )
    sub_9B5EF0((__int64)a1, a2, *v24);
  if ( v21 != v7 )
    sub_9B5EF0((__int64)a1, a2, *v21);
  if ( v23 != v7 )
    sub_9B5EF0((__int64)a1, a2, *v23);
LABEL_22:
  LOBYTE(v6) = (_BYTE)v22;
  if ( v7 != v22 )
    LOBYTE(v6) = sub_9B5EF0(v2, a2, *v22);
  return v6;
}

