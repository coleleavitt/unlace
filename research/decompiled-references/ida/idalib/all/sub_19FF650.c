__int64 __fastcall sub_19FF650(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v11; // eax
  unsigned __int64 v12; // rdx
  _WORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // r13
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r14
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rbp
  int v25; // eax
  __int64 *v26; // rdx
  _WORD **v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r14
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r12
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  _QWORD *v47; // rax
  unsigned __int8 v49; // [rsp+10h] [rbp-108h]
  __int64 v50; // [rsp+10h] [rbp-108h]
  __int64 v51; // [rsp+20h] [rbp-F8h]
  __int64 v52; // [rsp+28h] [rbp-F0h]
  __int64 v53; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v54[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v56[11]; // [rsp+70h] [rbp-A8h] BYREF
  char v57; // [rsp+C8h] [rbp-50h]
  unsigned int v58; // [rsp+D0h] [rbp-48h]
  char v59; // [rsp+D4h] [rbp-44h]

  v5 = sub_B76070(a2, a2, a3, a4);
  v49 = 1;
  if ( v5 == (unsigned int)sub_B76070(a3, a2, v6, v7) )
  {
    v11 = sub_B76070(a2, a2, v8, v9);
    if ( !v11 )
      return 0;
    v49 = 0;
    v16 = 0;
    v52 = a2;
    v51 = 8LL * (unsigned int)(v11 - 1) + 8;
    do
    {
      v17 = *(_QWORD *)(*(_QWORD *)(v52 + 120) + v16);
      v18 = *(_QWORD *)(*(_QWORD *)(a3 + 120) + v16);
      if ( (*(_BYTE *)(v17 + 29) & 1) == 0 )
        goto LABEL_10;
      v19 = sub_B8C3D0(*(_QWORD *)(*(_QWORD *)(v52 + 120) + v16), a2, v12, (__int64)v13, v14, v15);
      v12 = *v19;
      v20 = *v19 + 8LL * *((unsigned int *)v19 + 2);
      if ( v12 >= v20 )
      {
        if ( v12 == v20 )
          goto LABEL_10;
        v13 = *(_WORD **)v20;
        if ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 92 )
        {
          v27 = (_WORD **)(v20 + 8);
          while ( 1 )
          {
            v13 = v27;
            if ( (_WORD **)v12 == v27 )
              break;
            v13 = *v27++;
            if ( v13[18] == 92 )
              goto LABEL_34;
          }
LABEL_10:
          if ( (*(_BYTE *)(v18 + 29) & 1) == 0 )
            goto LABEL_23;
          v21 = 0;
          a2 = 0;
          goto LABEL_12;
        }
      }
      else
      {
        v13 = (_WORD *)v12;
        while ( 1 )
        {
          a2 = *(_QWORD *)v13;
          if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) == 92 )
            break;
          v13 += 4;
          if ( (_WORD *)v20 == v13 )
            goto LABEL_10;
        }
        if ( (_WORD *)v20 == v13 )
          goto LABEL_10;
      }
LABEL_34:
      while ( 1 )
      {
        v21 = *(_QWORD *)v12;
        if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 92 )
          break;
        v12 += 8LL;
      }
      if ( (*(_BYTE *)(v21 + 34) & 0xF0) == 0xF0 )
        a2 = (unsigned int)sub_FA77D0(*(_QWORD *)v12);
      else
        a2 = *(_BYTE *)(v21 + 34) >> 4;
      if ( (*(_BYTE *)(v18 + 29) & 1) == 0 )
        goto LABEL_16;
LABEL_12:
      v22 = sub_B8C3D0(v18, a2, v12, (__int64)v13, v14, v15);
      a2 = (unsigned int)a2;
      v12 = *v22;
      v23 = *v22 + 8LL * *((unsigned int *)v22 + 2);
      if ( v12 >= v23 )
      {
        if ( v12 == v23 )
          goto LABEL_16;
        while ( 1 )
        {
          v13 = *(_WORD **)v23;
          if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 92 )
            break;
          v23 += 8LL;
          if ( v12 == v23 )
            goto LABEL_16;
        }
      }
      else
      {
        v13 = (_WORD *)v12;
        while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 92 )
        {
          v13 += 4;
          if ( (_WORD *)v23 == v13 )
            goto LABEL_16;
        }
        if ( (_WORD *)v23 == v13 )
        {
LABEL_16:
          v24 = 0;
          v25 = 0;
          goto LABEL_17;
        }
      }
      v24 = *(_QWORD *)v12;
      if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 92 )
      {
        v26 = (__int64 *)(v12 + 8);
        do
          v24 = *v26++;
        while ( *(_WORD *)(v24 + 36) != 92 );
      }
      v12 = *(_BYTE *)(v24 + 34) & 0xF0;
      if ( (*(_BYTE *)(v24 + 34) & 0xF0) == 0xF0 )
      {
        v25 = sub_FA77D0(v24);
        a2 = (unsigned int)a2;
      }
      else
      {
        v25 = *(_BYTE *)(v24 + 34) >> 4;
      }
LABEL_17:
      if ( v25 != (_DWORD)a2 )
      {
        sub_168B9F0((__int64)v54, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(v17 + 24), 0xF47u, 0);
        if ( v57 )
        {
          sub_AE9DF0(v56, v21, 0xEu);
        }
        else
        {
          if ( !v59 )
          {
LABEL_20:
            sub_15F7200(v54);
            a2 = *(_QWORD *)a1 + 8LL;
            sub_168B9F0((__int64)v54, (__int64 *)a2, *(_DWORD *)(v18 + 24), 0x188Cu, 0);
            if ( v57 )
            {
              a2 = v24;
              sub_AE9DF0(v56, v24, 0xEu);
            }
            else if ( v59 )
            {
              v39 = sub_168B9E0(v54);
              v40 = v55;
              if ( v55 )
                v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
              v53 = v40;
              v41 = sub_1587BC0(v39, &v53, v35, v36, v37, v38);
              a2 = v24;
              sub_AE9DF0((unsigned __int8 **)(*v41 + 32LL * v58 + 8), v24, 0xEu);
            }
            sub_15F7200(v54);
            v49 = 1;
            goto LABEL_23;
          }
          v42 = sub_168B9E0(v54);
          v46 = v55;
          if ( v55 )
          {
            v50 = v42;
            v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
            v42 = v50;
          }
          v53 = v46;
          v47 = sub_1587BC0(v42, &v53, v42, v43, v44, v45);
          sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * v58 + 8), v21, 0xEu);
        }
        if ( v57 )
        {
          sub_AE9DF0(v56, v17, 0xAu);
        }
        else if ( v59 )
        {
          v32 = sub_168B9E0(v54);
          v33 = v55;
          if ( v55 )
            v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
          v53 = v33;
          v34 = sub_1587BC0(v32, &v53, v28, v29, v30, v31);
          sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * v58 + 8), v17, 0xAu);
        }
        goto LABEL_20;
      }
LABEL_23:
      v16 += 8;
    }
    while ( v51 != v16 );
  }
  return v49;
}
