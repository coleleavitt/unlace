__int64 __fastcall sub_AA2F20(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rsi
  unsigned int v7; // edi
  char *v8; // rdx
  int *v9; // rbx
  int v10; // edi
  __int64 v11; // rax
  int v12; // r9d
  unsigned int v13; // ecx
  char *v14; // r8
  __int64 v15; // rcx
  char *v16; // r11
  char *v17; // rax
  int v18; // ecx
  __int64 v19; // rbp
  int v20; // r13d
  char v21; // bl
  int v22; // eax
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // ebx
  char v27; // al
  __int64 v28; // rdi
  int v29; // eax
  int v30; // r14d
  int *v31; // rdx
  __int64 v32; // rax
  __int64 *v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  unsigned int v36; // eax
  unsigned int v37; // r12d
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rsi
  int v41; // r12d
  int *v42; // rdx
  unsigned int v43; // r14d
  __int64 *v44; // rbp
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // r13
  char v48; // al
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rdx
  unsigned int v52; // r13d
  __int64 v53; // rax
  int v54; // r8d
  __int64 v55; // rdx
  __int64 v56; // rsi
  int v57; // eax
  int v58; // r8d
  __int64 v59; // [rsp+8h] [rbp-B0h]
  char v60; // [rsp+1Ah] [rbp-9Eh]
  char v61; // [rsp+1Bh] [rbp-9Dh]
  int v62; // [rsp+1Ch] [rbp-9Ch]
  int v63; // [rsp+1Ch] [rbp-9Ch]
  char v64[32]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v65[4]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v66[11]; // [rsp+60h] [rbp-58h] BYREF

  *(_BYTE *)(a1 + 768) = 0;
  sub_A8EE20(a1);
  if ( *(_QWORD *)(a1 + 328) )
  {
    sub_1021C90();
    sub_A9E480(a1);
    sub_1004930(*(_QWORD *)(a1 + 504));
  }
  v2 = qword_1C7ECB8;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v4 = *(_QWORD *)(v3 + 8984);
  if ( qword_1C7ECB8 != v4 || *(_BYTE *)(v3 + 2416) )
    return 1;
  v6 = *(_QWORD *)(a1 + 176);
  if ( !v6 )
  {
    if ( !*(_BYTE *)(a1 + 769) )
      goto LABEL_43;
    *(_BYTE *)(a1 + 769) = 0;
LABEL_38:
    if ( *(_BYTE *)(v3 + 2416) )
      return 1;
    v26 = sub_1010850(*(_QWORD *)(a1 + 504));
    v27 = sub_FFA850(*(_QWORD *)(a1 + 504));
    v28 = *(_QWORD *)(a1 + 8);
    if ( !v27 )
    {
      if ( v26 != 1 )
      {
        if ( (unsigned __int8)sub_18290A0(v28) )
        {
          sub_1872CE0("");
          sub_1873130(114, 2161);
        }
        return 1;
      }
      if ( !(unsigned __int8)sub_18290A0(v28) )
        return 1;
      goto LABEL_57;
    }
    if ( !(unsigned __int8)sub_18290A0(v28) )
      return 1;
    v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 112LL);
    if ( *(_DWORD *)(a1 + 320) >= *(_DWORD *)(v32 + 344) )
      return 1;
    if ( !*(_DWORD *)(v32 + 268) )
      return 1;
    sub_A7C260(a1 + 576);
    sub_A9C840(*(_QWORD *)(a1 + 504), (_QWORD *)(a1 + 576));
    v61 = sub_18290A0(*(_QWORD *)(a1 + 8));
    if ( !v61 )
      return 1;
    if ( (unsigned int)sub_FF9DB0(*(_QWORD *)(a1 + 504)) == 1 )
    {
LABEL_57:
      sub_A9E240(a1);
      return 1;
    }
    v33 = *(__int64 **)(a1 + 640);
    v59 = v33[1];
    v34 = *v33;
LABEL_68:
    if ( v59 == v34 )
      return 1;
    sub_18290A0(*(_QWORD *)(a1 + 8));
    v35 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    if ( *(_QWORD *)(v35 + 8984) != qword_1C7ECB8 || *(_BYTE *)(v35 + 2416) )
      return 1;
    v36 = sub_FF9E10(*(_QWORD *)(a1 + 504), *(unsigned int *)(v34 + 32));
    v37 = v36;
    if ( v36 == -1 )
      goto LABEL_75;
    sub_A82CC0(a1, v36);
    v38 = *(_QWORD *)a1;
    if ( !*(_DWORD *)(*(_QWORD *)(a1 + 248) + 4LL * v37) )
    {
      v39 = *(_QWORD *)(v38 + 16);
      v40 = *(_QWORD *)(v39 + 112);
      if ( *(_DWORD *)(a1 + 320) >= *(_DWORD *)(v40 + 344)
        || *(_DWORD *)(v40 + 268) != 2
        || *(_DWORD *)(v39 + 9464) != *(_DWORD *)(v39 + 9472) )
      {
        goto LABEL_75;
      }
    }
    v43 = 0;
    v44 = (__int64 *)(*(_QWORD *)(a1 + 240) + 8LL * v37);
    v60 = v61;
    v45 = *v44;
    while ( 1 )
    {
      v46 = *(_QWORD *)(v38 + 16);
      if ( !v45 || v43 >= *(_DWORD *)(v45 - 4) )
      {
        v49 = *(_QWORD *)(v46 + 112);
        if ( *(_DWORD *)(a1 + 320) < *(_DWORD *)(v49 + 344)
          && *(_DWORD *)(v49 + 268) == 2
          && *(_DWORD *)(v46 + 9464) == *(_DWORD *)(v46 + 9472)
          && v60 )
        {
          sub_AA1E60((_QWORD *)a1, v37, v34);
        }
LABEL_75:
        v34 += 72;
        goto LABEL_68;
      }
      v47 = *(_QWORD *)(v45 + 8LL * v43);
      if ( !*(_BYTE *)(*(_QWORD *)(v46 + 8848) + *(unsigned int *)(v47 + 8)) )
        break;
LABEL_99:
      ++v43;
    }
    v48 = *(_BYTE *)(v34 + 37);
    if ( *(_BYTE *)(v34 + 36) )
    {
      if ( v48 )
      {
        v54 = 1;
        if ( *(_DWORD *)(v47 + 56) )
        {
LABEL_116:
          if ( *(_DWORD *)(v47 + 56) != 1 )
            goto LABEL_98;
          v55 = v47 + 24;
          v56 = v34;
          goto LABEL_118;
        }
      }
      else
      {
        if ( *(_DWORD *)(v47 + 56) )
        {
LABEL_97:
          if ( *(_DWORD *)(v47 + 56) != 1 )
          {
LABEL_98:
            v38 = *(_QWORD *)a1;
            v45 = *v44;
            goto LABEL_99;
          }
          v50 = v47 + 24;
          v51 = v34;
          goto LABEL_106;
        }
        v54 = 2;
      }
      v62 = v54;
      if ( !sub_3ED700((__int64)qword_1C7F2C0, v34, v47 + 24) )
      {
LABEL_114:
        v52 = *(_DWORD *)(v47 + 8);
LABEL_108:
        if ( v52 != -2 )
        {
          v53 = sub_FF9A10(*(_QWORD *)(a1 + 504));
          ++*(_DWORD *)(v53 + 80);
          if ( v60 )
          {
            sub_A7AF60((_QWORD *)a1);
            sub_83B120((__int64 *)(a1 + 816));
            sub_A8A140(*(_QWORD *)(a1 + 504), v34, a1 + 576);
          }
          sub_A80F60((_QWORD *)a1, v37, -1);
          ++*(_DWORD *)(a1 + 464);
          sub_AA1680(a1, v52, a1 + 848, a1 + 856, a1 + 864);
          v60 = 0;
        }
        goto LABEL_98;
      }
      if ( v62 == 2 )
        goto LABEL_97;
      goto LABEL_116;
    }
    if ( v48 )
    {
      if ( *(_DWORD *)(v47 + 56) != 1 )
      {
        v57 = *(_DWORD *)(v47 + 56);
LABEL_123:
        if ( v57 )
          goto LABEL_98;
        v56 = v47 + 24;
        v55 = v34;
LABEL_118:
        if ( sub_3ED700((__int64)qword_1C7F2C0, v56, v55) )
          goto LABEL_98;
LABEL_107:
        v52 = *(_DWORD *)(v47 + 8) ^ 1;
        goto LABEL_108;
      }
      v58 = -1;
    }
    else
    {
      if ( *(_DWORD *)(v47 + 56) != 1 )
      {
        v57 = *(_DWORD *)(v47 + 56);
        goto LABEL_130;
      }
      v58 = -2;
    }
    v63 = v58;
    if ( !sub_3ED700((__int64)qword_1C7F2C0, v47 + 24, v34) )
      goto LABEL_114;
    v57 = *(_DWORD *)(v47 + 56);
    if ( v63 != -2 )
      goto LABEL_123;
LABEL_130:
    if ( v57 )
      goto LABEL_98;
    v51 = v47 + 24;
    v50 = v34;
LABEL_106:
    if ( !sub_3ED700((__int64)qword_1C7F2C0, v50, v51) )
      goto LABEL_98;
    goto LABEL_107;
  }
  v7 = *(_DWORD *)(a1 + 264);
  if ( v7 < *(_DWORD *)(v6 - 4) )
  {
    *(_BYTE *)(a1 + 769) = 0;
    goto LABEL_10;
  }
  if ( *(_BYTE *)(a1 + 769) )
  {
    *(_BYTE *)(a1 + 769) = 0;
    goto LABEL_37;
  }
LABEL_43:
  result = sub_FF9CD0(*(_QWORD *)(a1 + 504));
  if ( (_BYTE)result )
  {
    v6 = *(_QWORD *)(a1 + 176);
    v7 = *(_DWORD *)(a1 + 264);
    v2 = qword_1C7ECB8;
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    v4 = *(_QWORD *)(v3 + 8984);
    *(_BYTE *)(a1 + 769) = 0;
    if ( !v6 )
      goto LABEL_37;
    while ( 1 )
    {
LABEL_10:
      if ( v7 >= *(_DWORD *)(v6 - 4) )
        goto LABEL_37;
      if ( v4 != v2 )
        return 1;
      if ( *(_BYTE *)(v3 + 2416) )
        goto LABEL_38;
      if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) )
      {
        v2 = qword_1C7ECB8;
        v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
        v4 = *(_QWORD *)(v3 + 8984);
        goto LABEL_37;
      }
      v6 = *(_QWORD *)(a1 + 176);
      v8 = *(char **)(a1 + 216);
      v9 = (int *)(v6 + 8LL * *(unsigned int *)(a1 + 264));
      v10 = *(_DWORD *)(a1 + 264);
      v11 = *(unsigned int *)(a1 + 224);
      v12 = *v9;
      v13 = v11 - 1;
      v11 *= 24;
      v14 = &v8[v11];
      v15 = 24LL * (*v9 & v13);
      v16 = &v8[v15];
      if ( v15 == v11 )
      {
LABEL_48:
        if ( v8 != v16 )
        {
          while ( 1 )
          {
            v29 = *((_DWORD *)v8 + 1);
            if ( v29 == 2 )
            {
              if ( v12 == *(_DWORD *)v8 && v12 == *((_DWORD *)v8 + 2) )
              {
                v17 = v8;
                goto LABEL_21;
              }
            }
            else if ( !v29 )
            {
              goto LABEL_33;
            }
            v8 += 24;
            if ( v16 == v8 )
              goto LABEL_33;
          }
        }
        goto LABEL_33;
      }
      v17 = &v8[v15];
      while ( 1 )
      {
        v18 = *((_DWORD *)v17 + 1);
        if ( v18 != 2 )
        {
          if ( !v18 )
            goto LABEL_33;
          goto LABEL_17;
        }
        if ( v12 == *(_DWORD *)v17 && v12 == *((_DWORD *)v17 + 2) )
          break;
LABEL_17:
        v17 += 24;
        if ( v14 == v17 )
          goto LABEL_48;
      }
LABEL_21:
      v19 = *((_QWORD *)v17 + 2);
      v20 = *(_DWORD *)(v19 + 4LL * *((unsigned __int8 *)v9 + 4) + 60);
      v21 = *((_BYTE *)v9 + 4);
      sub_10144C0(*(_QWORD *)(a1 + 504));
      if ( (unsigned int)sub_FF9DB0(*(_QWORD *)(a1 + 504)) == 1 )
        goto LABEL_57;
      v22 = *(_DWORD *)(v19 + 56);
      v23 = *(unsigned __int8 *)(v19 + 20);
      if ( v22 )
      {
        if ( v22 != 1 )
        {
          sub_1872CE0("");
          sub_1873130(114, 3131);
        }
        if ( !v21 )
        {
          v41 = v23 + 1;
          goto LABEL_25;
        }
        v41 = -2;
LABEL_78:
        ++*(_DWORD *)(a1 + 432);
      }
      else
      {
        if ( !v21 )
        {
          v41 = ~(unsigned __int8)v23;
          goto LABEL_78;
        }
        v41 = 2;
LABEL_25:
        ++*(_DWORD *)(a1 + 436);
      }
      if ( v21 == (*(_BYTE *)(v19 + 8) & 1) )
      {
        v30 = *(_DWORD *)(v19 + 56);
        if ( *(_BYTE *)(v19 + 20) )
        {
          if ( v30 )
            v31 = &qword_1C7F280;
          else
            v31 = (int *)&qword_1C7F260;
          sub_27B340((__int64)v64, v19 + 24, v31);
          sub_894960((__int64)v65, (__int64)v64);
          sub_25A130(v64);
        }
        else
        {
          v65[0] = 0;
          v65[1] = 0;
          v65[2] = 1;
          v65[3] = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v65, (int *)(v19 + 24));
          if ( v30 )
            v42 = &qword_1C7F280;
          else
            v42 = (int *)&qword_1C7F260;
          v66[0] = 0;
          v66[1] = 0;
          v66[2] = 1;
          v66[3] = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v66, v42);
        }
      }
      else
      {
        sub_894960((__int64)v65, v19 + 24);
      }
      v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 112LL);
      if ( *(_BYTE *)(v24 + 264) && *(_DWORD *)(a1 + 320) < *(_DWORD *)(v24 + 344) && !LODWORD(v66[0]) )
        sub_A9CDE0((__int64 *)a1, *(unsigned int *)(v19 + 16), v20, v41, v19, (unsigned int *)v65);
      sub_25A130((char *)v66);
      sub_25A130((char *)v65);
      v10 = *(_DWORD *)(a1 + 264);
      v6 = *(_QWORD *)(a1 + 176);
LABEL_33:
      v25 = *(_QWORD *)a1;
      v7 = v10 + 1;
      v2 = qword_1C7ECB8;
      *(_DWORD *)(a1 + 264) = v7;
      v3 = *(_QWORD *)(v25 + 16);
      v4 = *(_QWORD *)(v3 + 8984);
      if ( !v6 )
      {
LABEL_37:
        if ( v4 == v2 )
          goto LABEL_38;
        return 1;
      }
    }
  }
  return result;
}

