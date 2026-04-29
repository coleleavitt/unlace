bool __fastcall sub_192430(_QWORD *a1, _DWORD *a2, _BYTE *a3)
{
  __int64 v3; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[3] = __readfsqword(0x28u);
  if ( *a2 != 12 )
    return 0;
  v3 = *(_QWORD *)(a1[1] + 1504LL);
  if ( a2[9] != *(_DWORD *)(v3 + 84) )
    return 0;
  v5 = sub_1922B0((__int64)a1, (__int64)a2, a3);
  v9[1] = v6;
  v9[0] = v5;
  if ( !(_BYTE)v6 || (unsigned __int8)sub_32F7B0(v9, a1[1], a1 + 6, *(unsigned int *)(v3 + 84)) )
    return 0;
  v7 = (_QWORD *)a1[14];
  v8 = &v7[a1[15]];
  if ( v7 == v8 )
    return 1;
  while ( (_DWORD *)*v7 != a2 )
  {
    if ( v8 == ++v7 )
      return 1;
  }
  return v8 == v7;
}
