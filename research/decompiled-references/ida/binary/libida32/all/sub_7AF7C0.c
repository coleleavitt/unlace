unsigned __int64 __fastcall sub_7AF7C0(int *a1, __int64 a2)
{
  __int64 ph; // r13
  bool v3; // r15
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // edx
  const char *v10; // r13
  size_t v11; // rax
  size_t v12; // rbx
  void *v13; // r15
  unsigned __int8 *v14; // rbp
  int i; // r13d
  int v16; // r8d
  int v17; // r9d
  int v18; // r8d
  int v19; // r9d
  char v21; // [rsp+0h] [rbp-A8h]
  char v22; // [rsp+0h] [rbp-A8h]
  int v23; // [rsp+Ch] [rbp-9Ch]
  int v24; // [rsp+Ch] [rbp-9Ch]
  int v25; // [rsp+Ch] [rbp-9Ch]
  int v26; // [rsp+Ch] [rbp-9Ch]
  int v27; // [rsp+Ch] [rbp-9Ch]
  int v28; // [rsp+Ch] [rbp-9Ch]
  int v29; // [rsp+Ch] [rbp-9Ch]
  int v30; // [rsp+Ch] [rbp-9Ch]
  int v31; // [rsp+Ch] [rbp-9Ch]
  int v32; // [rsp+Ch] [rbp-9Ch]
  char v33[8]; // [rsp+10h] [rbp-98h] BYREF
  void *ptr[3]; // [rsp+18h] [rbp-90h] BYREF
  char v35[8]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v36; // [rsp+38h] [rbp-70h]
  __int64 v37; // [rsp+48h] [rbp-60h]
  _BYTE v38[10]; // [rsp+5Eh] [rbp-4Ah] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  idcv_object(a2, 0);
  v33[0] = 2;
  v35[0] = 2;
  v37 = 0;
  memset(ptr, 0, sizeof(ptr));
  v36 = 0;
  ph = get_ph(a2, nullptr);
  v3 = 0;
  v4 = *((unsigned __int16 *)a1 + 6);
  if ( v4 >= *(_DWORD *)(ph + 104) )
    v3 = v4 < *(_DWORD *)(ph + 108);
  v23 = *a1;
  free_idcv(v33);
  v33[0] = 2;
  LODWORD(ptr[0]) = v23;
  set_idcv_attr();
  v24 = a1[1];
  free_idcv(v33);
  v33[0] = 2;
  LODWORD(ptr[0]) = v24;
  set_idcv_attr();
  v25 = a1[2];
  free_idcv(v33);
  v33[0] = 2;
  LODWORD(ptr[0]) = v25;
  set_idcv_attr();
  v26 = *((unsigned __int16 *)a1 + 6);
  free_idcv(v33);
  v33[0] = 2;
  LODWORD(ptr[0]) = v26;
  set_idcv_attr();
  v27 = *((unsigned __int16 *)a1 + 7);
  free_idcv(v33);
  v33[0] = 2;
  LODWORD(ptr[0]) = v27;
  set_idcv_attr();
  v28 = a1[4];
  free_idcv(v33);
  v33[0] = 2;
  LODWORD(ptr[0]) = v28;
  set_idcv_attr();
  v29 = *((char *)a1 + 21);
  free_idcv(v33);
  v33[0] = 2;
  LODWORD(ptr[0]) = v29;
  set_idcv_attr();
  v30 = *((char *)a1 + 20);
  free_idcv(v33);
  v33[0] = 2;
  LODWORD(ptr[0]) = v30;
  set_idcv_attr();
  v31 = *((__int16 *)a1 + 11);
  free_idcv(v33);
  v33[0] = 2;
  LODWORD(ptr[0]) = v31;
  set_idcv_attr();
  free_idcv(v33);
  v33[0] = 2;
  LODWORD(ptr[0]) = v3;
  set_idcv_attr();
  v5 = *((unsigned __int16 *)a1 + 6);
  v6 = *(_DWORD *)(ph + 104);
  v7 = 0;
  if ( v5 >= v6 && v5 < *(_DWORD *)(ph + 108) )
    v7 = *(_DWORD *)(*(_QWORD *)(ph + 112) + 16LL * (v5 - v6) + 8);
  v32 = v7;
  free_idcv(v33);
  v33[0] = 2;
  LODWORD(ptr[0]) = v32;
  set_idcv_attr();
  if ( !v3 || (v8 = *((unsigned __int16 *)a1 + 6), v9 = *(_DWORD *)(ph + 104), v8 < v9) || v8 >= *(_DWORD *)(ph + 108) )
  {
    free_idcv(v33);
    goto LABEL_13;
  }
  v10 = *(const char **)(*(_QWORD *)(ph + 112) + 16LL * (v8 - v9));
  free_idcv(v33);
  if ( !v10 )
  {
LABEL_13:
    v33[0] = 7;
    memset(ptr, 0, sizeof(ptr));
    goto LABEL_14;
  }
  v11 = strlen(v10);
  v33[0] = 7;
  memset(ptr, 0, sizeof(ptr));
  v12 = v11;
  if ( v11 )
  {
    v13 = (void *)(v11 + 1);
    ptr[0] = (void *)qvector_reserve(ptr, 0, v11 + 1, 1);
    ptr[1] = v13;
    memmove(ptr[0], v10, v12);
    *((_BYTE *)ptr[0] + v12) = 0;
  }
LABEL_14:
  set_idcv_attr();
  v14 = (unsigned __int8 *)(a1 + 6);
  for ( i = 0; i != 8; ++i )
  {
    if ( !v14[1] )
      break;
    sub_7AE700(v14, (__int64)v35);
    qsnprintf((int)v38, 10, (int)"Op%d", i, v16, v17, v21);
    set_idcv_attr();
    qsnprintf((int)v38, 10, (int)"%d", i, v18, v19, v22);
    set_idcv_attr();
    v14 += 24;
  }
  free_idcv(v33);
  v33[0] = 2;
  LODWORD(ptr[0]) = i;
  set_idcv_attr();
  free_idcv(v35);
  free_idcv(v33);
  return v39 - __readfsqword(0x28u);
}

