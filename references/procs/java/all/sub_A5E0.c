__int64 __fastcall sub_A5E0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // r15d
  __int64 v6; // r9
  __int64 module_data; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  _BYTE *v13; // r12
  unsigned int v14; // eax
  _BYTE *v15; // r10
  unsigned __int64 v16; // r9
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r11d
  int v22; // ecx
  unsigned __int16 *v23; // r14
  int v24; // r13d
  unsigned int v25; // eax
  int v26; // r11d
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int8 *v35; // r10
  __int64 v36; // [rsp+10h] [rbp-498h]
  __int64 v37; // [rsp+10h] [rbp-498h]
  unsigned __int64 v38; // [rsp+10h] [rbp-498h]
  _BYTE *v39; // [rsp+10h] [rbp-498h]
  int v40; // [rsp+10h] [rbp-498h]
  _BYTE *v41; // [rsp+10h] [rbp-498h]
  int v42; // [rsp+10h] [rbp-498h]
  unsigned __int8 *v43; // [rsp+10h] [rbp-498h]
  unsigned __int8 *v44; // [rsp+10h] [rbp-498h]
  __int64 v45; // [rsp+18h] [rbp-490h]
  _BYTE *v46; // [rsp+18h] [rbp-490h]
  int v47; // [rsp+18h] [rbp-490h]
  __int64 v48; // [rsp+20h] [rbp-488h]
  unsigned __int64 v49; // [rsp+28h] [rbp-480h]
  int v50; // [rsp+28h] [rbp-480h]
  int v51; // [rsp+28h] [rbp-480h]
  __int64 v52; // [rsp+30h] [rbp-478h]
  int v53; // [rsp+3Ch] [rbp-46Ch]
  unsigned __int64 v54; // [rsp+40h] [rbp-468h]
  __int64 v55; // [rsp+48h] [rbp-460h]
  unsigned int v56; // [rsp+5Ch] [rbp-44Ch] BYREF
  _BYTE v57[1032]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v58; // [rsp+468h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 160LL))(a1) )
    return 1;
  if ( !a3 )
    return 0;
  v6 = 0;
  v48 = a3;
  while ( 1 )
  {
    if ( !*(_QWORD *)(a2 + 8 * v6) )
      goto LABEL_5;
    v36 = v6;
    module_data = get_module_data((unsigned int)dword_2D4F4);
    v10 = *(_QWORD *)(a2 + 8 * v36);
    v45 = v36;
    v37 = sub_19B10(module_data, v10, &v56);
    if ( !v37 )
      goto LABEL_24;
    v11 = get_module_data((unsigned int)dword_2D4F4);
    v12 = v45;
    v46 = (_BYTE *)v37;
    v13 = v57;
    v10 = 1024;
    v38 = v12;
    module_data = (__int64)v57;
    if ( (*(_BYTE *)(*(_QWORD *)(v11 + 24) + 4LL) & 1) != 0 )
    {
      v14 = qsnprintf(v57, 1024, byte_227C0, *(&off_2C020 + v12));
      v16 = v38;
      v15 = v46;
    }
    else
    {
      v14 = qsnprintf(v57, 1024, byte_227D3, off_2BFE0[v12]);
      v15 = v46;
      v16 = v38;
    }
    v17 = v14;
    if ( v16 != 2 )
    {
      if ( v16 <= 2 )
      {
        v21 = 0;
      }
      else
      {
        --v56;
        v49 = v16;
        v47 = (unsigned __int8)*v15;
        if ( !*v15 )
          goto LABEL_24;
        module_data = (unsigned int)dword_2D4F4;
        v39 = v15 + 1;
        v18 = get_module_data((unsigned int)dword_2D4F4);
        v15 = v39;
        v21 = v47;
        v16 = v49;
        if ( (*(_BYTE *)(*(_QWORD *)(v18 + 24) + 4LL) & 1) == 0 )
        {
          module_data = (__int64)&v57[(unsigned int)v17];
          v31 = qsnprintf(module_data, 1024LL - (unsigned int)v17, byte_227EB, v19, v20, v49);
          v15 = v39;
          v21 = v47;
          v16 = v49;
          LODWORD(v17) = v31 + v17;
        }
      }
      v54 = v16;
      v10 = 0;
      v57[(unsigned int)v17] = 32;
      v22 = 1;
      v57[(unsigned int)(v17 + 1)] = 0;
      v55 = a2;
      v52 = (unsigned int)(v17 + 1);
      do
      {
        if ( v56 <= 1 )
          goto LABEL_24;
        v23 = (unsigned __int16 *)(v15 + 2);
        v56 -= 2;
        v24 = *(unsigned __int16 *)v15;
        if ( *(_WORD *)v15 )
        {
          if ( v21 )
          {
            v51 = v21;
            v42 = v22;
            v10 = 1024 - v52;
            qsnprintf(&v13[v52], 1024 - v52, byte_227FE);
            v21 = v51;
            v22 = v42;
          }
          module_data = (__int64)v13;
          v40 = v21;
          v50 = v22;
          v25 = tag_strlen(v13);
          v26 = v40;
          v41 = v13;
          v53 = v26;
          v27 = v25;
          do
          {
            if ( v56 <= 1 )
              goto LABEL_24;
            v56 -= 2;
            *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = v5;
            (*(void (__fastcall **)(_QWORD *, _BYTE *, _QWORD))(*a1 + 56LL))(a1, v41, 0);
            v28 = get_module_data((unsigned int)dword_2D4F4);
            v29 = (unsigned int)dword_2D4F4;
            *(_QWORD *)(v28 + 176) = v27;
            v30 = get_module_data(v29);
            if ( (unsigned __int8)sub_10630(a1, *v23, (*(_BYTE *)(*(_QWORD *)(v30 + 24) + 4LL) & 1) == 0 ? 3 : 9, 0) )
              return 1;
            if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
              (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 123);
            if ( (unsigned __int8)sub_FBC0(a1, 0) )
              return 1;
            v10 = (__int64)(v23 + 1);
            module_data = (__int64)a1;
            v23 = (unsigned __int16 *)sub_A520(a1, v23 + 1, &v56, v5 + 2);
            if ( !v23 )
              goto LABEL_39;
            v10 = v5;
            module_data = (__int64)a1;
            if ( (unsigned __int8)sub_10BD0(a1, v5, "annotation") )
              return 1;
            --v24;
          }
          while ( v24 );
          v21 = v53;
          v22 = v50;
          v15 = v23;
          v10 = 1;
          v13 = v41;
        }
        else
        {
          if ( !v21 )
            goto LABEL_24;
          v15 += 2;
        }
        ++v22;
      }
      while ( v21 >= v22 );
      v6 = v54;
      a2 = v55;
      if ( v21 && !(_BYTE)v10 || v56 )
        goto LABEL_24;
      goto LABEL_5;
    }
    v43 = v15;
    v32 = get_module_data((unsigned int)dword_2D4F4);
    v35 = v43;
    if ( (*(_BYTE *)(*(_QWORD *)(v32 + 24) + 4LL) & 1) == 0 )
    {
      qstrncpy(&v57[v17], &unk_227E4, 1024 - v17, v33, v34, 2);
      v35 = v43;
    }
    v44 = v35;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _BYTE *, _QWORD))(*a1 + 136LL))(a1, v57, v5) )
      return 1;
    *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = v5 + 2;
    v10 = (__int64)v44;
    module_data = (__int64)a1;
    if ( !sub_9B90(a1, v44, &v56, v5 + 2, 0) )
      break;
    if ( v56 )
      goto LABEL_24;
    if ( (unsigned __int8)sub_FBC0(a1, 0) || (unsigned __int8)sub_10BD0(a1, v5, "annotation") )
      return 1;
    v6 = 2;
LABEL_5:
    if ( ++v6 == v48 )
      return 0;
  }
LABEL_39:
  if ( v56 != -1 )
LABEL_24:
    sub_E6A0(module_data, v10);
  return 1;
}
