void __fastcall sub_17C4180(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r12
  unsigned __int8 v14; // dl
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 *v22; // rcx
  __int64 **v23; // rax
  __int64 *v24; // rax
  size_t v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  const char *v28; // rax
  unsigned __int64 *v29; // rax
  __int64 *v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  size_t v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rcx
  const char *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbp
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 *i; // rax
  __int64 v45; // rcx
  __int64 v46; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v47[2]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+20h] [rbp-A8h]
  unsigned __int8 *v49; // [rsp+30h] [rbp-98h] BYREF
  char v50; // [rsp+88h] [rbp-40h]
  unsigned int v51; // [rsp+90h] [rbp-38h]
  char v52; // [rsp+94h] [rbp-34h]

  v7 = (__int64)a2;
  v8 = *(_QWORD *)(*((_QWORD *)a2 + 6) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = (unsigned int)*(unsigned __int8 *)(v8 + 16) - 25;
  if ( (unsigned int)v9 > 1 )
    v8 = sub_F63050(v8, a2, v9, a4);
  v10 = (__int64)sub_F63240(*(_QWORD *)(*(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v9, a4, a5, a6);
  v13 = v10;
  if ( !v10 )
    return;
  v14 = *(_BYTE *)(v10 + 28) & 0x7F;
  v15 = (v14 + 52) & 0x7F;
  if ( (unsigned __int8)v15 <= 1u || (v16 = v10, v17 = (unsigned int)v14 - 53, (unsigned int)v17 <= 1) )
  {
    v10 = sub_B72ED0(v10);
    v16 = v10;
  }
  if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
    return;
  v18 = sub_B8C3D0(v16, (__int64)a2, v17, v15, v11, v12);
  v21 = *v18;
  v22 = (__int64 *)(*v18 + 8LL * *((unsigned int *)v18 + 2));
  if ( *v18 >= (unsigned __int64)v22 )
  {
    if ( (__int64 *)v21 == v22 )
      return;
    if ( *(_WORD *)(*v22 + 36) != 193 )
    {
      v23 = (__int64 **)(v22 + 1);
      while ( (__int64 **)v21 != v23 )
      {
        v22 = *v23++;
        if ( *((_WORD *)v22 + 18) == 193 )
          goto LABEL_20;
      }
      return;
    }
LABEL_20:
    if ( (a2[28] & 0x7Fu) - 35 <= 3 )
    {
      v25 = j__strlen("get_return_object");
      if ( !(unsigned int)sub_B76070((__int64)a2, (__int64)a2, v26, v27) && (a2[40] & 7) == 0 )
      {
        v28 = sub_995750((__int64)a2);
        if ( v25 == v21 )
        {
          if ( !v25 )
            return;
          a2 = "get_return_object";
          if ( !memcmp(v28, "get_return_object", v25) )
            return;
        }
      }
    }
    if ( *(_BYTE *)(v7 + 81) >> 5 == 2 && (*(_BYTE *)(v7 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v33 = j__strlen("get_return_object_on_allocation_failure");
      if ( !(unsigned int)sub_B76070(v7, (__int64)a2, v34, v35) && (*(_BYTE *)(v7 + 40) & 7) == 0 )
      {
        v36 = sub_995750(v7);
        if ( v33 == v21 )
        {
          if ( !v33 )
            return;
          a2 = "get_return_object_on_allocation_failure";
          if ( !memcmp(v36, "get_return_object_on_allocation_failure", v33) )
            return;
        }
      }
    }
    if ( (*(_BYTE *)(v7 + 29) & 1) != 0 )
    {
      v29 = sub_B8C3D0(v7, (__int64)a2, v21, (__int64)v22, v19, v20);
      v30 = (__int64 *)*v29;
      v31 = *v29 + 8LL * *((unsigned int *)v29 + 2);
      if ( *v29 >= v31 )
      {
        if ( v30 != (__int64 *)v31 )
        {
          if ( *(_WORD *)(*(_QWORD *)v31 + 36LL) == 194 )
            return;
          for ( i = (__int64 *)(v31 + 8); v30 != i; ++i )
          {
            v45 = *i;
            if ( *(_WORD *)(v45 + 36) == 194 )
              return;
          }
        }
      }
      else
      {
        v32 = *v29;
        while ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 194 )
        {
          v32 += 8LL;
          if ( v31 == v32 )
            goto LABEL_23;
        }
        if ( v31 != v32 )
          return;
      }
    }
LABEL_23:
    sub_168B9F0((__int64)v47, (__int64 *)(a1 + 8), *(_DWORD *)(v7 + 24), 0xDCBu, 0);
    if ( v50 )
    {
      sub_AE9DF0(&v49, v13, 0xAu);
    }
    else if ( v52 )
    {
      v39 = sub_168B9E0(v47);
      v42 = v48;
      if ( v48 )
        v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
      v46 = v42;
      v43 = sub_1587BC0(v39, &v46, v37, v38, v40, v41);
      sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * v51 + 8), v13, 0xAu);
    }
    sub_15F7200(v47);
    return;
  }
  v24 = (__int64 *)*v18;
  while ( 1 )
  {
    v21 = *v24;
    if ( *(_WORD *)(*v24 + 36) == 193 )
      break;
    if ( v22 == ++v24 )
      return;
  }
  if ( v22 != v24 )
    goto LABEL_20;
}
