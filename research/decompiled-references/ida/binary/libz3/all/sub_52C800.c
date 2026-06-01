__int64 __fastcall sub_52C800(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rbp
  __int64 result; // rax
  __int64 v6; // rax
  int v7; // edi
  __int64 *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  char *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 *v21; // rbp
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 *v24; // rax
  __int64 v25; // r15
  __int64 v26; // rax
  int v27; // edi
  _QWORD *v28; // rbp
  __int64 v29; // r8
  unsigned int v30; // r9d
  __int64 v31; // r14
  int v32; // ecx
  __int64 v33; // rax
  _QWORD *v34; // r9
  _QWORD *v35; // rax
  _QWORD *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // r12d
  unsigned int v40; // ecx
  unsigned int *v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  int v44; // r10d
  _QWORD *v45; // rcx
  _QWORD *v46; // r11
  __int64 v47; // rax
  _QWORD *v48; // rdx
  _QWORD *v49; // rax
  _QWORD *v50; // rdx
  char **exception; // rbx
  __int64 n; // [rsp+0h] [rbp-88h]
  unsigned int na; // [rsp+0h] [rbp-88h]
  int v54; // [rsp+8h] [rbp-80h]
  __int64 v55; // [rsp+8h] [rbp-80h]
  int v56; // [rsp+18h] [rbp-70h]
  __int64 v57[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = a1 + 10;
  result = sub_15D37A0(a1 + 10, a2);
  if ( !(_BYTE)result )
  {
    v6 = a1[1];
    v7 = *(_DWORD *)(a2 + 12);
    v8 = *(__int64 **)v6;
    v9 = *(unsigned int *)(v6 + 8);
    v10 = v9 - 1;
    v9 *= 8;
    v11 = (char *)v8 + v9;
    v12 = 8LL * (v7 & v10);
    v13 = &v8[(unsigned __int64)v12 / 8];
    if ( v12 != v9 )
    {
      for ( result = (__int64)&v8[(unsigned __int64)v12 / 8]; v11 != (char *)result; result += 8 )
      {
        v14 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v14 + 12) == v7 && v14 == a2 )
            return result;
        }
        else if ( !v14 )
        {
          goto LABEL_9;
        }
      }
    }
    for ( ; v13 != v8; ++v8 )
    {
      result = *v8;
      if ( (unsigned __int64)*v8 > 1 )
      {
        if ( *(_DWORD *)(result + 12) == v7 && result == a2 )
          return result;
      }
      else if ( !result )
      {
        break;
      }
    }
LABEL_9:
    v15 = (_QWORD *)a1[2];
    if ( v15 )
    {
      v16 = *((_DWORD *)v15 - 1);
      if ( v16 == *((_DWORD *)v15 - 2) )
      {
        v39 = (3 * v16 + 1) >> 1;
        v40 = 8 * v39 + 8;
        if ( 8 * v16 + 8 >= v40 || v16 >= v39 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v57, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v57);
          sub_233E40((__int64)v57);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = (unsigned int *)sub_186B300(v15 - 1, v40);
        v42 = v41[1];
        v15 = v41 + 2;
        *v41 = v39;
        a1[2] = v41 + 2;
        LODWORD(v41) = v42;
        v19 = &v15[v42];
        v18 = (_DWORD)v41 + 1;
      }
      else
      {
        v17 = v16;
        v18 = v16 + 1;
        v19 = &v15[v17];
      }
    }
    else
    {
      v50 = (_QWORD *)sub_186B270(0x18u);
      *v50 = 2;
      v18 = 1;
      v15 = v50 + 1;
      a1[2] = v15;
      v19 = v15;
    }
    *v19 = a2;
    *((_DWORD *)v15 - 1) = v18;
    sub_15D0A90(a1 + 3, a2, 1);
    sub_15D0A90(v3, a2, 1);
    v20 = sub_63A810(*a1, a2);
    v21 = *(__int64 **)v20;
    v22 = *(_QWORD *)v20 + 8LL * *(unsigned int *)(v20 + 8);
    if ( *(_QWORD *)v20 != v22 )
    {
      while ( (unsigned __int64)*v21 <= 1 )
      {
        if ( (__int64 *)v22 == ++v21 )
          goto LABEL_24;
      }
      if ( (__int64 *)v22 != v21 )
      {
        v23 = *v21;
        while ( !(unsigned __int8)sub_15D37A0(a1 + 3, v23) )
        {
          sub_52C800(a1, v23);
          v24 = v21 + 1;
          if ( (__int64 *)v22 != v21 + 1 )
          {
            while ( 1 )
            {
              v23 = *v24;
              v21 = v24;
              if ( (unsigned __int64)*v24 > 1 )
                break;
              if ( (__int64 *)v22 == ++v24 )
                goto LABEL_24;
            }
            if ( (__int64 *)v22 != v24 )
              continue;
          }
          goto LABEL_24;
        }
        v25 = a1[1];
        v26 = *(unsigned int *)(v25 + 8);
        v27 = *(_DWORD *)(v25 + 16);
        if ( 3 * (int)v26 < (unsigned int)(4 * (v27 + *(_DWORD *)(v25 + 12))) )
        {
          v54 = 2 * v26;
          n = 8LL * (unsigned int)(2 * v26);
          v43 = (_QWORD *)sub_186B270(n);
          v44 = v54;
          v29 = n;
          v28 = v43;
          if ( v54 )
          {
            memset(v43, 0, n);
            v29 = n;
            v44 = v54;
          }
          v45 = *(_QWORD **)v25;
          v30 = v44 - 1;
          v31 = (__int64)v28 + v29;
          v46 = (_QWORD *)(*(_QWORD *)v25 + 8LL * *(unsigned int *)(v25 + 8));
          if ( *(_QWORD **)v25 != v46 )
          {
            do
            {
              if ( *v45 > 1u )
              {
                v47 = 8LL * (*(_DWORD *)(*v45 + 12LL) & v30);
                v48 = &v28[(unsigned __int64)v47 / 8];
                if ( v29 == v47 )
                {
LABEL_66:
                  if ( v28 == v48 )
                  {
LABEL_78:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v49 = v28;
                  while ( *v49 )
                  {
                    if ( v48 == ++v49 )
                      goto LABEL_78;
                  }
                }
                else
                {
                  v49 = &v28[(unsigned __int64)v47 / 8];
                  while ( *v49 )
                  {
                    if ( (_QWORD *)v31 == ++v49 )
                      goto LABEL_66;
                  }
                }
                *v49 = *v45;
              }
              ++v45;
            }
            while ( v46 != v45 );
            v46 = *(_QWORD **)v25;
          }
          if ( v46 )
          {
            v56 = v44;
            v55 = v29;
            na = v44 - 1;
            sub_186B220(v46);
            v44 = v56;
            v29 = v55;
            v30 = na;
          }
          *(_QWORD *)v25 = v28;
          v27 = 0;
          *(_DWORD *)(v25 + 8) = v44;
          *(_DWORD *)(v25 + 16) = 0;
        }
        else
        {
          v28 = *(_QWORD **)v25;
          v29 = 8 * v26;
          v30 = v26 - 1;
          v31 = *(_QWORD *)v25 + 8 * v26;
        }
        v32 = *(_DWORD *)(a2 + 12);
        v33 = 8LL * (v32 & v30);
        v34 = &v28[(unsigned __int64)v33 / 8];
        if ( v33 != v29 )
        {
          v35 = &v28[(unsigned __int64)v33 / 8];
          v36 = nullptr;
          while ( 1 )
          {
            v37 = *v35;
            if ( *v35 > 1u )
            {
              if ( *(_DWORD *)(v37 + 12) == v32 && v37 == a2 )
              {
                *v35 = a2;
                goto LABEL_24;
              }
            }
            else
            {
              if ( !v37 )
              {
                if ( v36 )
                  goto LABEL_76;
                v36 = v35;
                goto LABEL_77;
              }
              v36 = v35;
            }
            if ( ++v35 == (_QWORD *)v31 )
              goto LABEL_47;
          }
        }
        v36 = nullptr;
        while ( 1 )
        {
LABEL_47:
          if ( v34 == v28 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v38 = *v28;
          if ( *v28 > 1u )
          {
            if ( *(_DWORD *)(v38 + 12) == v32 && v38 == a2 )
            {
              *v28 = a2;
              break;
            }
          }
          else
          {
            if ( !v38 )
            {
              if ( v36 )
LABEL_76:
                *(_DWORD *)(v25 + 16) = v27 - 1;
              else
                v36 = v28;
LABEL_77:
              *v36 = a2;
              ++*(_DWORD *)(v25 + 12);
              break;
            }
            v36 = v28;
          }
          ++v28;
        }
      }
    }
LABEL_24:
    --*(_DWORD *)(a1[2] - 4LL);
    return sub_15D0A90(a1 + 3, a2, 0);
  }
  return result;
}

