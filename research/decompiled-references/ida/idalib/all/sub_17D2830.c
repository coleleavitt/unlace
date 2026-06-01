void __fastcall sub_17D2830(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v6; // ax
  __int16 v7; // ax
  __int64 v8; // rbp
  unsigned __int64 *v9; // rbx
  unsigned __int64 *v10; // r12
  unsigned __int64 v11; // rbp
  __int64 i; // r15
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // r9
  int v16; // eax
  unsigned int *v17; // rdx
  __int64 j; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // r9
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // r9
  __int64 v29; // [rsp+0h] [rbp-68h]
  int v30; // [rsp+8h] [rbp-60h]
  __int64 v31; // [rsp+10h] [rbp-58h]
  unsigned int v32; // [rsp+1Ch] [rbp-4Ch] BYREF
  int v33; // [rsp+2Ch] [rbp-3Ch] BYREF

  v6 = *(_WORD *)a2;
  v32 = a3;
  v7 = v6 & 0x1FF;
  if ( v7 == 60 )
  {
    a2 = *(_QWORD *)(a2 + 16);
    v7 = *(_WORD *)a2 & 0x1FF;
  }
  if ( v7 == 61 )
  {
    a2 = *(_QWORD *)(a2 + 16);
    v7 = *(_WORD *)a2 & 0x1FF;
  }
  v8 = *(_QWORD *)(a2 + 8);
  if ( v7 != 53 )
  {
    v21 = v8 & 0xFFFFFFFFFFFFFFF0LL;
    v22 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
    if ( v7 == 54 )
    {
      while ( 1 )
      {
        if ( (unsigned __int8)(*(_BYTE *)(v22 + 16) - 2) > 4u )
        {
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
            || (v26 = sub_F63050(v22, a2, v21, a4)) == 0 )
          {
            v27 = sub_F63240(v22, a2, v21, a4, a5, a6);
            if ( v27 && sub_F58550((__int64)v27) )
              sub_17D0CF0(a1, v8, v32, 2, 1, v28, v29, v30);
            return;
          }
          v22 = v26;
        }
        v22 = *(_QWORD *)(*(_QWORD *)(v22 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      }
    }
    while ( 1 )
    {
      if ( (unsigned __int8)(*(_BYTE *)(v22 + 16) - 2) > 4u )
      {
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
          || (v23 = sub_F63050(v22, a2, v21, a4)) == 0 )
        {
          v24 = sub_F63240(v22, a2, v21, a4, a5, a6);
          if ( v24 && sub_F58570((__int64)v24) )
            sub_17D0CF0(a1, v8, v32, 4, 4, v25, v29, v30);
          return;
        }
        v22 = v23;
      }
      v22 = *(_QWORD *)(*(_QWORD *)(v22 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  v9 = *(unsigned __int64 **)(a2 + 16);
  v10 = (unsigned __int64 *)((char *)v9 + ((*(_QWORD *)(a2 + 24) - (_QWORD)v9) & 0x7FFFFFFF8LL));
  if ( v10 == v9 )
    return;
  do
  {
    v11 = *v9;
    for ( i = *(_QWORD *)(*(_QWORD *)(*v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          ;
          i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
    {
      if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
        continue;
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
        break;
      v13 = sub_F63050(i, a2, a3, a4);
      if ( !v13 )
        break;
      i = v13;
    }
    v14 = sub_F63240(i, a2, a3, a4, a5, a6);
    if ( !v14 || !sub_F58550((__int64)v14) )
    {
      for ( j = *(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            ;
            j = *(_QWORD *)(*(_QWORD *)(j + 32) & 0xFFFFFFFFFFFFFFF0LL) )
      {
        if ( (unsigned __int8)(*(_BYTE *)(j + 16) - 2) > 4u )
        {
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
            || (v31 = j, v19 = sub_F63050(j, a2, j, a4), j = v31, !v19) )
          {
            v20 = sub_F63240(j, a2, j, a4, a5, v15);
            if ( !v20 || !sub_F58570((__int64)v20) )
              goto LABEL_17;
            break;
          }
          j = v19;
        }
      }
    }
    v16 = sub_C00A40(v11, a2, a3, a4, a5);
    v17 = &v32;
    a2 = v11;
    v33 = v16;
    if ( v16 )
      v17 = (unsigned int *)&v33;
    sub_17D2830(a1, v11, *v17);
LABEL_17:
    ++v9;
  }
  while ( v10 != v9 );
}
