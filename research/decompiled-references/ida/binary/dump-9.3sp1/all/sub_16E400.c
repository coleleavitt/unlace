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
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  char v19; // al
  char v20; // al
  const char *v21; // [rsp+0h] [rbp-88h]
  unsigned __int8 *v22; // [rsp+0h] [rbp-88h]
  __int64 v23; // [rsp+8h] [rbp-80h]
  __int64 v24; // [rsp+8h] [rbp-80h]
  unsigned __int64 v25; // [rsp+10h] [rbp-78h] BYREF
  _QWORD *v26; // [rsp+18h] [rbp-70h] BYREF
  __int64 v27; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v29[11]; // [rsp+30h] [rbp-58h] BYREF

  v29[3] = __readfsqword(0x28u);
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
  if ( !(unsigned __int8)sub_11FD80((char *)(v7 + 32), &v25, 1u) )
    return 0;
  if ( v25 > 1 )
    return 0;
  if ( (unsigned int)sub_1399E0((__int64)a1, 0) )
    return 0;
  v9 = a1[8];
  v26 = a1;
  v27 = v4;
  v2 = sub_1297E0(v9, (__int64 *)&v26, &v27, v7 + 64);
  if ( !(_BYTE)v2 )
    return 0;
  v10 = v27;
  v11 = *(_DWORD *)v27;
  if ( *(_DWORD *)v27 != 13 )
  {
    if ( v11 != 4 )
      return 0;
    v12 = v27 + 32;
    if ( (unsigned __int8)sub_11FD80((char *)(v27 + 32), &v28, 1u) )
    {
      v13 = v28;
      if ( v28 <= 1 && (v25 ^ 1) == v28 )
      {
        if ( *(_DWORD *)v4 == 42 )
        {
          if ( v25 )
            v11 = 6;
        }
        else
        {
          v11 = *(_DWORD *)v4 - 11;
          if ( v25 )
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
        v21 = "RECOGNIZE_SETX";
        goto LABEL_24;
      }
    }
    v10 = v27;
    if ( *(_DWORD *)v27 != 13 )
      return 0;
  }
  if ( !(unsigned __int8)sub_11FD80((char *)(v10 + 32), v29, 0) || v29[0] != 1 || v25 )
    return 0;
  v14 = v4 + 48;
  v15 = *(_QWORD *)(a1[60] + 112LL);
  if ( *(_DWORD *)v4 == 42 )
  {
    if ( *(_BYTE *)(v4 + 32) == 1 && !*(_DWORD *)(v4 + 40) )
    {
      if ( !sub_125B60((unsigned __int8 *)(v27 + 48), v27 + 64, 0) )
        return 0;
      v18 = *(_QWORD *)(v27 + 16);
      if ( !v18 )
        return 0;
      if ( *(_DWORD *)(v18 + 36) < *(_DWORD *)(v27 + 52) )
        return 0;
      v24 = *(_QWORD *)(v27 + 16);
      v22 = (unsigned __int8 *)(v18 + 32);
      if ( !sub_1255D0((unsigned __int8 *)(v18 + 32), v15, v27 + 48, 1)
        || !sub_A2350(v24 + 48, 1, 0)
        || *(_BYTE *)(v24 + 64) != 1
        || *(_DWORD *)(v24 + 72) )
      {
        return 0;
      }
      sub_125180(v4 + 32, v22);
      v14 = v4 + 48;
    }
  }
  else if ( *(_DWORD *)v4 == 48 )
  {
    v19 = sub_A2350(v4 + 48, 1, 0);
    v14 = v4 + 48;
    if ( v19 )
    {
      if ( *(_DWORD *)(v27 + 52) > *(_DWORD *)(v4 + 36) )
        return 0;
      v20 = sub_1255D0((unsigned __int8 *)(v4 + 32), v15, v27 + 48, 1);
      v14 = v4 + 48;
      if ( !v20 )
        return 0;
    }
  }
  *(_DWORD *)v4 = 33;
  v12 = v14;
  sub_120A10(v14, v15, 0, *(_DWORD *)(v4 + 36), **(_QWORD **)(v7 + 40), 0);
  v21 = "RECOGNIZE_SETZ";
LABEL_24:
  v16 = a1[8];
  v17 = *(unsigned int *)(v4 + 72);
  if ( (unsigned int)v17 >= *(_DWORD *)(v16 + 64) )
    sub_167AF0(v12);
  v23 = *(_QWORD *)(*(_QWORD *)(v16 + 528) + 8 * v17);
  sub_123A40((__int64)v29, (unsigned __int8 *)(v27 + 64), v23, v13);
  sub_167DA0((__int64)a1, a2, v23, *(_DWORD *)v4, (__int64)v29, v7);
  sub_11CDA0((__int64)v29);
  if ( v26 == a1 )
    sub_11D5A0(v27);
  sub_66FA0(a1[8], 1u, (__int64)&unk_4190BD, v21);
  return v2;
}
