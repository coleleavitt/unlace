void __fastcall sub_1601890(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r14
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 *v9; // rbp
  __int64 v10; // r15
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r10
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rax
  __int64 *v23; // rax
  __int64 *v24; // rax
  __int64 *v25; // rax
  unsigned __int8 v26; // al
  unsigned __int8 v27; // al
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 *v32; // rax
  unsigned __int64 *v33; // rax
  unsigned __int64 *v34; // rax
  __int64 *v35; // rax
  __int64 *v36; // rax
  _QWORD *v37; // rax
  __int64 *v38; // rax
  __int64 *v39; // rax
  __int64 *v40; // rax
  __int64 v41; // rcx
  __int64 *v42; // rax
  __int64 v43; // rcx
  __int64 *v44; // [rsp+10h] [rbp-58h]
  unsigned __int64 v45; // [rsp+18h] [rbp-50h]
  _BYTE v46[64]; // [rsp+28h] [rbp-40h] BYREF

  v6 = *(_QWORD *)(a1 + 4240);
  v7 = v6 + 16LL * *(unsigned int *)(a1 + 4248);
  if ( v6 != v7 )
  {
    v8 = *(_QWORD *)(a1 + 4240);
    v9 = a2;
    v44 = a2 + 2;
    while ( 1 )
    {
      v10 = *(_QWORD *)v8;
      if ( *(char *)(*(_QWORD *)v8 + 28LL) < 0 )
        goto LABEL_16;
      if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
        break;
      v20 = sub_B8C3D0(*(_QWORD *)v8, (__int64)a2, a3, a4, a5, v6);
      a3 = *v20;
      a4 = *v20 + 8LL * *((unsigned int *)v20 + 2);
      if ( *v20 >= a4 )
      {
        if ( a3 != a4 )
        {
          if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 401 )
            goto LABEL_16;
          v32 = (unsigned __int64 *)(a4 + 8);
          while ( 1 )
          {
            a4 = (unsigned __int64)v32;
            if ( (unsigned __int64 *)a3 == v32 )
              break;
            a4 = *v32++;
            if ( *(_WORD *)(a4 + 36) == 401 )
              goto LABEL_16;
          }
        }
      }
      else
      {
        v21 = (__int64 *)*v20;
        while ( 1 )
        {
          a3 = *v21;
          if ( *(_WORD *)(*v21 + 36) == 401 )
            break;
          if ( (__int64 *)a4 == ++v21 )
            goto LABEL_22;
        }
        if ( (__int64 *)a4 != v21 )
          goto LABEL_16;
      }
LABEL_22:
      v11 = *(_BYTE *)(v10 + 28) & 0x7F;
      if ( v11 != 39 )
      {
        if ( (*(_BYTE *)(v10 + 29) & 1) != 0 )
        {
          v22 = sub_B8C3D0(v10, (__int64)a2, a3, a4, a5, v6);
          a3 = *v22;
          a4 = *v22 + 8LL * *((unsigned int *)v22 + 2);
          if ( *v22 >= a4 )
          {
            if ( a3 != a4 )
            {
              if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 197 )
                goto LABEL_16;
              v33 = (unsigned __int64 *)(a4 + 8);
              while ( 1 )
              {
                a4 = (unsigned __int64)v33;
                if ( v33 == (unsigned __int64 *)a3 )
                  break;
                a4 = *v33++;
                if ( *(_WORD *)(a4 + 36) == 197 )
                  goto LABEL_16;
              }
            }
          }
          else
          {
            v23 = (__int64 *)*v22;
            while ( 1 )
            {
              a3 = *v23;
              if ( *(_WORD *)(*v23 + 36) == 197 )
                break;
              if ( (__int64 *)a4 == ++v23 )
                goto LABEL_28;
            }
            if ( (__int64 *)a4 != v23 )
              goto LABEL_16;
          }
LABEL_28:
          if ( (*(_BYTE *)(v10 + 29) & 1) != 0 )
          {
            v24 = sub_B8C3D0(v10, (__int64)a2, a3, a4, a5, v6);
            a3 = *v24;
            a4 = *v24 + 8LL * *((unsigned int *)v24 + 2);
            if ( *v24 < a4 )
            {
              v25 = (__int64 *)*v24;
              while ( 1 )
              {
                a3 = *v25;
                if ( *(_WORD *)(*v25 + 36) == 195 )
                  break;
                if ( (__int64 *)a4 == ++v25 )
                  goto LABEL_33;
              }
              if ( (__int64 *)a4 != v25 )
                goto LABEL_16;
              goto LABEL_33;
            }
            if ( a3 == a4 )
              goto LABEL_33;
            if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 195 )
              goto LABEL_16;
            v34 = (unsigned __int64 *)(a4 + 8);
            while ( 1 )
            {
              a4 = (unsigned __int64)v34;
              if ( v34 == (unsigned __int64 *)a3 )
                break;
              a4 = *v34++;
              if ( *(_WORD *)(a4 + 36) == 195 )
                goto LABEL_16;
            }
            v26 = *(_BYTE *)(v10 + 28) & 0x7F;
          }
          else
          {
LABEL_33:
            v26 = *(_BYTE *)(v10 + 28) & 0x7F;
          }
          if ( (unsigned int)v26 - 34 > 5 )
          {
LABEL_35:
            a2 = (__int64 *)sub_B8C330(v10);
            if ( !(unsigned int)sub_B7DD50(v10, (__int64)a2) )
            {
              v27 = sub_B81B70(v10);
              if ( !v27 )
                goto LABEL_95;
              if ( v27 > 3u )
              {
                if ( v27 > 6u )
LABEL_95:
                  abort();
                a2 = (__int64 *)v10;
                if ( !(unsigned __int8)sub_15F1490(a1, v10) )
                {
                  a2 = *(__int64 **)(v10 + 80);
                  v37 = sub_705340(a2 + 9, (__int64)a2, v28, v29, v30, v31);
                  a3 = *((_BYTE *)v37 + 28) & 0x7F;
                  if ( (_BYTE)a3 == 43 || (*((_BYTE *)v37 + 97) & 0x20) == 0 )
                  {
                    if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
                      goto LABEL_16;
                    v38 = sub_B8C3D0(v10, (__int64)a2, a3, a4, a5, v6);
                    a3 = *v38;
                    a4 = *v38 + 8LL * *((unsigned int *)v38 + 2);
                    if ( *v38 >= a4 )
                    {
                      if ( a3 == a4 )
                        goto LABEL_16;
                      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 211 )
                      {
                        v42 = (__int64 *)(a4 + 8);
                        do
                        {
                          a4 = (unsigned __int64)v42;
                          if ( (__int64 *)a3 == v42 )
                            goto LABEL_16;
                          v43 = *v42++;
                        }
                        while ( *(_WORD *)(v43 + 36) != 211 );
                      }
                    }
                    else
                    {
                      v39 = (__int64 *)*v38;
                      while ( 1 )
                      {
                        a3 = *v39;
                        if ( *(_WORD *)(*v39 + 36) == 211 )
                          break;
                        if ( (__int64 *)a4 == ++v39 )
                          goto LABEL_16;
                      }
                      if ( (__int64 *)a4 == v39 )
                        goto LABEL_16;
                    }
                  }
                }
              }
              if ( !sub_B7DF10(v10) )
              {
LABEL_13:
                a2 = (__int64 *)0xFFFFFFFF00000000LL;
                a4 = *((unsigned int *)v9 + 3);
                v17 = *(unsigned int *)(v8 + 8) | v5 & 0xFFFFFFFF00000000LL;
                v18 = *((unsigned int *)v9 + 2);
                v5 = v17;
                a3 = v18 + 1;
                if ( v18 + 1 > a4 )
                {
                  a2 = v44;
                  v45 = v17;
                  sub_2237220(v9, v44, a3, 16);
                  v18 = *((unsigned int *)v9 + 2);
                  v17 = v45;
                }
                v19 = (__int64 *)(*v9 + 16 * v18);
                *v19 = v10;
                v19[1] = v17;
                ++*((_DWORD *)v9 + 2);
                goto LABEL_16;
              }
            }
            goto LABEL_16;
          }
LABEL_7:
          a2 = (__int64 *)v46;
          if ( !(unsigned __int8)sub_B7D390(v10, (__int64)v46, 0, a4) )
          {
            v12 = sub_B81B70(v10);
            if ( !v12 )
              goto LABEL_95;
            if ( v12 > 3u )
            {
              if ( v12 > 6u )
                goto LABEL_95;
              if ( !(unsigned __int8)sub_15F1490(a1, v10) )
              {
                a2 = *(__int64 **)(v10 + 112);
                if ( (*((_BYTE *)sub_7053D0(a2 + 13, (__int64)a2, v13, v14, v15, v16) + 82) & 1) == 0 )
                {
                  if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
                    goto LABEL_16;
                  v35 = sub_B8C3D0(v10, (__int64)a2, a3, a4, a5, v6);
                  a3 = *v35;
                  a4 = *v35 + 8LL * *((unsigned int *)v35 + 2);
                  if ( *v35 >= a4 )
                  {
                    if ( a3 == a4 )
                      goto LABEL_16;
                    if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 211 )
                    {
                      v40 = (__int64 *)(a4 + 8);
                      do
                      {
                        a4 = (unsigned __int64)v40;
                        if ( (__int64 *)a3 == v40 )
                          goto LABEL_16;
                        v41 = *v40++;
                      }
                      while ( *(_WORD *)(v41 + 36) != 211 );
                    }
                  }
                  else
                  {
                    v36 = (__int64 *)*v35;
                    while ( 1 )
                    {
                      a3 = *v36;
                      if ( *(_WORD *)(*v36 + 36) == 211 )
                        break;
                      if ( (__int64 *)a4 == ++v36 )
                        goto LABEL_16;
                    }
                    if ( (__int64 *)a4 == v36 )
                      goto LABEL_16;
                  }
                }
              }
            }
            a2 = nullptr;
            if ( !(unsigned int)sub_B75A50(v10, 0) )
              goto LABEL_13;
          }
          goto LABEL_16;
        }
LABEL_6:
        if ( (unsigned int)v11 - 34 > 5 )
          goto LABEL_35;
        goto LABEL_7;
      }
LABEL_16:
      v8 += 16;
      if ( v7 == v8 )
        return;
    }
    v11 = *(_BYTE *)(v10 + 28) & 0x7F;
    if ( v11 == 39 )
      goto LABEL_16;
    goto LABEL_6;
  }
}
