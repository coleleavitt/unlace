void __fastcall sub_166CCF0(_QWORD *a1, unsigned int *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // r13
  __int16 v7; // ax
  int v8; // eax
  __int64 v9; // r15
  unsigned __int8 v10; // dl
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  int v19; // ebp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  _QWORD *v26; // rax
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r12
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v43; // [rsp+8h] [rbp-1A0h]
  __int64 v44; // [rsp+18h] [rbp-190h] BYREF
  __int64 v45; // [rsp+20h] [rbp-188h] BYREF
  char v46; // [rsp+28h] [rbp-180h]
  _BYTE v47[16]; // [rsp+30h] [rbp-178h] BYREF
  __int64 v48; // [rsp+40h] [rbp-168h]
  unsigned __int8 *v49[11]; // [rsp+50h] [rbp-158h] BYREF
  char v50; // [rsp+A8h] [rbp-100h]
  unsigned int v51; // [rsp+B0h] [rbp-F8h]
  char v52; // [rsp+B4h] [rbp-F4h]
  __int64 v53; // [rsp+C0h] [rbp-E8h] BYREF
  void *ptr; // [rsp+C8h] [rbp-E0h]
  __int64 v55; // [rsp+D0h] [rbp-D8h]
  _BYTE v56[64]; // [rsp+D8h] [rbp-D0h] BYREF
  void *v57[2]; // [rsp+118h] [rbp-90h]
  __int64 v58; // [rsp+128h] [rbp-80h]
  _QWORD *v59; // [rsp+130h] [rbp-78h]
  __int64 v60; // [rsp+138h] [rbp-70h]
  int v61; // [rsp+140h] [rbp-68h]
  __int64 v62; // [rsp+148h] [rbp-60h] BYREF
  __int128 v63; // [rsp+150h] [rbp-58h]
  __int64 v64; // [rsp+160h] [rbp-48h]

  v5 = 0;
  v7 = *((_WORD *)a2 + 8);
  if ( (unsigned __int16)(v7 - 7) > 0xCu && v7 != 1 )
    v5 = *((_QWORD *)a2 + 1);
  v8 = *a2;
  *(_OWORD *)v57 = 0;
  ptr = v56;
  v55 = 0x800000000LL;
  v61 = v8;
  v53 = 0;
  v58 = 0;
  v59 = a1;
  v60 = v5;
  sub_B85890(&v62, v5);
  v63 = 0;
  v64 = 0x101010000LL;
  sub_1A395A0(&v53);
  sub_1A49A10(a1, &v53, a3, 1, 0);
  if ( !(_DWORD)v55 )
  {
    v17 = a1 + 1;
    v18 = 7269;
    goto LABEL_28;
  }
  if ( (_DWORD)v53 != 2 )
    goto LABEL_42;
  v9 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
  v10 = *(_BYTE *)(v9 + 28) & 0x7F;
  v11 = v10;
  if ( (unsigned int)v10 - 53 <= 1 || ((v10 + 52) & 0x7Fu) <= 1 )
  {
    v9 = sub_B72ED0(*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL);
    v11 = *(_BYTE *)(v9 + 28) & 0x7F;
  }
  if ( (unsigned int)(v11 - 40) > 6 )
  {
LABEL_42:
    v17 = a1 + 1;
    v18 = 7268;
LABEL_28:
    sub_168B9F0(v47, v17, a4, v18, 0);
    if ( v50 )
    {
      sub_AE9DF0(v49, v5, 5u);
      v27 = v50;
    }
    else
    {
      if ( !v52 )
      {
        v19 = *a2;
        goto LABEL_31;
      }
      v22 = sub_168B9E0(v47);
      v25 = v48;
      if ( v48 )
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
      v45 = v25;
      v26 = sub_1587BC0(v22, &v45, v20, v21, v23, v24);
      sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * v51 + 8), v5, 5u);
      v27 = v50;
    }
    v19 = *a2;
    if ( v27 )
    {
      LODWORD(v45) = *a2;
      HIDWORD(v45) = v19;
      v46 = 1;
      sub_AEC610((__int64 *)v49, &v45);
      goto LABEL_32;
    }
LABEL_31:
    if ( v52 )
    {
      v32 = sub_168B9E0(v47);
      v33 = v48;
      if ( v48 )
        v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
      v44 = v33;
      v34 = sub_1587BC0(v32, &v44, v28, v29, v30, v31);
      v35 = *v34 + 32LL * v51;
      LODWORD(v45) = v19;
      HIDWORD(v45) = v19;
      v46 = 1;
      sub_AEC610((__int64 *)(v35 + 8), &v45);
    }
LABEL_32:
    sub_15F7200(v47);
    if ( !BYTE3(v64) )
      goto LABEL_21;
    if ( (_DWORD)v53 != 5 )
      goto LABEL_13;
LABEL_34:
    if ( !BYTE4(v64) )
      goto LABEL_15;
    goto LABEL_23;
  }
  if ( sub_B8C400(v9, 1) )
  {
    sub_168B9F0(v47, a1 + 1, a4, 7543, 0);
    if ( v50 )
    {
      sub_AE9DF0(v49, v5, 5u);
    }
    else if ( v52 )
    {
      v37 = sub_168B9E0(v47);
      v40 = v48;
      if ( v48 )
      {
        v43 = v37;
        v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
        v37 = v43;
      }
      v45 = v40;
      v41 = sub_1587BC0(v37, &v45, v36, v37, v38, v39);
      sub_AE9DF0((unsigned __int8 **)(*v41 + 32LL * v51 + 8), v5, 5u);
    }
    sub_15F7200(v47);
  }
  v12 = sub_B32B70(a1[31], ((unsigned __int64)*a2 << 32) | *a2, 1);
  sub_B8CC60(v9, v12, v13, v14, v15, v16);
  if ( !BYTE3(v64) )
  {
LABEL_21:
    if ( !BYTE4(v64) || (_DWORD)v53 != 5 )
      goto LABEL_15;
LABEL_23:
    sub_1A445B0(v59, &v53);
    goto LABEL_15;
  }
  if ( (_DWORD)v53 == 5 )
    goto LABEL_34;
LABEL_13:
  if ( v57[1] && (*(_BYTE *)(v59[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v59, (__int64)&v53);
    goto LABEL_21;
  }
LABEL_15:
  if ( v57[0] )
    sub_1A39780(v57[0]);
  if ( ptr != v56 )
    free(ptr);
}
