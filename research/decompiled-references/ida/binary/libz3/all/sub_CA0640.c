void __fastcall sub_CA0640(_QWORD *a1, __int64 a2)
{
  int *v4; // rax
  int v5; // edx
  int v6; // eax
  __int64 v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // rax
  int v11; // edi
  int *v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // esi
  __int64 v15; // r9
  int *v16; // rsi
  __int64 v17; // r9
  int *v18; // r8
  int *i; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // esi
  int *v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // r8
  char *v28; // rcx
  int *v29; // rdi
  int *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD v33[2]; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+20h] [rbp-C8h]
  __int64 v35; // [rsp+28h] [rbp-C0h]
  _QWORD v36[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+40h] [rbp-A8h]
  __int64 v38; // [rsp+48h] [rbp-A0h]
  __int64 v39; // [rsp+50h] [rbp-98h] BYREF
  __int64 v40; // [rsp+58h] [rbp-90h]
  __int64 v41; // [rsp+60h] [rbp-88h]
  __int64 v42; // [rsp+68h] [rbp-80h]
  char v43; // [rsp+70h] [rbp-78h]
  __int64 v44; // [rsp+80h] [rbp-68h]
  __int64 v45; // [rsp+88h] [rbp-60h] BYREF
  __int64 v46; // [rsp+90h] [rbp-58h]
  __int64 v47; // [rsp+98h] [rbp-50h]
  __int64 v48; // [rsp+A0h] [rbp-48h]
  char v49; // [rsp+A8h] [rbp-40h]

  v4 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v4 )
  {
    v5 = *v4;
    if ( !*v4 )
    {
      if ( !*(_WORD *)(a2 + 4) )
      {
        if ( v4[1] != 4 )
          goto LABEL_19;
        if ( !(unsigned __int8)sub_15D2CB0(*a1, a2) )
          goto LABEL_9;
        if ( !*(_WORD *)(a2 + 4) )
        {
          v4 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
          if ( v4 )
          {
            if ( !*v4 )
            {
LABEL_19:
              if ( v4[1] == 3 )
LABEL_9:
                sub_16270E(a2);
            }
          }
        }
      }
      return;
    }
    if ( v5 == 5 )
    {
      v6 = v4[1];
      if ( v6 == 9 )
      {
        if ( *(_DWORD *)(a2 + 24) != 2 )
          goto LABEL_9;
        v7 = *(_QWORD *)(a2 + 32);
        if ( *(_WORD *)(v7 + 4) )
          goto LABEL_9;
        v8 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
        if ( !v8 || *v8 != 5 || v8[1] )
          goto LABEL_9;
      }
      else if ( v6 > 9 || v6 && (unsigned int)(v6 - 2) > 4 )
      {
        goto LABEL_9;
      }
      return;
    }
  }
  else
  {
    v5 = -1;
  }
  if ( *(_DWORD *)(a1[2] + 8LL) != v5 )
  {
    if ( *(_WORD *)(a2 + 4) || *(_DWORD *)(a2 + 24) || v4 && *v4 != -1 )
      goto LABEL_9;
    if ( !(unsigned __int8)sub_15D2CB0(*a1, a2) )
    {
      v9 = *(_DWORD **)(sub_15D1F10(a2) + 24);
      if ( !v9 || *v9 != 5 || v9[1] != 1 )
        goto LABEL_9;
      v10 = a1[3];
      v11 = *(_DWORD *)(a2 + 12);
      v39 = 0;
      v41 = 1;
      v45 = 0;
      v47 = 1;
      v34 = 1;
      v37 = 1;
      v12 = *(int **)(v10 + 16);
      v13 = *(unsigned int *)(v10 + 24);
      v43 = 0;
      v33[0] = 0;
      v14 = v13 - 1;
      v33[1] = 0;
      v13 *= 48;
      v35 = 0;
      v15 = 3LL * (v11 & v14);
      v16 = (int *)((char *)v12 + v13);
      v36[0] = 0;
      v17 = 16 * v15;
      v36[1] = 0;
      v38 = 0;
      v18 = &v12[(unsigned __int64)v17 / 4];
      v40 = 0;
      v42 = 0;
      v44 = a2;
      v46 = 0;
      v48 = 0;
      v49 = 0;
      if ( v17 != v13 )
      {
        for ( i = &v12[(unsigned __int64)v17 / 4]; v16 != i; i += 12 )
        {
          v20 = *(_QWORD *)i;
          if ( *(_QWORD *)i > 1u )
          {
            if ( *(_DWORD *)(v20 + 12) == v11 && a2 == v20 )
            {
LABEL_47:
              sub_25A130((char *)&v45);
              sub_27B950((__int64)qword_1C7F2C0, (__int64)&v39, i + 2);
              v43 = *((_BYTE *)i + 40);
              sub_27B950((__int64)qword_1C7F2C0, (__int64)v33, (int *)&v39);
              sub_25A130((char *)&v39);
              v22 = a1[3];
              v39 = 0;
              v41 = 1;
              v23 = *(_DWORD *)(a2 + 12);
              v45 = 0;
              v47 = 1;
              v24 = *(int **)(v22 + 40);
              v25 = *(unsigned int *)(v22 + 48);
              v43 = 0;
              v40 = 0;
              v26 = v25 - 1;
              v42 = 0;
              v25 *= 48;
              v44 = a2;
              v27 = 3LL * (v23 & v26);
              v49 = 0;
              v28 = (char *)v24 + v25;
              v46 = 0;
              v27 *= 16;
              v48 = 0;
              v29 = (int *)((char *)v24 + v27);
              v30 = (int *)((char *)v24 + v27);
              if ( v27 == v25 )
              {
LABEL_55:
                while ( v29 != v24 )
                {
                  v32 = *(_QWORD *)v24;
                  if ( *(_QWORD *)v24 > 1u )
                  {
                    if ( *(_DWORD *)(v32 + 12) == v23 && a2 == v32 )
                    {
                      v30 = v24;
LABEL_64:
                      sub_25A130((char *)&v45);
                      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v39, v30 + 2);
                      v43 = *((_BYTE *)v30 + 40);
                      sub_27B950((__int64)qword_1C7F2C0, (__int64)v36, (int *)&v39);
                      sub_25A130((char *)&v39);
                      if ( (!LODWORD(v33[0])
                         || (v33[0] & 0x100000000LL) == 0
                         && LODWORD(v33[0]) == 1
                         && (v34 & 0x100000000LL) == 0
                         && (_DWORD)v34 == 1)
                        && (!LODWORD(v36[0])
                         || (v36[0] & 0x100000000LL) == 0
                         && LODWORD(v36[0]) == 1
                         && (v37 & 0x100000000LL) == 0
                         && (_DWORD)v37 == 1) )
                      {
                        sub_25A130((char *)v36);
                        sub_25A130((char *)v33);
                        return;
                      }
LABEL_37:
                      sub_25A130((char *)v36);
                      sub_25A130((char *)v33);
                      goto LABEL_9;
                    }
                  }
                  else if ( !v32 )
                  {
                    break;
                  }
                  v24 += 12;
                }
LABEL_54:
                sub_25A130((char *)&v45);
                sub_25A130((char *)&v39);
                goto LABEL_37;
              }
              while ( 1 )
              {
                v31 = *(_QWORD *)v30;
                if ( *(_QWORD *)v30 > 1u )
                {
                  if ( *(_DWORD *)(v31 + 12) == v23 && a2 == v31 )
                    goto LABEL_64;
                }
                else if ( !v31 )
                {
                  goto LABEL_54;
                }
                v30 += 12;
                if ( v28 == (char *)v30 )
                  goto LABEL_55;
              }
            }
          }
          else if ( !v20 )
          {
            goto LABEL_36;
          }
        }
      }
      for ( ; v18 != v12; v12 += 12 )
      {
        v21 = *(_QWORD *)v12;
        if ( *(_QWORD *)v12 > 1u )
        {
          if ( *(_DWORD *)(v21 + 12) == v11 && a2 == v21 )
          {
            i = v12;
            goto LABEL_47;
          }
        }
        else if ( !v21 )
        {
          break;
        }
      }
LABEL_36:
      sub_25A130((char *)&v45);
      sub_25A130((char *)&v39);
      goto LABEL_37;
    }
  }
}

