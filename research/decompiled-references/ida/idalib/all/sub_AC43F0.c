__int64 __fastcall sub_AC43F0(__int64 a1, void *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rdx
  unsigned int v5; // r13d
  __int64 v6; // rdx
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  unsigned __int64 v11; // rdx
  unsigned int v12; // eax
  int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // rsi
  int v17; // ebx
  __int64 v18; // rsi
  unsigned int v19; // r13d
  __int64 v20; // rdx
  int v21; // eax
  unsigned __int64 v22; // rdi
  __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  int v25; // [rsp+Ch] [rbp-7Ch]
  int v26; // [rsp+Ch] [rbp-7Ch]
  int v27; // [rsp+Ch] [rbp-7Ch]
  void *v28; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v29; // [rsp+18h] [rbp-70h]
  unsigned __int8 v30; // [rsp+1Ch] [rbp-6Ch]
  void *v31; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v32; // [rsp+28h] [rbp-60h]
  unsigned __int8 v33; // [rsp+2Ch] [rbp-5Ch]
  void *v34; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-50h]
  char v36; // [rsp+3Ch] [rbp-4Ch]
  void *v37; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-40h]
  char v39; // [rsp+4Ch] [rbp-3Ch]
  unsigned __int64 v40; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v41; // [rsp+58h] [rbp-30h]

  v4 = *(unsigned int *)(a1 + 8);
  v29 = 64;
  v28 = a2;
  v30 = 0;
  if ( (_DWORD)v4 == 64 )
  {
    if ( *(_BYTE *)(a1 + 12) )
    {
      v2 = 0;
      if ( (__int64)a2 >= 0 )
        LOBYTE(v2) = (unsigned int)sub_2205DB0(a1, &v28) == 0;
    }
    else
    {
      LOBYTE(v2) = (unsigned int)sub_2205E20(a1, &v28) == 0;
    }
    return v2;
  }
  if ( (unsigned int)v4 <= 0x40 )
  {
    v2 = *(unsigned __int8 *)(a1 + 12);
    if ( (_BYTE)v2 )
    {
      sub_2206CD0(&v40, a1, 64);
      v10 = v41;
      v11 = v40;
      v33 = 1;
    }
    else
    {
      sub_2206B70(&v40, a1, 64);
      v10 = v41;
      v11 = v40;
      v33 = 0;
    }
    v32 = v41;
    v31 = (void *)v40;
    v12 = v29;
    if ( v29 == v10 )
    {
      if ( (_BYTE)v2 == v30 )
      {
        LOBYTE(v2) = (unsigned int)sub_2205E20(&v31, &v28) == 0;
        goto LABEL_43;
      }
      goto LABEL_40;
    }
    if ( v29 >= v10 )
    {
      if ( v29 > v10 )
      {
        if ( (_BYTE)v2 )
        {
          sub_2206CD0(&v40, &v31, v29);
          v39 = 1;
        }
        else
        {
          sub_2206B70(&v40, &v31, v29);
          v39 = 0;
        }
        v38 = v41;
        v37 = (void *)v40;
        v2 = sub_98E2D0((__int64 *)&v37, (__int64 *)&v28);
        if ( v38 > 0x40 && v37 )
          operator delete[](v37);
        v10 = v32;
        LOBYTE(v2) = v2 == 0;
        goto LABEL_43;
      }
LABEL_40:
      if ( (_BYTE)v2 )
      {
        v2 = v30;
        if ( ((unsigned __int64)v28 & (1LL << ((unsigned __int8)v29 - 1))) != 0 )
          goto LABEL_43;
      }
      else
      {
        v16 = 1LL << ((unsigned __int8)v10 - 1);
        if ( v10 <= 0x40 )
        {
          if ( (v16 & v11) != 0 )
            goto LABEL_47;
        }
        else if ( (v16 & *(_QWORD *)(v11 + 8LL * ((v10 - 1) >> 6))) != 0 )
        {
          goto LABEL_44;
        }
      }
      LOBYTE(v2) = (unsigned int)sub_2205DB0(&v31, &v28) == 0;
LABEL_43:
      if ( v10 > 0x40 )
        goto LABEL_44;
      goto LABEL_46;
    }
    v2 = v30;
    sub_2206B70(&v40, &v28, v10);
    v36 = 0;
    v10 = v32;
    v35 = v41;
    v34 = (void *)v40;
    if ( v41 == v32 )
    {
      v15 = v32;
      if ( !v33 )
      {
        LOBYTE(v2) = (unsigned int)sub_2205E20(&v31, &v34) == 0;
        goto LABEL_60;
      }
    }
    else
    {
      if ( v41 < v32 )
      {
        sub_2206B70(&v40, &v34, v32);
        v39 = 0;
        v38 = v41;
        v37 = (void *)v40;
        v17 = sub_98E2D0((__int64 *)&v31, (__int64 *)&v37);
        if ( v38 > 0x40 && v37 )
          operator delete[](v37);
        v15 = v35;
        LOBYTE(v2) = v17 == 0;
        goto LABEL_60;
      }
      if ( v32 < v41 )
      {
        if ( v33 )
        {
          sub_2206CD0(&v40, &v31, v41);
          v39 = 1;
        }
        else
        {
          sub_2206B70(&v40, &v31, v41);
          v39 = 0;
        }
        v38 = v41;
        v37 = (void *)v40;
        v14 = sub_98E2D0((__int64 *)&v37, (__int64 *)&v34);
        if ( v38 > 0x40 && v37 )
        {
          v26 = v14;
          operator delete[](v37);
          v14 = v26;
        }
        v15 = v35;
        LOBYTE(v2) = v14 == 0;
        goto LABEL_60;
      }
      v15 = v41;
      if ( !v33 )
      {
        v22 = (unsigned __int64)v31;
        if ( v32 > 0x40 )
          v22 = *((_QWORD *)v31 + ((v32 - 1) >> 6));
        v2 = 0;
        if ( (v22 & (1LL << ((unsigned __int8)v32 - 1))) == 0 )
LABEL_113:
          LOBYTE(v2) = (unsigned int)sub_2205DB0(&v31, &v34) == 0;
LABEL_60:
        if ( v15 <= 0x40 )
        {
LABEL_63:
          v10 = v32;
          goto LABEL_43;
        }
LABEL_61:
        if ( v34 )
          operator delete[](v34);
        goto LABEL_63;
      }
    }
    if ( v15 <= 0x40 )
    {
      v2 = 0;
      if ( (v40 & (1LL << ((unsigned __int8)v15 - 1))) != 0 )
        goto LABEL_43;
    }
    else
    {
      v2 = 0;
      if ( ((1LL << ((unsigned __int8)v15 - 1)) & *(_QWORD *)(v40 + 8LL * ((v15 - 1) >> 6))) != 0 )
        goto LABEL_61;
    }
    goto LABEL_113;
  }
  sub_2206B70(&v40, &v28, v4);
  v5 = v41;
  v33 = 0;
  v6 = *(unsigned int *)(a1 + 8);
  v32 = v41;
  v31 = (void *)v40;
  if ( (_DWORD)v6 == v41 )
  {
    if ( !*(_BYTE *)(a1 + 12) )
    {
      LOBYTE(v2) = (unsigned int)sub_2205E20(a1, &v31) == 0;
      goto LABEL_21;
    }
    goto LABEL_65;
  }
  if ( (unsigned int)v6 > v41 )
  {
    sub_2206B70(&v40, &v31, v6);
    v19 = v41;
    v36 = 0;
    v20 = *(unsigned int *)(a1 + 8);
    v35 = v41;
    v34 = (void *)v40;
    if ( (_DWORD)v20 == v41 )
    {
      if ( !*(_BYTE *)(a1 + 12) )
      {
        LOBYTE(v2) = (unsigned int)sub_2205E20(a1, &v34) == 0;
        goto LABEL_91;
      }
    }
    else
    {
      if ( (unsigned int)v20 > v41 )
      {
        sub_2206B70(&v40, &v34, v20);
        v39 = 0;
        v38 = v41;
        v37 = (void *)v40;
        v21 = sub_98E2D0((__int64 *)a1, (__int64 *)&v37);
        if ( v38 > 0x40 )
          goto LABEL_88;
        goto LABEL_90;
      }
      v2 = *(unsigned __int8 *)(a1 + 12);
      if ( (unsigned int)v20 < v41 )
      {
        if ( (_BYTE)v2 )
        {
          sub_2206CD0(&v40, a1, v41);
          v39 = 1;
        }
        else
        {
          sub_2206B70(&v40, a1, v41);
          v39 = 0;
        }
        v38 = v41;
        v37 = (void *)v40;
        v21 = sub_98E2D0((__int64 *)&v37, (__int64 *)&v34);
        if ( v38 > 0x40 )
        {
LABEL_88:
          if ( v37 )
          {
            v27 = v21;
            operator delete[](v37);
            v21 = v27;
          }
        }
LABEL_90:
        v19 = v35;
        LOBYTE(v2) = v21 == 0;
        goto LABEL_91;
      }
      if ( !(_BYTE)v2 )
      {
        v23 = *(_QWORD *)a1;
        if ( (unsigned int)v20 > 0x40 )
          v23 = *(_QWORD *)(v23 + 8LL * ((unsigned int)(v20 - 1) >> 6));
        if ( (v23 & (1LL << ((unsigned __int8)v20 - 1))) == 0 )
LABEL_99:
          LOBYTE(v2) = (unsigned int)sub_2205DB0(a1, &v34) == 0;
LABEL_91:
        if ( v19 <= 0x40 )
          goto LABEL_20;
        goto LABEL_18;
      }
    }
    if ( v41 <= 0x40 )
    {
      v2 = 0;
      if ( ((1LL << ((unsigned __int8)v41 - 1)) & v40) != 0 )
        goto LABEL_20;
    }
    else
    {
      v2 = 0;
      if ( ((1LL << ((unsigned __int8)v41 - 1)) & *(_QWORD *)(v40 + 8LL * ((v41 - 1) >> 6))) != 0 )
        goto LABEL_18;
    }
    goto LABEL_99;
  }
  v2 = *(unsigned __int8 *)(a1 + 12);
  if ( (unsigned int)v6 >= v41 )
  {
    if ( !(_BYTE)v2 )
    {
      v18 = *(_QWORD *)a1;
      if ( (unsigned int)v6 > 0x40 )
        v18 = *(_QWORD *)(v18 + 8LL * ((unsigned int)(v6 - 1) >> 6));
      if ( (v18 & (1LL << ((unsigned __int8)v6 - 1))) != 0 )
        goto LABEL_21;
LABEL_79:
      LOBYTE(v2) = (unsigned int)sub_2205DB0(a1, &v31) == 0;
      goto LABEL_21;
    }
LABEL_65:
    if ( v41 <= 0x40 )
    {
      v2 = 0;
      if ( ((1LL << ((unsigned __int8)v41 - 1)) & v40) != 0 )
        goto LABEL_46;
    }
    else if ( ((1LL << ((unsigned __int8)v41 - 1)) & *(_QWORD *)(v40 + 8LL * ((v41 - 1) >> 6))) != 0 )
    {
      v2 = 0;
      goto LABEL_44;
    }
    goto LABEL_79;
  }
  if ( (_BYTE)v2 )
  {
    sub_2206CD0(&v40, a1, v41);
    v7 = v41;
    v8 = v40;
    v36 = 1;
  }
  else
  {
    sub_2206B70(&v40, a1, v41);
    v7 = v41;
    v8 = v40;
    v36 = 0;
  }
  v35 = v41;
  v34 = (void *)v40;
  v5 = v32;
  if ( v32 == v7 )
  {
    if ( v33 == (_BYTE)v2 )
    {
      if ( (_BYTE)v2 )
        goto LABEL_106;
      LOBYTE(v2) = (unsigned int)sub_2205E20(&v34, &v31) == 0;
LABEL_17:
      if ( v7 > 0x40 )
        goto LABEL_18;
LABEL_20:
      v5 = v32;
      goto LABEL_21;
    }
  }
  else
  {
    if ( v32 < v7 )
    {
      if ( v33 )
      {
        sub_2206CD0(&v40, &v31, v7);
        v39 = 1;
      }
      else
      {
        sub_2206B70(&v40, &v31, v7);
        v39 = 0;
      }
      v38 = v41;
      v37 = (void *)v40;
      v9 = sub_98E2D0((__int64 *)&v34, (__int64 *)&v37);
      if ( v38 > 0x40 )
      {
LABEL_14:
        if ( v37 )
        {
          v25 = v9;
          operator delete[](v37);
          v9 = v25;
        }
      }
LABEL_16:
      v7 = v35;
      LOBYTE(v2) = v9 == 0;
      goto LABEL_17;
    }
    if ( v32 > v7 )
    {
      if ( (_BYTE)v2 )
      {
        sub_2206CD0(&v40, &v34, v32);
        v39 = 1;
      }
      else
      {
        sub_2206B70(&v40, &v34, v32);
        v39 = 0;
      }
      v38 = v41;
      v37 = (void *)v40;
      v9 = sub_98E2D0((__int64 *)&v37, (__int64 *)&v31);
      if ( v38 > 0x40 )
        goto LABEL_14;
      goto LABEL_16;
    }
  }
  if ( (_BYTE)v2 )
  {
    v2 = v33;
    if ( v33 )
      goto LABEL_106;
    v24 = (unsigned __int64)v31;
    if ( v32 > 0x40 )
      v24 = *((_QWORD *)v31 + ((v32 - 1) >> 6));
    if ( (v24 & (1LL << ((unsigned __int8)v32 - 1))) == 0 )
      goto LABEL_106;
    goto LABEL_17;
  }
  if ( v7 > 0x40 )
  {
    if ( ((1LL << ((unsigned __int8)v7 - 1)) & *(_QWORD *)(v8 + 8LL * ((v7 - 1) >> 6))) == 0 )
    {
LABEL_106:
      LOBYTE(v2) = (unsigned int)sub_2205DB0(&v34, &v31) == 0;
      goto LABEL_17;
    }
LABEL_18:
    if ( v34 )
      operator delete[](v34);
    goto LABEL_20;
  }
  if ( ((1LL << ((unsigned __int8)v7 - 1)) & v8) == 0 )
    goto LABEL_106;
LABEL_21:
  if ( v5 > 0x40 )
  {
LABEL_44:
    if ( v31 )
      operator delete[](v31);
  }
LABEL_46:
  v12 = v29;
LABEL_47:
  if ( v12 <= 0x40 || !v28 )
    return v2;
  operator delete[](v28);
  return v2;
}
