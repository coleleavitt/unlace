void __fastcall sub_16AAAC0(__int64 *a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned int v15; // r13d
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 *v21; // r12
  __int64 *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+18h] [rbp-C0h] BYREF
  _BYTE v49[184]; // [rsp+20h] [rbp-B8h] BYREF

  v7 = a1[33];
  v48 = a2;
  v47 = a3;
  v8 = *(_QWORD *)(v7 + 32);
  v46 = a5;
  if ( a4 )
  {
    v9 = 7251;
    if ( (unsigned __int8)sub_FD3830(v8, 0x1C53u, (unsigned int)a5, v7, a5, a6) == 1 )
      return;
    v13 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v13 + 16) != 42 && !sub_16A7B30(v13, 7251, v10, v11) )
      return;
    v14 = *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v14 + 16) != 42 && !sub_16A7B30(v14, 7251, v10, v11) )
      return;
    v15 = 7251;
    v16 = sub_F68450(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL), 7251, v10, v11, v12);
    v20 = sub_F68450(*(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL), 7251, v17, v18, v19);
  }
  else
  {
    v9 = 7472;
    if ( (unsigned __int8)sub_FD3830(v8, 0x1D30u, (unsigned int)a5, v7, a5, a6) == 1 )
      return;
    v41 = *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v41 + 16) - 43 > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1
        || !sub_F63050(v41, 7472, v38, v39) )
      {
        return;
      }
      v41 = *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL);
    }
    v16 = v48;
    v15 = 7472;
    v20 = sub_F68450(v41, 7472, v38, v39, v40);
  }
  v21 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
  v22 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(v21[1] & 0xFFFFFFFFFFFFFFF0LL)
    && !sub_F57FF0(*v22) )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(*v22 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v23 + 16) != 13 || ((*(_WORD *)(v23 + 18) >> 3) & 0x1FF) != 0x1B3) && !sub_F57FF0(*v21) )
    {
      v27 = *v21;
      v28 = *(_QWORD *)(*(_QWORD *)(*v21 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v29 = *(unsigned __int8 *)(v28 + 16);
      if ( (_BYTE)v29 == 13 )
      {
        if ( ((*(_WORD *)(v28 + 18) >> 3) & 0x1FF) == 0x1B3 || (unsigned int)*(unsigned __int8 *)(v27 + 16) - 47 <= 1 )
          return;
      }
      else
      {
        v28 = (unsigned int)*(unsigned __int8 *)(v27 + 16) - 47;
        if ( (unsigned int)v28 <= 1 || (unsigned int)(v29 - 47) <= 1 && sub_F63050(v27, v9, v28, v24) )
          return;
      }
      v30 = *v22;
      if ( (unsigned int)*(unsigned __int8 *)(*v22 + 16) - 47 > 1
        && ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 > 1
         || !sub_F63050(v30, v9, v28, v24)) )
      {
        if ( (!sub_F65360(*v21, v9, v28, v24, v25, v26) || !sub_F65140(*v22, v9, v31, v32, v33, v34))
          && (!sub_F65140(*v21, v9, v31, v32, v33, v34) || !sub_F65360(*v22, v9, v42, v43, v44, v45))
          || (v35 = sub_A97D20(a1[31], *v22), v35 != sub_A97D20(a1[31], *v21)) )
        {
          if ( (*(_BYTE *)(*v21 + 17) & 4) == 0 && (*(_BYTE *)(*v22 + 17) & 4) == 0 )
          {
            sub_168B9F0((__int64)v49, a1 + 1, v46, v15, 0);
            v36 = sub_1605D30((__int64)v49, &v48);
            v37 = sub_1605D30(v36, &v47);
            sub_15884C0(v37, &v46);
            sub_15F7200(v49);
          }
        }
      }
    }
  }
}
