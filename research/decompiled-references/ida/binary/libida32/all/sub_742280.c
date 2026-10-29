__int64 __fastcall sub_742280(int *a1, __int64 a2, __int64 a3, char *a4, __int64 a5)
{
  char *v5; // rbx
  char v6; // r14
  char *v7; // r15
  __int64 result; // rax
  char *v10; // rdi
  __int64 v11; // rdx
  char *v12; // rcx
  __int64 v13; // r8
  char *v14; // r13
  __int64 v15; // rsi
  int *v16; // rdi
  __int64 v17; // rdx
  unsigned int *v18; // rcx
  char *v19; // rdi
  char v20; // al
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r8
  unsigned int v26; // eax
  int v27; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v5 = qword_2CAA5C0;
  if ( *qword_2CAA5C0 != 95 )
    return 0;
  v6 = qword_2CAA5C0[1];
  v7 = qword_2CAA5C0 + 1;
  if ( v6 == 36 || v6 == 46 )
  {
    result = 0;
    if ( qword_2CAA5C0[2] != 95 )
      return result;
    qword_2CAA5C0 += 3;
    dword_2CAA5C8 |= 0x300000u;
    return 1;
  }
  if ( v6 != 95 )
  {
    if ( v6 == 118 )
    {
      result = 0;
      if ( qword_2CAA5C0[2] == 116 )
      {
        a3 = (unsigned __int8)qword_2CAA5C0[3];
        if ( (_BYTE)a3 == 36 || (_BYTE)a3 == 46 )
          goto LABEL_21;
      }
      return result;
    }
    v10 = qword_2CAA5C0 + 1;
    v14 = strpbrk(qword_2CAA5C0 + 1, "$.");
    if ( v14 )
    {
      if ( v6 == 81 )
      {
        qword_2CAA5C0 = v5 + 2;
        v15 = (__int64)&v27;
        v16 = a1;
        v27 = sub_741B90(nullptr, 1, v11, v12, v13);
        sub_7506B0(a1, &v27);
LABEL_17:
        if ( qword_2CAA5C0 != v14 )
          goto LABEL_53;
        qword_2CAA5C0 = v14 + 1;
        sub_750270(a1, 14906);
        dword_2CAA5C8 |= 0x80u;
        sub_74EA60(a1);
        return 1;
      }
      if ( v6 == 116 )
      {
        qword_2CAA5C0 = v5 + 2;
        v15 = (__int64)&v27;
        v16 = a1;
        v27 = sub_741790(nullptr, (__int64)"$.", v11, (__int64)v12, v13);
        sub_7506B0(a1, &v27);
        goto LABEL_17;
      }
      if ( (unsigned __int8)(v6 - 48) <= 9u )
      {
        qword_2CAA5C0 = v5 + 1;
        v26 = sub_74E4D0(v10, "$.", v11, v12, v13);
        v16 = a1;
        v15 = v26;
        sub_74EA60(a1);
        goto LABEL_17;
      }
    }
    return 0;
  }
  v7 = qword_2CAA5C0 + 2;
  if ( qword_2CAA5C0[2] != 118 )
  {
    if ( (unsigned int)(qword_2CAA5B8 - (_DWORD)v7) > 5
      && *(_DWORD *)(qword_2CAA5C0 + 2) == 1853188212
      && *((_WORD *)qword_2CAA5C0 + 3) == 24427 )
    {
      qword_2CAA5C0 += 8;
      sub_74F560(&v27, "`[thunk(-", 9);
      sub_7506B0(a1, &v27);
      dword_2CAA5C8 |= 0x1000001u;
      sub_74E4D0(a1, &v27, v22, v23, v24);
      v27 = 0;
      sub_74EA60(&v27);
      if ( byte_2CAA5A1 > 0 )
        sub_750840(&v27);
      sub_7506B0(a1, &v27);
      ++qword_2CAA5C0;
      sub_74F810(&v27, 2579753, 3);
      v15 = (__int64)&v27;
      sub_7506B0(a1, &v27);
      v16 = nullptr;
      v27 = sub_73FB40(0);
      if ( *qword_2CAA5C0 )
      {
        v15 = 1;
        v16 = &v27;
        sub_741D90((__int64)&v27, (int *)((char *)&dword_0 + 1), v17, v18, v25);
        if ( (_WORD)v27 && !*qword_2CAA5C0 )
          goto LABEL_40;
      }
      else if ( (_WORD)v27 )
      {
LABEL_40:
        sub_7506B0(a1, &v27);
        return 1;
      }
LABEL_53:
      sub_74E200(v16, v15, v17, v18);
    }
    return 0;
  }
  result = 0;
  if ( qword_2CAA5C0[3] == 116 && qword_2CAA5C0[4] == 95 )
  {
LABEL_21:
    v19 = v7 + 3;
    qword_2CAA5C0 = v7 + 3;
    if ( !v7[3] )
    {
LABEL_48:
      sub_750270(a1, 14906);
      sub_74F560(&v27, "`vtbl'", 6);
      sub_7506B0(a1, &v27);
      dword_2CAA5C8 |= 0xA0u;
      return 1;
    }
    while ( 1 )
    {
      qword_2CAA5C0 = v19 + 1;
      v20 = *v19;
      if ( *v19 == 81 )
      {
        a2 = (__int64)&v27;
        v27 = sub_741B90(nullptr, 1, a3, a4, a5);
        sub_7506B0(a1, &v27);
      }
      else if ( v20 <= 81 )
      {
        if ( v20 != 36 && v20 != 46 )
        {
LABEL_25:
          qword_2CAA5C0 = v19;
          if ( (unsigned __int8)(*v19 - 48) > 9u )
            a2 = (unsigned int)strcspn(v19, "$.");
          else
            a2 = (unsigned int)sub_74E4D0(v19, a2, a3, a4, a5);
          sub_74EA60(a1);
          goto LABEL_28;
        }
        a2 = 14906;
        sub_750270(a1, 14906);
      }
      else
      {
        if ( v20 != 116 )
          goto LABEL_25;
        v21 = sub_741790(nullptr, a2, a3, (__int64)a4, a5);
        a2 = (__int64)&v27;
        v27 = v21;
        sub_7506B0(a1, &v27);
      }
LABEL_28:
      v19 = qword_2CAA5C0;
      if ( !*qword_2CAA5C0 )
        goto LABEL_48;
    }
  }
  return result;
}

