__int64 __fastcall sub_19CD8C0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 result; // rax
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 *v27; // rax
  unsigned __int64 *v28; // rax
  __int64 *v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 *v32; // rax
  __int64 v33; // rcx

  v3 = sub_BFBC70(*(_QWORD *)(a2 + 32));
  if ( !v3 )
    return (unsigned int)sub_BFE6E0(a2, *(_QWORD *)a1, 2, a3) != 0;
  v5 = v3;
  if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 34 > 5 )
    return (unsigned int)sub_BFE6E0(a2, *(_QWORD *)a1, 2, a3) != 0;
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = (unsigned int)*(unsigned __int8 *)(v6 + 16) - 25;
  if ( (unsigned int)v7 > 1 )
    v6 = sub_F63050(v6, a2, v7, v4);
  if ( !sub_F673B0(*(_QWORD *)(*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFFFFF0LL)) )
    return (unsigned int)sub_BFE6E0(a2, *(_QWORD *)a1, 2, a3) != 0;
  v11 = *(_DWORD *)(a1 + 12);
  v12 = (unsigned int)(v11 - 3);
  if ( (unsigned int)v12 > 1 && v11 != 1 )
    return (unsigned int)sub_BFE6E0(a2, *(_QWORD *)a1, 2, a3) != 0;
  if ( (*(_BYTE *)(v5 + 29) & 1) != 0 )
  {
    v22 = sub_B8C3D0(v5, a2, v12, v8, v9, v10);
    v25 = *v22;
    v26 = *v22 + 8LL * *((unsigned int *)v22 + 2);
    if ( *v22 >= v26 )
    {
      if ( v25 != v26 )
      {
        while ( *(_WORD *)(*(_QWORD *)v26 + 36LL) != 154 )
        {
          v26 += 8LL;
          if ( v25 == v26 )
            goto LABEL_21;
        }
        return 2;
      }
    }
    else
    {
      v27 = (__int64 *)*v22;
      while ( 1 )
      {
        v25 = *v27;
        if ( *(_WORD *)(*v27 + 36) == 154 )
          break;
        if ( (__int64 *)v26 == ++v27 )
          goto LABEL_21;
      }
      if ( (__int64 *)v26 != v27 )
        return 2;
    }
LABEL_21:
    if ( (*(_BYTE *)(v5 + 29) & 1) != 0 )
    {
      v28 = sub_B8C3D0(v5, a2, v25, v26, v23, v24);
      v29 = (__int64 *)*v28;
      v30 = *v28 + 8LL * *((unsigned int *)v28 + 2);
      if ( *v28 >= v30 )
      {
        if ( v29 != (__int64 *)v30 )
        {
          if ( *(_WORD *)(*(_QWORD *)v30 + 36LL) == 155 )
            goto LABEL_37;
          v32 = (__int64 *)(v30 + 8);
          while ( v29 != v32 )
          {
            v33 = *v32++;
            if ( *(_WORD *)(v33 + 36) == 155 )
              goto LABEL_37;
          }
        }
      }
      else
      {
        v31 = *v28;
        while ( *(_WORD *)(*(_QWORD *)v31 + 36LL) != 155 )
        {
          v31 += 8LL;
          if ( v30 == v31 )
            goto LABEL_9;
        }
        if ( v30 != v31 )
          goto LABEL_37;
      }
    }
  }
LABEL_9:
  v13 = (unsigned int)sub_B75A50(v5, 0);
  result = 1;
  if ( (_DWORD)v13 == 206 )
    return result;
  if ( (*(_BYTE *)(v5 + 29) & 1) == 0 )
    return (unsigned int)sub_BFE6E0(a2, *(_QWORD *)a1, 2, a3) != 0;
  v18 = sub_B8C3D0(v5, 0, v13, v14, v15, v16);
  v19 = *v18;
  v20 = *v18 + 8LL * *((unsigned int *)v18 + 2);
  if ( *v18 >= v20 )
  {
    if ( v19 == v20 )
      return (unsigned int)sub_BFE6E0(a2, *(_QWORD *)a1, 2, a3) != 0;
    while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 151 )
    {
      v20 += 8LL;
      if ( v19 == v20 )
        return (unsigned int)sub_BFE6E0(a2, *(_QWORD *)a1, 2, a3) != 0;
    }
  }
  else
  {
    v21 = *v18;
    while ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 151 )
    {
      v21 += 8LL;
      if ( v20 == v21 )
        return (unsigned int)sub_BFE6E0(a2, *(_QWORD *)a1, 2, a3) != 0;
    }
    if ( v20 == v21 )
      return (unsigned int)sub_BFE6E0(a2, *(_QWORD *)a1, 2, a3) != 0;
  }
  if ( !(unsigned __int8)sub_9A91D0(v5) )
    return 2;
LABEL_37:
  result = 3;
  if ( !*(_BYTE *)(a1 + 16) )
    return (unsigned int)sub_BFE6E0(a2, *(_QWORD *)a1, 2, a3) != 0;
  return result;
}
