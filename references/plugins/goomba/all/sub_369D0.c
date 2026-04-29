unsigned __int64 __fastcall sub_369D0(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rbx
  char v3; // al
  _DWORD *v4; // r12
  _DWORD *v6; // r15
  __int64 v7; // r13
  _DWORD *v8; // r14
  _DWORD *v9; // r13
  void (__fastcall *hexdsp)(__int64, _DWORD *, int *); // rax
  void (__fastcall *v11)(__int64, int *); // rax
  void (__fastcall *v12)(__int64, _DWORD *, int *); // rax
  void (__fastcall *v13)(__int64, int *); // rax
  int v14; // [rsp+0h] [rbp-58h] BYREF
  int v15; // [rsp+4h] [rbp-54h]
  _DWORD *v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v2 = a2;
  if ( *a2 != 14 )
    goto LABEL_6;
  while ( 1 )
  {
    v3 = *((_BYTE *)v2 + 48);
    if ( *((_BYTE *)v2 + 32) == 4 )
      break;
    if ( v3 != 4 )
      return v17 - __readfsqword(0x28u);
    v4 = *((_DWORD **)v2 + 7);
    if ( (unsigned int)(*v4 - 12) <= 1 )
      goto LABEL_13;
LABEL_5:
    v2 = *((_DWORD **)v2 + 7);
    if ( *v2 != 14 )
    {
LABEL_6:
      if ( *((_BYTE *)v2 + 32) != 4 )
        goto LABEL_7;
LABEL_15:
      v4 = *((_DWORD **)v2 + 5);
LABEL_11:
      sub_369D0(a1, v4);
      goto LABEL_7;
    }
  }
  if ( v3 == 4 )
  {
    v4 = *((_DWORD **)v2 + 7);
    if ( (unsigned int)(*v4 - 12) <= 1 )
    {
LABEL_13:
      v6 = v2 + 8;
      v7 = (__int64)(v2 + 8);
      goto LABEL_14;
    }
  }
  v4 = *((_DWORD **)v2 + 5);
  if ( (unsigned int)(*v4 - 12) > 1 )
    goto LABEL_11;
  v7 = (__int64)(v2 + 12);
  v6 = v2 + 8;
LABEL_14:
  v8 = sub_36550(a1, 14, (__int64)(v4 + 8), v7);
  v9 = sub_36550(a1, 14, (__int64)(v4 + 12), v7);
  *v2 = *v4;
  v14 = 4;
  v16 = v8;
  v15 = v8[17];
  hexdsp = (void (__fastcall *)(__int64, _DWORD *, int *))get_hexdsp(a1, 14);
  hexdsp(274, v6, &v14);
  v11 = (void (__fastcall *)(__int64, int *))get_hexdsp(274, v6);
  v11(276, &v14);
  v16 = v9;
  v14 = 4;
  v15 = v9[17];
  v12 = (void (__fastcall *)(__int64, _DWORD *, int *))get_hexdsp(276, &v14);
  v12(274, v2 + 12, &v14);
  v13 = (void (__fastcall *)(__int64, int *))get_hexdsp(274, v2 + 12);
  v13(276, &v14);
  if ( *((_BYTE *)v2 + 32) == 4 )
    goto LABEL_15;
LABEL_7:
  if ( *((_BYTE *)v2 + 48) == 4 )
    goto LABEL_5;
  return v17 - __readfsqword(0x28u);
}
