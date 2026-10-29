char __fastcall sub_15C11F0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, char a5)
{
  unsigned __int64 v8; // r14
  unsigned __int8 v9; // cl
  int v10; // eax
  __int64 v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  __int64 *v14; // rbp
  int v15; // eax
  __int64 *v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // rdi
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rcx

  v8 = sub_B8EAA0(a3);
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 89LL) & 1) != 0 && (*(_BYTE *)(a2 + 28) & 0x7F) == 0x19 )
    return 0;
  v9 = *(_BYTE *)(v8 + 8) & 0x7F;
  if ( v9 > 0x12u )
  {
    if ( ((v9 + 94) & 0x7Fu) <= 5 )
      goto LABEL_5;
LABEL_25:
    if ( a4 )
    {
      v10 = *((_DWORD *)a4 + 2);
      if ( (v10 & 0x100) != 0 )
        goto LABEL_6;
    }
    v17 = (__int64 *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    {
      v18 = sub_B8EAA0(*v17);
      v23 = v18;
      if ( !a5 )
      {
LABEL_29:
        if ( v18 )
        {
          v24 = sub_B91570(v8, a2, v19, v20, v21, v22);
          return v24 == sub_B91570(v23, a2, v25, v26, v27, v28);
        }
        return 0;
      }
    }
    else
    {
      v18 = sub_B8EAA0((__int64)v17);
      v23 = v18;
      if ( !a5 )
        goto LABEL_29;
    }
    return sub_B92160(v8, v18, v19, v20, v21, v22);
  }
  if ( ((1LL << v9) & 0x40182) == 0 )
    goto LABEL_25;
LABEL_5:
  v10 = *((_DWORD *)a4 + 2);
LABEL_6:
  if ( (v10 & 0x80u) == 0 )
  {
    do
    {
      v11 = a4[45];
      if ( !v11 )
        break;
      if ( !sub_B8E490(v11) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)a1 + 1LL) & 8) != 0 )
          break;
        if ( *((char *)a4 + 8) < 0 )
          BUG();
        if ( (*(_BYTE *)(a4[45] + 8) & 0x7Fu) - 58 > 3 )
          break;
      }
      a4 = (__int64 *)*a4;
    }
    while ( *((char *)a4 + 8) >= 0 );
  }
  if ( *((_BYTE *)a4 + 100) )
  {
    v12 = (_QWORD *)a4[10];
    v13 = &v12[*((unsigned int *)a4 + 23)];
    if ( v12 != v13 )
    {
      if ( *v12 == a2 )
        return 1;
      while ( v13 != ++v12 )
      {
        if ( a2 == *v12 )
          return 1;
      }
    }
  }
  else if ( sub_2236570(a4 + 10, a2) )
  {
    return 1;
  }
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 1LL) & 8) == 0 )
    return 0;
  v14 = (__int64 *)*a4;
  v15 = *((_DWORD *)a4 + 2);
  if ( (*(_DWORD *)(*a4 + 8) & 0x10) != 0 && (v15 & 1) == 0 )
  {
    if ( *((_BYTE *)v14 + 100) )
    {
      v32 = (_QWORD *)v14[10];
      v33 = &v32[*((unsigned int *)v14 + 23)];
      if ( v32 != v33 )
      {
        while ( a2 != *v32 )
        {
          if ( v33 == ++v32 )
            goto LABEL_48;
        }
        return 1;
      }
LABEL_48:
      BYTE1(v15) = BYTE1(*(_DWORD *)(*a4 + 8));
      a4 = (__int64 *)*a4;
    }
    else
    {
      if ( sub_2236570(v14 + 10, a2) )
        return 1;
      v15 = *((_DWORD *)v14 + 2);
      a4 = v14;
    }
  }
  if ( (v15 & 0x4000) == 0 )
    return 0;
  v29 = (__int64 *)*a4;
  if ( *(_BYTE *)(*a4 + 100) )
  {
    v30 = (_QWORD *)v29[10];
    v31 = &v30[*((unsigned int *)v29 + 23)];
    if ( v30 != v31 )
    {
      while ( a2 != *v30 )
      {
        if ( v31 == ++v30 )
          return 0;
      }
      return 1;
    }
    return 0;
  }
  return sub_2236570(v29 + 10, a2) != 0;
}
