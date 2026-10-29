_BYTE *__fastcall sub_6AFDF0(_QWORD *a1, _BYTE *a2, __int64 a3, __int64 a4, int a5, __int64 a6, char a7)
{
  unsigned __int64 v10; // rbp
  char v11; // r12
  int v12; // eax
  _BYTE *v13; // r13
  unsigned int v14; // r15d
  int v15; // ecx
  __int64 v16; // rax
  char v17; // cl
  int v18; // r12d
  __int64 v19; // rax
  _BYTE *v20; // rsi
  const char *v21; // rsi
  __int64 v22; // rax
  int v23; // r8d
  int v24; // r9d
  char v25; // cl
  _BYTE *v26; // r12
  int v27; // eax
  void *v28; // rdi
  _BYTE *v29; // rbp
  _BYTE *v30; // r12
  __int64 v31; // r14
  int v32; // eax
  int v33; // r8d
  int v34; // r9d
  const char *v35; // rax
  int v36; // r9d
  __int64 v37; // r12
  __int64 v38; // r8
  int v39; // ecx
  _BYTE *v40; // r12
  _BYTE *v41; // r9
  int v43; // eax
  int v44; // eax
  char v45; // [rsp+0h] [rbp-88h]
  unsigned int v46; // [rsp+Ch] [rbp-7Ch]
  unsigned int v47; // [rsp+18h] [rbp-70h]
  int v48; // [rsp+1Ch] [rbp-6Ch]
  _DWORD v49[2]; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v51; // [rsp+38h] [rbp-50h]
  unsigned __int64 v52; // [rsp+48h] [rbp-40h]

  v10 = (unsigned __int64)&a2[a3];
  v52 = __readfsqword(0x28u);
  v51 = 0;
  ptr = nullptr;
  v11 = a7 & ((_DWORD)a6 != 0xFFFF);
  if ( v11 )
  {
    a6 = (int)qsnprintf((_DWORD)a2, a3, (unsigned int)"%d:", a6, a5, a6);
    v12 = *(_DWORD *)a4;
    v13 = &a2[a6];
    if ( *(_DWORD *)a4 != 5 )
    {
      if ( v12 > 5 )
      {
        if ( v12 == 6 )
          goto LABEL_52;
      }
      else
      {
        if ( v12 == 1 )
          goto LABEL_63;
        if ( (unsigned int)(v12 - 3) <= 1 )
          goto LABEL_7;
      }
LABEL_31:
      if ( !under_debugger )
        interr(640);
      goto LABEL_71;
    }
LABEL_34:
    if ( (unsigned __int64)v13 >= v10 )
    {
      if ( !under_debugger )
        interr(518);
    }
    else
    {
      v30 = v13 + 1;
      *v13 = 91;
      if ( (unsigned __int64)(v13 + 1) >= v10 )
      {
        *(_BYTE *)(v10 - 1) = 0;
        v30 = (_BYTE *)(v10 - 1);
      }
      v31 = *(_QWORD *)(a4 + 8);
      v32 = sub_565920(a1);
      if ( sub_6743B0((__int64)a1, (__int64 *)&ptr, *(_DWORD *)(v31 + 8), v32, 0xFFFFFFFF) < 0 )
      {
        v37 = (__int64)&v30[(int)qsnprintf(
                                   (_DWORD)v30,
                                   (int)v10 - (int)v30,
                                   (unsigned int)"R%d",
                                   *(_DWORD *)(v31 + 8),
                                   v33,
                                   v34)];
      }
      else
      {
        v35 = haystack;
        if ( (_QWORD)v51 )
          v35 = (const char *)ptr;
        v37 = qstpncpy(v30, v35, v10 - (_QWORD)v30);
      }
      v38 = *(_QWORD *)v31;
      v39 = 43;
      if ( *(__int64 *)v31 < 0 )
      {
        v38 = -v38;
        v39 = 45;
      }
      v40 = (_BYTE *)((int)qsnprintf(v37, (int)v10 - (int)v37, (unsigned int)"%c%a", v39, v38, v36) + v37);
      if ( (unsigned __int64)v40 < v10 )
      {
        v41 = v40 + 1;
        *v40 = 93;
        if ( (unsigned __int64)(v40 + 1) >= v10 )
        {
          *(_BYTE *)(v10 - 1) = 0;
          v41 = (_BYTE *)(v10 - 1);
        }
        *v41 = 0;
        v28 = ptr;
        v29 = (_BYTE *)(v41 - a2);
        goto LABEL_47;
      }
      if ( !under_debugger )
        interr(518);
    }
LABEL_71:
    BUG();
  }
  v12 = *(_DWORD *)a4;
  if ( *(_DWORD *)a4 == 5 )
  {
    v13 = a2;
    goto LABEL_34;
  }
  if ( v12 <= 5 )
  {
    if ( v12 != 1 )
    {
      if ( (unsigned int)(v12 - 3) <= 1 )
      {
        v13 = a2;
LABEL_7:
        v46 = (unsigned __int16)*(_DWORD *)(a4 + 8);
        v14 = HIWORD(*(_DWORD *)(a4 + 8));
        if ( v12 == 4 )
        {
          v47 = 0;
          v15 = a5;
        }
        else
        {
          v47 = v14;
          v15 = v14 + a5;
          v14 = -1;
        }
        v16 = sub_6743B0((__int64)a1, (__int64 *)&ptr, v46, v15, v14);
        v17 = v11 & (v16 > 0);
        if ( v17 )
        {
          v17 = sub_5EC7F0(a1, v49, (__int64)ptr);
          if ( v17 )
            v17 = v49[1] > a5;
        }
        else if ( v16 < 0 )
        {
          v48 = 5;
          v18 = 16;
          while ( 1 )
          {
            v19 = sub_6743B0((__int64)a1, (__int64 *)&ptr, v46, v18, v14);
            if ( v19 > 0 )
              break;
            v18 >>= 1;
            if ( !--v48 )
            {
              if ( v19 )
              {
                v20 = ptr;
                if ( *((_QWORD *)&v51 + 1) <= 0xFu )
                {
                  ptr = (void *)qvector_reserve(&ptr, ptr, 16, 1);
                  v20 = ptr;
                  if ( *((_QWORD *)&v51 + 1) <= 1u )
                  {
                    ptr = (void *)qvector_reserve(&ptr, ptr, 2, 1);
                    v20 = ptr;
                  }
                }
                *(_QWORD *)&v51 = 2;
                *v20 = 82;
                *((_BYTE *)ptr + 1) = 0;
                if ( v14 != -1 )
                  sub_35A910((__int64 *)&ptr);
                sub_35A910((__int64 *)&ptr);
              }
              break;
            }
          }
          v17 = 1;
        }
        v21 = haystack;
        if ( (_QWORD)v51 )
          v21 = (const char *)ptr;
        v45 = v17;
        v22 = qstpncpy(v13, v21, v10 - (_QWORD)v13);
        v25 = v45;
        v26 = (_BYTE *)v22;
        if ( v47 )
        {
          v44 = qsnprintf(v22, (int)v10 - (int)v22, (unsigned int)"^%d", v47, v23, v24);
          v25 = 1;
          v26 += v44;
        }
        goto LABEL_24;
      }
      goto LABEL_31;
    }
    if ( !(_DWORD)a6 && !a7 )
      return nullptr;
    v13 = a2;
LABEL_63:
    v43 = qsnprintf((_DWORD)v13, (int)v10 - (int)v13, (unsigned int)"^%lld", *(_QWORD *)(a4 + 8), a5, a6);
    v25 = 1;
    v26 = &v13[v43];
LABEL_24:
    if ( a5 > 0 && v25 )
    {
      v27 = qsnprintf((_DWORD)v26, (int)v10 - (int)v26, (unsigned int)".%d", a5, v23, v24);
      v28 = ptr;
      v29 = (_BYTE *)(&v26[v27] - a2);
    }
    else
    {
      v28 = ptr;
      v29 = (_BYTE *)(v26 - a2);
    }
    goto LABEL_47;
  }
  if ( v12 != 6 )
    goto LABEL_31;
  v13 = a2;
LABEL_52:
  v28 = ptr;
  v29 = (_BYTE *)(&v13[(int)qsnprintf(
                              (_DWORD)v13,
                              (int)v10 - (int)v13,
                              (unsigned int)"@%a",
                              *(_QWORD *)(a4 + 8),
                              a5,
                              a6)]
                - a2);
LABEL_47:
  if ( v28 )
  {
    *(_QWORD *)&v51 = 0;
    qfree(v28);
  }
  return v29;
}
