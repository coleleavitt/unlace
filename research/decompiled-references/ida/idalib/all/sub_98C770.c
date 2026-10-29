__int64 __fastcall sub_98C770(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r14
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  _WORD *v14; // rsi
  _WORD *v16; // rsi
  _WORD *v17; // rsi
  _WORD *v18; // rsi
  __int64 v19; // r15
  void *v20; // r14
  void *v21; // r14
  void *v22; // r14
  void *v23; // r14
  __int64 v24; // r14
  void *v25; // rbp
  int v26; // eax
  _WORD *v27; // rsi
  int v28; // eax
  int v29; // eax
  _WORD *v30; // rsi
  __int64 v31; // r14
  void *v32; // rbx
  _WORD *v33; // rsi
  __int64 v34; // r14
  void *v35; // rbp
  __int64 v36; // [rsp+8h] [rbp-40h]
  __int64 v37; // [rsp+8h] [rbp-40h]
  __int64 v38; // [rsp+8h] [rbp-40h]

  v5 = (a2 - a1) >> 6;
  v6 = (a2 - a1) >> 4;
  if ( v5 > 0 )
  {
    v7 = a1;
    v8 = a1 + (v5 << 6);
    while ( 1 )
    {
      v13 = *(_DWORD *)v7 & 3 | (4 * (*(_QWORD *)(v7 + 8) & 3));
      if ( v13 <= 8 && (unsigned int)v13 > 5 )
      {
        v14 = (_WORD *)(*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (*v14 & 0x1FF) == 0x8B )
        {
          v19 = operator new(8u);
          sub_EC9790(v19, v14);
          v20 = (void *)*a3;
          *a3 = v19;
          if ( v20 )
          {
            sub_EC5B50(v20);
            operator delete(v20, 8u);
          }
        }
        else if ( (int)sub_EEB7E0(*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL) >= 0 && (!*a3 || !sub_EC5B90(*a3, v14)) )
        {
          return v7;
        }
      }
      v9 = v7 + 16;
      v10 = *(_DWORD *)(v7 + 16) & 3 | (4 * (*(_QWORD *)(v7 + 24) & 3));
      if ( v10 <= 8 && (unsigned int)v10 > 5 )
      {
        v16 = (_WORD *)(*(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCLL);
        if ( (*v16 & 0x1FF) == 0x8B )
        {
          v36 = operator new(8u);
          sub_EC9790(v36, v16);
          v21 = (void *)*a3;
          *a3 = v36;
          if ( v21 )
          {
            sub_EC5B50(v21);
            operator delete(v21, 8u);
          }
        }
        else if ( (int)sub_EEB7E0(*(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCLL) >= 0 && (!*a3 || !sub_EC5B90(*a3, v16)) )
        {
          return v9;
        }
      }
      v9 = v7 + 32;
      v11 = *(_DWORD *)(v7 + 32) & 3 | (4 * (*(_QWORD *)(v7 + 40) & 3));
      if ( v11 <= 8 && (unsigned int)v11 > 5 )
      {
        v17 = (_WORD *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFFCLL);
        if ( (*v17 & 0x1FF) == 0x8B )
        {
          v37 = operator new(8u);
          sub_EC9790(v37, v17);
          v22 = (void *)*a3;
          *a3 = v37;
          if ( v22 )
          {
            sub_EC5B50(v22);
            operator delete(v22, 8u);
          }
        }
        else if ( (int)sub_EEB7E0(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFFCLL) >= 0 )
        {
          if ( !*a3 )
            return v9;
          if ( !sub_EC5B90(*a3, v17) )
          {
            v7 += 32;
            return v7;
          }
        }
      }
      v9 = v7 + 48;
      v12 = *(_DWORD *)(v7 + 48) & 3 | (4 * (*(_QWORD *)(v7 + 56) & 3));
      if ( v12 > 8 || (unsigned int)v12 <= 5 )
        goto LABEL_9;
      v18 = (_WORD *)(*(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFFFFCLL);
      if ( (*v18 & 0x1FF) == 0x8B )
      {
        v38 = operator new(8u);
        sub_EC9790(v38, v18);
        v23 = (void *)*a3;
        *a3 = v38;
        if ( v23 )
        {
          sub_EC5B50(v23);
          operator delete(v23, 8u);
        }
        goto LABEL_9;
      }
      if ( (int)sub_EEB7E0(*(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFFFFCLL) < 0 )
      {
LABEL_9:
        v7 += 64;
        if ( v8 == v7 )
          goto LABEL_32;
      }
      else
      {
        if ( !*a3 || !sub_EC5B90(*a3, v18) )
          return v9;
        v7 += 64;
        if ( v8 == v7 )
        {
LABEL_32:
          v6 = (a2 - v7) >> 4;
          goto LABEL_33;
        }
      }
    }
  }
  v7 = a1;
LABEL_33:
  if ( v6 == 2 )
  {
LABEL_58:
    v29 = *(_DWORD *)v7 & 3 | (4 * (*(_QWORD *)(v7 + 8) & 3));
    if ( (unsigned int)v29 > 5 && v29 <= 8 )
    {
      v30 = (_WORD *)(*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (*v30 & 0x1FF) == 0x8B )
      {
        v24 = operator new(8u);
        sub_EC9790(v24, v30);
        v25 = (void *)*a3;
        *a3 = v24;
        if ( v25 )
        {
          sub_EC5B50(v25);
          operator delete(v25, 8u);
        }
      }
      else if ( (int)sub_EEB7E0(*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL) >= 0 && (!*a3 || !sub_EC5B90(*a3, v30)) )
      {
        return v7;
      }
    }
    v7 += 16;
    goto LABEL_48;
  }
  if ( v6 == 3 )
  {
    v28 = *(_DWORD *)v7 & 3 | (4 * (*(_QWORD *)(v7 + 8) & 3));
    if ( (unsigned int)v28 > 5 && v28 <= 8 )
    {
      v33 = (_WORD *)(*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (*v33 & 0x1FF) == 0x8B )
      {
        v34 = operator new(8u);
        sub_EC9790(v34, v33);
        v35 = (void *)*a3;
        *a3 = v34;
        if ( v35 )
        {
          sub_EC5B50(v35);
          operator delete(v35, 8u);
        }
      }
      else if ( (int)sub_EEB7E0(*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL) >= 0 && (!*a3 || !sub_EC5B90(*a3, v33)) )
      {
        return v7;
      }
    }
    v7 += 16;
    goto LABEL_58;
  }
  if ( v6 != 1 )
    return a2;
LABEL_48:
  v26 = *(_DWORD *)v7 & 3 | (4 * (*(_QWORD *)(v7 + 8) & 3));
  if ( v26 > 8 || (unsigned int)v26 <= 5 )
    return a2;
  v27 = (_WORD *)(*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*v27 & 0x1FF) == 0x8B )
  {
    v31 = operator new(8u);
    sub_EC9790(v31, v27);
    v32 = (void *)*a3;
    *a3 = v31;
    if ( v32 )
    {
      sub_EC5B50(v32);
      operator delete(v32, 8u);
    }
    return a2;
  }
  if ( (int)sub_EEB7E0(*(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCLL) < 0 || *a3 && sub_EC5B90(*a3, v27) )
    return a2;
  return v7;
}
