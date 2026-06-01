unsigned __int64 __fastcall sub_B19C0(unsigned int *a1)
{
  bool v1; // zf
  unsigned int v3; // r14d
  int *v4; // rbx
  int *v5; // r15
  unsigned int v6; // eax
  __int64 v7; // rdx
  bool v8; // al
  __int64 v9; // rdi
  unsigned int v10; // ebx
  char v11; // al
  int v13; // esi
  unsigned int v14; // eax
  int v15; // eax
  int v16; // ebx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 i; // rax
  __int64 v23; // rsi
  __int64 v24; // rcx
  void *v25; // rax
  char v26; // al
  int v27; // esi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+4h] [rbp-94h] BYREF
  int v31; // [rsp+10h] [rbp-88h] BYREF
  __int64 v32; // [rsp+18h] [rbp-80h]
  __int128 v33; // [rsp+20h] [rbp-78h]
  int v34; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+38h] [rbp-60h]
  __int128 v36; // [rsp+40h] [rbp-58h]
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v1 = *((_QWORD *)a1 + 27) == 0;
  v37 = __readfsqword(0x28u);
  if ( v1 && (int)sub_D3340(a1, 4105) <= 0 )
    return v37 - __readfsqword(0x28u);
  *((_BYTE *)a1 + 156) = 0;
  v3 = *(_DWORD *)(sub_D1220(&qword_2511A0) + 8);
  if ( (dword_2440D8 & 3) != 0 && v3 != -1 )
  {
    *((_BYTE *)a1 + 154) = sub_D1160(&qword_2511A0);
    *((_BYTE *)a1 + 155) = sub_D11C0(&qword_2511A0);
    if ( (unsigned __int8)sub_D1290(&qword_2511A0) )
    {
      v15 = sub_D0380(*a1);
      v16 = v15;
      if ( v15 != -1 )
      {
        LODWORD(v30) = v15;
        v17 = *((_QWORD *)a1 + 15);
        v18 = *((_QWORD *)a1 + 16);
        WORD2(v30) = 0;
        v19 = *((_QWORD *)a1 + 17);
        v20 = v18 + 1;
        if ( (unsigned __int64)&v30 < v17 || (unsigned __int64)&v30 >= v17 + 8 * v19 )
        {
          if ( v19 < v20 )
          {
            v28 = qvector_reserve();
            *((_QWORD *)a1 + 15) = v28;
            v17 = v28;
            v18 = *((_QWORD *)a1 + 16);
          }
          *(_QWORD *)(v17 + 8 * v18) = v30;
        }
        else
        {
          if ( v19 < v20 )
          {
            v29 = qvector_reserve();
            *((_QWORD *)a1 + 15) = v29;
            v17 = v29;
            v18 = *((_QWORD *)a1 + 16);
          }
          v21 = v17 + 8 * v18;
          *(_DWORD *)v21 = v16;
          *(_WORD *)(v21 + 4) = 0;
        }
        ++*((_QWORD *)a1 + 16);
      }
    }
    else
    {
      v26 = sub_D10D0(&qword_2511A0);
      *((_BYTE *)a1 + 156) = v26;
      if ( v26 )
        sub_A2300();
      else
        sub_A99E0((__int64)a1);
    }
  }
  if ( qword_250A30 )
  {
    v4 = (int *)qword_250A30;
    v5 = &dword_250A28;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = v4[8];
        if ( v6 >= v3 )
          break;
        v4 = *((int **)v4 + 3);
        if ( !v4 )
          goto LABEL_10;
      }
      v7 = *((_QWORD *)v4 + 2);
      if ( v3 >= v6 )
        break;
      v5 = v4;
      v4 = *((int **)v4 + 2);
      if ( !v7 )
      {
LABEL_10:
        v8 = v5 == &dword_250A28;
        goto LABEL_11;
      }
    }
    for ( i = *((_QWORD *)v4 + 3); i; i = *(_QWORD *)(i + 24) )
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)(i + 16);
        if ( v3 >= *(_DWORD *)(i + 32) )
          break;
        v5 = (int *)i;
        i = *(_QWORD *)(i + 16);
        if ( !v23 )
          goto LABEL_45;
      }
    }
LABEL_45:
    while ( v7 )
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)(v7 + 16);
        if ( *(_DWORD *)(v7 + 32) < v3 )
          break;
        v4 = (int *)v7;
        v7 = *(_QWORD *)(v7 + 16);
        if ( !v24 )
          goto LABEL_48;
      }
      v7 = *(_QWORD *)(v7 + 24);
    }
LABEL_48:
    if ( (int *)qword_250A38 != v4 )
      goto LABEL_52;
    if ( v5 != &dword_250A28 )
    {
      while ( v4 != v5 )
      {
        v4 = (int *)std::_Rb_tree_increment();
        v25 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v25, 0x28u);
        --qword_250A48;
LABEL_52:
        ;
      }
      goto LABEL_14;
    }
LABEL_13:
    sub_9C640(qword_250A30);
    qword_250A38 = (__int64)&dword_250A28;
    qword_250A30 = nullptr;
    qword_250A40 = (__int64)&dword_250A28;
    qword_250A48 = 0;
    goto LABEL_14;
  }
  v8 = 1;
  v5 = &dword_250A28;
LABEL_11:
  if ( (int *)qword_250A38 == v5 && v8 )
    goto LABEL_13;
LABEL_14:
  v9 = *a1;
  v33 = 0;
  v31 = -2;
  v32 = 0xFFFFFFFFLL;
  sub_CE8E0(v9, (unsigned int)dword_24411C, &v31);
  if ( v32 == 0xFFFFFFFFLL || (*((_BYTE *)a1 + 153) & 2) == 0 )
    goto LABEL_16;
  v13 = *a1;
  v35 = 0xFFFFFFFFLL;
  v34 = -2;
  v36 = 0;
  sub_A0B20((__int64)xmmword_250E60, v13, dword_24411C, (__int64)&v34);
  v14 = v35;
  if ( v35 == 0xFFFFFFFFLL )
  {
    sub_B0AC0(xmmword_250E60, (signed int *)a1, 0xFFFFFFFF, 0);
    v14 = v32;
    if ( (*((_BYTE *)a1 + 153) & 2) == 0 )
      goto LABEL_28;
    goto LABEL_62;
  }
  if ( *a1 != dword_250A78 )
  {
    if ( (*((_BYTE *)a1 + 153) & 2) == 0 )
    {
LABEL_28:
      a1[41] = v14;
      goto LABEL_29;
    }
LABEL_62:
    a1[40] = v14;
  }
LABEL_29:
  if ( v34 >= -1 && v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree();
  }
LABEL_16:
  v10 = sub_D0EB0(&qword_2511A0);
  v11 = *((_BYTE *)a1 + 153);
  if ( (v11 & 4) != 0 && (dword_2440D8 & 4) != 0 )
  {
    if ( !(unsigned __int8)sub_D1290(&qword_2511A0) )
    {
      if ( (unsigned __int8)xrefblk_t_first_from() )
      {
        v27 = HIDWORD(v30);
        if ( (unsigned __int8)sub_A1A40((__int64)xmmword_250E60, HIDWORD(v30)) )
          sub_A2E50(a1, v27);
      }
    }
    if ( (*((_BYTE *)a1 + 153) & 0xA) == 0 )
      goto LABEL_19;
    goto LABEL_23;
  }
  if ( (v11 & 0xA) != 0 )
  {
LABEL_23:
    if ( (dword_2440D8 & 8) != 0 )
      sub_A2F40(a1, v10);
  }
LABEL_19:
  if ( v31 >= -1 && v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  return v37 - __readfsqword(0x28u);
}

