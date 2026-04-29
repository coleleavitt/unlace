unsigned __int64 __fastcall sub_D410(_QWORD *a1)
{
  void *v2; // r13
  __int64 module_data; // rax
  unsigned __int8 v4; // r12
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned int v10; // r14d
  __int64 v11; // rax
  int v12; // r14d
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  void (__fastcall *v17)(_QWORD *, _QWORD); // r12
  __int64 v18; // rax
  __int64 v19; // r12
  const char *v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int16 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r15
  const char *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // r12
  __int64 v39; // rcx
  __int64 *v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r9
  const char *v44; // r8
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned int v50; // [rsp+Ch] [rbp-90Ch]
  unsigned __int16 v51; // [rsp+10h] [rbp-908h]
  __int64 v52; // [rsp+10h] [rbp-908h]
  __int64 v53; // [rsp+20h] [rbp-8F8h]
  __int64 v54; // [rsp+30h] [rbp-8E8h]
  _BYTE v55[12]; // [rsp+4Ch] [rbp-8CCh] BYREF
  _BYTE v56[4]; // [rsp+58h] [rbp-8C0h] BYREF
  unsigned __int16 v57; // [rsp+5Ch] [rbp-8BCh]
  _BYTE v58[12]; // [rsp+64h] [rbp-8B4h] BYREF
  __int64 v59; // [rsp+70h] [rbp-8A8h] BYREF
  __int128 v60; // [rsp+78h] [rbp-8A0h]
  __int64 v61; // [rsp+90h] [rbp-888h] BYREF
  __int64 v62; // [rsp+98h] [rbp-880h]
  __int64 v63; // [rsp+B0h] [rbp-868h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-860h]
  __int128 v65; // [rsp+C0h] [rbp-858h]
  _BYTE v66[2056]; // [rsp+D0h] [rbp-848h] BYREF
  unsigned __int64 v67; // [rsp+8D8h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
    (*(void (__fastcall **)(_QWORD *, void *, _QWORD))(*a1 + 136LL))(a1, &unk_228D2, 0);
  v2 = &unk_228D8;
  if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
    v2 = *(void **)(a1[79] + 48LL);
  module_data = get_module_data((unsigned int)dword_2D4F4);
  sub_88B0((__int64)a1, 0, (__int64)&unk_235D0, v2, *(unsigned __int8 *)(module_data + 33088));
  v4 = getinf(40);
  setinf(40, 0);
  if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
  {
    if ( (unsigned __int8)sub_11520(a1, v66, v2) )
      return v67 - __readfsqword(0x28u);
    (*(void (__fastcall **)(_QWORD *))(*a1 + 160LL))(a1);
    v10 = *(unsigned __int16 *)(get_module_data((unsigned int)dword_2D4F4) + 33019);
    v11 = get_module_data((unsigned int)dword_2D4F4);
    sub_88B0((__int64)a1, 0xFFFFFFFFLL, (__int64)&unk_229FA, &unk_229EC, *(unsigned __int16 *)(v11 + 33085), v10);
  }
  else
  {
    v5 = *(unsigned __int16 *)(get_module_data((unsigned int)dword_2D4F4) + 33019);
    v6 = get_module_data((unsigned int)dword_2D4F4);
    sub_88B0((__int64)a1, 0xFFFFFFFFLL, (__int64)&unk_235F8, v2, *(unsigned __int16 *)(v6 + 33085), v5);
  }
  setinf(40, v4);
  if ( !*(_WORD *)(get_module_data((unsigned int)dword_2D4F4) + 33043) )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 160LL))(a1);
LABEL_9:
    if ( sub_12E80(0, 1) == -1 || (v7 = sub_12F50(), (v8 = v7) == 0) )
    {
LABEL_11:
      if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
      {
        if ( (unsigned __int8)sub_11520(a1, v66, v2) )
          return v67 - __readfsqword(0x28u);
        sub_10C30(a1);
      }
      sub_114B0(a1);
      return v67 - __readfsqword(0x28u);
    }
    v50 = v7;
    v19 = 0;
    sub_88B0((__int64)a1, 0, (__int64)&unk_22A24, v2, (unsigned int)v7);
    while ( 1 )
    {
      v63 = 0;
      v64 = 0;
      v65 = 0;
      if ( !(unsigned __int8)sub_12FE0(&v63, v19) )
        break;
      v24 = v63;
      if ( !(_WORD)v63 || *(_WORD *)(get_module_data((unsigned int)dword_2D4F4) + 33017) < v24 )
      {
        v20 = "Bad constant pool index";
        goto LABEL_26;
      }
      v25 = get_module_data((unsigned int)dword_2D4F4);
      v26 = netnode_supval(*(_QWORD *)(v25 + 33336), (unsigned __int16)v63, v55, 12, 83);
      v20 = "Corrupted data";
      if ( v26 != 12 )
        goto LABEL_26;
      v20 = "Bad constant type";
      if ( v55[0] != 15 )
        goto LABEL_26;
      v27 = get_module_data((unsigned int)dword_2D4F4);
      v21 = (unsigned __int16)v63;
      v28 = netnode_supval(*(_QWORD *)(v27 + 33336), (unsigned __int16)v63, v56, 12, 83);
      v20 = "Couldn't retrieve method handle";
      if ( v28 != 12 )
        goto LABEL_26;
      if ( v57 <= 8u )
      {
        if ( v57 )
        {
          v59 = 0;
          v60 = 0;
          v29 = get_module_data((unsigned int)dword_2D4F4);
          sub_19640(v29, &v59, v56, (unsigned __int16)v63, 0);
          if ( (_QWORD)v60 )
            goto LABEL_41;
          sub_D1E0((__int64)&v61, "<failed printing method handle>");
          sub_D2E0(&v59, (unsigned __int64)&v61);
          if ( v61 )
          {
            v62 = 0;
            qfree(v61, &v61, v48, v49);
          }
          if ( (_QWORD)v60 )
          {
LABEL_41:
            v30 = 0;
            do
            {
              v31 = s1;
              v32 = v59 + 24 * v30;
              if ( *(_QWORD *)(v32 + 8) )
                v31 = *(const char **)v32;
              sub_88B0((__int64)a1, 0, (__int64)"%s", v31);
              ++v30;
            }
            while ( v30 < (unsigned __int64)v60 );
          }
          v21 = 0xFFFFFFFFLL;
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
          v53 = v65;
          if ( (_QWORD)v65 )
          {
            v35 = 0;
            do
            {
              v51 = *(_WORD *)(v64 + 2 * v35);
              v36 = get_module_data((unsigned int)dword_2D4F4);
              if ( netnode_supval(*(_QWORD *)(v36 + 33336), v51, v58, 12, 83) == 12 )
              {
                v37 = v60;
                if ( (_QWORD)v60 )
                {
                  v54 = v19;
                  v38 = 0;
                  do
                  {
                    v39 = v59;
                    v40 = (__int64 *)(v59 + 24 * v38);
                    v41 = *v40;
                    if ( *v40 )
                    {
                      v40[1] = 0;
                      qfree(v41, v37, v40, v39);
                    }
                    ++v38;
                  }
                  while ( v37 != v38 );
                  v19 = v54;
                }
                *(_QWORD *)&v60 = 0;
                v42 = get_module_data((unsigned int)dword_2D4F4);
                sub_19640(v42, &v59, v58, v51, 1);
                if ( (_QWORD)v60 )
                  goto LABEL_57;
                sub_D1E0((__int64)&v61, "<failed printing constant>");
                sub_D2E0(&v59, (unsigned __int64)&v61);
                if ( v61 )
                {
                  v62 = 0;
                  qfree(v61, 0, v46, v47);
                }
                if ( (_QWORD)v60 )
                {
LABEL_57:
                  v43 = 0;
                  do
                  {
                    v44 = s1;
                    v45 = v59 + 24 * v43;
                    if ( *(_QWORD *)(v45 + 8) )
                      v44 = *(const char **)v45;
                    v52 = v43;
                    sub_88B0((__int64)a1, 0, (__int64)"Argument #%zu: %s", v35, v44);
                    v43 = v52 + 1;
                  }
                  while ( v52 + 1 < (unsigned __int64)v60 );
                }
              }
              else
              {
                sub_88B0((__int64)a1, 0, (__int64)&unk_23638, v35);
              }
              v21 = 0xFFFFFFFFLL;
              (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
              ++v35;
            }
            while ( v35 != v53 );
          }
          sub_D270(&v59, 0xFFFFFFFFLL, v33, v34);
        }
        goto LABEL_27;
      }
      if ( v57 == 9 )
        break;
LABEL_27:
      if ( v64 )
      {
        *(_QWORD *)&v65 = 0;
        qfree(v64, v21, v22, v23);
      }
      if ( v8 == ++v19 )
        goto LABEL_11;
    }
    v20 = "error retrieving data";
LABEL_26:
    v21 = 0;
    sub_88B0((__int64)a1, 0, (__int64)&unk_23660, v50, v20);
    goto LABEL_27;
  }
  sub_10E20(a1, 0);
  if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
  {
    sub_11720(a1, ".source ", 8);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 11);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 4);
    sub_11760(a1, "Source File      : ", 19);
  }
  v12 = *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 148);
  v13 = *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 148);
  v14 = get_module_data((unsigned int)dword_2D4F4);
  v15 = (unsigned int)dword_2D4F4;
  *(_DWORD *)(v14 + 148) = v13 & 0xFFFFFFEB | 0x10;
  v16 = get_module_data(v15);
  LOBYTE(v13) = sub_10630(a1, *(unsigned __int16 *)(v16 + 33043), 1, 0);
  *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 148) = v12;
  if ( !(_BYTE)v13 )
  {
    v17 = *(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 72LL);
    v18 = get_module_data((unsigned int)dword_2D4F4);
    v17(a1, (*(_BYTE *)(*(_QWORD *)(v18 + 24) + 4LL) & 1) == 0 ? 4 : 11);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 128LL))(a1, 0) )
      goto LABEL_9;
  }
  return v67 - __readfsqword(0x28u);
}
