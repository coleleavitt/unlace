void __fastcall sub_BB2B80(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r13
  _QWORD *v15; // rax
  unsigned __int64 v16; // r12
  __int64 *v17; // r15
  bool v18; // zf
  __int64 *v19; // rax
  __int64 **v20; // rax
  __int64 *v21; // r13
  __int64 v22; // rbp
  unsigned __int16 v23; // ax
  int v24; // r14d
  int v25; // r15d
  __int64 v26; // rdi
  _WORD *v27; // rdx
  __int64 v28; // rdi
  __int64 *i; // rax
  int v30; // r13d
  int j; // r14d
  __int64 v32; // rdi
  __int64 *v33; // rax
  __int64 v34; // rdx

  if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
    return;
  v6 = (__int64)a2;
  v8 = a2[28] & 0x7F;
  v9 = (unsigned int)(v8 - 40);
  if ( (unsigned int)v9 > 6 )
  {
    if ( (unsigned int)(v8 - 49) > 2 )
      goto LABEL_5;
    v11 = (_QWORD *)(*((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFF0LL);
    if ( !v11 )
      goto LABEL_5;
  }
  else
  {
    v10 = sub_B73640((__int64)a2);
    if ( !v10 )
      goto LABEL_5;
    v11 = (_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( !v11 )
      goto LABEL_5;
  }
  v12 = sub_F63270(*v11);
  if ( v12 )
  {
    v9 = *(_QWORD *)(v12 + 128);
    if ( v9 )
    {
      if ( (*(_BYTE *)(v9 + 10) & 0x20) != 0 )
      {
        v13 = sub_B96F60(v12);
        v14 = v13;
        if ( v13 )
        {
          if ( (*(_BYTE *)(v13 + 29) & 1) != 0 )
          {
            v15 = sub_B8C3D0(v13, (__int64)a2, v9, a4, a5, a6);
            v9 = *((unsigned int *)v15 + 2);
            v16 = *v15 + 8 * v9;
            if ( (*(_BYTE *)(v14 + 29) & 1) != 0 )
              v17 = (__int64 *)*sub_B8C3D0(v14, (__int64)a2, v9, a4, a5, a6);
            else
              v17 = nullptr;
            v18 = v17 == (__int64 *)v16;
            if ( (unsigned __int64)v17 >= v16 )
              goto LABEL_44;
            while ( 1 )
            {
              v19 = v17;
              while ( 1 )
              {
                v9 = *v19;
                if ( *(_WORD *)(*v19 + 36) == 319 )
                  break;
                if ( (__int64 *)v16 == ++v19 )
                  goto LABEL_5;
              }
              while ( 1 )
              {
LABEL_36:
                v28 = *v17;
                for ( i = v17 + 1; *(_WORD *)(v28 + 36) != 319; ++i )
                {
                  v28 = *i;
                  v17 = i;
                }
                a2 = *(const char **)a1;
                sub_B164E0(v28, *(_QWORD *)a1, a1 + 8);
                v30 = *(_DWORD *)(a1 + 32);
                if ( v30 )
                {
                  for ( j = 0; j != v30; ++j )
                  {
                    while ( 1 )
                    {
                      v32 = *(_QWORD *)a1;
                      v9 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
                      if ( (unsigned __int64)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) - v9) > 1 )
                        break;
                      a2 = "  ";
                      ++j;
                      sub_227BF10(v32, "  ", 2);
                      if ( v30 == j )
                        goto LABEL_42;
                    }
                    a4 = 8224;
                    *(_WORD *)v9 = 8224;
                    *(_QWORD *)(v32 + 32) += 2LL;
                  }
                  ++v17;
                }
                else
                {
LABEL_42:
                  ++v17;
                }
                v18 = v17 == (__int64 *)v16;
                if ( (unsigned __int64)v17 < v16 )
                  break;
LABEL_44:
                if ( v18 )
                  goto LABEL_5;
                if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 319 )
                {
                  v33 = (__int64 *)(v16 + 8);
                  while ( 1 )
                  {
                    v9 = (__int64)v33;
                    if ( v17 == v33 )
                      goto LABEL_5;
                    v34 = *v33++;
                    if ( *(_WORD *)(v34 + 36) == 319 )
                      goto LABEL_36;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_5:
  if ( (*(_BYTE *)(v6 + 29) & 1) != 0 )
  {
    v20 = (__int64 **)sub_B8C3D0(v6, (__int64)a2, v9, a4, a5, a6);
    v21 = *v20;
    v22 = (__int64)&(*v20)[*((unsigned int *)v20 + 2)];
    if ( *v20 != (__int64 *)v22 )
    {
      while ( 1 )
      {
        v23 = *(_WORD *)(*v21 + 36);
        if ( v23 == 319 )
          break;
        if ( v23 > 0x13Fu )
        {
          if ( v23 == 418 || v23 == 423 || v23 == 416 )
            break;
        }
        else if ( (unsigned __int16)(v23 - 295) <= 1u )
        {
          break;
        }
LABEL_26:
        if ( (__int64 *)v22 == ++v21 )
          return;
      }
      v24 = 0;
      sub_B1F2A0(*v21, *(const char **)a1, a1 + 8);
      v25 = *(_DWORD *)(a1 + 32);
      if ( v25 )
      {
        do
        {
          while ( 1 )
          {
            v26 = *(_QWORD *)a1;
            v27 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
            if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v27 > 1u )
              break;
            ++v24;
            sub_227BF10(v26, "  ", 2);
            if ( v24 == v25 )
              goto LABEL_26;
          }
          ++v24;
          *v27 = 8224;
          *(_QWORD *)(v26 + 32) += 2LL;
        }
        while ( v25 != v24 );
      }
      goto LABEL_26;
    }
  }
}
