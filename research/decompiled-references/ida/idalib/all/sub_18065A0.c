__int64 __fastcall sub_18065A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 *v26; // rcx
  __int64 **v27; // rax
  __int64 *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx

  v6 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v6;
  if ( (*(_BYTE *)(*(_QWORD *)v6 + 17LL) & 4) == 0 )
  {
    v8 = v6;
    if ( (_BYTE)a3 )
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
        v7 = sub_F63050(v7, v6, a3, a4);
        if ( !v7 )
        {
          v7 = *(_QWORD *)v6;
          goto LABEL_12;
        }
      }
      while ( 1 )
      {
        v8 = *(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL;
        v10 = (*(_BYTE *)(v7 + 18) & 0x10) == 0;
        v7 = *(_QWORD *)v8;
        if ( v10 )
          break;
        if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 43 > 1 )
          v7 = sub_F63050(v7, v6, a3, a4);
      }
    }
LABEL_12:
    v11 = sub_F63600(v7, v6, a3, a4, a5, a6);
    v16 = v11;
    if ( !v11 )
      return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11)
           | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                           & 0xF7) == 34);
    v17 = sub_F60F10(v11, v6, v12, v13, v14, v15);
    if ( (*((_BYTE *)v17 + 29) & 1) == 0 )
      return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11)
           | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                           & 0xF7) == 34);
    v22 = sub_B8C3D0((__int64)v17, v6, v18, v19, v20, v21);
    v25 = *v22;
    v26 = (__int64 *)(*v22 + 8LL * *((unsigned int *)v22 + 2));
    if ( *v22 < (unsigned __int64)v26 )
    {
      v28 = (__int64 *)*v22;
      while ( 1 )
      {
        v25 = *v28;
        if ( *(_WORD *)(*v28 + 36) == 380 )
          break;
        if ( v26 == ++v28 )
          return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11)
               | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                               & 0xF7) == 34);
      }
      if ( v26 == v28 )
        return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11)
             | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                             & 0xF7) == 34);
    }
    else
    {
      if ( (__int64 *)v25 == v26 )
        return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11)
             | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                             & 0xF7) == 34);
      if ( *(_WORD *)(*v26 + 36) != 380 )
      {
        v27 = (__int64 **)(v26 + 1);
        while ( (__int64 **)v25 != v27 )
        {
          v26 = *v27++;
          if ( *((_WORD *)v26 + 18) == 380 )
            goto LABEL_28;
        }
        return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11)
             | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                             & 0xF7) == 34);
      }
    }
LABEL_28:
    v29 = sub_F60F10(v16, v6, v25, (__int64)v26, v23, v24);
    v34 = sub_B7E900((__int64)v29, v6, v30, v31, v32, v33);
    if ( v34 )
    {
LABEL_29:
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                 & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL)
          & 0xF7) == 0x22
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 11 )
      {
        return 1;
      }
      while ( 1 )
      {
        v35 = *(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v34 = v35;
        if ( !v35 )
          break;
        if ( (*(_BYTE *)(v35 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_29;
      }
    }
    return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11)
         | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) == 34);
  }
  return 1;
}
