__int64 __fastcall sub_93850(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6, int a7, __int64 a8)
{
  _DWORD *v8; // r15
  _DWORD *v9; // r12
  int v10; // eax
  int v11; // edx
  unsigned int v13; // r14d
  _DWORD *v15; // rdx
  char v16; // al
  _DWORD *v17; // rcx
  _DWORD *v18; // r8
  _DWORD *v19; // r14
  __int64 v20; // r15
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // rdx
  _DWORD *v24; // [rsp+0h] [rbp-88h]
  __int64 v25; // [rsp+0h] [rbp-88h]
  int v26; // [rsp+Ch] [rbp-7Ch]
  _DWORD *v27; // [rsp+10h] [rbp-78h]
  _BYTE v28[16]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v29[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = a5;
  v9 = a3;
  v10 = *a5;
  v11 = *a3;
  v29[3] = __readfsqword(0x28u);
  if ( v10 == a6 )
  {
    v22 = *a4;
    if ( *a4 == a6 )
    {
      v22 = v11;
    }
    else
    {
      if ( a6 != v11 )
        return 0;
      v23 = v9;
      v9 = a4;
      a4 = v23;
    }
    if ( a7 != v22 )
      return 0;
  }
  else
  {
    if ( a6 != v11 )
      return 0;
    if ( *a4 != a6 )
      return 0;
    v15 = v9;
    v9 = a5;
    v8 = v15;
    if ( a7 != v10 )
      return 0;
  }
  v24 = a4;
  v16 = sub_125B60(v9 + 8, a4 + 8, 0);
  v17 = v24;
  if ( !v16 )
  {
    if ( (unsigned __int8)sub_125B60(v9 + 8, v8 + 8, 0) )
    {
      v17 = v8;
      v8 = v24;
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  if ( *((_BYTE *)v9 + 48) != 4 )
    return 0;
  v18 = *((_DWORD **)v9 + 7);
  if ( *v18 != 13 )
    return 0;
  if ( *((_BYTE *)v17 + 48) != 4 )
    return 0;
  v19 = *((_DWORD **)v17 + 7);
  if ( *v19 != 13 )
    return 0;
  v27 = v17;
  v26 = v9[9];
  v25 = *((_QWORD *)v9 + 7);
  if ( !(unsigned __int8)sub_11FD80(v18 + 8, v29, 1) )
    return 0;
  if ( 8 * v26 != v29[0] )
    return 0;
  if ( !(unsigned __int8)sub_11FD80(v19 + 12, v29, 1) )
    return 0;
  if ( 8 * v26 != v29[0] )
    return 0;
  if ( !(unsigned __int8)sub_125B60(v25 + 48, v8 + 12, 0) )
    return 0;
  v13 = sub_125B60(v25 + 48, v19 + 8, 0);
  if ( !(_BYTE)v13 )
    return 0;
  sub_123A40(v28, v8 + 12);
  sub_123A40(v29, v27 + 8);
  if ( a6 == 22 )
    sub_1571F0(a1, a2, v29, a2, v8 + 8, 0);
  else
    sub_157210(a1, a2, v8 + 8, a2, v29, 0);
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  sub_11CA10(a2 + 8, v29);
  sub_11CA10(a2 + 12, v28);
  v21 = a2[9];
  *a2 = a6;
  a2[17] = v21;
  sub_12B6F0(a2, v20, (unsigned int)a8, 0xFFFFFFFFLL, 1);
  a2[17] = v26;
  sub_11CDA0(v29);
  sub_11CDA0(v28);
  return v13;
}
