__int64 __fastcall sub_50D4D0(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, __int64 a5, unsigned __int8 a6)
{
  _DWORD *v6; // r15
  _DWORD *v7; // r13
  unsigned __int8 v8; // r12
  __int16 v9; // ax
  _DWORD *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r8
  void *v13; // rdi
  int v14; // eax
  unsigned int v15; // ebx
  void *v17; // rbp
  int v18; // edx
  bool v19; // zf
  char v20; // al
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // r12d
  unsigned int v24; // r14d
  char v25; // al
  char v26; // al
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // [rsp+0h] [rbp-78h]
  __int64 v32; // [rsp+0h] [rbp-78h]
  __int64 v33; // [rsp+0h] [rbp-78h]
  void *v34; // [rsp+0h] [rbp-78h]
  void *v35; // [rsp+0h] [rbp-78h]
  __int64 v36; // [rsp+8h] [rbp-70h]
  void *v37; // [rsp+8h] [rbp-70h]
  __int64 v38; // [rsp+8h] [rbp-70h]
  __int64 v39; // [rsp+8h] [rbp-70h]
  char v40; // [rsp+1Eh] [rbp-5Ah] BYREF
  char v41; // [rsp+1Fh] [rbp-59h] BYREF
  __int64 v42; // [rsp+20h] [rbp-58h] BYREF
  __int64 v43; // [rsp+28h] [rbp-50h]
  __int64 v44; // [rsp+30h] [rbp-48h] BYREF
  __int64 v45; // [rsp+38h] [rbp-40h]

  while ( 1 )
  {
    v6 = a4;
    v7 = a3;
    v8 = a6;
    v9 = *(_WORD *)(a2 + 4);
    if ( v9 == 1 )
    {
      if ( a6 )
      {
        if ( *a4 == -1 )
        {
          *a4 = *(_DWORD *)(a2 + 16);
          return 1;
        }
      }
      else if ( *a3 == -1 )
      {
        *a3 = *(_DWORD *)(a2 + 16);
        return 1;
      }
      return 0;
    }
    if ( v9 )
      return 0;
    v10 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v10 || *v10 != 5 )
    {
      v42 = 0;
      v43 = 0;
      v44 = 1;
      v45 = 0;
      goto LABEL_6;
    }
    v18 = v10[1];
    if ( v18 == 6 )
      break;
    if ( v18 != 7 )
    {
      v42 = 0;
      v44 = 1;
      v19 = v10[1] == 9;
      v43 = 0;
      v45 = 0;
      if ( v19 )
      {
        v36 = a5;
        v20 = sub_1666AE0(a1 + 224, *(_QWORD *)(a2 + 32), &v42, &v40);
        v11 = a1 + 224;
        a5 = v36;
        if ( v20 )
        {
          if ( (v42 & 0x100000000LL) == 0 && (_DWORD)v42 == -1 && (v44 & 0x100000000LL) == 0 && (_DWORD)v44 == 1 )
          {
            v21 = *(_QWORD *)(a2 + 40);
            if ( *(_WORD *)(v21 + 4) == 1 )
            {
              if ( v8 )
              {
                if ( *v6 == -1 )
                {
                  *v6 = *(_DWORD *)(v21 + 16);
                  goto LABEL_43;
                }
LABEL_20:
                v15 = 0;
LABEL_21:
                v17 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, &v42);
                sub_182CBA0(v17, &v44);
                return v15;
              }
              if ( *v7 != -1 )
                goto LABEL_20;
              *v7 = *(_DWORD *)(v21 + 16);
              goto LABEL_43;
            }
          }
        }
      }
      else
      {
LABEL_6:
        v11 = a1 + 224;
      }
      v31 = a5;
      if ( !(unsigned __int8)sub_1666AE0(v11, a2, &v42, &v41) )
        goto LABEL_20;
      v12 = v31;
      v13 = qword_1C7F2C0;
      if ( v8 )
      {
        v14 = v42;
        if ( !(_DWORD)v42 )
        {
          v26 = *(_BYTE *)(v31 + 4);
          if ( (v26 & 1) != 0 )
          {
            v28 = v31;
            v29 = v31;
            v38 = v31;
            v34 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v29, v28);
            v12 = v38;
            v13 = v34;
          }
          else
          {
            *(_BYTE *)(v31 + 4) = v26 & 0xFE;
          }
          v27 = *(_BYTE *)(v12 + 20);
          if ( (v27 & 1) != 0 )
            sub_182C690(v13, v12 + 16, v12 + 16);
          else
            *(_BYTE *)(v12 + 20) = v27 & 0xFE;
          goto LABEL_43;
        }
        if ( !*(_DWORD *)v31 )
        {
          if ( (v42 & 0x100000000LL) != 0 )
          {
            v30 = v31;
            v39 = v31;
            v35 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v30, &v42);
            v12 = v39;
            v13 = v35;
          }
          else
          {
            *(_BYTE *)(v31 + 4) &= ~1u;
            *(_DWORD *)v31 = v14;
          }
          if ( (v44 & 0x100000000LL) != 0 )
          {
            sub_182C690(v13, v12 + 16, &v44);
          }
          else
          {
            v22 = v44;
            *(_BYTE *)(v12 + 20) &= ~1u;
            *(_DWORD *)(v12 + 16) = v22;
          }
          goto LABEL_43;
        }
        if ( (*(_BYTE *)(v31 + 20) & 1) != 0
          || *(_DWORD *)(v31 + 16) != 1
          || (v44 & 0x100000000LL) != 0
          || (_DWORD)v44 != 1 )
        {
          sub_1851D20(qword_1C7F2C0, v31, &v42, v31);
          goto LABEL_43;
        }
        v37 = qword_1C7F2C0;
        sub_1831A80(qword_1C7F2C0, v31, &v42, v31);
      }
      else
      {
        if ( (*(_BYTE *)(v31 + 20) & 1) != 0
          || *(_DWORD *)(v31 + 16) != 1
          || (v44 & 0x100000000LL) != 0
          || (_DWORD)v44 != 1 )
        {
          sub_1852000(qword_1C7F2C0, v31, &v42);
          goto LABEL_43;
        }
        v37 = qword_1C7F2C0;
        sub_1832A70(qword_1C7F2C0, v31, &v42);
      }
      sub_182CBA0(v37, v31 + 16);
      *(_BYTE *)(v31 + 20) &= ~1u;
      *(_DWORD *)(v31 + 16) = 1;
LABEL_43:
      v15 = 1;
      goto LABEL_21;
    }
    v33 = a5;
    v25 = sub_50D4D0(a1, *(_QWORD *)(a2 + 32), v7, a4, a5, a6);
    a5 = v33;
    if ( !v25 )
      return 0;
    a2 = *(_QWORD *)(a2 + 40);
    a4 = v6;
    a6 = v8 ^ 1;
    a3 = v7;
  }
  v23 = a6;
  v24 = 0;
  if ( *(_DWORD *)(a2 + 24) )
  {
    while ( 1 )
    {
      v32 = a5;
      if ( !(unsigned __int8)sub_50D4D0(a1, *(_QWORD *)(a2 + 8LL * v24 + 32), v7, v6, a5, v23) )
        break;
      ++v24;
      a5 = v32;
      if ( v24 >= *(_DWORD *)(a2 + 24) )
        return 1;
    }
    return 0;
  }
  return 1;
}

