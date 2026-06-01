unsigned __int64 __fastcall sub_7D2C60(__int64 a1, __int64 a2)
{
  __int64 ph; // r12
  bool v3; // r15
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  int v26; // ecx
  void *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  int v31; // edx
  const char *v32; // r12
  __int64 v33; // r8
  __int64 v34; // r9
  size_t v35; // rax
  size_t v36; // rbx
  void *v37; // r15
  unsigned __int8 *v38; // rbp
  __int64 v39; // r12
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // r8
  __int64 v43; // r9
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 v49; // r9
  void *v51; // [rsp+8h] [rbp-A0h]
  void *v52; // [rsp+8h] [rbp-A0h]
  void *v53; // [rsp+8h] [rbp-A0h]
  void *v54; // [rsp+8h] [rbp-A0h]
  void *v55; // [rsp+8h] [rbp-A0h]
  void *v56; // [rsp+8h] [rbp-A0h]
  void *v57; // [rsp+8h] [rbp-A0h]
  void *v58; // [rsp+8h] [rbp-A0h]
  void *v59; // [rsp+8h] [rbp-A0h]
  void *v60; // [rsp+8h] [rbp-A0h]
  char v61[8]; // [rsp+10h] [rbp-98h] BYREF
  void *ptr[3]; // [rsp+18h] [rbp-90h] BYREF
  char v63[8]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v64; // [rsp+38h] [rbp-70h]
  __int64 v65; // [rsp+48h] [rbp-60h]
  _BYTE v66[10]; // [rsp+5Eh] [rbp-4Ah] BYREF
  unsigned __int64 v67; // [rsp+68h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  idcv_object(a2, 0);
  v61[0] = 2;
  v63[0] = 2;
  v65 = 0;
  memset(ptr, 0, sizeof(ptr));
  v64 = 0;
  ph = get_ph(a2, nullptr);
  v3 = 0;
  v4 = *(unsigned __int16 *)(a1 + 24);
  if ( v4 >= *(_DWORD *)(ph + 104) )
    v3 = v4 < *(_DWORD *)(ph + 108);
  v51 = *(void **)a1;
  free_idcv(v61);
  v61[0] = 2;
  ptr[0] = v51;
  set_idcv_attr(a2, "cs", v61, 0, v5, v6);
  v52 = *(void **)(a1 + 8);
  free_idcv(v61);
  v61[0] = 2;
  ptr[0] = v52;
  set_idcv_attr(a2, "ip", v61, 0, v7, v8);
  v53 = *(void **)(a1 + 16);
  free_idcv(v61);
  v61[0] = 2;
  ptr[0] = v53;
  set_idcv_attr(a2, "ea", v61, 0, v9, v10);
  v54 = (void *)*(unsigned __int16 *)(a1 + 24);
  free_idcv(v61);
  v61[0] = 2;
  ptr[0] = v54;
  set_idcv_attr(a2, "itype", v61, 0, v11, v12);
  v55 = (void *)*(unsigned __int16 *)(a1 + 26);
  free_idcv(v61);
  v61[0] = 2;
  ptr[0] = v55;
  set_idcv_attr(a2, "size", v61, 0, v13, v14);
  v56 = (void *)*(unsigned int *)(a1 + 28);
  free_idcv(v61);
  v61[0] = 2;
  ptr[0] = v56;
  set_idcv_attr(a2, "auxpref", v61, 0, v15, v16);
  v57 = (void *)*(char *)(a1 + 33);
  free_idcv(v61);
  v61[0] = 2;
  ptr[0] = v57;
  set_idcv_attr(a2, "insnpref", v61, 0, v17, v18);
  v58 = (void *)*(char *)(a1 + 32);
  free_idcv(v61);
  v61[0] = 2;
  ptr[0] = v58;
  set_idcv_attr(a2, "segpref", v61, 0, v19, v20);
  v59 = (void *)*(__int16 *)(a1 + 34);
  free_idcv(v61);
  v61[0] = 2;
  ptr[0] = v59;
  set_idcv_attr(a2, "flags", v61, 0, v21, v22);
  free_idcv(v61);
  v61[0] = 2;
  ptr[0] = (void *)v3;
  set_idcv_attr(a2, "is_canonical", v61, 0, v23, v24);
  v25 = *(unsigned __int16 *)(a1 + 24);
  v26 = *(_DWORD *)(ph + 104);
  v27 = nullptr;
  if ( v25 >= v26 && v25 < *(_DWORD *)(ph + 108) )
    v27 = (void *)*(unsigned int *)(*(_QWORD *)(ph + 112) + 16LL * (v25 - v26) + 8);
  v60 = v27;
  free_idcv(v61);
  v61[0] = 2;
  ptr[0] = v60;
  set_idcv_attr(a2, "feature", v61, 0, v28, v29);
  if ( v3
    && (v30 = *(unsigned __int16 *)(a1 + 24), v31 = *(_DWORD *)(ph + 104), v30 >= v31)
    && v30 < *(_DWORD *)(ph + 108) )
  {
    v32 = *(const char **)(*(_QWORD *)(ph + 112) + 16LL * (v30 - v31));
    free_idcv(v61);
    if ( v32 )
    {
      v35 = strlen(v32);
      v61[0] = 7;
      memset(ptr, 0, sizeof(ptr));
      v36 = v35;
      if ( v35 )
      {
        v37 = (void *)(v35 + 1);
        ptr[0] = (void *)qvector_reserve(ptr, 0, v35 + 1, 1);
        ptr[1] = v37;
        memmove(ptr[0], v32, v36);
        *((_BYTE *)ptr[0] + v36) = 0;
      }
      goto LABEL_14;
    }
  }
  else
  {
    free_idcv(v61);
  }
  v61[0] = 7;
  memset(ptr, 0, sizeof(ptr));
LABEL_14:
  set_idcv_attr(a2, "mnem", v61, 0, v33, v34);
  v38 = (unsigned __int8 *)(a1 + 40);
  LODWORD(v39) = 0;
  while ( v38[1] )
  {
    sub_7D1B70(v38, (__int64)v63);
    qsnprintf((unsigned int)v66, 10, (unsigned int)"Op%d", v39, v40, v41);
    set_idcv_attr(a2, v66, v63, 0, v42, v43);
    qsnprintf((unsigned int)v66, 10, (unsigned int)"%d", v39, v44, v45);
    set_idcv_attr(a2, v66, v63, 0, v46, v47);
    LODWORD(v39) = v39 + 1;
    v38 += 40;
    if ( (_DWORD)v39 == 8 )
    {
      v39 = 8;
      goto LABEL_18;
    }
  }
  v39 = (int)v39;
LABEL_18:
  free_idcv(v61);
  v61[0] = 2;
  ptr[0] = (void *)v39;
  set_idcv_attr(a2, "n", v61, 0, v48, v49);
  free_idcv(v63);
  free_idcv(v61);
  return v67 - __readfsqword(0x28u);
}
