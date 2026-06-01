__int64 __fastcall sub_18C0FD0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 result; // rax
  __int64 v4; // rax
  char v5; // dl
  unsigned __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 **v19; // rax
  __int64 *v20; // rdx
  __int64 *v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rax
  unsigned __int64 *v24; // rax
  __int64 *v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax

  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  if ( v2 == 3 || v2 <= 1 )
    return 1;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 43 > 1 )
  {
    return 0;
  }
  v4 = *(_QWORD *)(a1 + 232);
  if ( *(_DWORD *)(v4 + 64) )
  {
    if ( sub_1B223D0(*(_QWORD *)(a1 + 760), a2, 0, 0) )
      return 0;
    v4 = *(_QWORD *)(a1 + 232);
  }
  if ( (*(_BYTE *)(v4 + 60) & 0x10) != 0 )
  {
    if ( sub_B735C0(a2) )
    {
      v6 = sub_B73640(a2);
      if ( (*(_WORD *)v6 & 0x1FF) == 0x47 )
      {
        v7 = *(_QWORD *)(v6 + 16);
        if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 40 <= 6 && !sub_9B48E0(v7) )
        {
          if ( (*(_BYTE *)(v7 + 29) & 1) != 0 )
          {
            v24 = sub_B8C3D0(v7, a2, v8, v9, v10, v11);
            v25 = (__int64 *)*v24;
            v26 = *v24 + 8LL * *((unsigned int *)v24 + 2);
            if ( *v24 >= v26 )
            {
              if ( v25 != (__int64 *)v26 )
              {
                if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) == 160 )
                  goto LABEL_13;
                v28 = (__int64 *)(v26 + 8);
                while ( v28 != v25 )
                {
                  v29 = *v28++;
                  if ( *(_WORD *)(v29 + 36) == 160 )
                    goto LABEL_13;
                }
              }
            }
            else
            {
              v27 = *v24;
              while ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 160 )
              {
                v27 += 8LL;
                if ( v26 == v27 )
                  goto LABEL_20;
              }
              if ( v26 != v27 )
                goto LABEL_13;
            }
          }
LABEL_20:
          v12 = *(_QWORD *)(a1 + 544);
          if ( v12 && (*(_BYTE *)(v12 + 8) & 0x7Fu) - 35 <= 3 && v12 != 72 )
          {
            v13 = sub_B72690(*(_QWORD *)(a1 + 544));
            if ( !v13 )
              BUG();
            v14 = *(_QWORD *)(v13 + 64);
            if ( v14 )
            {
              if ( (*(_BYTE *)(v14 + 10) & 0x20) != 0
                && (unsigned int)sub_B77890(v12 - 72) == 42
                && (*(_BYTE *)(v12 - 43) & 1) != 0 )
              {
                v19 = (__int64 **)sub_B8C3D0(v12 - 72, a2, v15, v16, v17, v18);
                v20 = *v19;
                v21 = &(*v19)[*((unsigned int *)v19 + 2)];
                if ( *v19 >= v21 )
                {
                  while ( v21 != v20 )
                  {
                    v23 = *v21++;
                    if ( *(_WORD *)(v23 + 36) == 160 )
                      goto LABEL_49;
                  }
                }
                else
                {
                  v22 = *v19;
                  while ( *(_WORD *)(*v22 + 36) != 160 )
                  {
                    if ( v21 == ++v22 )
                      goto LABEL_13;
                  }
                  if ( v21 != v22 )
                  {
LABEL_49:
                    v30 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
                    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
                      v30 = (_QWORD *)*v30;
                    if ( (_QWORD *)v12 != v30 )
                      return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_13:
  v5 = sub_B7D2B0(a2, *(_QWORD *)(a1 + 248));
  result = 2;
  if ( !v5 )
    return 0;
  return result;
}
