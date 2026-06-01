__int64 __fastcall sub_409970(__int64 *a1, __int64 a2, __int64 a3, __int64 *a4, int a5, int a6)
{
  char **exception; // r12
  unsigned int v9; // r10d
  __int64 result; // rax
  __int64 i; // rbp
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // eax
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r8
  unsigned int v20; // eax
  _QWORD *v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // r12d
  unsigned int v24; // edx
  size_t v25; // rsi
  unsigned int v26; // r13d
  unsigned int *v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 *v31; // rdx
  _DWORD *v32; // rax
  __int64 v33; // rax
  int v34; // eax
  int v35; // r8d
  int v36; // r9d
  _QWORD *v37; // rax
  unsigned __int64 v38; // rdx
  __int64 *v39; // r13
  __int64 v40; // rsi
  __int64 v41; // rdi
  int v43; // [rsp+0h] [rbp-A8h]
  int v44[2]; // [rsp+8h] [rbp-A0h]
  int v45[2]; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v46; // [rsp+10h] [rbp-98h]
  int v47[2]; // [rsp+18h] [rbp-90h]
  int v48[2]; // [rsp+20h] [rbp-88h]
  char v49[8]; // [rsp+28h] [rbp-80h]
  int v50; // [rsp+30h] [rbp-78h]
  unsigned int v51; // [rsp+34h] [rbp-74h]
  int v52[2]; // [rsp+38h] [rbp-70h]
  int v53; // [rsp+40h] [rbp-68h]
  void *v54; // [rsp+48h] [rbp-60h] BYREF
  __int64 v55[11]; // [rsp+50h] [rbp-58h] BYREF

  v49[0] = a3;
  v52[0] = a5;
  v50 = a6;
  *(_QWORD *)v47 = sub_3FCD00(*(_QWORD **)a2, *(_DWORD *)(a2 + 8), *(_QWORD *)(a3 + 16))[1];
  result = 8LL * v9;
  v48[0] = 8 * v9;
  if ( v9 )
  {
    for ( i = 0; *(_QWORD *)v48 != i; i += 8 )
    {
      v12 = *a1;
      *(_QWORD *)v44 = a1[1];
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47 + 48LL) + i);
      if ( v50 == -1 )
      {
        v34 = sub_439010(v12 + 8, v13, 1, 0);
        v17 = sub_15DC610(v44[0], v34, 0, 0, v35, v36, v43, v44[0], v46, v47[0], v48[0], v49[0], -1, v52[0], v53, v54);
      }
      else
      {
        v14 = sub_439010(v12 + 8, v13, 1, (unsigned int)(v50 + 1));
        v17 = sub_15DC610(v44[0], v14, 0, 0, v15, v16, v43, v44[0], v46, v47[0], v48[0], v49[0], v50, v52[0], v53, v54);
      }
      v18 = v17;
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      v19 = *(_QWORD *)(*(_QWORD *)v49 + i + 32);
      if ( *(_WORD *)(v19 + 4) != 1 )
      {
        v33 = sub_15E1B70(a1[1]);
        v55[0] = v33;
        if ( v33 )
          ++*(_DWORD *)(v33 + 8);
        result = (__int64)sub_407600((unsigned int **)(*(_QWORD *)v52 + 8LL), v55);
LABEL_23:
        if ( v18 )
        {
          result = (unsigned int)(*(_DWORD *)(v18 + 8) - 1);
          goto LABEL_25;
        }
        continue;
      }
      v20 = *(_DWORD *)(v19 + 16);
      v21 = (_QWORD *)a4[1];
      v51 = v20;
      if ( v21 )
      {
        v22 = *((_DWORD *)v21 - 1);
        LODWORD(v46) = v22;
        if ( v20 < v22 )
          goto LABEL_19;
        v23 = v20 + 1;
        if ( v20 + 1 >= v22 )
        {
          if ( v22 >= v23 )
            goto LABEL_46;
          goto LABEL_16;
        }
        v38 = (unsigned __int64)&v21[v22];
        v39 = &v21[v23];
        if ( (unsigned __int64)v39 >= v38 )
          goto LABEL_46;
        do
        {
          while ( 1 )
          {
            v40 = *v39;
            if ( *v39 )
            {
              v41 = *a4;
              if ( (*(_DWORD *)(v40 + 8))-- == 1 )
                break;
            }
            if ( (unsigned __int64)++v39 >= v38 )
              goto LABEL_44;
          }
          v46 = v38;
          sub_15D7BC0(v41, v40);
          v38 = v46;
          ++v39;
        }
        while ( (unsigned __int64)v39 < v46 );
LABEL_44:
        v21 = (_QWORD *)a4[1];
        if ( v21 )
        {
          LODWORD(v46) = *((_DWORD *)v21 - 1);
          if ( (unsigned int)v46 >= v23 )
          {
LABEL_46:
            *((_DWORD *)v21 - 1) = v23;
            goto LABEL_19;
          }
          goto LABEL_16;
        }
      }
      else
      {
        v23 = v20 + 1;
      }
      if ( !v23 )
      {
        v21 = nullptr;
        goto LABEL_19;
      }
      v37 = (_QWORD *)sub_186B270(0x18u);
      LODWORD(v46) = 0;
      *v37 = 2;
      v21 = v37 + 1;
      a4[1] = (__int64)(v37 + 1);
LABEL_16:
      while ( 1 )
      {
        v28 = *((_DWORD *)v21 - 2);
        if ( v28 >= v23 )
          break;
        v24 = (3 * v28 + 1) >> 1;
        v25 = 8 * v24 + 8;
        v26 = v24;
        if ( 8 * v28 + 8 >= (unsigned int)v25 || v28 >= v24 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_3FCFD0(v55, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v55);
          sub_233E40((__int64)v55);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v27 = (unsigned int *)sub_186B300(v21 - 1, v25);
        v21 = v27 + 2;
        *v27 = v26;
        a4[1] = (__int64)(v27 + 2);
      }
      *((_DWORD *)v21 - 1) = v23;
      v29 = 8LL * v23;
      v30 = 8LL * (unsigned int)v46;
      if ( v30 != v29 )
      {
        v46 = (unsigned __int64)v21;
        memset(&v21[(unsigned __int64)v30 / 8], 0, v29 - v30);
        v21 = (_QWORD *)v46;
      }
LABEL_19:
      result = v51;
      v31 = &v21[v51];
      if ( *v31 )
      {
        v32 = (_DWORD *)sub_15E1B70(a1[1]);
        v54 = v32;
        if ( v32 )
          ++v32[2];
        result = (__int64)sub_407600((unsigned int **)(*(_QWORD *)v52 + 8LL), &v54);
        goto LABEL_23;
      }
      if ( v18 )
      {
        result = *(unsigned int *)(v18 + 8);
        *v31 = v18;
LABEL_25:
        *(_DWORD *)(v18 + 8) = result;
        if ( !(_DWORD)result )
          result = sub_15D7BC0(*(_QWORD *)v45, v18);
      }
    }
  }
  return result;
}

