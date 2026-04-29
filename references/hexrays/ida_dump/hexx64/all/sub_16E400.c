__int64 __fastcall sub_16E400(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v4; // r13
  __int64 v6; // rax
  __int64 v7; // r15
  _DWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // r14d
  __int64 v12; // rdi
  __int64 v13; // r10
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  char v18; // al
  char v19; // al
  const char *v20; // [rsp+0h] [rbp-88h]
  unsigned __int8 *v21; // [rsp+0h] [rbp-88h]
  __int64 v22; // [rsp+8h] [rbp-80h]
  __int64 v23; // [rsp+8h] [rbp-80h]
  unsigned __int64 v24; // [rsp+10h] [rbp-78h] BYREF
  _QWORD *v25; // [rsp+18h] [rbp-70h] BYREF
  __int64 v26; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v28[11]; // [rsp+30h] [rbp-58h] BYREF

  v28[3] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 76) != 3 )
    return 0;
  if ( *(_DWORD *)(a2 + 352) != 1 )
    return 0;
  v4 = a1[7];
  v6 = sub_1229A0(*(_QWORD *)(a2 + 48));
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = (_DWORD *)sub_1229A0(*(_QWORD *)(v6 + 8));
  if ( v8 )
  {
    if ( *v8 != 55 )
      return 0;
  }
  if ( *(_DWORD *)v7 != 4 )
    return 0;
  if ( !(unsigned __int8)sub_11FD80((char *)(v7 + 32), &v24, 1u) )
    return 0;
  if ( v24 > 1 )
    return 0;
  if ( (unsigned int)sub_1399E0((__int64)a1, 0) )
    return 0;
  v9 = a1[8];
  v25 = a1;
  v26 = v4;
  v2 = sub_1297E0(v9, (__int64 *)&v25, &v26, v7 + 64);
  if ( !(_BYTE)v2 )
    return 0;
  v10 = v26;
  v11 = *(_DWORD *)v26;
  if ( *(_DWORD *)v26 != 13 )
  {
    if ( v11 != 4 )
      return 0;
    v12 = v26 + 32;
    if ( (unsigned __int8)sub_11FD80((char *)(v26 + 32), &v27, 1u) && v27 <= 1 && (v24 ^ 1) == v27 )
    {
      if ( *(_DWORD *)v4 == 42 )
      {
        if ( v24 )
          v11 = 6;
      }
      else
      {
        v11 = *(_DWORD *)v4 - 11;
        if ( v24 )
        {
          if ( *(_DWORD *)v4 == 15 )
          {
            v11 = 6;
          }
          else
          {
            v12 = v11;
            v11 = sub_32E9E0(v11);
          }
        }
      }
      *(_DWORD *)v4 = v11;
      *(_QWORD *)(v4 + 24) = *(_QWORD *)(v7 + 24);
      v20 = "RECOGNIZE_SETX";
      goto LABEL_24;
    }
    v10 = v26;
    if ( *(_DWORD *)v26 != 13 )
      return 0;
  }
  if ( !(unsigned __int8)sub_11FD80((char *)(v10 + 32), v28, 0) || v28[0] != 1 || v24 )
    return 0;
  v13 = v4 + 48;
  v14 = *(_QWORD *)(a1[60] + 112LL);
  if ( *(_DWORD *)v4 == 42 )
  {
    if ( *(_BYTE *)(v4 + 32) == 1 && !*(_DWORD *)(v4 + 40) )
    {
      if ( !sub_125B60((unsigned __int8 *)(v26 + 48), v26 + 64, 0) )
        return 0;
      v17 = *(_QWORD *)(v26 + 16);
      if ( !v17 )
        return 0;
      if ( *(_DWORD *)(v17 + 36) < *(_DWORD *)(v26 + 52) )
        return 0;
      v23 = *(_QWORD *)(v26 + 16);
      v21 = (unsigned __int8 *)(v17 + 32);
      if ( !sub_1255D0((unsigned __int8 *)(v17 + 32), v14, v26 + 48, 1u)
        || !sub_A2350(v23 + 48, 1, 0)
        || *(_BYTE *)(v23 + 64) != 1
        || *(_DWORD *)(v23 + 72) )
      {
        return 0;
      }
      sub_125180(v4 + 32, v21);
      v13 = v4 + 48;
    }
  }
  else if ( *(_DWORD *)v4 == 48 )
  {
    v18 = sub_A2350(v4 + 48, 1, 0);
    v13 = v4 + 48;
    if ( v18 )
    {
      if ( *(_DWORD *)(v26 + 52) > *(_DWORD *)(v4 + 36) )
        return 0;
      v19 = sub_1255D0((unsigned __int8 *)(v4 + 32), v14, v26 + 48, 1u);
      v13 = v4 + 48;
      if ( !v19 )
        return 0;
    }
  }
  *(_DWORD *)v4 = 33;
  v12 = v13;
  sub_120A10(v13, v14, 0, *(_DWORD *)(v4 + 36), **(_QWORD **)(v7 + 40), 0);
  v20 = "RECOGNIZE_SETZ";
LABEL_24:
  v15 = a1[8];
  v16 = *(unsigned int *)(v4 + 72);
  if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 64) )
    sub_167AF0(v12);
  v22 = *(_QWORD *)(*(_QWORD *)(v15 + 528) + 8 * v16);
  sub_123A40((__int64)v28, (unsigned __int8 *)(v26 + 64));
  sub_167DA0((__int64)a1, a2, v22, *(_DWORD *)v4, (__int64)v28, v7);
  sub_11CDA0((__int64)v28);
  if ( v25 == a1 )
    sub_11D5A0(v26);
  sub_66FA0(a1[8], 1u, (__int64)&unk_4190BD, v20);
  return v2;
}
