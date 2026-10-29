__int64 __fastcall sub_368070(__int64 a1)
{
  char *v1; // rax
  __int64 *v2; // rbx
  char *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // r15
  int v8; // r14d
  __int64 v9; // r12
  __int64 v10; // r13
  unsigned int v11; // r10d
  int v12; // eax
  __int64 v13; // r9
  char *v14; // rbx
  int v15; // esi
  __int64 v16; // rax
  char *v17; // rdi
  char *v18; // rax
  char *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 result; // rax
  void (__fastcall ***v23)(_QWORD); // rbx
  __int64 v25; // rbx
  char *v26; // rax
  unsigned int v27; // r10d
  char *v28; // r14
  char *v29; // r11
  char *v30; // r12
  __int64 v31; // rdx
  char *v32; // rsi
  char *v33; // rdx
  __int64 v34; // rsi
  _QWORD *v35; // [rsp+0h] [rbp-98h]
  size_t v37; // [rsp+10h] [rbp-88h]
  int v38; // [rsp+10h] [rbp-88h]
  __int64 v39; // [rsp+18h] [rbp-80h]
  unsigned int v40; // [rsp+20h] [rbp-78h]
  int v41; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+38h] [rbp-60h] BYREF
  char *v43; // [rsp+40h] [rbp-58h] BYREF
  int v44; // [rsp+48h] [rbp-50h]
  int v45; // [rsp+4Ch] [rbp-4Ch]
  int v46; // [rsp+50h] [rbp-48h]

  v1 = (char *)sub_186B270(0x40u);
  v2 = *(__int64 **)(a1 + 8);
  v3 = v1;
  *(_OWORD *)v1 = 0;
  *((_OWORD *)v1 + 1) = 0;
  *((_OWORD *)v1 + 2) = 0;
  *((_OWORD *)v1 + 3) = 0;
  v4 = *v2;
  ptr = nullptr;
  (*(void (__fastcall **)(__int64 *, void **))(v4 + 32))(v2, &ptr);
  if ( ptr )
  {
    v5 = v2[7];
    if ( v5 )
      (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v5 + 32LL))(v5, &ptr);
  }
  v6 = *(_QWORD **)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16)) + 8);
  if ( v6 )
  {
    v35 = &v6[*((unsigned int *)v6 - 1)];
    if ( v35 != v6 )
    {
      v41 = 0;
      v7 = v6;
      v8 = 0;
      v9 = 8;
      while ( 1 )
      {
        v10 = *v7;
        if ( (unsigned __int8)sub_1374270(ptr, *v7) )
          break;
LABEL_7:
        if ( v35 == ++v7 )
          goto LABEL_28;
      }
      v11 = 2 * v9;
      if ( 3 * (int)v9 >= (unsigned int)(4 * (v8 + v41)) )
      {
        v12 = v9 - 1;
        v13 = 8LL * (unsigned int)v9;
        v14 = &v3[v13];
        goto LABEL_11;
      }
      v25 = v11;
      v37 = 8LL * v11;
      v26 = (char *)sub_186B270(v37);
      v27 = 2 * v9;
      v13 = v37;
      v28 = v26;
      if ( 2 * (_DWORD)v9 )
      {
        memset(v26, 0, 8 * v25);
        v27 = 2 * v9;
        v13 = v37;
        v29 = &v3[8 * v9];
        v12 = 2 * v9 - 1;
        v14 = &v28[v37];
      }
      else
      {
        v29 = &v3[8 * v9];
        v14 = v26;
        v12 = -1;
        if ( v3 == v29 )
        {
LABEL_47:
          if ( v3 )
          {
            v40 = v27;
            v39 = v13;
            v38 = v12;
            sub_186B220(v3);
            v27 = v40;
            v13 = v39;
            v12 = v38;
          }
          v3 = v28;
          v9 = v27;
          v8 = 0;
LABEL_11:
          v15 = *(_DWORD *)(v10 + 12);
          v16 = 8LL * (v15 & (unsigned int)v12);
          v17 = &v3[v16];
          if ( v16 == v13 )
          {
            v19 = nullptr;
LABEL_19:
            if ( v3 != v17 )
            {
              v18 = v3;
              do
              {
                while ( 1 )
                {
                  v21 = *(_QWORD *)v18;
                  if ( *(_QWORD *)v18 <= 1u )
                    break;
                  if ( *(_DWORD *)(v21 + 12) == v15 && v10 == v21 )
                    goto LABEL_56;
                  v18 += 8;
                  if ( v17 == v18 )
                    goto LABEL_27;
                }
                if ( !v21 )
                  goto LABEL_34;
                v19 = v18;
                v18 += 8;
              }
              while ( v17 != v18 );
            }
LABEL_27:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v18 = &v3[v16];
          v19 = nullptr;
          while ( 1 )
          {
            while ( 1 )
            {
              v20 = *(_QWORD *)v18;
              if ( *(_QWORD *)v18 <= 1u )
                break;
              if ( *(_DWORD *)(v20 + 12) == v15 && v10 == v20 )
              {
LABEL_56:
                *(_QWORD *)v18 = v10;
                goto LABEL_7;
              }
              v18 += 8;
              if ( v18 == v14 )
                goto LABEL_19;
            }
            if ( !v20 )
              break;
            v19 = v18;
            v18 += 8;
            if ( v18 == v14 )
              goto LABEL_19;
          }
LABEL_34:
          if ( v19 )
            --v8;
          else
            v19 = v18;
          *(_QWORD *)v19 = v10;
          ++v41;
          goto LABEL_7;
        }
      }
      v30 = v3;
      do
      {
        while ( *(_QWORD *)v30 <= 1u )
        {
          v30 += 8;
          if ( v30 == v29 )
            goto LABEL_47;
        }
        v31 = 8LL * (*(_DWORD *)(*(_QWORD *)v30 + 12LL) & (unsigned int)v12);
        v32 = &v28[v31];
        if ( v13 == v31 )
        {
LABEL_50:
          if ( v28 == v32 )
          {
LABEL_55:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v33 = v28;
          while ( *(_QWORD *)v33 )
          {
            v33 += 8;
            if ( v32 == v33 )
              goto LABEL_55;
          }
        }
        else
        {
          v33 = &v28[v31];
          while ( *(_QWORD *)v33 )
          {
            v33 += 8;
            if ( v33 == v14 )
              goto LABEL_50;
          }
        }
        v34 = *(_QWORD *)v30;
        v30 += 8;
        *(_QWORD *)v33 = v34;
      }
      while ( v30 != v29 );
      goto LABEL_47;
    }
  }
  v41 = 0;
  v8 = 0;
  LODWORD(v9) = 8;
LABEL_28:
  v43 = v3;
  v44 = v9;
  v45 = v41;
  v46 = v8;
  result = sub_364320(a1, (__int64 **)&v43, 0, 0);
  v23 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    if ( (*((_DWORD *)ptr + 4))-- == 1 )
    {
      (**v23)(v23);
      result = sub_186B220(v23);
    }
  }
  if ( v3 )
    return sub_186B220(v3);
  return result;
}

