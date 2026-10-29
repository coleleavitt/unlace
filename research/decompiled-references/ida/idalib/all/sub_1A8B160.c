__int64 __fastcall sub_1A8B160(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 result; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // r13
  _QWORD *v36; // rbx
  int v37; // r14d
  unsigned __int64 v38; // r15
  unsigned __int8 v39; // al
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  bool v44; // zf
  __int64 v45; // rdx
  _QWORD *v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rdi
  unsigned int v50; // eax
  int v51; // ebx
  __int64 i; // rax
  __int64 v53; // rdi
  __int64 v54; // rcx
  int v55; // ecx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  unsigned int v59; // eax
  __int64 v60; // rbp
  size_t v61; // r13
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // [rsp+Ch] [rbp-13Ch]
  unsigned int v68; // [rsp+Ch] [rbp-13Ch]
  __int64 *v69; // [rsp+18h] [rbp-130h]
  __int64 v70; // [rsp+18h] [rbp-130h]
  __int64 v71; // [rsp+18h] [rbp-130h]
  __int64 *v72; // [rsp+18h] [rbp-130h]
  unsigned __int64 v73; // [rsp+28h] [rbp-120h] BYREF
  __int64 v74; // [rsp+30h] [rbp-118h] BYREF
  __int64 v75; // [rsp+38h] [rbp-110h] BYREF
  void *ptr; // [rsp+40h] [rbp-108h] BYREF
  __int64 v77; // [rsp+48h] [rbp-100h]
  _BYTE v78[8]; // [rsp+50h] [rbp-F8h] BYREF
  void *v79; // [rsp+58h] [rbp-F0h]
  __int64 v80; // [rsp+68h] [rbp-E0h] BYREF
  __int64 (__fastcall **v81)(); // [rsp+80h] [rbp-C8h] BYREF
  int v82; // [rsp+88h] [rbp-C0h]
  unsigned __int64 *v83; // [rsp+90h] [rbp-B8h]

  v7 = *(_QWORD *)(a2 + 8);
  v73 = a2;
  v74 = v7;
  v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_BYTE *)(v9 + 16);
  if ( v10 == 13 )
  {
    if ( (((*(_WORD *)(v9 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
    {
LABEL_3:
      if ( !sub_F67340(v8) )
      {
        sub_168B6E0((__int64)a1);
        goto LABEL_5;
      }
      return 1;
    }
    return 0;
  }
  if ( v10 != 47 )
  {
    if ( v10 == 10 )
      return 0;
    if ( v10 == 48 )
      goto LABEL_13;
LABEL_69:
    if ( v10 == 34 )
      return 1;
    goto LABEL_3;
  }
  v16 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
  if ( (*((_BYTE *)v16 + 74) & 1) != 0 || (v16[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    return 0;
  v8 = *(_QWORD *)(v74 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_BYTE *)(v9 + 16);
  if ( v10 != 48 )
    goto LABEL_69;
LABEL_13:
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) == 0 || (a2 = 0, sub_F62670(v9, nullptr, v17, v18, v19, v20)) )
  {
LABEL_5:
    if ( (*(_WORD *)sub_BFBAE0(v73) & 0x1FF) == 9 )
    {
      v59 = sub_C00A40(v73, a2, v11, v12, v13);
      sub_168B9F0((__int64)&v81, a1, v59, 0x1125u, 0);
      v60 = sub_1605D30((__int64)&v81, &v74);
      v61 = j__strlen("@");
      v65 = sub_C00A40(v73, (__int64)&v74, v62, v63, v64);
      sub_9EC740((__int64)&ptr, v65, "@", v61, 0);
      sub_1589170(v60, &ptr);
      if ( v79 != &v80 )
        operator delete(v79);
      sub_15F7200(&v81);
      return 2;
    }
    else
    {
      v14 = sub_C00A40(v73, a2, v11, v12, v13);
      sub_168B9F0((__int64)&v81, a1, v14, 0x1126u, 0);
      sub_1605D30((__int64)&v81, &v74);
      sub_15F7200(&v81);
      return 2;
    }
  }
  v24 = *a1;
  v25 = (unsigned int)sub_C00A40(v73, 0, v21, v22, v23);
  v82 = 4361;
  v81 = off_2BC64D8;
  v83 = &v73;
  v26 = (unsigned int)sub_1E63C20(v24, v25, v74, 1, &v81);
  result = 2;
  if ( (_BYTE)v26 )
    return result;
  ptr = v78;
  v77 = 0x400000000LL;
  v29 = sub_F60F10(v9, v25, v26, (__int64)v78, v27, v28);
  v30 = sub_B9F870((__int64)v29);
  v35 = (_QWORD *)v31;
  if ( v31 == v30 )
  {
    v49 = v73;
LABEL_75:
    v66 = sub_C00A40(v49, v25, v31, v32, v33);
    sub_168B9F0((__int64)&v81, a1, v66, 0x1126u, 0);
    v75 = *(_QWORD *)(v73 + 8);
    sub_162B6D0((__int64)&v81, &v75);
    sub_15F7200(&v81);
    result = 2;
    goto LABEL_44;
  }
  v32 = (__int64)v78;
  v67 = 0;
  v36 = (_QWORD *)v30;
  v37 = 0;
  do
  {
    v38 = *v36 & 0xFFFFFFFFFFFFFFF8LL;
    v39 = *(_BYTE *)(v38 + 28) & 0x7F;
    if ( ((v39 + 52) & 0x7Fu) <= 1 || (v31 = (unsigned int)v39 - 53, (unsigned int)v31 <= 1) )
    {
      v38 = sub_B72ED0(*v36 & 0xFFFFFFFFFFFFFFF8LL);
      v39 = *(_BYTE *)(v38 + 28) & 0x7F;
    }
    if ( v39 == 37 )
    {
      v40 = *(_QWORD *)(*(_QWORD *)(v38 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v41 = (unsigned int)*(unsigned __int8 *)(v40 + 16) - 25;
      if ( (unsigned int)v41 > 1 )
        v40 = sub_F63050(v40, v25, v41, v32);
      v31 = *(_QWORD *)(v40 + 24) & 0xFFFFFFFFFFFFFFF0LL;
      v42 = *(_QWORD *)v31;
      v43 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v31 + 16LL) - 43;
      if ( (unsigned int)v43 <= 1 )
        goto LABEL_78;
      v53 = *(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v54 = *(unsigned __int8 *)(v53 + 16);
      v25 = (unsigned int)(v54 - 43);
      if ( (unsigned int)v25 > 1 )
        goto LABEL_53;
      v72 = (__int64 *)v31;
      v42 = sub_F63050(*(_QWORD *)v31, v25, v31, v54);
      if ( v42 )
      {
LABEL_78:
        while ( 1 )
        {
          v31 = *(_QWORD *)(v42 + 32) & 0xFFFFFFFFFFFFFFF0LL;
          v44 = (*(_BYTE *)(v42 + 18) & 0x10) == 0;
          v42 = *(_QWORD *)v31;
          if ( v44 )
            break;
          v45 = (unsigned int)*(unsigned __int8 *)(v42 + 16) - 43;
          if ( (unsigned int)v45 > 1 )
            v42 = sub_F63050(v42, v25, v45, v43);
        }
        v53 = *(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v54 = *(unsigned __int8 *)(v53 + 16);
      }
      else
      {
        v31 = (__int64)v72;
        v42 = *v72;
        v53 = *(_QWORD *)(*(_QWORD *)(*v72 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v54 = *(unsigned __int8 *)(v53 + 16);
      }
LABEL_53:
      switch ( (_BYTE)v54 )
      {
        case 0xD:
          v55 = *(unsigned __int16 *)(v53 + 18);
          LOWORD(v55) = (unsigned __int16)v55 >> 3;
          v32 = (unsigned int)(v55 + 76);
          LOWORD(v32) = v32 & 0x1FF;
          if ( (unsigned __int16)v32 > 0x13u )
          {
            if ( *(_BYTE *)(v42 + 16) != 34 )
              goto LABEL_41;
            goto LABEL_56;
          }
LABEL_63:
          ++v37;
          goto LABEL_38;
        case 0x2F:
          v69 = (__int64 *)v31;
          v46 = sub_F60F10(v53, v25, v31, v54, v33, v34);
          if ( (*((_BYTE *)v46 + 74) & 1) != 0 || (v46[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            goto LABEL_63;
          v31 = (__int64)v69;
          v42 = *v69;
          break;
        case 0xA:
          goto LABEL_63;
      }
      if ( *(_BYTE *)(v42 + 16) != 34 )
      {
        v70 = v31;
        v32 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        if ( (_BYTE)v32 != 34 )
          goto LABEL_36;
        v42 = sub_F63050(v42, v25, v31, v32);
        v31 = v70;
        if ( !v42 )
        {
LABEL_35:
          v32 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v31 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_36:
          if ( (_BYTE)v32 != 11 )
            goto LABEL_41;
          goto LABEL_37;
        }
      }
LABEL_56:
      v56 = *(_QWORD *)(*(_QWORD *)(v42 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v57 = (unsigned int)*(unsigned __int8 *)(v56 + 16) - 35;
      if ( (unsigned int)v57 > 1 )
      {
        v71 = v31;
        v56 = sub_F63050(v56, v25, v31, v57);
        v31 = v71;
      }
      if ( !(*(_BYTE *)(v56 + 19) >> 2) )
      {
        v58 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v58 + 16) == 13 && ((*(_WORD *)(v58 + 18) >> 3) & 0x1FF) == 0x1E9 )
        {
LABEL_37:
          ++v67;
LABEL_38:
          v47 = (unsigned int)v77;
          v32 = HIDWORD(v77);
          v48 = (unsigned int)v77 + 1LL;
          if ( v48 > HIDWORD(v77) )
          {
            v25 = (__int64)v78;
            sub_2237220(&ptr, v78, v48, 8);
            v47 = (unsigned int)v77;
          }
          v31 = (__int64)ptr;
          *((_QWORD *)ptr + v47) = v38;
          LODWORD(v77) = v77 + 1;
          goto LABEL_41;
        }
      }
      goto LABEL_35;
    }
LABEL_41:
    ++v36;
  }
  while ( v35 != v36 );
  if ( v37 == 1 )
  {
    v32 = v67;
    result = 0;
    if ( !v67 )
      goto LABEL_44;
  }
  if ( !v37 )
  {
    result = 1;
    if ( v67 == 1 )
      goto LABEL_44;
  }
  v49 = v73;
  if ( !(v37 | v67) )
    goto LABEL_75;
  v50 = sub_C00A40(v73, v25, v31, v32, v33);
  v51 = 0;
  sub_168B9F0((__int64)&v81, a1, v50, 0x110Fu, 0);
  v75 = *(_QWORD *)(v73 + 8);
  sub_162B6D0((__int64)&v81, &v75);
  sub_15F7200(&v81);
  for ( i = 0; (unsigned int)i < (unsigned int)v77; v51 = i )
  {
    sub_168B9F0((__int64)&v81, a1, *(_DWORD *)(*((_QWORD *)ptr + i) + 24LL), 0x16DCu, 0);
    sub_15F7200(&v81);
    i = (unsigned int)(v51 + 1);
  }
  result = 2;
LABEL_44:
  if ( ptr != v78 )
  {
    v68 = result;
    free(ptr);
    return v68;
  }
  return result;
}
