__int64 __fastcall sub_1804940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 *v25; // rcx
  __int64 **v26; // rax
  __int64 *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx

  v6 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v7 + 17) & 4) != 0 )
    return 1;
  if ( (_BYTE)a2 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
      return 1;
  }
  else
  {
    if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 43 > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
        goto LABEL_12;
      v7 = sub_F63050(v7, a2, a3, a4);
      if ( !v7 )
      {
        v7 = *(_QWORD *)v6;
        goto LABEL_12;
      }
    }
    while ( 1 )
    {
      v6 = *(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      v9 = (*(_BYTE *)(v7 + 18) & 0x10) == 0;
      v7 = *(_QWORD *)v6;
      if ( v9 )
        break;
      if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 43 > 1 )
        v7 = sub_F63050(v7, a2, a3, a4);
    }
  }
LABEL_12:
  v10 = sub_F63600(v7, a2, a3, a4, a5, a6);
  v15 = v10;
  if ( !v10 )
    return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11)
         | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) == 34);
  v16 = sub_F60F10(v10, a2, v11, v12, v13, v14);
  if ( (*((_BYTE *)v16 + 29) & 1) == 0 )
    return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11)
         | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) == 34);
  v21 = sub_B8C3D0((__int64)v16, a2, v17, v18, v19, v20);
  v24 = *v21;
  v25 = (__int64 *)(*v21 + 8LL * *((unsigned int *)v21 + 2));
  if ( *v21 < (unsigned __int64)v25 )
  {
    v27 = (__int64 *)*v21;
    while ( 1 )
    {
      v24 = *v27;
      if ( *(_WORD *)(*v27 + 36) == 380 )
        break;
      if ( v25 == ++v27 )
        return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11)
             | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                             & 0xF7) == 34);
    }
    if ( v25 == v27 )
      return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11)
           | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                           & 0xF7) == 34);
  }
  else
  {
    if ( (__int64 *)v24 == v25 )
      return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11)
           | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                           & 0xF7) == 34);
    if ( *(_WORD *)(*v25 + 36) != 380 )
    {
      v26 = (__int64 **)(v25 + 1);
      while ( (__int64 **)v24 != v26 )
      {
        v25 = *v26++;
        if ( *((_WORD *)v25 + 18) == 380 )
          goto LABEL_27;
      }
      return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11)
           | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                           & 0xF7) == 34);
    }
  }
LABEL_27:
  v28 = sub_F60F10(v15, a2, v24, (__int64)v25, v22, v23);
  v33 = sub_B7E900((__int64)v28, a2, v29, v30, v31, v32);
  if ( v33 )
  {
LABEL_28:
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL)
        & 0xF7) == 0x22
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 11 )
    {
      return 1;
    }
    while ( 1 )
    {
      v34 = *(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v33 = v34;
      if ( !v34 )
        break;
      if ( (*(_BYTE *)(v34 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_28;
    }
  }
  return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11)
       | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) == 34);
}
