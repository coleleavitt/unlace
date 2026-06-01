__int64 __fastcall sub_18C9440(__int64 *a1, int a2, _QWORD *a3, __int64 a4, int a5, double a6, double a7)
{
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbp
  unsigned __int64 *v22; // rax
  _QWORD *v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r14
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned int v32; // r13d
  __int64 v33; // r14
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  bool v42; // zf
  __int64 v43; // rdx
  __int64 v44; // r14
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // [rsp-10h] [rbp-78h]
  __int64 v50; // [rsp-8h] [rbp-70h]
  unsigned __int64 v51; // [rsp+8h] [rbp-60h]
  __int64 v52; // [rsp+8h] [rbp-60h]
  unsigned __int64 v53; // [rsp+8h] [rbp-60h]
  _QWORD v56[8]; // [rsp+28h] [rbp-40h] BYREF

  v14 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(*a1 + 248) + 17504LL), "__builtin_shufflevector", 0x17u);
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 248) + 2264LL) + 80LL);
  v16 = *(_QWORD *)(v15 + 72);
  if ( (v16 & 1) != 0 )
  {
    v10 = v16 & 0xFFFFFFFFFFFFFFFELL;
LABEL_3:
    v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    v18 = v17;
    if ( v10 )
    {
      v10 &= 4u;
      if ( (_DWORD)v10 )
      {
        v18 = 0;
        if ( v17 )
        {
          v19 = *(_QWORD *)v17;
          v10 = *(unsigned int *)(*(_QWORD *)v17 + 12LL);
          if ( *(_DWORD *)(v17 + 8) != (_DWORD)v10 )
          {
            *(_DWORD *)(v17 + 8) = v10;
            v51 = v17;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 152LL))(v19, v15);
            v17 = v51;
          }
          v18 = *(_QWORD *)(v17 + 16);
        }
      }
    }
    goto LABEL_9;
  }
  v11 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v16 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    v18 = 0;
    goto LABEL_9;
  }
  v18 = v16 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v16 & 2) != 0 )
  {
    v44 = v11[2295];
    v45 = v15 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v44 )
    {
      v46 = v11[294];
      v11[304] += 24LL;
      v47 = (v46 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v11[295] >= v47 + 24 && v46 )
      {
        v11[294] = v47 + 24;
        v48 = (v46 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v48 = sub_986170((__int64)(v11 + 294), 24, 24, 3, v12, v13);
        v47 = v48 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v48 = v44;
      v45 = v47 | 4;
      *(_DWORD *)(v48 + 8) = 0;
      *(_QWORD *)(v48 + 16) = v15;
    }
    v10 = v45 & 0xFFFFFFFFFFFFFFFELL;
    v16 = v10 | 1;
    *(_QWORD *)(v15 + 72) = v10 | 1;
    goto LABEL_3;
  }
LABEL_9:
  v20 = sub_B94670(v18 + 40, v14, v10, (__int64)v11, v12, v13);
  v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v20 & 4) != 0 )
  {
    v22 = (unsigned __int64 *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
    v21 = 0;
    if ( v22 )
      v21 = *v22;
  }
  v23 = *(_QWORD **)(*a1 + 248);
  v24 = v23[2389];
  v56[0] = 0;
  v52 = v24;
  v25 = sub_EEE9A0(32, v23, 8u);
  sub_BF7BD0(v25, *(_QWORD *)(*a1 + 248), v21, 0, v52, 0, a2, v56, 0);
  v26 = sub_A70010(*(_QWORD *)(*a1 + 248), *(_QWORD *)(v21 + 48));
  v53 = sub_160A600(*a1, v25, v26, 0x3Du, 0, 0, a6, a7, 0) & 0xFFFFFFFFFFFFFFFELL;
  v27 = *(_QWORD *)(*(_QWORD *)(v21 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v28 = (unsigned int)*(unsigned __int8 *)(v27 + 16) - 25;
  if ( (unsigned int)v28 > 1 )
    v27 = sub_F63050(v27, v50, v28, v49);
  v29 = *(_QWORD *)(*(_QWORD *)(v27 + 24) & 0xFFFFFFFFFFFFFFF0LL);
  v30 = *(unsigned __int8 *)(v29 + 16);
  v31 = (unsigned int)(v30 - 43);
  if ( (unsigned int)v31 > 1 )
  {
    v31 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
    if ( (unsigned int)v31 > 1 || (v29 = sub_F63050(v29, v50, v31, v30)) == 0 )
    {
      v32 = 0;
      goto LABEL_17;
    }
    v30 = *(unsigned __int8 *)(v29 + 16);
  }
  if ( (_BYTE)v30 == 43 )
    goto LABEL_16;
  while ( 1 )
  {
    v31 = *(_QWORD *)(v29 + 32) & 0xFFFFFFFFFFFFFFF0LL;
    v42 = (*(_BYTE *)(v29 + 18) & 0x10) == 0;
    v29 = *(_QWORD *)v31;
    if ( v42 )
      break;
    v43 = (unsigned int)*(unsigned __int8 *)(v29 + 16) - 43;
    if ( (unsigned int)v43 > 1 )
      v29 = sub_F63050(v29, v50, v43, v30);
  }
  v32 = 2;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
LABEL_16:
    v32 = 1;
LABEL_17:
  v33 = *(_QWORD *)(*(_QWORD *)(v21 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v33 + 16) - 25 > 1 )
    v33 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v21 + 48) & 0xFFFFFFFFFFFFFFF0LL), v50, v31, v30);
  v34 = sub_B8C330(v21);
  v56[0] = *(_QWORD *)(v33 + 24);
  v35 = sub_F67970(v56, v34);
  v36 = sub_C0BFD0(*(_QWORD **)(*a1 + 248), v53, a3, a4, v35, v32, a5, 0, 0, 0);
  return sub_16D1970(*a1, (void **)(v36 & 0xFFFFFFFFFFFFFFFELL), a6, v37, v38, v39, v40);
}
