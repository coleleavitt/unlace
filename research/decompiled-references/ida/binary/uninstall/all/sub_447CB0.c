__int64 __fastcall sub_447CB0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v6; // edx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // ebp
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rsi
  char *v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rsi
  int v21; // ebp
  int v22; // eax
  __int64 v23; // rsi
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rbx
  _DWORD *v36; // rax
  __int64 v37; // rbx
  void *v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rsi
  int v41; // ebp
  int v42; // eax
  _DWORD *v43; // rax
  __int64 v44; // rbx
  void *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdx
  int v48; // ecx
  int v49; // ebp
  int v50; // r8d
  int v51; // r9d
  int v52; // eax
  __int64 v53; // rsi
  __int64 v54; // rbp
  __int64 v55; // rdx
  __int64 v56; // rdi
  int v57; // eax
  __int64 v58; // rdi
  int v59; // eax
  __int64 v60; // rbx
  int v61; // r8d
  int v62; // r9d
  __int64 v63; // rbx
  int *v64; // rax
  int *v65; // r13
  int v66; // eax
  __int64 v67; // rax
  unsigned int v68; // [rsp+0h] [rbp-48h] BYREF
  int v69; // [rsp+4h] [rbp-44h] BYREF
  __int64 v70; // [rsp+8h] [rbp-40h] BYREF
  __int64 v71; // [rsp+10h] [rbp-38h] BYREF
  __int64 v72; // [rsp+18h] [rbp-30h]

  if ( a3 != 3 )
  {
    sub_458930(a2, 1, a4, "msg options");
    return 1;
  }
  v8 = sub_496740(a1, a2);
  *(_DWORD *)v8 = 0;
  v9 = sub_40FB00(7);
  *(_QWORD *)(v8 + 8) = v9;
  *(_DWORD *)v9 = 1986358317;
  *(_WORD *)(v9 + 4) = 27749;
  *(_BYTE *)(*(_QWORD *)(v8 + 8) + 6LL) = 0;
  ++*(_DWORD *)v8;
  v10 = *(_QWORD *)(a4 + 16);
  *(_DWORD *)(v8 + 16) = 6;
  *(_QWORD *)(v8 + 24) = 0;
  v11 = sub_4406D0(0, v10, v8, &v70);
  v12 = *(_DWORD *)v8 - 1;
  v13 = *(_DWORD *)v8 == 1;
  *(_DWORD *)v8 = v12;
  if ( v12 < 0 || v13 )
    sub_47B120(v8);
  if ( v11 || (v14 = v70) == 0 )
  {
    v15 = "missing return option \"-level\"";
LABEL_10:
    v16 = sub_48DF10(v15, 0xFFFFFFFF);
    sub_48AFD0(a2, v16);
    return 1;
  }
  v17 = sub_47C180(a2, v70, &v69);
  v6 = 1;
  if ( v17 == 1 )
    return v6;
  v18 = sub_496740(a2, v14);
  *(_DWORD *)v18 = 0;
  v19 = sub_40FB00(6);
  *(_QWORD *)(v18 + 8) = v19;
  *(_DWORD *)v19 = 1685021485;
  *(_BYTE *)(v19 + 4) = 101;
  *(_BYTE *)(*(_QWORD *)(v18 + 8) + 5LL) = 0;
  ++*(_DWORD *)v18;
  v20 = *(_QWORD *)(a4 + 16);
  *(_DWORD *)(v18 + 16) = 5;
  *(_QWORD *)(v18 + 24) = 0;
  v21 = sub_4406D0(0, v20, v18, &v70);
  v22 = *(_DWORD *)v18 - 1;
  v13 = *(_DWORD *)v18 == 1;
  *(_DWORD *)v18 = v22;
  if ( v22 < 0 || v13 )
    sub_47B120(v18);
  if ( v21 || (v23 = v70) == 0 )
  {
    v15 = "missing return option \"-code\"";
    goto LABEL_10;
  }
  v24 = sub_47C180(a2, v70, &v68);
  v6 = 1;
  if ( v24 != 1 )
  {
    v25 = 2;
    if ( !v69 )
      v25 = v68;
    LOBYTE(v6) = 0;
    v68 = v25;
    if ( v25 )
    {
      v26 = sub_496740(a2, v23);
      v27 = 8;
      *(_DWORD *)v26 = 0;
      v71 = v26;
      *(_QWORD *)(v26 + 8) = sub_40FB00(8);
      v32 = *(_QWORD *)(v71 + 8);
      *(_DWORD *)v32 = 1919248226;
      *(_WORD *)(v32 + 4) = 28530;
      *(_BYTE *)(v32 + 6) = 114;
      *(_BYTE *)(*(_QWORD *)(v71 + 8) + 7LL) = 0;
      v33 = v71;
      ++*(_DWORD *)v71;
      *(_DWORD *)(v33 + 16) = 7;
      v34 = v68;
      *(_QWORD *)(v33 + 24) = 0;
      if ( (_DWORD)v34 == 3 )
      {
        v67 = sub_496740(8, v34);
        v27 = 34;
        *(_DWORD *)v67 = 0;
        v72 = v67;
        *(_QWORD *)(v67 + 8) = sub_40FB00(34);
        strcpy(*(char **)(v72 + 8), "invoked \"break\" outside of a loop");
        v35 = v72;
        *(_DWORD *)(v72 + 16) = 33;
      }
      else
      {
        if ( (int)v34 <= 3 )
        {
          if ( (_DWORD)v34 == 1 )
          {
            v35 = *(_QWORD *)(a4 + 8);
            goto LABEL_25;
          }
LABEL_24:
          v27 = (__int64)"command returned bad code: %d";
          v35 = sub_48F930((unsigned int)"command returned bad code: %d", v34, v28, v29, v30, v31);
LABEL_25:
          v72 = v35;
LABEL_26:
          ++*(_DWORD *)v35;
          if ( v68 != 1 )
          {
            v34 = v35;
            v27 = a2;
            sub_48AFD0(a2, v35);
          }
          v36 = (_DWORD *)sub_496740(v27, v34);
          *v36 = 0;
          v37 = (__int64)v36;
          v38 = (void *)sub_40FB00(11);
          *(_QWORD *)(v37 + 8) = v38;
          qmemcpy(v38, "-errorcode", 10);
          v39 = 0;
          *(_BYTE *)(*(_QWORD *)(v37 + 8) + 10LL) = 0;
          ++*(_DWORD *)v37;
          v40 = *(_QWORD *)(a4 + 16);
          *(_DWORD *)(v37 + 16) = 10;
          *(_QWORD *)(v37 + 24) = 0;
          v41 = sub_4406D0(0, v40, v37, &v70);
          v42 = *(_DWORD *)v37 - 1;
          v13 = *(_DWORD *)v37 == 1;
          *(_DWORD *)v37 = v42;
          if ( v42 < 0 || v13 )
          {
            v39 = v37;
            sub_47B120(v37);
          }
          if ( !v41 )
          {
            v40 = v70;
            if ( v70 )
            {
              v39 = a2;
              sub_48BB80(a2);
            }
          }
          v43 = (_DWORD *)sub_496740(v39, v40);
          *v43 = 0;
          v44 = (__int64)v43;
          v45 = (void *)sub_40FB00(11);
          *(_QWORD *)(v44 + 8) = v45;
          qmemcpy(v45, "-errorinfo", 10);
          *(_BYTE *)(*(_QWORD *)(v44 + 8) + 10LL) = 0;
          ++*(_DWORD *)v44;
          v46 = *(_QWORD *)(a4 + 16);
          *(_DWORD *)(v44 + 16) = 10;
          *(_QWORD *)(v44 + 24) = 0;
          v49 = sub_4406D0(0, v46, v44, &v70);
          v52 = *(_DWORD *)v44 - 1;
          v13 = *(_DWORD *)v44 == 1;
          *(_DWORD *)v44 = v52;
          if ( v52 < 0 || v13 )
            sub_47B120(v44);
          if ( !v49 && v70 )
            sub_40ABA0(a2, v70, v47, v48, v50, v51);
          v53 = v68;
          if ( v68 == 1 )
          {
            sub_48AFD0(a2, v72);
            v53 = v68;
          }
          v54 = sub_48B7B0(a2, v53);
          sub_40BEE0(a2);
          v68 = sub_409D20(a2, 2u, &v71, 0x20000);
          if ( v68 == 1 )
          {
            if ( (unsigned int)sub_458F10(a2, 2, v55) )
            {
              sub_48B090(a2, v54);
              sub_40A770(a2, 2u, (__int64)&v71, 1, v61, v62);
            }
            else
            {
              v63 = sub_45D780(8);
              if ( v63 )
              {
                v64 = (int *)sub_48B5D0(a2);
                ++*v64;
                v65 = v64;
                if ( sub_474D60(a2, "bgerror", 0, 1) )
                {
                  sub_48AE70(v54);
                  sub_464DA0(v63, "bgerror failed to handle background error.\n", 0xFFFFFFFFLL);
                  sub_464DA0(v63, "    Original error: ", 0xFFFFFFFFLL);
                  sub_464CF0(v63);
                  sub_464DA0(v63, "\n", 0xFFFFFFFFLL);
                  sub_464DA0(v63, "    Error in bgerror: ", 0xFFFFFFFFLL);
                }
                else
                {
                  sub_48B090(a2, v54);
                  sub_4A5910(a2, "errorInfo", 0, 1);
                }
                sub_464CF0(v63);
                sub_464DA0(v63, "\n", 0xFFFFFFFFLL);
                v66 = *v65 - 1;
                v13 = *v65 == 1;
                *v65 = v66;
                if ( v66 < 0 || v13 )
                  sub_47B120(v65);
                sub_4653C0(v63);
              }
              else
              {
                sub_48AE70(v54);
              }
            }
            v68 = 0;
          }
          else
          {
            sub_48AE70(v54);
          }
          v56 = v71;
          v57 = *(_DWORD *)v71 - 1;
          v13 = *(_DWORD *)v71 == 1;
          *(_DWORD *)v71 = v57;
          if ( v57 < 0 || v13 )
            sub_47B120(v56);
          v58 = v72;
          v59 = *(_DWORD *)v72 - 1;
          v13 = *(_DWORD *)v72 == 1;
          *(_DWORD *)v72 = v59;
          if ( v59 < 0 || v13 )
            sub_47B120(v58);
          sub_48B350(a2);
          return v68;
        }
        if ( (_DWORD)v34 != 4 )
          goto LABEL_24;
        v60 = sub_496740(8, v34);
        *(_DWORD *)v60 = 0;
        v72 = v60;
        *(_QWORD *)(v60 + 8) = sub_40FB00(37);
        v27 = 0x206120666F206564LL;
        strcpy(*(char **)(v72 + 8), "invoked \"continue\" outside of a loop");
        v35 = v72;
        *(_DWORD *)(v72 + 16) = 36;
      }
      *(_QWORD *)(v35 + 24) = 0;
      goto LABEL_26;
    }
  }
  return v6;
}

