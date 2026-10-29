_QWORD *__fastcall sub_13F8360(__int64 a1)
{
  const void ***v1; // r15
  const void **v2; // r10
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  _QWORD *v7; // rax
  _BYTE *v8; // r14
  char *v9; // rax
  const void **v10; // rbp
  char *v11; // rbx
  char *v12; // r14
  const void *v13; // rax
  const char *v14; // rdx
  const void **v15; // rax
  const void *v16; // r14
  const void **v17; // rdi
  const void **v18; // rax
  _QWORD *result; // rax
  __int64 *v20; // rax
  const void **v21; // r8
  unsigned __int64 v22; // rax
  char *v23; // rdi
  const void **v24; // r8
  unsigned __int64 v25; // rax
  char *v26; // rdi
  const void **v27; // rdi
  const void **v28; // rax
  const void **v29; // rax
  const void **v30; // rdi
  void *v31; // rdx
  __int64 v32; // rax
  int v33; // eax
  const void **v34; // [rsp+0h] [rbp-148h]
  const void **v35; // [rsp+0h] [rbp-148h]
  const void **v36; // [rsp+0h] [rbp-148h]
  const void **v37; // [rsp+0h] [rbp-148h]
  const void **v38; // [rsp+0h] [rbp-148h]
  const void **v39; // [rsp+0h] [rbp-148h]
  __int64 v40; // [rsp+8h] [rbp-140h]
  const char *v41; // [rsp+20h] [rbp-128h] BYREF
  __int16 v42; // [rsp+40h] [rbp-108h]
  const char *v43; // [rsp+50h] [rbp-F8h] BYREF
  const void *v44; // [rsp+58h] [rbp-F0h]
  const char *v45; // [rsp+60h] [rbp-E8h]
  __int16 v46; // [rsp+70h] [rbp-D8h]
  _QWORD v47[4]; // [rsp+80h] [rbp-C8h] BYREF
  __int16 v48; // [rsp+A0h] [rbp-A8h]
  _QWORD v49[4]; // [rsp+B0h] [rbp-98h] BYREF
  __int16 v50; // [rsp+D0h] [rbp-78h]
  void *ptr; // [rsp+E0h] [rbp-68h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-60h]
  _BYTE v53[16]; // [rsp+F0h] [rbp-58h] BYREF
  __int16 v54; // [rsp+100h] [rbp-48h]

  v1 = (const void ***)a1;
  v2 = *(const void ***)(a1 + 16);
  v40 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v3 = **(__int64 ***)(a1 + 8);
  ptr = v53;
  v52 = 0x200000000LL;
  v4 = 0;
  if ( v3 )
  {
    do
    {
      while ( (v3[113] & 0x10) == 0 )
      {
        v3 = (__int64 *)v3[5];
        if ( !v3 )
          goto LABEL_8;
      }
      v5 = v3[1];
      v6 = *v3;
      if ( v4 + 1 > (unsigned __int64)HIDWORD(v52) )
      {
        v36 = v2;
        sub_2237220(&ptr, v53, v4 + 1, 16);
        v4 = (unsigned int)v52;
        v2 = v36;
      }
      v7 = (char *)ptr + 16 * v4;
      *v7 = v6;
      v7[1] = v5;
      v4 = (unsigned int)(v52 + 1);
      LODWORD(v52) = v52 + 1;
      v3 = (__int64 *)v3[5];
    }
    while ( v3 );
LABEL_8:
    v8 = ptr;
    if ( (_DWORD)v4 )
    {
      v9 = (char *)ptr + 16 * v4 - 16;
      if ( v9 != ptr )
      {
        v10 = v2;
        v11 = (char *)ptr;
        v12 = v9;
        do
        {
          v13 = *((const void **)v12 - 1);
          v14 = *((const char **)v12 - 2);
          v46 = 773;
          v44 = v13;
          v12 -= 16;
          v48 = 257;
          v43 = v14;
          v45 = ".framework";
          v42 = 259;
          v50 = 257;
          v41 = "Frameworks";
          sub_228A3B0(v10, &v41, &v43, v47, v49);
        }
        while ( v12 != v11 );
        v8 = ptr;
        v1 = (const void ***)a1;
      }
      if ( v8 != v53 )
        free(v8);
      v2 = v1[2];
    }
    else
    {
      if ( ptr != v53 )
        free(ptr);
      v2 = *(const void ***)(a1 + 16);
    }
  }
  v15 = v1[3];
  v16 = v2[1];
  v54 = 257;
  v47[0] = v15 + 1;
  v43 = "Headers";
  v50 = 257;
  v48 = 260;
  v46 = 259;
  sub_228A3B0(v2, &v43, v47, v49, &ptr);
  v17 = *v1;
  v54 = 257;
  v50 = 257;
  v48 = 257;
  v18 = v1[2];
  v46 = 261;
  v43 = (const char *)*v18;
  v44 = v18[1];
  sub_228A3B0(v17, &v43, v47, v49, &ptr);
  result = sub_13F8240((__int64)*v1[4], (__int64 *)v1[4] + 1, **v1, (size_t)(*v1)[1]);
  if ( !result )
  {
    v20 = (__int64 *)v1[1];
    v21 = v1[2];
    if ( (*(_BYTE *)(*v20 + 904) & 0x10) == 0 || (v37 = v1[2], v33 = sub_9B4AA0(*v20, "Private"), v21 = v37, v33) )
    {
      v22 = (unsigned __int64)v21[1];
      if ( v22 != (unsigned int)v16 )
      {
        if ( v22 <= (unsigned int)v16 )
        {
          if ( (unsigned int)v16 > (unsigned __int64)v21[2] )
          {
            v39 = v21;
            sub_2236E10(v21, v21 + 3, (unsigned int)v16, 1);
            v21 = v39;
            v22 = (unsigned __int64)v39[1];
          }
          v23 = (char *)*v21 + v22;
          if ( v23 != (char *)*v21 + (unsigned int)v16 )
          {
            v34 = v21;
            memset(v23, 0, (unsigned int)v16 - v22);
            v21 = v34;
          }
        }
        v21[1] = (const void *)(unsigned int)v16;
      }
    }
    else
    {
      v37[1] = nullptr;
    }
    v24 = *v1;
    v25 = (unsigned __int64)(*v1)[1];
    if ( v25 != (unsigned int)v40 )
    {
      if ( v25 <= (unsigned int)v40 )
      {
        if ( (unsigned int)v40 > (unsigned __int64)v24[2] )
        {
          v38 = *v1;
          sub_2236E10(*v1, v24 + 3, (unsigned int)v40, 1);
          v24 = v38;
          v25 = (unsigned __int64)v38[1];
        }
        v26 = (char *)*v24 + v25;
        if ( v26 != (char *)*v24 + (unsigned int)v40 )
        {
          v35 = v24;
          memset(v26, 0, (unsigned int)v40 - v25);
          v24 = v35;
        }
      }
      v24[1] = (const void *)(unsigned int)v40;
    }
    v27 = v1[2];
    v46 = 257;
    v28 = v1[3];
    v48 = 257;
    v50 = 260;
    v49[0] = v28 + 1;
    v54 = 259;
    ptr = "PrivateHeaders";
    sub_228A3B0(v27, &ptr, v49, v47, &v43);
    v29 = v1[2];
    v46 = 257;
    v30 = *v1;
    v31 = (void *)*v29;
    v48 = 257;
    v50 = 257;
    ptr = v31;
    v32 = (__int64)v29[1];
    v54 = 261;
    v52 = v32;
    sub_228A3B0(v30, &ptr, v49, v47, &v43);
    return sub_13F8240((__int64)*v1[4], (__int64 *)v1[4] + 1, **v1, (size_t)(*v1)[1]);
  }
  return result;
}
