__int64 __fastcall sub_218BD0(__int64 a1, int a2, unsigned int a3, int a4, __int64 a5, int a6)
{
  int v6; // r15d
  __int64 v7; // rbp
  __int64 v9; // rbx
  int v10; // eax
  bool v11; // zf
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rbx
  int v15; // eax
  int v17; // eax
  int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // ebp
  int v23; // eax
  __int64 v24; // rbp
  int v25; // r12d
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rcx
  __int64 v29; // rsi
  int v30; // r12d
  _DWORD *v31; // rsi
  int v32; // [rsp+0h] [rbp-98h]
  __int64 v33; // [rsp+0h] [rbp-98h]
  unsigned int v34; // [rsp+14h] [rbp-84h]
  __int64 v35; // [rsp+18h] [rbp-80h]
  _DWORD *v36; // [rsp+20h] [rbp-78h]
  __int64 v37; // [rsp+28h] [rbp-70h]
  _QWORD v38[2]; // [rsp+30h] [rbp-68h] BYREF
  _DWORD v39[4]; // [rsp+40h] [rbp-58h] BYREF
  char v40[7]; // [rsp+51h] [rbp-47h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 440) )
  {
    if ( !under_debugger )
      sub_37CFE0(51295);
    goto LABEL_74;
  }
  v6 = *(_DWORD *)(a1 + 480);
  v7 = a1;
  if ( v6 != -1 )
  {
    *(_DWORD *)(a1 + 480) = -1;
    v9 = *(_QWORD *)(a1 + 432) + 104LL * v6;
    v10 = *(_DWORD *)(v9 + 24);
    v32 = v10;
    LOBYTE(v10) = v10 & 0x7F;
    v11 = *(_QWORD *)(v9 + 40) == 0;
    *(_DWORD *)(v9 + 24) = v10;
    if ( !v11 )
    {
      v17 = strcmp(*(const char **)(v9 + 32), "result");
      v18 = v32;
      a4 = v17;
      if ( !(v17 | v32 & 0x20) )
      {
        LOBYTE(v18) = v32 & 0x7B;
        *(_DWORD *)(v9 + 24) = v18;
        sub_20F1C0((_QWORD *)a1, v6);
      }
    }
  }
  v12 = *(_QWORD *)(a1 + 432);
  *(_DWORD *)(a1 + 480) = a2;
  v13 = 104LL * a2;
  v14 = v13 + v12;
  v15 = *(_DWORD *)(v14 + 24);
  if ( !*(_BYTE *)(a1 + 320) && (v15 & 2) == 0 )
  {
    sub_36C430(a1, v14 + 80, -1, a4, 13 * a2, a6, v32);
    if ( (unsigned __int8)sub_1C1A60(a1, (_QWORD *)(v14 + 80), (_DWORD *)v14, a3) )
    {
LABEL_13:
      if ( *(_DWORD *)v14 != 3 || (get_tinfo_property(*(_QWORD *)(v14 + 80), 2) & 0x2F) != 0xD )
        goto LABEL_14;
      sub_1C28C0(v38, v7, v14, *(_DWORD *)(v14 + 88));
      if ( !(unsigned int)verify_argloc(v38, *(unsigned int *)(v14 + 88), 0)
        || (sub_1C42B0(v14, *(_DWORD *)(v14 + 88)),
            sub_1C28C0(v39, v7, v14, *(_DWORD *)(v14 + 88)),
            copy_argloc(v38, v39),
            cleanup_argloc(v39),
            !(unsigned int)verify_argloc(v38, *(unsigned int *)(v14 + 88), 0)) )
      {
        cleanup_argloc(v38);
LABEL_14:
        v14 = v13 + *(_QWORD *)(v7 + 432);
        v15 = *(_DWORD *)(v14 + 24);
        goto LABEL_5;
      }
      if ( !under_debugger )
        sub_37CFE0(52665);
LABEL_74:
      BUG();
    }
    if ( (get_tinfo_property(*(_QWORD *)(v14 + 80), 2) & 0xF) == 9 )
    {
      sub_326800(v38, *(_QWORD *)(a1 + 1504), *(unsigned int *)(v14 + 88));
      v27 = v38[0];
LABEL_36:
      if ( v27 )
      {
        if ( (unsigned __int8)sub_1C1A60(v7, v38, (_DWORD *)v14, a3) )
        {
          v30 = *(_DWORD *)(v14 + 88);
          sub_1EA530(v14, *(_QWORD *)(v7 + 1504), v38, 0);
          if ( *(_DWORD *)(v14 + 88) < v30 )
          {
            *(_DWORD *)(v14 + 24) |= 0x400u;
            sub_1EF1F0(v7, *(_QWORD *)(v14 + 16), v14);
          }
        }
      }
LABEL_38:
      clear_tinfo_t(v38);
      goto LABEL_13;
    }
    v19 = *(_DWORD *)(a1 + 64);
    v33 = *(_QWORD *)(a1 + 1496);
    v36 = (_DWORD *)(v13 + *(_QWORD *)(a1 + 432));
    v20 = v19 - 1;
    if ( (int)(v19 - 1) <= 0 )
      goto LABEL_60;
    v21 = 8LL * (int)v20;
    v22 = a2;
LABEL_21:
    if ( v20 >= v19 )
    {
      if ( !under_debugger )
        sub_37CFE0(52719);
      goto LABEL_74;
    }
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + v21) + 56LL) )
      goto LABEL_33;
    v34 = v20;
    v23 = v22;
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + v21) + 56LL);
    v35 = v21;
    v25 = v23;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v24 + 64) == 9 )
        {
          v26 = *(_QWORD *)(v24 + 72);
          if ( v25 == *(_DWORD *)(v26 + 16) )
            break;
        }
        v24 = *(_QWORD *)(v24 + 16);
        if ( !v24 )
          goto LABEL_32;
      }
      if ( *(_DWORD *)v24 != 4 && (*(_DWORD *)v24 != 67 || *(_DWORD *)(v24 + 36) != *(_DWORD *)(v24 + 68)) )
        goto LABEL_29;
      if ( *(_QWORD *)(v26 + 8) )
      {
LABEL_51:
        v7 = a1;
LABEL_47:
        if ( (unsigned __int8)get_tinfo_property(*(_QWORD *)(v33 + 296), 2) )
        {
          v29 = v33 + 312;
          if ( v36[22] == 8 )
            v29 = v33 + 296;
LABEL_50:
          v38[0] = 0;
          copy_tinfo_t(v38, v29);
          v27 = v38[0];
          goto LABEL_36;
        }
        goto LABEL_56;
      }
      if ( *(_DWORD *)(v24 + 68) == v36[22] && *(_BYTE *)(v24 + 32) == 4 )
      {
        v28 = *(_QWORD *)(v24 + 40);
        if ( (unsigned int)(*(_DWORD *)v28 - 56) <= 1 )
          break;
      }
LABEL_30:
      sub_326610(v39, v33);
      if ( !LOBYTE(v39[0]) )
      {
        v7 = a1;
        clear_tinfo_t(v39);
        goto LABEL_47;
      }
      clear_tinfo_t(v39);
      v24 = *(_QWORD *)(v24 + 16);
      if ( !v24 )
      {
LABEL_32:
        v20 = v34;
        v21 = v35;
        v22 = v25;
LABEL_33:
        v21 -= 8;
        if ( --v20 )
        {
          v19 = *(_DWORD *)(a1 + 64);
          goto LABEL_21;
        }
        v7 = a1;
LABEL_60:
        if ( v36[22] != 2 )
        {
          sub_326610(v39, v33);
          if ( LOBYTE(v39[0]) || !(unsigned __int8)get_tinfo_property(*(_QWORD *)(v33 + 312), 2) )
            v31 = v39;
          else
            v31 = (_DWORD *)(v33 + 312);
          v38[0] = 0;
          copy_tinfo_t(v38, v31);
          clear_tinfo_t(v39);
          v27 = v38[0];
          goto LABEL_36;
        }
LABEL_56:
        v38[0] = 0;
        goto LABEL_38;
      }
    }
    v37 = *(_QWORD *)(v28 + 72);
    if ( get_tinfo_size(0, *(_QWORD *)(v37 + 72), 0) == *(_DWORD *)(v24 + 68) )
    {
      v29 = v37 + 72;
      if ( (unsigned __int8)sub_1C1A60(a1, (_QWORD *)(v37 + 72), v36, *(_DWORD *)(a1 + 72)) )
      {
        v7 = a1;
        goto LABEL_50;
      }
    }
    v26 = *(_QWORD *)(v24 + 72);
LABEL_29:
    if ( *(_QWORD *)(v26 + 8) )
      goto LABEL_51;
    goto LABEL_30;
  }
LABEL_5:
  strcpy(v40, "result");
  if ( (v15 & 4) != 0 || *(_BYTE *)(v7 + 320) && (v15 & 0x100) != 0 )
    goto LABEL_10;
  if ( sub_20DD80(v7, v40, -10) )
  {
    v15 = *(_DWORD *)(v14 + 24);
LABEL_10:
    LOBYTE(v15) = v15 | 0x80;
    *(_DWORD *)(v14 + 24) = v15;
    return 1;
  }
  return sub_20E990((_QWORD *)v7, v14, v40, 132);
}
