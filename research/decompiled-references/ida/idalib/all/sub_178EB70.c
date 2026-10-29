__int64 __fastcall sub_178EB70(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  char v7; // al
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  unsigned __int64 *v15; // rax
  unsigned __int64 *v16; // rax
  unsigned __int64 *v17; // rax
  unsigned __int64 *v18; // rax
  unsigned __int64 *v19; // rax
  unsigned __int64 *v20; // rax
  __int64 *v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rsi
  __int64 v26; // rsi
  int v27; // eax
  unsigned __int64 *v28; // rax
  __int64 *v29; // rdx
  __int64 *i; // rax
  __int64 v31; // rcx
  unsigned __int64 *v32; // rax
  unsigned __int64 *v33; // rax
  unsigned __int64 v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 *v38; // rcx
  unsigned __int64 *v39; // rax

  v6 = a2;
  v7 = *(_BYTE *)(a2 + 29) & 1;
  if ( !v7 )
    goto LABEL_2;
  v28 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v29 = (__int64 *)*v28;
  a4 = *v28 + 8LL * *((unsigned int *)v28 + 2);
  if ( *v28 < a4 )
  {
    v37 = *v28;
    while ( *(_WORD *)(*(_QWORD *)v37 + 36LL) != 224 )
    {
      v37 += 8LL;
      if ( a4 == v37 )
        goto LABEL_41;
    }
    if ( a4 == v37 )
      goto LABEL_41;
  }
  else
  {
    if ( v29 == (__int64 *)a4 )
    {
LABEL_41:
      v7 = *(_BYTE *)(a2 + 29) & 1;
LABEL_2:
      v8 = *(_BYTE *)(a2 + 28) & 0x7F;
      if ( (_BYTE)v8 == 43 || *(char *)(a2 + 97) >= 0 )
      {
        v8 = *(_QWORD *)(a2 + 48);
        if ( (v8 & 1) == 0 )
        {
          v8 &= 0xFFFFFFFFFFFFFFF0LL;
          if ( (*(_BYTE *)(v8 + 8) & 1) == 0 )
            goto LABEL_10;
        }
      }
      if ( !v7 )
        goto LABEL_5;
      v32 = sub_B8C3D0(a2, a2, v8, a4, a5, a6);
      v8 = *v32;
      a4 = *v32 + 8LL * *((unsigned int *)v32 + 2);
      if ( *v32 < a4 )
      {
        while ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 159 )
        {
          v8 += 8LL;
          if ( a4 == v8 )
            goto LABEL_57;
        }
        v7 = *(_BYTE *)(a2 + 29) & 1;
        if ( a4 == v8 )
        {
LABEL_10:
          if ( !v7 )
            goto LABEL_5;
          v15 = sub_B8C3D0(v6, a2, v8, a4, a5, a6);
          v8 = *v15;
          a4 = *v15 + 8LL * *((unsigned int *)v15 + 2);
          if ( *v15 >= a4 )
          {
            if ( v8 != a4 )
            {
              while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 160 )
              {
                a4 += 8LL;
                if ( v8 == a4 )
                  goto LABEL_15;
              }
              return 0;
            }
          }
          else
          {
            v16 = (unsigned __int64 *)*v15;
            while ( 1 )
            {
              v8 = *v16;
              if ( *(_WORD *)(*v16 + 36) == 160 )
                break;
              if ( (unsigned __int64 *)a4 == ++v16 )
                goto LABEL_15;
            }
            if ( (unsigned __int64 *)a4 != v16 )
              return 0;
          }
LABEL_15:
          if ( (*(_BYTE *)(v6 + 29) & 1) == 0 )
            goto LABEL_5;
          v17 = sub_B8C3D0(v6, a2, v8, a4, a5, a6);
          v8 = *v17;
          a4 = *v17 + 8LL * *((unsigned int *)v17 + 2);
          if ( *v17 >= a4 )
          {
            if ( v8 != a4 )
            {
              while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 159 )
              {
                a4 += 8LL;
                if ( v8 == a4 )
                  goto LABEL_20;
              }
              return 0;
            }
          }
          else
          {
            v18 = (unsigned __int64 *)*v17;
            while ( 1 )
            {
              v8 = *v18;
              if ( *(_WORD *)(*v18 + 36) == 159 )
                break;
              if ( (unsigned __int64 *)a4 == ++v18 )
                goto LABEL_20;
            }
            if ( (unsigned __int64 *)a4 != v18 )
              return 0;
          }
LABEL_20:
          if ( (*(_BYTE *)(v6 + 29) & 1) == 0 )
            goto LABEL_5;
          v19 = sub_B8C3D0(v6, a2, v8, a4, a5, a6);
          v8 = *v19;
          a4 = *v19 + 8LL * *((unsigned int *)v19 + 2);
          if ( *v19 >= a4 )
          {
            if ( v8 == a4 )
              goto LABEL_5;
            while ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 168 )
            {
              a4 += 8LL;
              if ( v8 == a4 )
                goto LABEL_5;
            }
          }
          else
          {
            v20 = (unsigned __int64 *)*v19;
            while ( 1 )
            {
              v8 = *v20;
              if ( *(_WORD *)(*v20 + 36) == 168 )
                break;
              if ( (unsigned __int64 *)a4 == ++v20 )
                goto LABEL_5;
            }
            if ( (unsigned __int64 *)a4 == v20 )
            {
LABEL_5:
              if ( !sub_F617A0(*(_QWORD *)(*(_QWORD *)(v6 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v8, a4, a5, a6)
                && !sub_F61860(*(_QWORD *)(*(_QWORD *)(v6 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v9, v10, v11, v12) )
              {
                v25 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(v6 + 16) & 4) != 0 )
                  v25 = *(_QWORD *)v25;
                v13 = 1;
                if ( (*(_BYTE *)(v25 + 8) & 0x7Fu) - 34 <= 5 )
                {
                  v26 = v25 - 72;
                  if ( v26 )
                  {
                    v27 = sub_178DFB0(a1, v26, v21, v22, v23, v24);
                    if ( v27 >= 0 )
                    {
                      v13 = 0;
                      if ( v27 > 1 )
                        return (unsigned int)(v27 == 3) + 1;
                    }
                  }
                }
                return v13;
              }
            }
          }
          return 0;
        }
      }
      else
      {
        v7 = *(_BYTE *)(a2 + 29) & 1;
        if ( v8 == a4 )
          goto LABEL_10;
        while ( 1 )
        {
          a2 = *(_QWORD *)a4;
          if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 159 )
            break;
          a4 += 8LL;
          if ( v8 == a4 )
            goto LABEL_10;
        }
      }
      if ( v7 )
      {
        v33 = sub_B8C3D0(v6, a2, v8, a4, a5, a6);
        v8 = *v33;
        v34 = *v33 + 8LL * *((unsigned int *)v33 + 2);
        if ( v8 < v34 )
        {
          v38 = (__int64 *)v8;
          while ( 1 )
          {
            a2 = *v38;
            if ( *(_WORD *)(*v38 + 36) == 159 )
              break;
            if ( (__int64 *)v34 == ++v38 )
              return 2;
          }
          if ( (__int64 *)v34 == v38 )
            return 2;
        }
        else
        {
          if ( v8 == v34 )
            return 2;
          if ( *(_WORD *)(*(_QWORD *)v34 + 36LL) != 159 )
          {
            v35 = (__int64 *)(v34 + 8);
            while ( v35 != (__int64 *)v8 )
            {
              v36 = *v35++;
              if ( *(_WORD *)(v36 + 36) == 159 )
                goto LABEL_90;
            }
            return 2;
          }
        }
LABEL_90:
        a4 = *(_QWORD *)v8;
        if ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 159 )
        {
          v39 = (unsigned __int64 *)(v8 + 8);
          do
            a4 = *v39++;
          while ( *(_WORD *)(a4 + 36) != 159 );
        }
        if ( (*(_BYTE *)(a4 + 38) & 4) == 0 )
        {
LABEL_57:
          v7 = *(_BYTE *)(v6 + 29) & 1;
          goto LABEL_10;
        }
      }
      return 2;
    }
    if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 224 )
    {
      for ( i = (__int64 *)(a4 + 8); ; ++i )
      {
        a4 = (unsigned __int64)i;
        if ( v29 == i )
          break;
        v31 = *i;
        if ( *(_WORD *)(v31 + 36) == 224 )
          return 3;
      }
      goto LABEL_41;
    }
  }
  return 3;
}
