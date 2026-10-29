void (*__fastcall sub_2043D50(__int64 *a1, __int64 a2))()
{
  char v4; // al
  __int64 v5; // rdi
  char v6; // bp
  void (*v7)(); // rsi
  __int64 v8; // rdx
  __int64 v9; // rdi
  void (*result)(); // rax
  __int64 v11; // rax
  void (*v12)(); // rcx
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // rdi
  _DWORD *v20; // rdx
  __int64 v21; // rsi
  __int64 *v22; // rdi
  __int64 v23; // rdi
  _BYTE *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdi
  unsigned __int8 *v38; // rax
  size_t v39; // rdx
  __int64 v40; // rdi
  _BYTE *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // [rsp+8h] [rbp-40h]

  if ( *(_QWORD *)(a2 + 72) )
  {
    v4 = sub_204C430(a2);
    v5 = *a1;
    v6 = v4;
    if ( v4 )
    {
      if ( (*(_BYTE *)(a2 + 7) & 0x10) == 0 )
        goto LABEL_4;
LABEL_32:
      sub_995540(v5, "\n");
      v38 = (unsigned __int8 *)sub_20CC3B0(a2);
      sub_20323F0(*a1, v38, v39);
      v40 = *a1;
      v41 = *(_BYTE **)(*a1 + 32);
      if ( *(_QWORD *)(*a1 + 24) <= (unsigned __int64)v41 )
      {
        sub_227BA10(v40, 58);
      }
      else
      {
        *(_QWORD *)(v40 + 32) = v41 + 1;
        *v41 = 58;
      }
      v5 = *a1;
      if ( v6 )
        goto LABEL_4;
      goto LABEL_24;
    }
    if ( (*(_BYTE *)(a2 + 7) & 0x10) != 0 )
      goto LABEL_32;
  }
  else
  {
    v5 = *a1;
    if ( (*(_BYTE *)(a2 + 7) & 0x10) != 0 )
    {
      v6 = 0;
      goto LABEL_32;
    }
  }
  sub_995540(v5, "\n");
  v30 = sub_2038650(a1[4], a2, v26, v27, v28, v29);
  if ( v30 == -1 )
  {
    sub_995540(*a1, "<badref>:");
  }
  else
  {
    v31 = sub_227B930(*a1, v30);
    sub_995540(v31, ":");
  }
  v5 = *a1;
LABEL_24:
  sub_22239C0(v5, 50);
  sub_995540(*a1, ";");
  v32 = *(_QWORD *)(a2 + 16);
  if ( v32 )
  {
    while ( **(_BYTE **)(v32 + 24) <= 0x1Cu )
    {
      v32 = *(_QWORD *)(v32 + 8);
      if ( !v32 )
        goto LABEL_55;
    }
    sub_995540(*a1, " preds = ");
    sub_2040820(a1, *(_QWORD *)(*(_QWORD *)(v32 + 24) + 40LL), v33, v34, v35, v36);
    while ( 1 )
    {
      v32 = *(_QWORD *)(v32 + 8);
      if ( !v32 )
        break;
      if ( **(_BYTE **)(v32 + 24) > 0x1Cu )
      {
        v37 = *a1;
LABEL_38:
        sub_995540(v37, ", ");
        sub_2040820(a1, *(_QWORD *)(*(_QWORD *)(v32 + 24) + 40LL), v42, v43, v44, v45);
        while ( 1 )
        {
          v32 = *(_QWORD *)(v32 + 8);
          if ( !v32 )
            goto LABEL_40;
          if ( **(_BYTE **)(v32 + 24) > 0x1Cu )
          {
            v37 = *a1;
            goto LABEL_38;
          }
        }
      }
    }
LABEL_40:
    v5 = *a1;
  }
  else
  {
LABEL_55:
    sub_995540(*a1, " No predecessors!");
    v5 = *a1;
  }
LABEL_4:
  v7 = (void (*)())"\n";
  sub_995540(v5, "\n");
  v9 = a1[28];
  result = (void (*)())(a2 + 48);
  v46 = a2 + 48;
  if ( v9 )
  {
    v11 = *(_QWORD *)v9;
    v7 = nullsub_1275;
    v8 = *a1;
    v12 = *(void (**)())(*(_QWORD *)v9 + 24LL);
    if ( v12 == nullsub_1275 )
    {
      v13 = *(_QWORD *)(a2 + 56);
      if ( v13 != v46 )
      {
LABEL_7:
        if ( !v13 )
LABEL_57:
          BUG();
        while ( 1 )
        {
          v14 = *(_QWORD *)(v13 + 40);
          if ( v14 )
          {
            v15 = sub_208B290(v14, v7, v8);
            v17 = v16;
            v18 = v15;
            if ( v15 != v16 )
              break;
          }
LABEL_15:
          v7 = (void (*)())(v13 - 24);
          sub_2041FC0(a1, (unsigned __int8 *)(v13 - 24));
          v25 = *a1;
          result = *(void (**)())(*a1 + 32);
          if ( (unsigned __int64)result >= *(_QWORD *)(*a1 + 24) )
          {
            v7 = (void (*)())(byte_9 + 1);
            result = (void (*)())sub_227BA10(v25, 10);
          }
          else
          {
            v8 = (__int64)result + 1;
            *(_QWORD *)(v25 + 32) = (char *)result + 1;
            *(_BYTE *)result = 10;
          }
          v13 = *(_QWORD *)(v13 + 8);
          if ( v13 == v46 )
            goto LABEL_50;
          if ( !v13 )
            goto LABEL_57;
        }
        while ( 1 )
        {
          v19 = *a1;
          v20 = *(_DWORD **)(*a1 + 32);
          if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v20 > 3u )
          {
            *v20 = 538976288;
            v21 = v18;
            *(_QWORD *)(v19 + 32) += 4LL;
            v22 = a1;
            if ( *(_BYTE *)(v18 + 32) )
            {
LABEL_44:
              sub_203E7C0(v22, v21);
              goto LABEL_13;
            }
          }
          else
          {
            sub_227BF10(v19, "    ", 4);
            v21 = v18;
            v22 = a1;
            if ( *(_BYTE *)(v18 + 32) )
              goto LABEL_44;
          }
          sub_203EA70(v22, v21);
LABEL_13:
          v23 = *a1;
          v24 = *(_BYTE **)(*a1 + 32);
          if ( (unsigned __int64)v24 >= *(_QWORD *)(*a1 + 24) )
          {
            sub_227BA10(v23, 10);
            v18 = *(_QWORD *)(v18 + 8);
            if ( v17 == v18 )
              goto LABEL_15;
          }
          else
          {
            *(_QWORD *)(v23 + 32) = v24 + 1;
            *v24 = 10;
            v18 = *(_QWORD *)(v18 + 8);
            if ( v17 == v18 )
              goto LABEL_15;
          }
        }
      }
      goto LABEL_52;
    }
    v7 = (void (*)())a2;
    result = (void (*)())((__int64 (__fastcall *)(__int64, __int64, __int64))v12)(v9, a2, v8);
    v13 = *(_QWORD *)(a2 + 56);
    if ( v13 != v46 )
      goto LABEL_7;
LABEL_50:
    v9 = a1[28];
    if ( v9 )
    {
      v11 = *(_QWORD *)v9;
      v8 = *a1;
LABEL_52:
      result = *(void (**)())(v11 + 32);
      if ( result != nullsub_1276 )
        return (void (*)())((__int64 (__fastcall *)(__int64, __int64, __int64))result)(v9, a2, v8);
    }
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 56);
    if ( v13 != v46 )
      goto LABEL_7;
  }
  return result;
}
