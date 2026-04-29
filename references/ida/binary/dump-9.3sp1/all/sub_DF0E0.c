__int64 __fastcall sub_DF0E0(_QWORD *a1, unsigned int a2, signed int a3, __int64 a4)
{
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rdi
  _DWORD *v10; // rax
  __int64 v11; // r8
  _DWORD *v12; // r11
  int v13; // eax
  _DWORD *v14; // rax
  _DWORD *v15; // rdx
  __int64 (*v16)(); // rax
  unsigned int v17; // ebx
  __int64 v19; // rsi
  __int64 v20; // r15
  unsigned int v21; // ecx
  char v22; // bl
  int v23; // esi
  __int64 v24; // rax
  char v25; // al
  unsigned int v26; // edx
  __int64 (*v27)(); // rcx
  __int64 (*v28)(); // rax
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  _DWORD *v33; // r11
  int v34; // edx
  int v35; // esi
  __int64 v36; // rax
  __int64 (*v37)(); // rax
  char v38; // dl
  int v39; // esi
  __int64 v40; // rax
  char v41; // al
  unsigned int v42; // ecx
  char v43; // al
  unsigned int v44; // ecx
  char v45; // al
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // eax
  __int64 item_end; // rax
  __int64 v50; // [rsp-10h] [rbp-D0h]
  _DWORD *v51; // [rsp+0h] [rbp-C0h]
  __int64 v52; // [rsp+8h] [rbp-B8h]
  _DWORD *v53; // [rsp+8h] [rbp-B8h]
  __int64 v54; // [rsp+8h] [rbp-B8h]
  _DWORD *v55; // [rsp+8h] [rbp-B8h]
  _DWORD *v56; // [rsp+8h] [rbp-B8h]
  unsigned int v57; // [rsp+8h] [rbp-B8h]
  unsigned int v58; // [rsp+8h] [rbp-B8h]
  unsigned int v59; // [rsp+10h] [rbp-B0h]
  _DWORD *v60; // [rsp+10h] [rbp-B0h]
  int v61; // [rsp+10h] [rbp-B0h]
  _DWORD *v62; // [rsp+10h] [rbp-B0h]
  __int64 v63; // [rsp+10h] [rbp-B0h]
  __int64 v64; // [rsp+10h] [rbp-B0h]
  __int64 v65; // [rsp+10h] [rbp-B0h]
  __int64 v66; // [rsp+10h] [rbp-B0h]
  __int64 v67; // [rsp+10h] [rbp-B0h]
  char v69; // [rsp+20h] [rbp-A0h]
  char v70; // [rsp+20h] [rbp-A0h]
  _DWORD *v71; // [rsp+20h] [rbp-A0h]
  _QWORD *v72; // [rsp+28h] [rbp-98h]
  __int64 v73[2]; // [rsp+30h] [rbp-90h] BYREF
  __int64 v74; // [rsp+40h] [rbp-80h]
  __int64 v75; // [rsp+48h] [rbp-78h]
  __int64 v76; // [rsp+60h] [rbp-60h] BYREF
  __int64 v77; // [rsp+68h] [rbp-58h]
  __int64 v78; // [rsp+70h] [rbp-50h]
  __int128 v79; // [rsp+78h] [rbp-48h]
  unsigned __int64 v80; // [rsp+88h] [rbp-38h]

  v80 = __readfsqword(0x28u);
  v7 = a1[1];
  v8 = *(_QWORD *)(v7 + 1504);
  v72 = *(_QWORD **)(*(_QWORD *)(v7 + 528) + 8LL * a3);
  sub_105300(v73, v7, a4);
  v9 = (__int64)v72;
  v10 = (_DWORD *)sub_A9D90((__int64)v72, v73, v72[6], 0, 0x20u);
  v12 = v10;
  if ( !v10 )
    goto LABEL_6;
  v13 = *v10;
  if ( (unsigned int)(v13 - 56) <= 1 )
  {
    if ( *((_BYTE *)v12 + 64) )
      goto LABEL_50;
    v23 = *(_DWORD *)(*a1 + 72LL);
    if ( v23 == a2 )
      goto LABEL_59;
    v60 = v12;
    v24 = *(_QWORD *)(a1[1] + 784LL);
    v76 = 0;
    v77 = 0;
    v52 = v24;
    sub_64190(&v76, v23);
    v25 = sub_6FC30(v52, &v76, a2, a3);
    v9 = v76;
    v69 = v25;
    qfree(v76);
    if ( !v69 )
      goto LABEL_59;
    v12 = v60;
    v13 = *v60;
    if ( *v60 != 4 )
    {
      v26 = v13 - 56;
      if ( v13 != 67 )
        goto LABEL_28;
      if ( v60[9] != v60[17] )
        goto LABEL_6;
      goto LABEL_26;
    }
LABEL_47:
    v38 = *((_BYTE *)v12 + 32);
    if ( v38 != 4 )
    {
      if ( (v38 & 0xFB) != 1 )
        goto LABEL_6;
LABEL_31:
      if ( *((_BYTE *)v12 + 64) == 1 )
      {
        v27 = sub_DAAF0;
        v28 = *(__int64 (**)())(*(_QWORD *)v8 + 280LL);
        if ( v28 != sub_DAAF0 )
        {
          v71 = v12;
          v9 = v8;
          v48 = ((__int64 (__fastcall *)(__int64, _QWORD))v28)(v8, *((_QWORD *)v12 + 3));
          v12 = v71;
          if ( v48 == 1 )
          {
            v71[1] |= 8u;
            goto LABEL_59;
          }
        }
        if ( v12[17] < *(_DWORD *)(*(_QWORD *)(a1[2] + 112LL) + 80LL) )
          goto LABEL_13;
        v29 = *a1;
        v30 = a1[1];
        v31 = *(_QWORD *)(*(_QWORD *)(*a1 + 56LL) + 16LL);
        if ( v31 )
          goto LABEL_84;
        v47 = **(unsigned int **)(v29 + 344);
        if ( (unsigned int)v47 >= *(_DWORD *)(v30 + 64) )
          sub_DAC10(v9, v30, v29, v27, v11);
        v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 528) + 8 * v47) + 56LL);
        if ( v31 )
        {
LABEL_84:
          v61 = v31;
          v53 = v12;
          sub_105300(&v76, v30, a4);
          v32 = sub_129150((_DWORD)v72, (unsigned int)&v76, v61, 0, 0, 0, 257);
          v33 = v53;
          if ( v78 )
          {
            v54 = v32;
            v62 = v33;
            *(_QWORD *)&v79 = 0;
            qfree(v78);
            v32 = v54;
            v33 = v62;
          }
          v63 = v32;
          v55 = v33;
          qfree(v76);
          if ( v63 )
          {
            if ( *(_DWORD *)v63 == 4 && *(_BYTE *)(v63 + 32) == 1 && v55[18] == *(_DWORD *)(v63 + 40) )
              goto LABEL_13;
            v34 = v55[17];
            v35 = v55[18];
            v76 = 0;
            v77 = 0;
            sub_63E80(&v76, v35, v34);
            v36 = a1[1];
            v78 = 0;
            v79 = 0;
            if ( !(unsigned __int8)sub_17C4E0(*(_QWORD *)(v36 + 784), (unsigned int)&v76, a3, -1, (_DWORD)v55, 0, 2, 0) )
            {
              v37 = *(__int64 (**)())(*(_QWORD *)v8 + 280LL);
              if ( v37 != sub_DAAF0 && ((unsigned int (__fastcall *)(__int64, __int64, __int64))v37)(v8, -1, v50) != -1 )
              {
                v67 = a1[1];
                item_end = get_item_end();
                if ( sub_1CFBE0(v67, item_end) > 0 )
                {
                  v55[1] |= 8u;
                  if ( v78 )
                  {
                    *(_QWORD *)&v79 = 0;
                    qfree(v78);
                  }
LABEL_68:
                  qfree(v76);
                  goto LABEL_59;
                }
              }
            }
            if ( v78 )
            {
              *(_QWORD *)&v79 = 0;
              qfree(v78);
            }
            qfree(v76);
          }
        }
      }
LABEL_6:
      v14 = (_DWORD *)v72[43];
      v15 = &v14[v72[44]];
      if ( v14 != v15 )
      {
        while ( *v14 != a2 )
        {
          if ( v15 == ++v14 )
          {
            if ( a1[39] == -1 )
              goto LABEL_13;
            goto LABEL_17;
          }
        }
        if ( v14 == v15 )
          goto LABEL_12;
        v16 = *(__int64 (**)())(*(_QWORD *)v8 + 280LL);
        if ( v16 == sub_DAAF0 || ((unsigned int (__fastcall *)(__int64, _QWORD))v16)(v8, v72[4]) != 1 )
          goto LABEL_12;
        goto LABEL_59;
      }
LABEL_12:
      if ( a1[39] == -1 )
      {
LABEL_13:
        v17 = 0;
        goto LABEL_14;
      }
LABEL_17:
      v19 = a1[1];
      if ( a3 != a2 )
      {
        v20 = *(_QWORD *)(v19 + 784);
        v21 = *(_DWORD *)(*a1 + 72LL);
        v76 = 0;
        v77 = 0;
        v59 = v21;
        sub_64190(&v76, a2);
        v22 = sub_6FC30(v20, &v76, a3, v59);
        qfree(v76);
        if ( v22 )
          goto LABEL_13;
        v19 = a1[1];
      }
      v76 = 0;
      v77 = 0;
      v78 = 0;
      v79 = 0;
      sub_103D60(a4, v19, &v76);
      v46 = sub_A9D90((__int64)v72, &v76, v72[6], 0, 1u);
      if ( !v46 || *(_BYTE *)(v46 + 64) != 8 || **(_QWORD **)(v46 + 72) != a1[39] )
      {
        if ( v78 )
        {
          *(_QWORD *)&v79 = 0;
          qfree(v78);
        }
        qfree(v76);
        goto LABEL_13;
      }
      if ( v78 )
      {
        *(_QWORD *)&v79 = 0;
        qfree(v78);
      }
      goto LABEL_68;
    }
    goto LABEL_27;
  }
  if ( v13 == 4 )
    goto LABEL_47;
  if ( v13 != 67 )
    goto LABEL_29;
  if ( v12[17] != v12[9] )
    goto LABEL_6;
LABEL_26:
  if ( *((_BYTE *)v12 + 32) != 4 )
    goto LABEL_6;
LABEL_27:
  v26 = **((_DWORD **)v12 + 5) - 56;
LABEL_28:
  if ( v26 > 1 )
    goto LABEL_29;
LABEL_50:
  v39 = *(_DWORD *)(*a1 + 72LL);
  if ( v39 == a2 )
  {
LABEL_29:
    if ( v13 != 4 )
      goto LABEL_6;
    goto LABEL_30;
  }
  v56 = v12;
  v40 = *(_QWORD *)(a1[1] + 784LL);
  v76 = 0;
  v77 = 0;
  v64 = v40;
  sub_64190(&v76, v39);
  v41 = sub_6FC30(v64, &v76, a2, a3);
  v9 = v76;
  LOBYTE(v64) = v41;
  qfree(v76);
  v12 = v56;
  if ( !(_BYTE)v64 )
    goto LABEL_56;
  if ( a3 == a2 )
    goto LABEL_56;
  v51 = v56;
  v65 = *(_QWORD *)(a1[1] + 784LL);
  v42 = *(_DWORD *)(*a1 + 72LL);
  v76 = 0;
  v77 = 0;
  v57 = v42;
  sub_64190(&v76, a3);
  v43 = sub_6FC30(v65, &v76, a2, v57);
  v9 = v76;
  LOBYTE(v65) = v43;
  qfree(v76);
  v12 = v51;
  if ( !(_BYTE)v65 )
  {
LABEL_56:
    if ( *v12 != 4 )
      goto LABEL_6;
LABEL_30:
    if ( (v12[8] & 0xFB) != 1 )
      goto LABEL_6;
    goto LABEL_31;
  }
  v66 = *(_QWORD *)(a1[1] + 784LL);
  v44 = *(_DWORD *)(*a1 + 72LL);
  v76 = 0;
  v77 = 0;
  v58 = v44;
  sub_64190(&v76, a2);
  v45 = sub_6FC30(v66, &v76, a3, v58);
  v9 = v76;
  v70 = v45;
  qfree(v76);
  if ( v70 )
  {
    v12 = v51;
    goto LABEL_56;
  }
LABEL_59:
  v17 = 1;
LABEL_14:
  if ( v74 )
  {
    v75 = 0;
    qfree(v74);
  }
  qfree(v73[0]);
  return v17;
}
