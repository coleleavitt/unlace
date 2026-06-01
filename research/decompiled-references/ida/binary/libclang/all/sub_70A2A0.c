char __fastcall sub_70A2A0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r15
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  char v9; // al
  __int64 v10; // rbp
  char result; // al
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r15
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+8h] [rbp-40h]
  __int64 *v24; // [rsp+8h] [rbp-40h]
  __int64 v25; // [rsp+8h] [rbp-40h]

  v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_BYTE *)(v8 + 16);
  if ( v9 == 33 )
  {
    v10 = *(_QWORD *)v7;
    if ( *(_BYTE *)(*(_QWORD *)v7 + 16LL) == 33 )
      return sub_70ABF0(a1, v8, v10, a4, a5);
  }
  else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33 )
  {
    v22 = v7;
    v12 = sub_B0D320(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
    v7 = v22;
    v8 = v12;
    v10 = *(_QWORD *)v22;
    if ( *(_BYTE *)(*(_QWORD *)v22 + 16LL) == 33 )
      goto LABEL_8;
  }
  else
  {
    v10 = *(_QWORD *)v7;
    if ( *(_BYTE *)(*(_QWORD *)v7 + 16LL) == 33 )
    {
      if ( v9 == 11 )
      {
        v14 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
        v8 = 0;
        v16 = *(_QWORD *)v7;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 11 )
        {
LABEL_26:
          if ( !v10 )
            return 0;
          v20 = *(_QWORD *)(*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v20 + 16) - 34 > 1 )
            v20 = sub_B0D320(v20);
          if ( !(*(_BYTE *)(v20 + 19) >> 2)
            && (v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL),
                *(_BYTE *)(v21 + 16) == 13) )
          {
            return v14 != 0 && ((*(_WORD *)(v21 + 18) >> 3) & 0x1FF) == 488;
          }
          else
          {
            return 0;
          }
        }
LABEL_34:
        v16 = sub_B0D320(v16);
        goto LABEL_18;
      }
      v14 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
      v8 = 0;
      goto LABEL_16;
    }
    v8 = 0;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
  {
    v14 = *v5;
    v10 = 0;
    v15 = *(_BYTE *)(v14 + 16);
    goto LABEL_11;
  }
  v23 = v7;
  v13 = sub_B0D320(v10);
  v7 = v23;
  v10 = v13;
LABEL_8:
  if ( v8 && v10 )
    return sub_70ABF0(a1, v8, v10, a4, a5);
  v14 = *v5;
  v15 = *(_BYTE *)(v14 + 16);
LABEL_11:
  if ( v15 == 11 )
  {
    v16 = *(_QWORD *)v7;
    if ( *(_BYTE *)(v16 + 16) == 11 )
      return (sub_707EF0(a1, a2, a3, 1u, 0, 0, 0) & 0xFFFFFFFFFFFFFFF8LL) > 0xF;
    goto LABEL_33;
  }
LABEL_16:
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 11 )
  {
    v16 = *(_QWORD *)v7;
    v14 = 0;
    if ( *(_BYTE *)(v16 + 16) == 11 )
      goto LABEL_20;
    goto LABEL_33;
  }
  v24 = (__int64 *)v7;
  v14 = sub_B0D320(v14);
  v16 = *v24;
  if ( *(_BYTE *)(*v24 + 16) != 11 )
  {
LABEL_33:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 11 )
    {
      v16 = 0;
      goto LABEL_20;
    }
    goto LABEL_34;
  }
LABEL_18:
  if ( v14 && v16 )
    return (sub_707EF0(a1, a2, a3, 1u, 0, 0, 0) & 0xFFFFFFFFFFFFFFF8LL) > 0xF;
LABEL_20:
  if ( !v8 )
    goto LABEL_26;
  v17 = *(_QWORD *)(*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v17 + 16) - 34 > 1 )
  {
    v25 = v16;
    v18 = sub_B0D320(v17);
    v16 = v25;
    v17 = v18;
  }
  if ( *(_BYTE *)(v17 + 19) >> 2 )
    goto LABEL_26;
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) != 13 )
    goto LABEL_26;
  result = v16 != 0 && ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) == 488;
  if ( !result )
    goto LABEL_26;
  return result;
}

