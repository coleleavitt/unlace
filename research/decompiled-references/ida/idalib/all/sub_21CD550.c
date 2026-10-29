unsigned __int64 __fastcall sub_21CD550(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  void **v5; // r15
  __int64 *v6; // rdi
  void *v8; // rax
  __int64 v9; // rax
  _DWORD *v10; // rax
  _DWORD *v11; // rdx
  int v12; // r12d
  _BYTE *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r13
  char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  char *v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 v23; // r12
  __int64 v24; // rdi
  void *v25; // rax
  int v26; // esi
  void *v27; // rdi
  _QWORD *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdi
  unsigned __int64 *v31; // r15
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 *v34; // rcx
  unsigned __int64 v35; // r15
  int v36; // edi
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // r14
  __int64 *v39; // r15
  unsigned __int64 v40; // r13
  _QWORD *v41; // rsi
  _QWORD *v42; // rax
  void *v43; // rdx
  __int64 *v44; // rax
  _BYTE *v45; // rdi
  __int64 v46; // [rsp+10h] [rbp-118h]
  unsigned __int64 v47; // [rsp+18h] [rbp-110h]
  __int64 v48; // [rsp+20h] [rbp-108h]
  __int64 v49; // [rsp+20h] [rbp-108h]
  __int64 v50; // [rsp+28h] [rbp-100h]
  _QWORD *v51; // [rsp+30h] [rbp-F8h]
  __int64 v52; // [rsp+38h] [rbp-F0h]
  __int64 v53; // [rsp+58h] [rbp-D0h] BYREF
  void *v54[2]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD *v55; // [rsp+70h] [rbp-B8h]
  __int64 v56; // [rsp+78h] [rbp-B0h]
  void *v57[2]; // [rsp+80h] [rbp-A8h] BYREF
  _BYTE v58[16]; // [rsp+90h] [rbp-98h] BYREF
  void *v59; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-80h]
  __int64 v61; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-70h]
  __int64 v63; // [rsp+C0h] [rbp-68h]
  __int64 v64; // [rsp+C8h] [rbp-60h]
  __int64 v65; // [rsp+D0h] [rbp-58h]
  __int64 v66; // [rsp+D8h] [rbp-50h]
  __int64 v67; // [rsp+E0h] [rbp-48h]
  char v68; // [rsp+E8h] [rbp-40h]

  v2 = a2;
  v3 = (unsigned __int64)a1;
  v4 = *(_QWORD *)(a2 + 112);
  v5 = *(void ***)(v4 + 8);
  if ( (__int64)(*(_QWORD *)(v4 + 16) - (_QWORD)v5) > 23 )
  {
    sub_21C6B30((__int64)&v59, v5);
    if ( (v68 & 1) != 0 )
    {
      v8 = v59;
      v59 = nullptr;
      *a1 = v8;
LABEL_7:
      sub_21CB330((__int64 *)&v59);
      return v3;
    }
    v9 = sub_21C6C50((__int64)&v59);
    v10 = sub_21CB390(a2, v60, (void **)((char *)v5 + v9), 0);
    v11 = v10;
    if ( (v60 & 0x200000000000000LL) != 0 )
      v11 = sub_21CB390(a2, v60, v10, 1);
    v12 = v62;
    if ( (_DWORD)v62 )
    {
      sub_21CACD0(v57, (char *)&byte_22F0C30);
      *(_DWORD *)(a2 + 8) = 6;
      sub_9EE8A0(a2 + 16, (__int64)v57);
      sub_21C9390(v54, 6, (__int64)v57);
      v13 = v57[0];
      *(void **)v3 = v54[0];
      if ( v13 != v58 )
        operator delete(v13);
      goto LABEL_7;
    }
    v48 = (__int64)v11;
    v46 = v60;
    v14 = (__int64)v5 + v63;
    v15 = operator new(0x38u);
    sub_21CCBB0(v15, v14, v48, v5, 0, v46);
    if ( (unsigned __int64)sub_21C6C40((__int64)&v59) > 7 && (v60 & 0x4000000000000000LL) != 0 )
    {
      sub_21C4EC0((char **)v57, (_QWORD *)(v2 + 160), (__int64)v5, v64);
      v25 = v57[0];
      if ( v57[0] )
        goto LABEL_27;
    }
    if ( (unsigned __int64)sub_21C6C40((__int64)&v59) > 8 )
    {
      v16 = (char *)v5 + v65;
      v17 = *(__int64 *)((char *)v5 + v65);
      if ( (v17 & 7) != 0 )
      {
        sub_21CACD0(v57, (char *)&byte_22F0C30);
        *(_DWORD *)(v2 + 8) = 4;
        sub_9EE8A0(v2 + 16, (__int64)v57);
        v26 = 4;
        goto LABEL_32;
      }
      *(_QWORD *)(v2 + 496) = v17;
      v18 = *(_QWORD *)(v2 + 112);
      v19 = v16 + 8;
      *(_QWORD *)(v2 + 488) = v19;
      if ( *(_QWORD *)(v18 + 16) < (unsigned __int64)v19 )
      {
        sub_21C93F0(v57, 9, "corrupted binary ids");
        *a1 = v57[0];
        goto LABEL_28;
      }
    }
    if ( (unsigned __int64)sub_21C6C40((__int64)&v59) > 0xB )
    {
      v20 = (unsigned __int64)v5 + v67 + 8;
      if ( *(_QWORD *)(*(_QWORD *)(v2 + 112) + 16LL) < v20 )
      {
        sub_21C9460(v57, 8);
        v25 = v57[0];
LABEL_27:
        *(_QWORD *)v3 = v25;
LABEL_28:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        goto LABEL_7;
      }
      v21 = *(__int64 *)((char *)v5 + v67);
      *(_QWORD *)(v2 + 472) = v20;
      *(_QWORD *)(v2 + 480) = v21;
    }
    if ( (unsigned __int64)sub_21C6C40((__int64)&v59) <= 9 || v60 >= 0 )
    {
LABEL_23:
      v22 = *(_QWORD *)(v2 + 120);
      if ( v22 )
      {
        *(_QWORD *)(v2 + 120) = 0;
        v23 = operator new(0x38u);
        *(_QWORD *)(v23 + 8) = v22;
        *(_QWORD *)v23 = &off_2BE9B08;
        sub_21D1830(v23 + 16);
        v24 = *(_QWORD *)(v2 + 136);
        *(_QWORD *)(v23 + 48) = v15;
        *(_QWORD *)(v23 + 24) = 0;
        *(_QWORD *)(v23 + 32) = 0;
        *(_DWORD *)(v23 + 40) = 0;
        *(_QWORD *)(v2 + 136) = v23;
        if ( v24 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
          v23 = *(_QWORD *)(v2 + 136);
        }
        (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)v23 + 16LL))(v57, v23);
        v25 = v57[0];
        if ( v57[0] )
          goto LABEL_27;
      }
      else
      {
        v28 = (_QWORD *)operator new(0x10u);
        v29 = *(_QWORD *)(v2 + 136);
        *v28 = off_2BE9AD8;
        v28[1] = v15;
        *(_QWORD *)(v2 + 136) = v28;
        if ( v29 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
      }
      v30 = *(_QWORD *)(v2 + 128);
      *(_QWORD *)(v2 + 128) = v15;
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
      sub_21CCDD0((_QWORD *)v3, v2);
      goto LABEL_7;
    }
    v31 = (unsigned __int64 *)((char *)v5 + v66);
    v32 = *(_QWORD *)(*(_QWORD *)(v2 + 112) + 16LL);
    if ( v32 < (unsigned __int64)(v31 + 2) )
    {
      sub_21CACD0(v57, (char *)&byte_22F0C30);
      *(_DWORD *)(v2 + 8) = 8;
      sub_9EE8A0(v2 + 16, (__int64)v57);
      v26 = 8;
    }
    else
    {
      v47 = *v31;
      v33 = *v31;
      *(_QWORD *)(v2 + 104) = v31[1];
      if ( !v33 )
        goto LABEL_23;
      v34 = (__int64 *)(v31 + 4);
      if ( v32 >= (unsigned __int64)(v31 + 4) )
      {
        v56 = 1;
        *(_OWORD *)v54 = 0;
        v55 = nullptr;
        v56 = v31[2];
        v35 = v31[3];
        if ( v32 < (unsigned __int64)&v34[v35] )
        {
LABEL_58:
          sub_21CACD0(v57, (char *)&byte_22F0C30);
          *(_DWORD *)(v2 + 8) = 8;
          sub_9EE8A0(v2 + 16, (__int64)v57);
          sub_21C9390(&v53, 8, (__int64)v57);
          v45 = v57[0];
          *(_QWORD *)v3 = v53;
          if ( v45 != v58 )
            operator delete(v45);
          v27 = v54[0];
          if ( !v54[0] )
            goto LABEL_28;
          goto LABEL_33;
        }
        v50 = v15;
        v36 = v12;
        v49 = v2 + 56;
        v37 = v32;
        v51 = (_QWORD *)v3;
        LODWORD(v3) = v36;
        v52 = v2;
        v38 = v35;
        v39 = v34;
        while ( 1 )
        {
          if ( v38 )
          {
            LODWORD(v40) = 0;
            v41 = nullptr;
            v42 = nullptr;
            while ( 1 )
            {
              v43 = (void *)*v39++;
              v57[0] = v43;
              if ( v41 == v42 )
              {
                sub_1250420((__int64)v54, v41, (__int64 *)v57);
                v40 = (unsigned int)(v40 + 1);
                if ( v40 >= v38 )
                  break;
              }
              else
              {
                *v42 = v43;
                v54[1] = v42 + 1;
                v40 = (unsigned int)(v40 + 1);
                if ( v40 >= v38 )
                  break;
              }
              v42 = v54[1];
              v41 = v55;
            }
          }
          sub_21CD480(v49, (char *)v54);
          if ( v54[0] )
            operator delete(v54[0]);
          v3 = (unsigned int)(v3 + 1);
          if ( v3 >= v47 )
          {
            v15 = v50;
            v3 = (unsigned __int64)v51;
            v2 = v52;
            goto LABEL_23;
          }
          v44 = v39 + 2;
          if ( v37 < (unsigned __int64)(v39 + 2) )
            break;
          v56 = 1;
          *(_OWORD *)v54 = 0;
          v55 = nullptr;
          v56 = *v39;
          v38 = v39[1];
          v39 += 2;
          if ( v37 < (unsigned __int64)&v44[v38] )
          {
            v15 = v50;
            v3 = (unsigned __int64)v51;
            v2 = v52;
            goto LABEL_58;
          }
        }
        v15 = v50;
        v3 = (unsigned __int64)v51;
        v2 = v52;
      }
      sub_21CACD0(v57, (char *)&byte_22F0C30);
      *(_DWORD *)(v2 + 8) = 8;
      sub_9EE8A0(v2 + 16, (__int64)v57);
      v26 = 8;
    }
LABEL_32:
    sub_21C9390(v54, v26, (__int64)v57);
    *(void **)v3 = v54[0];
    v27 = v57[0];
    if ( v57[0] == v58 )
      goto LABEL_28;
LABEL_33:
    operator delete(v27);
    goto LABEL_28;
  }
  sub_21CACD0(&v59, (char *)&byte_22F0C30);
  *(_DWORD *)(a2 + 8) = 8;
  sub_9EE8A0(a2 + 16, (__int64)&v59);
  sub_21C9390(v57, 8, (__int64)&v59);
  v6 = (__int64 *)v59;
  *(void **)v3 = v57[0];
  if ( v6 != &v61 )
    operator delete(v6);
  return v3;
}
