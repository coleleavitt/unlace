void __fastcall sub_B970C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  const char *v14; // rsi
  __int64 v15; // rax
  int v16; // ecx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r15
  unsigned __int64 v21; // rax
  int v22; // ebp
  int v23; // r14d
  __int64 v24; // rdi
  _WORD *v25; // rdx
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // r14
  _BYTE *v29; // rax
  _WORD *v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v33; // [rsp+28h] [rbp-80h] BYREF
  void *v34; // [rsp+30h] [rbp-78h] BYREF
  __int64 v35; // [rsp+38h] [rbp-70h]
  _BYTE v36[16]; // [rsp+40h] [rbp-68h] BYREF
  void *v37[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v38; // [rsp+60h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 40LL);
  if ( (v2 & 7) != 0 )
    BUG();
  v5 = *(unsigned int **)((v2 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  v6 = *v5;
  v34 = v36;
  sub_B8EB70(&v34, (_BYTE *)v5 + 16, (__int64)v5 + v6 + 16);
  v7 = *(_QWORD *)(a2 + 96);
  v8 = *(_QWORD *)a1;
  if ( v7 )
  {
    v9 = sub_971800(v8, "@implementation ");
    v10 = sub_22581D0(v9, v34, v35);
    v11 = sub_971800(v10, " : ");
    sub_B4EFB0(v7, v11);
    v32 = a2 + 48;
    v12 = sub_B6AC30(a2 + 48);
    if ( !v12 )
      goto LABEL_9;
  }
  else
  {
    v15 = sub_971800(v8, "@implementation ");
    sub_22581D0(v15, v34, v35);
    v32 = a2 + 48;
    v12 = sub_B6AC30(a2 + 48);
    if ( !v12 )
      goto LABEL_15;
  }
  if ( (*(_BYTE *)(v12 + 28) & 0x7F) == 0x32 )
  {
LABEL_17:
    v16 = 0;
    v17 = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v17 )
    {
      while ( (*(_BYTE *)(v17 + 28) & 0x7F) == 0x32 )
      {
LABEL_29:
        ++v16;
        v17 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v17 )
          goto LABEL_22;
      }
      while ( 1 )
      {
        v18 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v17 = v18;
        if ( !v18 )
          break;
        if ( (*(_BYTE *)(v18 + 28) & 0x7F) == 0x32 )
          goto LABEL_29;
      }
    }
LABEL_22:
    if ( v16 != -1 )
    {
      sub_971800(*(_QWORD *)a1, "{\n");
      *(_DWORD *)(a1 + 32) += *(unsigned __int8 *)(a1 + 8);
      v19 = sub_B6AC30(v32);
      v20 = v19;
      if ( v19 )
      {
        if ( (*(_BYTE *)(v19 + 28) & 0x7F) == 0x32 )
        {
LABEL_31:
          v22 = *(_DWORD *)(a1 + 32);
          v23 = 0;
          if ( v22 )
          {
            do
            {
              while ( 1 )
              {
                v24 = *(_QWORD *)a1;
                v25 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
                if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v25 > 1u )
                  break;
                ++v23;
                sub_22581D0(v24, "  ", 2);
                if ( v22 == v23 )
                  goto LABEL_34;
              }
              ++v23;
              *v25 = 8224;
              *(_QWORD *)(v24 + 32) += 2LL;
            }
            while ( v22 != v23 );
          }
LABEL_34:
          v26 = *(_QWORD *)a1;
          v27 = sub_B685F0(v20);
          v33 = sub_B8FF10(v27, *(_QWORD *)(v20 + 48));
          sub_F54860(v37, &v33, a1 + 8);
          v28 = sub_22581D0(v26, v37[0], v37[1]);
          v29 = *(_BYTE **)(v28 + 32);
          if ( (unsigned __int64)v29 >= *(_QWORD *)(v28 + 24) )
          {
            v28 = sub_2257CD0(v28, 32);
          }
          else
          {
            *(_QWORD *)(v28 + 32) = v29 + 1;
            *v29 = 32;
          }
          sub_B4EFB0(v20, v28);
          v30 = *(_WORD **)(v28 + 32);
          if ( *(_QWORD *)(v28 + 24) - (_QWORD)v30 > 1u )
          {
            *v30 = 2619;
            *(_QWORD *)(v28 + 32) += 2LL;
          }
          else
          {
            sub_22581D0(v28, ";\n", 2);
          }
          if ( v37[0] != &v38 )
            operator delete(v37[0]);
          while ( 1 )
          {
            v31 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v20 = v31;
            if ( !v31 )
              break;
            if ( (*(_BYTE *)(v31 + 28) & 0x7F) == 0x32 )
              goto LABEL_31;
          }
          v14 = "}\n";
          *(_DWORD *)(a1 + 32) -= *(unsigned __int8 *)(a1 + 8);
          goto LABEL_10;
        }
        while ( 1 )
        {
          v21 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v20 = v21;
          if ( !v21 )
            break;
          if ( (*(_BYTE *)(v21 + 28) & 0x7F) == 0x32 )
            goto LABEL_31;
        }
      }
      v14 = "}\n";
      *(_DWORD *)(a1 + 32) -= *(unsigned __int8 *)(a1 + 8);
LABEL_10:
      sub_971800(*(_QWORD *)a1, v14);
      sub_B96800(a1, v32, 0);
      goto LABEL_11;
    }
  }
  else
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v12 = v13;
      if ( !v13 )
        break;
      if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0x32 )
        goto LABEL_17;
    }
  }
  if ( v7 )
  {
LABEL_9:
    v14 = "\n";
    goto LABEL_10;
  }
LABEL_15:
  if ( sub_B6AC30(v32) )
    goto LABEL_9;
  sub_B96800(a1, v32, 0);
  sub_971800(*(_QWORD *)a1, "\n");
LABEL_11:
  sub_971800(*(_QWORD *)a1, "@end");
  if ( v34 != v36 )
    operator delete(v34);
}

