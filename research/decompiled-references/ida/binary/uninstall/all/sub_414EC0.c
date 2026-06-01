__int64 __fastcall sub_414EC0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _BOOL8 v5; // r12
  __int64 v8; // rax
  __int64 v10; // rdi
  const char *v11; // rbp
  __int64 v12; // rax
  char *v13; // rbx
  _BYTE *v14; // rdi
  __int64 i; // rax
  __int64 v16; // rdx
  __int64 *v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rbx
  void *v20; // rbp
  int v21; // eax
  char *v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  void *v26; // rbp
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 k; // rax
  void *v30; // rbp
  __int64 v31; // rbx
  __int64 v32; // rbx
  int m; // r13d
  __int64 v34; // r12
  int v35; // eax
  __int64 n; // rax
  int v37; // eax
  bool v38; // zf
  void *v39; // rbp
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 *v42; // rdi
  __int64 ii; // rax
  int v44; // eax
  void *v45; // rbp
  __int64 v46; // rbx
  __int64 j; // rax
  void *v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 *v51; // rdi
  __int64 *v52; // rbp
  __int64 v53; // rbx
  int v54; // r13d
  __int64 v55; // rax
  __int64 v56; // rbp
  __int64 v57; // rbx
  int v58; // eax
  void *v59; // rbp
  _BOOL4 v60; // [rsp+24h] [rbp-F4h]
  __int64 v61; // [rsp+28h] [rbp-F0h]
  __int64 v62; // [rsp+30h] [rbp-E8h]
  int v63; // [rsp+3Ch] [rbp-DCh] BYREF
  __int64 v64; // [rsp+40h] [rbp-D8h] BYREF
  char v65; // [rsp+48h] [rbp-D0h] BYREF
  char v66[8]; // [rsp+50h] [rbp-C8h] BYREF
  char *s1; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v68[64]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 (__fastcall *v69)(_BYTE *, __int64); // [rsp+A0h] [rbp-78h]
  void (__fastcall *v70)(_BYTE *, __int64, int *); // [rsp+A8h] [rbp-70h]
  _BYTE v71[88]; // [rsp+C0h] [rbp-58h] BYREF

  LODWORD(v5) = 0;
  v62 = sub_473430(a2);
  v8 = sub_473420(a2);
  if ( a3 == 1 )
  {
    s1 = nullptr;
    v64 = v8;
    if ( v8 )
      goto LABEL_8;
    return 0;
  }
  if ( a3 != 2 )
  {
    sub_458930(a2, 1, a4, "?pattern?");
    return 1;
  }
  v10 = *(_QWORD *)(a4 + 8);
  v11 = *(const char **)(v10 + 8);
  if ( !v11 )
    v11 = (const char *)sub_47B3B0(v10);
  sub_473C40(a2, (_DWORD)v11, 0, 0, (unsigned int)&v64, (unsigned int)&v65, (__int64)v66, (__int64)&s1);
  if ( !v64 )
    return 0;
  v5 = strcmp(s1, v11) != 0;
LABEL_8:
  v12 = sub_46EEB0(0, 0);
  v13 = s1;
  v61 = v12;
  if ( !s1 || strpbrk(s1, "*[?\\") )
  {
    if ( *(_DWORD *)(v64 + 416) == 0 || v5 )
    {
      v14 = (_BYTE *)(v64 + 160);
      for ( i = sub_457E20(v64 + 160, v71); ; i = sub_457DE0(v71) )
      {
        v19 = i;
        if ( !i )
          break;
        v20 = (void *)(i + 32);
        v21 = *(_DWORD *)(v64 + 220);
        LOBYTE(v16) = v21 == 1;
        if ( v21 == 1 || v21 == -1 )
          v20 = *(void **)(v19 + 32);
        v22 = s1;
        if ( !s1 || (v14 = v20, (unsigned int)sub_49EAC0(v20, s1)) )
        {
          if ( v5 )
          {
            v17 = *(__int64 **)(v19 + 24);
            v18 = sub_47B0B0(v14, v22, v16);
            sub_4072E0(a2, v17, v18);
          }
          else
          {
            v18 = sub_48DF10(v20, 0xFFFFFFFF);
          }
          sub_46FBF0(a2, v61, v18);
        }
        v14 = v71;
      }
      if ( !v5 && v64 != v62 )
      {
        for ( j = sub_457E20(v62 + 160, v71); j; j = sub_457DE0(v71) )
        {
          v48 = (void *)(j + 32);
          if ( *(_DWORD *)(v62 + 220) == 1 || *(_DWORD *)(v62 + 220) == -1 )
            v48 = *(void **)(j + 32);
          if ( (!s1 || (unsigned int)sub_49EAC0(v48, s1))
            && !(*(__int64 (__fastcall **)(__int64, void *))(v64 + 224))(v64 + 160, v48) )
          {
            v49 = sub_48DF10(v48, 0xFFFFFFFF);
            sub_46FBF0(a2, v61, v49);
          }
        }
      }
    }
    else
    {
      v60 = v64 == v62;
      sub_47CFA0(v68);
      for ( k = sub_457E20(v64 + 160, v71); k; k = sub_457DE0(v71) )
      {
        v30 = (void *)(k + 32);
        if ( *(_DWORD *)(v64 + 220) == 1 || *(_DWORD *)(v64 + 220) == -1 )
          v30 = *(void **)(k + 32);
        if ( !s1 || (unsigned int)sub_49EAC0(v30, s1) )
        {
          v31 = sub_48DF10(v30, 0xFFFFFFFF);
          sub_46FBF0(a2, v61, v31);
          v70(v68, v31, &v63);
        }
      }
      v32 = v64;
      for ( m = 0; *(_DWORD *)(v32 + 416) > m; ++m )
      {
        v34 = *(_QWORD *)(32LL * m + *(_QWORD *)(v32 + 424));
        if ( v34 )
        {
          v35 = 1;
          if ( v34 != v62 )
            v35 = v60;
          v60 = v35;
          for ( n = sub_457E20(v34 + 160, v71); n; n = sub_457DE0(v71) )
          {
            v39 = (void *)(n + 32);
            if ( *(_DWORD *)(v34 + 220) == 1 || *(_DWORD *)(v34 + 220) == -1 )
              v39 = *(void **)(n + 32);
            if ( !s1 || (unsigned int)sub_49EAC0(v39, s1) )
            {
              v40 = sub_48DF10(v39, 0xFFFFFFFF);
              v70(v68, v40, &v63);
              if ( v63 )
              {
                sub_46FBF0(a2, v61, v40);
              }
              else
              {
                v37 = *(_DWORD *)v40 - 1;
                v38 = *(_DWORD *)v40 == 1;
                *(_DWORD *)v40 = v37;
                if ( v37 < 0 || v38 )
                {
                  v41 = *(_QWORD *)(v40 + 24);
                  if ( v41 && *(_QWORD *)(v41 + 8) )
                  {
                    sub_47B120(v40);
                  }
                  else
                  {
                    v42 = *(__int64 **)(v40 + 8);
                    if ( v42 && v42 != off_656088 )
                      Tcl_Free((__int64)v42);
                    *(_DWORD *)(v40 + 16) = -1;
                    sub_496830(v40);
                  }
                }
              }
            }
          }
          v32 = v64;
        }
      }
      if ( !v60 )
      {
        for ( ii = sub_457E20(v62 + 160, v71); ii; ii = sub_457DE0(v71) )
        {
          v45 = (void *)(ii + 32);
          if ( *(_DWORD *)(v62 + 220) == 1 || *(_DWORD *)(v62 + 220) == -1 )
            v45 = *(void **)(ii + 32);
          if ( !s1 || (unsigned int)sub_49EAC0(v45, s1) )
          {
            v46 = sub_48DF10(v45, 0xFFFFFFFF);
            if ( v69(v68, v46) )
            {
              v44 = *(_DWORD *)v46 - 1;
              v38 = *(_DWORD *)v46 == 1;
              *(_DWORD *)v46 = v44;
              if ( v44 < 0 || v38 )
              {
                v50 = *(_QWORD *)(v46 + 24);
                if ( v50 && *(_QWORD *)(v50 + 8) )
                {
                  sub_47B120(v46);
                }
                else
                {
                  v51 = *(__int64 **)(v46 + 8);
                  if ( v51 && v51 != off_656088 )
                    Tcl_Free((__int64)v51);
                  *(_DWORD *)(v46 + 16) = -1;
                  sub_496830(v46);
                }
              }
            }
            else
            {
              sub_46FBF0(a2, v61, v46);
            }
          }
        }
      }
      sub_457CE0(v68);
    }
  }
  else
  {
    v23 = v64 + 160;
    v24 = (*(__int64 (__fastcall **)(__int64, char *))(v64 + 224))(v64 + 160, v13);
    if ( v24 )
    {
      if ( v5 )
      {
        v52 = *(__int64 **)(v24 + 24);
        v27 = sub_47B0B0(v23, v13, v25);
        sub_4072E0(a2, v52, v27);
      }
      else
      {
        v26 = (void *)(v24 + 32);
        if ( *(_DWORD *)(v64 + 220) == 1 || *(_DWORD *)(v64 + 220) == -1 )
          v26 = *(void **)(v24 + 32);
        v27 = sub_48DF10(v26, 0xFFFFFFFF);
      }
      v28 = v27;
    }
    else
    {
      v53 = v64;
      if ( v5 || v64 == v62 )
        goto LABEL_33;
      v54 = 0;
      if ( *(int *)(v64 + 416) > 0 )
      {
        do
        {
          v55 = *(_QWORD *)(32LL * v54 + *(_QWORD *)(v53 + 424));
          if ( v55 )
          {
            v56 = v55 + 160;
            v57 = (*(__int64 (__fastcall **)(__int64, char *))(v55 + 224))(v55 + 160, s1);
            if ( v57 )
              goto LABEL_101;
            v53 = v64;
          }
          ++v54;
        }
        while ( *(_DWORD *)(v53 + 416) > v54 );
      }
      v56 = v62 + 160;
      v57 = (*(__int64 (__fastcall **)(__int64, char *))(v62 + 224))(v62 + 160, s1);
      if ( !v57 )
        goto LABEL_33;
LABEL_101:
      v58 = *(_DWORD *)(v56 + 60);
      v59 = (void *)(v57 + 32);
      if ( v58 == 1 || v58 == -1 )
        v59 = *(void **)(v57 + 32);
      v28 = sub_48DF10(v59, 0xFFFFFFFF);
    }
    sub_46FBF0(a2, v61, v28);
  }
LABEL_33:
  sub_48AFD0(a2, v61);
  return 0;
}

