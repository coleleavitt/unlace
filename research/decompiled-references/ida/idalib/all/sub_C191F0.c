__int64 __fastcall sub_C191F0(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  unsigned int v8; // ebp
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // rax
  _DWORD *v19; // rbx
  _BYTE *v20; // rax
  bool v21; // cc
  __int64 v22; // rax
  _QWORD *v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int8 **v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // eax
  unsigned __int8 **v35; // rax
  _DWORD *v36; // rax
  __int64 v37; // rax
  unsigned __int8 **v38; // rax
  unsigned __int8 **v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned __int8 **v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned __int8 **v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned __int64 v49; // [rsp+18h] [rbp-50h] BYREF
  __int64 v50; // [rsp+20h] [rbp-48h] BYREF
  __int64 v51; // [rsp+28h] [rbp-40h]

  v8 = 0;
  v49 = a3;
  if ( (*(_BYTE *)(sub_E32240(a1) + 2) & 1) != 0 )
    LOBYTE(v8) = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 48)
                                                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                                                          + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 43 <= 1;
  if ( !a4 )
  {
    sub_A4F2A0((__int64)&v50, a3, 0, a5);
    goto LABEL_18;
  }
  sub_A4F2A0((__int64)&v50, a3, *(_DWORD *)(a4 + 128), a5);
  v11 = *(_QWORD *)(a4 + 88);
  v12 = v49;
  if ( v11 )
  {
    v13 = a4 + 80;
    do
    {
      while ( v49 <= *(_QWORD *)(v11 + 32) && (v49 != *(_QWORD *)(v11 + 32) || a5 <= *(_DWORD *)(v11 + 40)) )
      {
        v13 = v11;
        v11 = *(_QWORD *)(v11 + 16);
        if ( !v11 )
          goto LABEL_11;
      }
      v11 = *(_QWORD *)(v11 + 24);
    }
    while ( v11 );
LABEL_11:
    if ( a4 + 80 != v13 && v49 == *(_QWORD *)(v13 + 32) && a5 == *(_DWORD *)(v13 + 40) )
    {
      v21 = *(_DWORD *)(v13 + 48) <= 1u;
      *a6 = v13 + 48;
      if ( v21
        && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 48)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 43 <= 1 )
      {
LABEL_58:
        v8 = *(unsigned __int8 *)(a1 + 914);
        if ( !(_BYTE)v8 )
        {
          sub_E33C10(a1, a2, 2500, 0);
          return v8;
        }
        return 0;
      }
      return 1;
    }
  }
  *a6 = 0;
  if ( (*(_BYTE *)(v12 + 28) & 0x7F) == 0x2B )
  {
LABEL_18:
    if ( sub_A4F650((_QWORD *)(a1 + 792), &v50) )
    {
      v36 = *(_DWORD **)(a1 + 816);
      *a6 = v36;
      if ( v36
        && (*v36 > 1u
         || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 48)
                                                                                 & 0xFFFFFFFFFFFFFFF0LL)
                                                                     + 8LL)
                                                         & 0xFFFFFFFFFFFFFFF0LL)
                                             + 16LL)
          - 43 > 1) )
      {
        return 1;
      }
      if ( !(_BYTE)v8 )
        goto LABEL_58;
      goto LABEL_34;
    }
    if ( (*(_BYTE *)(v49 + 28) & 0x7F) == 0x2B )
    {
      if ( (_BYTE)v8 )
        goto LABEL_34;
      if ( *(_BYTE *)(a1 + 914) )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
        if ( v22 )
        {
          v23 = (_QWORD *)(*(_QWORD *)(v49 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v49 + 16) & 4) != 0 )
            v23 = (_QWORD *)*v23;
          if ( v23 )
          {
            v24 = sub_B91570(v22 + 72, (__int64)&v50, *(_QWORD *)(v49 + 16) & 4LL, v15, v16, v17);
            if ( v24 == sub_B91570((__int64)v23, (__int64)&v50, v25, v26, v27, v28) )
              return 0;
          }
        }
      }
      if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x10) == 0 )
      {
        sub_E33C10(a1, a2, 108, 0);
        return v8;
      }
      v29 = 0;
      v30 = 2413;
    }
    else
    {
      if ( (*a2 & 0x20000) != 0 )
        return 0;
      v18 = (_DWORD *)sub_B7D120(v49, (__int64 *)&v49);
      v19 = v18;
      if ( v18 )
      {
        if ( (*v18 & 0x20000) == 0 )
        {
          if ( !((unsigned __int8)v8 | (sub_B7C110(v49) != 0)) )
          {
            v40 = 1;
            v41 = 2501;
            goto LABEL_68;
          }
LABEL_24:
          if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 8) != 0
            && !sub_B73900(v49)
            && (unsigned __int8)sub_B79830(v49, *(_QWORD *)(a1 + 16)) == 1
            && !(_BYTE)v8
            || ((*(_BYTE *)(sub_E32240(a1) + 1) & 8) != 0 || (*(_BYTE *)(sub_E32240(a1) + 47) & 0x20) != 0)
            && (*(_BYTE *)(sub_E32240(a1) + 1) & 0x10) == 0
            && !(unsigned __int8)sub_B7BF40(v49, *(_QWORD *)(a1 + 16)) )
          {
            if ( v19 )
            {
              v45 = (unsigned __int8 **)sub_E33C90(a1, a2, 2501, 1);
              if ( v45 )
                sub_AE9DF0(v45, v49, 0xAu);
              sub_C11AA0(a1, v50, v51, v46, v47);
            }
            else
            {
              sub_E33C90(a1, a2, 108, 0);
            }
          }
          if ( !(unsigned __int8)sub_B79700(v49) )
          {
            v20 = sub_B738D0(v49);
            *a6 = v20;
            if ( v20 )
            {
              if ( *(_DWORD *)v20 > 1u
                || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 48)
                                                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                                                            + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 16LL)
                 - 43 > 1 )
              {
                return 1;
              }
              if ( !(_BYTE)v8 )
                goto LABEL_58;
            }
            else if ( !(_BYTE)v8 )
            {
              return 0;
            }
LABEL_34:
            *a6 = 0;
            return 1;
          }
          v40 = 0;
          v41 = 2503;
LABEL_68:
          v42 = (unsigned __int8 **)sub_E33C10(a1, a2, v41, v40);
          if ( v42 )
            sub_AE9DF0(v42, v49, 0xAu);
          sub_C11AA0(a1, v50, v51, v43, v44);
          return 0;
        }
        v8 = *(unsigned __int8 *)(a1 + 914);
        if ( (_BYTE)v8 )
          return 0;
        v37 = sub_E32240(a1);
        v38 = (unsigned __int8 **)sub_E33C10(a1, a2, (unsigned int)((*(_BYTE *)(v37 + 1) & 0x10) == 0) + 2430, 1);
        v39 = v38;
        if ( v38 )
        {
          sub_AE9DF0(v38, v49, 0xAu);
          sub_AE9DF0(v39, *(_QWORD *)(v49 + 48), 8u);
        }
LABEL_49:
        sub_C11AA0(a1, v50, v51, v32, v33);
        return v8;
      }
      if ( (_BYTE)v8 )
        goto LABEL_24;
      v8 = *(unsigned __int8 *)(a1 + 914);
      if ( (_BYTE)v8 )
        return 0;
      v29 = 1;
      v30 = 2502;
    }
    v31 = (unsigned __int8 **)sub_E33C10(a1, a2, v30, v29);
    if ( v31 )
      sub_AE9DF0(v31, v49, 0xAu);
    goto LABEL_49;
  }
  v8 = *(unsigned __int8 *)(a1 + 914);
  if ( (_BYTE)v8 )
    return 0;
  v34 = sub_EEB7E0(a2);
  v35 = (unsigned __int8 **)sub_E33C80(a1, v34, 2555, 0);
  if ( v35 )
    sub_AE9DF0(v35, (__int64)"captures not currently allowed", 1u);
  return v8;
}
