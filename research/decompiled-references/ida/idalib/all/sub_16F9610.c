__int64 __fastcall sub_16F9610(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rax
  char v17; // dl
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r12
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r12
  __int64 v38; // rax
  _QWORD *v39; // rax
  unsigned int v40; // [rsp+0h] [rbp-D8h]
  unsigned __int8 v41; // [rsp+0h] [rbp-D8h]
  int v42; // [rsp+4h] [rbp-D4h] BYREF
  __int64 v43; // [rsp+8h] [rbp-D0h] BYREF
  int v44; // [rsp+1Ch] [rbp-BCh] BYREF
  int v45; // [rsp+20h] [rbp-B8h] BYREF
  int v46; // [rsp+24h] [rbp-B4h] BYREF
  __int64 v47; // [rsp+28h] [rbp-B0h] BYREF
  _QWORD v48[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+40h] [rbp-98h]
  unsigned __int8 *v50[11]; // [rsp+50h] [rbp-88h] BYREF
  char v51; // [rsp+A8h] [rbp-30h]
  unsigned int v52; // [rsp+B0h] [rbp-28h]
  char v53; // [rsp+B4h] [rbp-24h]

  v43 = a3;
  v42 = a5;
  v7 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 57 <= 1 )
  {
LABEL_2:
    v8 = *(_QWORD *)(v7 + 32);
LABEL_3:
    if ( (_DWORD)a4 != 1 )
    {
      if ( (int)a4 > 1 )
      {
        if ( (_DWORD)a4 != 2 )
        {
          if ( (_DWORD)a4 != 3 || !sub_F65360(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6) )
            return 0;
          goto LABEL_25;
        }
        v7 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_21:
        if ( !sub_9EC890(v7, a2, a3, a4, a5) )
        {
          sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), a2, 0xD17u, 0);
          if ( v51 )
          {
            sub_16B71B0(v50, v42);
          }
          else if ( v53 )
          {
            v30 = sub_168B9E0(v48);
            v31 = v49;
            if ( v49 )
              v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
            v47 = v31;
            v32 = sub_1587BC0(v30, &v47, v26, v27, v28, v29);
            sub_16B71B0((unsigned __int8 **)(*v32 + 32LL * v52 + 8), v42);
          }
          v45 = 5;
          v21 = sub_1587D10((__int64)v48, &v45);
          v46 = 1;
          v22 = sub_1587D10(v21, &v46);
          LODWORD(v47) = 0;
          goto LABEL_27;
        }
        return 0;
      }
      if ( (_DWORD)a4 )
        return 0;
      v10 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v10 + 16) - 57 <= 1 || sub_16B6880(v10, a2, a3, a4) )
        return 0;
      goto LABEL_12;
    }
    v7 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_35:
    if ( !sub_F58100(v7) )
    {
      sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), a2, 0xD17u, 0);
      if ( v51 )
      {
        sub_16B71B0(v50, v42);
      }
      else if ( v53 )
      {
        v37 = sub_168B9E0(v48);
        v38 = v49;
        if ( v49 )
          v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
        v47 = v38;
        v39 = sub_1587BC0(v37, &v47, v33, v34, v35, v36);
        sub_16B71B0((unsigned __int8 **)(*v39 + 32LL * v52 + 8), v42);
      }
      v45 = 5;
      v25 = sub_1587D10((__int64)v48, &v45);
      v46 = 0;
      v22 = sub_1587D10(v25, &v46);
      LODWORD(v47) = 1;
      goto LABEL_27;
    }
    return 0;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1 )
  {
    v40 = a4;
    v8 = a3;
    v20 = sub_F63050(v7, a2, a3, a4);
    a4 = v40;
    v7 = v20;
    if ( !v20 )
      goto LABEL_3;
    goto LABEL_2;
  }
  if ( (_DWORD)a4 == 1 )
    goto LABEL_35;
  if ( (int)a4 > 1 )
  {
    if ( (_DWORD)a4 != 2 )
    {
      if ( (_DWORD)a4 != 3 || !sub_F65360(v7, a2, a3, a4, a5, a6) )
        return 0;
LABEL_25:
      sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), a2, 0xD17u, 0);
      v44 = 1;
      v23 = sub_1587D10((__int64)v48, &v44);
      v45 = 5;
      v19 = sub_1587D10(v23, &v45);
      v46 = 2;
      goto LABEL_26;
    }
    goto LABEL_21;
  }
  if ( (_DWORD)a4 || sub_16B6880(v7, a2, a3, a4) )
    return 0;
LABEL_12:
  v15 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v15 + 17) & 4) != 0 )
    return 0;
  if ( sub_F61040(v15, a2, v11, v12, v13, v14) )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *(_BYTE *)(v16 + 16);
    if ( v17 == 13 )
    {
      if ( ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) != 0x1B4 )
        return 0;
    }
    else if ( v17 != 47 )
    {
      return 0;
    }
  }
  sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), a2, 0xD17u, 0);
  v18 = sub_16CF4F0((__int64)v48, &v42);
  v45 = 2;
  v19 = sub_1587D10(v18, &v45);
  v46 = 1;
LABEL_26:
  v22 = sub_1587D10(v19, &v46);
  LODWORD(v47) = 1;
LABEL_27:
  v24 = sub_1587D10(v22, (int *)&v47);
  v41 = *(_BYTE *)(sub_1605D30(v24, &v43) + 120);
  sub_15F7200(v48);
  return v41;
}
