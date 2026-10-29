__int64 __fastcall sub_1AD4AB0(__int64 *a1, char a2, int a3, unsigned int a4)
{
  char *v4; // rax
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // rax
  char v14; // bl
  unsigned __int8 v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbp
  __int64 v26; // r8
  __int64 *v27; // r9
  __int64 v28; // rax
  unsigned int v29; // esi
  unsigned int v30; // ecx
  __int64 *v31; // rdx
  __int64 v32; // r10
  __int64 v33; // rdx
  int v34; // r11d
  int v35; // eax
  int v36; // eax
  bool v37; // zf
  __int64 v38; // rax
  unsigned __int8 v39; // [rsp+1h] [rbp-C9h]
  __int64 v40; // [rsp+2h] [rbp-C8h] BYREF
  __int64 *v41; // [rsp+Ah] [rbp-C0h] BYREF
  _QWORD v42[2]; // [rsp+12h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+22h] [rbp-A8h]
  unsigned __int8 *v44[11]; // [rsp+32h] [rbp-98h] BYREF
  unsigned __int8 v45; // [rsp+8Ah] [rbp-40h]
  unsigned int v46; // [rsp+92h] [rbp-38h]
  unsigned __int8 v47; // [rsp+96h] [rbp-34h]

  if ( (_BYTE)a3 == 51 || a2 == 20 )
    return 0;
  if ( a2 == byte_2CD8C40 )
  {
    v7 = &byte_2CD8C40;
    goto LABEL_25;
  }
  if ( a2 == byte_2CD8C68 )
  {
    v4 = &byte_2CD8C40;
    goto LABEL_38;
  }
  if ( a2 == byte_2CD8C90 )
  {
    v5 = &byte_2CD8C40;
    goto LABEL_40;
  }
  if ( a2 == byte_2CD8CB8 )
  {
    v6 = &byte_2CD8C40;
    goto LABEL_42;
  }
  if ( a2 == byte_2CD8CE0 )
  {
    v7 = &byte_2CD8CE0;
    goto LABEL_25;
  }
  if ( a2 == byte_2CD8D08 )
  {
    v4 = &byte_2CD8CE0;
    goto LABEL_38;
  }
  if ( a2 == byte_2CD8D30 )
  {
    v5 = &byte_2CD8CE0;
    goto LABEL_40;
  }
  if ( a2 == byte_2CD8D58 )
  {
    v6 = &byte_2CD8CE0;
    goto LABEL_42;
  }
  if ( a2 == byte_2CD8D80 )
  {
    v7 = &byte_2CD8D80;
    goto LABEL_25;
  }
  if ( a2 == byte_2CD8DA8 )
  {
    v4 = &byte_2CD8D80;
    goto LABEL_38;
  }
  if ( a2 == byte_2CD8DD0 )
  {
    v5 = &byte_2CD8D80;
    goto LABEL_40;
  }
  if ( a2 == byte_2CD8DF8 )
  {
    v6 = &byte_2CD8D80;
    goto LABEL_42;
  }
  if ( a2 == byte_2CD8E20 )
  {
    v7 = &byte_2CD8E20;
    goto LABEL_25;
  }
  if ( a2 == byte_2CD8E48 )
  {
    v4 = &byte_2CD8E20;
    goto LABEL_38;
  }
  if ( a2 == byte_2CD8E70 )
  {
    v5 = &byte_2CD8E20;
    goto LABEL_40;
  }
  if ( a2 == byte_2CD8E98 )
  {
    v6 = &byte_2CD8E20;
    goto LABEL_42;
  }
  if ( byte_2CD8EC0 == a2 )
  {
    v7 = &byte_2CD8EC0;
    goto LABEL_25;
  }
  v4 = &byte_2CD8EC0;
  if ( byte_2CD8EE8 == a2 )
  {
LABEL_38:
    v7 = v4 + 40;
    goto LABEL_25;
  }
  v5 = &byte_2CD8EC0;
  if ( byte_2CD8F10 == a2 )
  {
LABEL_40:
    v7 = v5 + 80;
    goto LABEL_25;
  }
  v6 = &byte_2CD8EC0;
  if ( byte_2CD8F38 == a2 )
  {
LABEL_42:
    v7 = v6 + 120;
    goto LABEL_25;
  }
  v7 = (char *)&qword_2CD8F88;
  if ( byte_2CD8F60 == a2 )
    v7 = (char *)(&qword_2CD8F88 - 5);
LABEL_25:
  switch ( a3 )
  {
    case 6:
    case 7:
      v8 = 5;
      break;
    case 9:
    case 10:
      v8 = 8;
      break;
    case 12:
    case 13:
      v8 = 11;
      break;
    case 15:
    case 16:
      v8 = 14;
      break;
    case 26:
      v8 = 25;
      break;
    default:
      v8 = (unsigned __int8)a3;
      break;
  }
  v9 = *((_QWORD *)v7 + 1);
  if ( _bittest64(&v9, v8) )
    return 0;
  v10 = *((_QWORD *)v7 + 2);
  if ( _bittest64(&v10, v8) )
    return 0;
  v11 = *((_QWORD *)v7 + 3);
  if ( _bittest64(&v11, v8) )
    return 0;
  v12 = *((_QWORD *)v7 + 4);
  if ( _bittest64(&v12, v8) )
    return 0;
  v14 = a3;
  sub_168B9F0((__int64)v42, a1, a4, 0xB3Bu, 0);
  if ( v45 )
  {
    sub_1AA2FB0(v44, a2);
    goto LABEL_61;
  }
  v15 = v47;
  if ( v47 )
  {
    v20 = sub_168B9E0(v42);
    v21 = v43;
    if ( v43 )
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
    v41 = (__int64 *)v21;
    v22 = sub_1587BC0(v20, (__int64 *)&v41, v16, v17, v18, v19);
    sub_1AA2FB0((unsigned __int8 **)(*v22 + 32LL * v46 + 8), a2);
LABEL_61:
    if ( v45 )
    {
      sub_1573010(v44, v14);
      v15 = v45;
      goto LABEL_45;
    }
    v15 = v47;
    if ( !v47 )
      goto LABEL_45;
    v25 = sub_168B9E0(v42);
    v28 = v43;
    if ( v43 )
      v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
    v29 = *(_DWORD *)(v25 + 16);
    v40 = v28;
    if ( v29 )
    {
      v26 = v29 - 1;
      v30 = v26 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
      v31 = (__int64 *)(*(_QWORD *)v25 + 32LL * v30);
      v32 = *v31;
      if ( v28 == *v31 )
      {
LABEL_71:
        v33 = v31[1];
LABEL_72:
        sub_1573010((unsigned __int8 **)(v33 + 32LL * v46 + 8), v14);
        v15 = v45;
        goto LABEL_45;
      }
      v34 = 1;
      v27 = nullptr;
      if ( v32 != -4096 )
      {
        while ( 1 )
        {
          if ( v32 == -8192 && !v27 )
            v27 = v31;
          v30 = v26 & (v34 + v30);
          v31 = (__int64 *)(*(_QWORD *)v25 + 32LL * v30);
          v32 = *v31;
          if ( v28 == *v31 )
            goto LABEL_71;
          if ( v32 == -4096 )
          {
            if ( v27 )
              goto LABEL_75;
            break;
          }
          ++v34;
        }
      }
      v27 = v31;
LABEL_75:
      v35 = *(_DWORD *)(v25 + 8);
      v23 = 3 * v29;
      v41 = v27;
      v36 = v35 + 1;
      v24 = (unsigned int)(4 * v36);
      if ( (unsigned int)v24 < (unsigned int)v23 )
      {
        v23 = v29 - *(_DWORD *)(v25 + 12) - v36;
        v24 = v29 >> 3;
        if ( (unsigned int)v23 > (unsigned int)v24 )
        {
LABEL_77:
          v37 = *v27 == -4096;
          *(_DWORD *)(v25 + 8) = v36;
          if ( !v37 )
            --*(_DWORD *)(v25 + 12);
          v38 = v40;
          v27[1] = 0;
          v33 = 0;
          v27[2] = 0;
          *v27 = v38;
          v27[3] = 0;
          goto LABEL_72;
        }
LABEL_82:
        sub_1587800(v25, v29, v23, v24, v26, (__int64)v27);
        sub_15823C0((__int64 *)v25, &v40, &v41);
        v27 = v41;
        v36 = *(_DWORD *)(v25 + 8) + 1;
        goto LABEL_77;
      }
    }
    else
    {
      v41 = nullptr;
    }
    v29 *= 2;
    goto LABEL_82;
  }
LABEL_45:
  v39 = v15;
  sub_15F7200(v42);
  return v39;
}
