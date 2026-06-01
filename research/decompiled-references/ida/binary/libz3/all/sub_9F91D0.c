char __fastcall sub_9F91D0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 **v5; // rdx
  __int64 v6; // rax
  __int64 *v7; // r14
  __int64 v8; // r13
  void *v9; // rdi
  __int64 v10; // rbp
  char v11; // bl
  void *v12; // rdi
  unsigned int v13; // eax
  bool v14; // al
  __int64 *v15; // rbx
  __int64 *v16; // rbx
  __int64 *v17; // rbx
  __int64 *v19; // [rsp+8h] [rbp-90h]
  __int64 v20; // [rsp+10h] [rbp-88h]
  __int64 *v21; // [rsp+20h] [rbp-78h]
  __int64 *v22; // [rsp+28h] [rbp-70h]
  __int64 *v23; // [rsp+30h] [rbp-68h]
  __int64 *v24; // [rsp+38h] [rbp-60h]
  char v25; // [rsp+47h] [rbp-51h]
  __int64 v27[8]; // [rsp+58h] [rbp-40h] BYREF

  v2 = (__int64)a1;
  v3 = a1[95];
  v4 = *(unsigned int *)(a2 + 8);
  v27[0] = a2;
  v5 = (__int64 **)(v3 + 8 * v4);
  v6 = a1[2];
  if ( !*(_BYTE *)(v6 + 10320) )
  {
    LOBYTE(v6) = sub_98CB40(a1 + 102, v27);
    return v6;
  }
  v7 = *v5;
  if ( !*v5 )
    return v6;
  if ( v7 == &v7[*((unsigned int *)v7 - 1)] )
  {
    v24 = *v5;
    goto LABEL_23;
  }
  v24 = &v7[*((unsigned int *)v7 - 1)];
  v21 = v24;
  v22 = v24;
  v25 = *(_BYTE *)(a2 + 216) & 3;
  v20 = a2 + 120;
  v23 = v24;
  v19 = v24;
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
            v8 = *v7;
            v9 = qword_1C7F2C0;
            v10 = *v7 + 120;
            v11 = *(_BYTE *)(*v7 + 216) & 3;
            if ( (*(_BYTE *)(a2 + 124) & 1) != 0 || (*(_BYTE *)(v8 + 124) & 1) != 0 )
            {
              v9 = qword_1C7F2C0;
              if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v20, *v7 + 120) )
                break;
            }
            else if ( *(_DWORD *)(a2 + 120) != *(_DWORD *)(v8 + 120) )
            {
              break;
            }
            v14 = (*(_BYTE *)(a2 + 140) & 1) != 0 || (*(_BYTE *)(v8 + 140) & 1) != 0
                ? (unsigned int)sub_182C7B0(v9, a2 + 136, v8 + 136) == 0
                : *(_DWORD *)(a2 + 136) == *(_DWORD *)(v8 + 136);
            if ( !v14
              || !sub_3ED680((__int64)qword_1C7F2C0, a2 + 152, v8 + 152)
              || !sub_3ED680((__int64)qword_1C7F2C0, a2 + 184, v8 + 184)
              || v25 != v11 )
            {
              break;
            }
LABEL_16:
            if ( v19 == ++v7 )
              goto LABEL_17;
          }
          v12 = qword_1C7F2C0;
          if ( v11 )
            break;
          if ( (*(_BYTE *)(v8 + 140) & 1) != 0
            || *(_DWORD *)(v8 + 136) != 1
            || (*(_BYTE *)(a2 + 140) & 1) != 0
            || *(_DWORD *)(a2 + 136) != 1 )
          {
            LOBYTE(v13) = sub_1848D40(qword_1C7F2C0, v10, v20);
          }
          else if ( (*(_BYTE *)(v8 + 124) & 1) != 0 || (*(_BYTE *)(a2 + 124) & 1) != 0 )
          {
            v13 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v10, v20) >> 31;
          }
          else
          {
            LOBYTE(v13) = *(_DWORD *)(v8 + 120) < *(_DWORD *)(a2 + 120);
          }
          if ( (_BYTE)v13 || sub_3ED680((__int64)qword_1C7F2C0, v10, v20) && sub_927C80(v8 + 152, a2 + 152) )
          {
            if ( v19 == v23 || sub_33D280(*v23 + 120, v10) )
              v23 = v7;
            goto LABEL_16;
          }
          v16 = v22;
          if ( v19 == v22 )
          {
            v22 = v7++;
            if ( v19 == v7 )
              goto LABEL_17;
          }
          else
          {
            if ( sub_33D280(v10, *v22 + 120) )
              v16 = v7;
            ++v7;
            v22 = v16;
            if ( v19 == v7 )
              goto LABEL_17;
          }
        }
        if ( (*(_BYTE *)(v8 + 140) & 1) != 0
          || *(_DWORD *)(v8 + 136) != 1
          || (*(_BYTE *)(a2 + 140) & 1) != 0
          || *(_DWORD *)(a2 + 136) != 1 )
        {
          if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, v10, v20) )
            break;
LABEL_57:
          v12 = qword_1C7F2C0;
          goto LABEL_58;
        }
        if ( (*(_BYTE *)(v8 + 124) & 1) != 0 || (*(_BYTE *)(a2 + 124) & 1) != 0 )
        {
          if ( (int)sub_182C7B0(qword_1C7F2C0, v10, v20) < 0 )
            break;
          goto LABEL_57;
        }
        if ( *(_DWORD *)(v8 + 120) < *(_DWORD *)(a2 + 120) )
          break;
LABEL_58:
        if ( sub_3ED680((__int64)v12, v10, v20) && sub_927C80(v8 + 152, a2 + 152) )
          break;
        v17 = v24;
        if ( v19 == v24 )
        {
          v24 = v7++;
          if ( v19 == v7 )
            goto LABEL_17;
        }
        else
        {
          if ( sub_33D280(v10, *v24 + 120) )
            v17 = v7;
          ++v7;
          v24 = v17;
          if ( v19 == v7 )
            goto LABEL_17;
        }
      }
      if ( v19 != v21 )
        break;
      v21 = v7++;
      if ( v19 == v7 )
        goto LABEL_17;
    }
    v15 = v21;
    if ( sub_33D280(*v21 + 120, v10) )
      v15 = v7;
    ++v7;
    v21 = v15;
  }
  while ( v19 != v7 );
LABEL_17:
  v2 = (__int64)a1;
  if ( v23 != v7 )
    sub_9F8AD0((__int64)a1, a2, *v23);
  if ( v22 != v7 )
    sub_9F8AD0((__int64)a1, a2, *v22);
  if ( v21 != v7 )
    sub_9F8AD0((__int64)a1, a2, *v21);
LABEL_23:
  LOBYTE(v6) = (_BYTE)v24;
  if ( v24 != v7 )
    LOBYTE(v6) = sub_9F8AD0(v2, a2, *v24);
  return v6;
}

