__int64 __fastcall sub_C24D70(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _DWORD *v6; // r12
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // r13
  __int64 result; // rax
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 v20; // rdi
  _QWORD *v21; // r13
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r13
  unsigned int v28; // eax
  unsigned int v29; // edx
  unsigned int i; // eax
  bool v31; // zf
  __int64 v32; // rax
  unsigned __int8 **v33; // rax
  unsigned __int8 **v34; // r15
  unsigned __int8 v35; // al
  unsigned __int64 v36; // rdi
  _QWORD *v37; // rax
  _QWORD *v38; // r13
  __int64 v39; // rbp
  unsigned __int8 v40; // [rsp+Fh] [rbp-59h]
  __int64 v41; // [rsp+18h] [rbp-50h] BYREF
  __int64 v42; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v43; // [rsp+28h] [rbp-40h]

  v6 = (_DWORD *)a2;
  v8 = a3;
  v9 = *(unsigned __int8 *)(a3 + 96);
  v10 = *(_BYTE *)(a3 + 96) & 7;
  if ( (_BYTE)v10 )
  {
    if ( (unsigned __int8)v10 != 5 )
      goto LABEL_22;
    v35 = *(_BYTE *)(v8 + 28) & 0x7F;
    v10 = v35;
    if ( v35 != 46 && v35 != 40 )
      goto LABEL_53;
    v36 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    v10 = *(_QWORD *)(v8 + 16) & 4LL;
    if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
      v36 = *(_QWORD *)(v36 + 8);
    if ( !v36 )
    {
LABEL_53:
      if ( v35 != 43 )
        goto LABEL_14;
LABEL_23:
      v19 = *(_QWORD *)(*a1 + 32);
      v20 = *(_QWORD *)(v19 + 24);
      if ( v20 )
      {
        v21 = (_QWORD *)(*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
        {
          v21 = (_QWORD *)*v21;
          if ( !v21 )
            goto LABEL_14;
        }
        else if ( !v21 )
        {
          goto LABEL_14;
        }
        v22 = sub_B91570(v20 + 72, a2, v10, v9, a5, a6);
        if ( v22 == sub_B91570((__int64)v21, a2, v23, v24, v25, v26) )
        {
          if ( (*(_BYTE *)(v8 + 28) & 0x7F) == 0x2B )
          {
            v27 = *(_QWORD *)(v19 + 48);
            if ( !v27 )
              goto LABEL_14;
            v28 = (unsigned __int8)(*(_WORD *)(v8 + 98) >> 4);
            if ( v28 == 255 )
              v28 = sub_B74880(v8);
            v8 = *(_QWORD *)(*(_QWORD *)(v27 + 120) + 8LL * v28);
            v29 = *(_DWORD *)(v19 + 56);
            v16 = *(_QWORD *)(*a1 + 32);
            for ( i = *(_DWORD *)(v16 + 128); v29 < i; i = *(_DWORD *)(v16 + 128) )
              v16 = *(_QWORD *)(v16 + 16);
            v31 = v29 == i;
            v15 = *(_DWORD *)(v19 + 60);
            v32 = *(_QWORD *)(v8 + 48);
            if ( !v31 )
            {
              if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL)
                                                                            + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 16LL)
                 - 43 <= 1 )
              {
                v16 = 0;
                goto LABEL_16;
              }
LABEL_40:
              sub_A4F2A0((__int64)&v42, v8, 0, 0);
              sub_C24210(a1[1], v42, v43, 0);
              return 1;
            }
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 43 <= 1 )
              goto LABEL_16;
            v19 = v16;
          }
          else
          {
            v37 = *(_QWORD **)(v19 + 88);
            v38 = (_QWORD *)(v19 + 80);
            while ( v37 )
            {
              if ( v8 >= v37[4] )
              {
                v37 = (_QWORD *)v37[3];
              }
              else
              {
                v38 = v37;
                v37 = (_QWORD *)v37[2];
              }
            }
            if ( *(_QWORD **)(v19 + 96) != v38 && v8 == *(_QWORD *)(std::_Rb_tree_decrement(v38) + 32) )
              v15 = *(_DWORD *)(std::_Rb_tree_decrement(v38) + 40);
            else
              v15 = 0;
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48)
                                                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                                                          + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 43 <= 1 )
            {
              v16 = v19;
              goto LABEL_16;
            }
          }
          v39 = a1[1];
          sub_A4F2A0((__int64)&v42, v8, *(_DWORD *)(v19 + 128), v15);
          sub_C24210(v39, v42, v43, 0);
          return 1;
        }
      }
LABEL_14:
      v11 = *(_QWORD *)(v8 + 48);
      goto LABEL_15;
    }
    v9 = *(_BYTE *)(sub_B8EAA0(v36) + 8) & 0x7F;
    if ( (unsigned __int8)v9 > 0x12u )
    {
      v9 = ((_BYTE)v9 + 94) & 0x7F;
      if ( (unsigned __int8)v9 > 5u )
      {
LABEL_51:
        if ( (*(_BYTE *)(v8 + 28) & 0x7F) != 0x2B )
          goto LABEL_14;
      }
    }
    else if ( ((1LL << v9) & 0x40182) == 0 )
    {
      goto LABEL_51;
    }
    v10 = *(_BYTE *)(v8 + 96) & 7;
LABEL_22:
    if ( (unsigned __int8)v10 <= 3u )
      goto LABEL_14;
    goto LABEL_23;
  }
  v11 = *(_QWORD *)(v8 + 48);
  v10 = *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v10 & 8) == 0
    || (a2 = v10 & 0xFFFFFFFFFFFFFFF0LL,
        v10 = (*(_DWORD *)((char *)&qword_18 + (v10 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v10 & 7)) >> 9,
        (_DWORD)v10 != 3) )
  {
    if ( ((*(_BYTE *)(v8 + 28) + 85) & 0x7D) != 0 )
    {
      v12 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
        v12 = *(_QWORD *)(v12 + 8);
      v13 = *(_BYTE *)(sub_B8EAA0(v12) + 8) & 0x7F;
      if ( v13 == 24 || !v13 )
        goto LABEL_14;
      if ( (*(_BYTE *)(v8 + 28) & 0x7F) != 0x2B )
      {
        v14 = *(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        v10 = *(_QWORD *)(v8 + 16) & 4LL;
        if ( (*(_QWORD *)(v8 + 16) & 4) != 0 )
          v14 = *(_QWORD *)v14;
        if ( ((*(_BYTE *)(v14 + 8) + 70) & 0x7Fu) <= 3 )
          goto LABEL_14;
      }
      LOBYTE(v9) = *(_BYTE *)(v8 + 96);
    }
    v9 &= 0x18u;
    if ( (_DWORD)v9 )
      goto LABEL_14;
    goto LABEL_23;
  }
LABEL_15:
  v15 = 0;
  v16 = 0;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 43 > 1 )
    goto LABEL_40;
LABEL_16:
  if ( (*(_BYTE *)(sub_E32240(*a1) + 1) & 0x10) == 0 )
  {
    v33 = (unsigned __int8 **)sub_E33C90(*a1, v6, 2431, 1);
    v34 = v33;
    if ( v33 )
    {
      sub_AE9DF0(v33, v8, 0xAu);
      sub_AE9DF0(v34, *(_QWORD *)(v8 + 48), 8u);
    }
    sub_E33DB0(*a1, *(unsigned int *)(v8 + 24), 103);
  }
  result = sub_C191F0(*a1, v6, v8, v16, v15, &v41);
  if ( (_BYTE)result )
  {
    v18 = a1[1];
    v40 = result;
    if ( v41 )
    {
      sub_C245D0(v18, *(_QWORD **)(*a1 + 16), v41);
      return v40;
    }
    else
    {
      sub_A4F2A0((__int64)&v42, v8, 0, 0);
      sub_C24210(v18, v42, v43, 0);
      *(_BYTE *)(a1[1] + 129) = 1;
      return v40;
    }
  }
  return result;
}
