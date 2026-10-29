_BYTE *__fastcall sub_68F610(_QWORD *a1, _BYTE *a2, __int64 a3, _DWORD *a4, int a5, __int64 a6, char a7)
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
  int *v31; // r14
  int v32; // eax
  int v33; // r8d
  int v34; // r9d
  const char *v35; // rax
  int v36; // r9d
  __int64 v37; // r12
  int v38; // r8d
  int v39; // ecx
  _BYTE *v40; // r12
  _BYTE *v41; // r9
  int v43; // eax
  int v44; // eax
  _QWORD *v45; // [rsp+0h] [rbp-88h]
  char v46; // [rsp+0h] [rbp-88h]
  unsigned int v47; // [rsp+Ch] [rbp-7Ch]
  int v48; // [rsp+18h] [rbp-70h]
  int v49; // [rsp+1Ch] [rbp-6Ch]
  _DWORD v50[2]; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v52; // [rsp+38h] [rbp-50h]
  unsigned __int64 v53; // [rsp+48h] [rbp-40h]

  v10 = (unsigned __int64)&a2[a3];
  v45 = a1;
  v53 = __readfsqword(0x28u);
  v52 = 0;
  ptr = nullptr;
  v11 = a7 & ((_DWORD)a6 != 0xFFFF);
  if ( v11 )
  {
    a6 = (int)qsnprintf((int)a2, a3, (int)"%d:", a6, a5, a6, (char)a1);
    v12 = *a4;
    v13 = &a2[a6];
    if ( *a4 != 5 )
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
      v31 = *((int **)a4 + 1);
      v32 = sub_54C1C0(v45);
      if ( sub_6565C0((__int64)v45, (__int64 *)&ptr, v31[1], v32, 0xFFFFFFFF) < 0 )
      {
        v37 = (__int64)&v30[(int)qsnprintf((int)v30, (int)v10 - (int)v30, (int)"R%d", v31[1], v33, v34, (char)v45)];
      }
      else
      {
        v35 = haystack;
        if ( (_QWORD)v52 )
          v35 = (const char *)ptr;
        v37 = qstpncpy(v30, v35, v10 - (_QWORD)v30);
      }
      v38 = *v31;
      v39 = 43;
      if ( *v31 < 0 )
      {
        v38 = -v38;
        v39 = 45;
      }
      v40 = (_BYTE *)((int)qsnprintf(v37, (int)v10 - (int)v37, (int)"%c%a", v39, v38, v36, (char)v45) + v37);
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
  v12 = *a4;
  if ( *a4 == 5 )
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
        v47 = (unsigned __int16)a4[2];
        v14 = HIWORD(a4[2]);
        if ( v12 == 4 )
        {
          v48 = 0;
          v15 = a5;
        }
        else
        {
          v48 = v14;
          v15 = v14 + a5;
          v14 = -1;
        }
        v16 = sub_6565C0((__int64)v45, (__int64 *)&ptr, v47, v15, v14);
        v17 = v11 & (v16 > 0);
        if ( v17 )
        {
          v17 = sub_5D09F0(v45, v50, (__int64)ptr);
          if ( v17 )
            v17 = v50[1] > a5;
        }
        else if ( v16 < 0 )
        {
          v49 = 5;
          v18 = 16;
          while ( 1 )
          {
            v19 = sub_6565C0((__int64)v45, (__int64 *)&ptr, v47, v18, v14);
            if ( v19 > 0 )
              break;
            v18 >>= 1;
            if ( !--v49 )
            {
              if ( v19 )
              {
                v20 = ptr;
                if ( *((_QWORD *)&v52 + 1) <= 0xFu )
                {
                  ptr = (void *)qvector_reserve(&ptr, ptr, 16, 1);
                  v20 = ptr;
                  if ( *((_QWORD *)&v52 + 1) <= 1u )
                  {
                    ptr = (void *)qvector_reserve(&ptr, ptr, 2, 1);
                    v20 = ptr;
                  }
                }
                *(_QWORD *)&v52 = 2;
                *v20 = 82;
                *((_BYTE *)ptr + 1) = 0;
                if ( v14 != -1 )
                  sub_357520((__int64 *)&ptr);
                sub_357520((__int64 *)&ptr);
              }
              break;
            }
          }
          v17 = 1;
        }
        v21 = haystack;
        if ( (_QWORD)v52 )
          v21 = (const char *)ptr;
        v46 = v17;
        v22 = qstpncpy(v13, v21, v10 - (_QWORD)v13);
        v25 = v46;
        v26 = (_BYTE *)v22;
        if ( v48 )
        {
          v44 = qsnprintf(v22, (int)v10 - (int)v22, (int)"^%d", v48, v23, v24, v46);
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
    v43 = qsnprintf((int)v13, (int)v10 - (int)v13, (int)"^%d", a4[2], a5, a6, (char)v45);
    v25 = 1;
    v26 = &v13[v43];
LABEL_24:
    if ( a5 > 0 && v25 )
    {
      v27 = qsnprintf((int)v26, (int)v10 - (int)v26, (int)".%d", a5, v23, v24, v46);
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
  v29 = (_BYTE *)(&v13[(int)qsnprintf((int)v13, (int)v10 - (int)v13, (int)"@%a", a4[2], a5, a6, (char)v45)] - a2);
LABEL_47:
  if ( v28 )
  {
    *(_QWORD *)&v52 = 0;
    qfree(v28);
  }
  return v29;
}

