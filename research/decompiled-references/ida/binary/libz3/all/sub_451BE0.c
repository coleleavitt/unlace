__int64 __fastcall sub_451BE0(_QWORD *a1, __int64 a2, int a3, _QWORD *a4, int a5)
{
  char **exception; // r12
  int v10; // edi
  __int64 *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // r12
  __int64 v23; // rcx
  int v24; // eax
  _QWORD *v25; // rcx
  bool v26; // zf
  __int64 v27; // r14
  int v28; // eax
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rbp
  _QWORD *v34; // rdx
  unsigned int v35; // eax
  unsigned int v36; // ecx
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rcx
  _QWORD *v41; // rax
  int v42; // [rsp+0h] [rbp-A8h]
  __int64 v43; // [rsp+8h] [rbp-A0h]
  __int64 *v44; // [rsp+10h] [rbp-98h]
  __int64 v45; // [rsp+18h] [rbp-90h]
  __int64 v46; // [rsp+20h] [rbp-88h]
  __int64 v47; // [rsp+28h] [rbp-80h]
  __int64 v48; // [rsp+30h] [rbp-78h]
  unsigned int v49; // [rsp+38h] [rbp-70h]
  unsigned __int8 v50; // [rsp+3Fh] [rbp-69h]
  int v51; // [rsp+40h] [rbp-68h]
  void *v52; // [rsp+48h] [rbp-60h]
  __int64 v53; // [rsp+50h] [rbp-58h] BYREF

  LODWORD(v43) = a5;
  v50 = sub_13608A0(*a4 + 128LL);
  v48 = *a4 + 128LL;
  sub_1360B80(v48, 1);
  v10 = *(_DWORD *)(a2 + 12);
  v11 = *(__int64 **)(*a1 + 264LL);
  v12 = *(unsigned int *)(*a1 + 272LL);
  v13 = v12 - 1;
  v12 *= 16;
  v14 = (__int64 *)((char *)v11 + v12);
  v15 = 16LL * (v10 & v13);
  v16 = &v11[(unsigned __int64)v15 / 8];
  if ( v15 == v12 )
  {
LABEL_9:
    while ( v16 != v11 )
    {
      v19 = *v11;
      if ( (unsigned __int64)*v11 > 1 )
      {
        if ( *(_DWORD *)(v19 + 12) == v10 && a2 == v19 )
        {
          v17 = v11;
          goto LABEL_18;
        }
      }
      else if ( !v19 )
      {
        break;
      }
      v11 += 2;
    }
LABEL_41:
    BUG();
  }
  v17 = &v11[(unsigned __int64)v15 / 8];
  while ( 1 )
  {
    while ( 1 )
    {
      v18 = *v17;
      if ( (unsigned __int64)*v17 > 1 )
        break;
      if ( !v18 )
        goto LABEL_41;
      v17 += 2;
      if ( v14 == v17 )
        goto LABEL_9;
    }
    if ( *(_DWORD *)(v18 + 12) == v10 && a2 == v18 )
      break;
    v17 += 2;
    if ( v14 == v17 )
      goto LABEL_9;
  }
LABEL_18:
  v47 = v17[1];
  v20 = *(_QWORD *)(v47 + 48);
  if ( v20 )
  {
    v21 = *(_DWORD *)(v20 - 4);
    if ( v21 )
    {
      v22 = 0;
      HIDWORD(v46) = a3 + 1;
      LODWORD(v45) = 8 * v21;
      v44 = &v53;
      while ( 1 )
      {
        v27 = a1[1];
        v28 = sub_439010(a1[2] + 8LL, *(__m128 **)(v20 + v22), 1, HIDWORD(v46));
        v31 = sub_15DC610(v27, v28, 0, 0, v29, v30, v42, v43, (int)v44, v45, v46, v47, v48, v49, v51, v52);
        v32 = v31;
        if ( v31 )
          ++*(_DWORD *)(v31 + 8);
        sub_1374250(v44, *a4, v31);
        v33 = v53;
        if ( v53 )
          ++*(_DWORD *)(v53 + 8);
        v34 = *(_QWORD **)(v43 + 8);
        if ( v34 )
        {
          v35 = *((_DWORD *)v34 - 1);
          if ( v35 == *((_DWORD *)v34 - 2) )
          {
            v36 = (3 * v35 + 1) >> 1;
            v37 = 8 * v36 + 8;
            if ( 8 * v35 + 8 >= (unsigned int)v37 || v35 >= v36 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v44, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v44);
              sub_233E40((__int64)v44);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v49 = (3 * v35 + 1) >> 1;
            v38 = (unsigned int *)sub_186B300(v34 - 1, v37);
            v34 = v38 + 2;
            *v38 = v49;
            v39 = v38[1];
            *(_QWORD *)(v43 + 8) = v38 + 2;
            LODWORD(v38) = v39;
            v25 = &v34[v39];
            v24 = (_DWORD)v38 + 1;
          }
          else
          {
            v23 = v35;
            v24 = v35 + 1;
            v25 = &v34[v23];
          }
        }
        else
        {
          v41 = (_QWORD *)sub_186B270(0x18u);
          v34 = v41 + 1;
          *v41 = 2;
          v25 = v41 + 1;
          *(_QWORD *)(v43 + 8) = v41 + 1;
          v24 = 1;
        }
        *v25 = v33;
        *((_DWORD *)v34 - 1) = v24;
        if ( v33 )
        {
          v26 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v26 )
            sub_15D7BC0(v27, v33);
        }
        if ( v32 && (v26 = *(_DWORD *)(v32 + 8) == 1, --*(_DWORD *)(v32 + 8), v26) )
        {
          v22 += 8;
          sub_15D7BC0(v27, v32);
          if ( v45 == v22 )
            return sub_1360B80(v48, v50);
        }
        else
        {
          v22 += 8;
          if ( v45 == v22 )
            return sub_1360B80(v48, v50);
        }
        v20 = *(_QWORD *)(v47 + 48);
      }
    }
  }
  return sub_1360B80(v48, v50);
}

