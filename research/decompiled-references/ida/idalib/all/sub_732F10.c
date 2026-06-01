__int64 __fastcall sub_732F10(_QWORD *a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int64 v6; // rbx
  _BYTE *v7; // rbp
  unsigned __int64 v8; // rbx
  _BYTE *v9; // r14
  __int128 *v10; // r12
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  _BYTE *i; // r15
  int v16; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v17; // [rsp+24h] [rbp-74h] BYREF
  const char *v18; // [rsp+28h] [rbp-70h] BYREF
  __m128i v19; // [rsp+30h] [rbp-68h] BYREF
  __int128 v20; // [rsp+40h] [rbp-58h] BYREF
  char v21; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-40h]

  v6 = a2[1];
  v22 = __readfsqword(0x28u);
  v7 = (_BYTE *)*a2;
  v8 = *a2 + v6;
  if ( *a2 >= v8 )
    return 1;
LABEL_2:
  v9 = v7;
  while ( *v9 != 10 )
  {
    if ( (_BYTE *)v8 == ++v9 )
      return 1;
  }
  if ( (_BYTE *)v8 == v9 )
    return 1;
  *v9 = 0;
  v10 = &v20;
  v20 = 0;
  if ( (unsigned int)qsscanf(
                       (_DWORD)v7,
                       (unsigned int)"%llu %lld %n",
                       (unsigned int)&v19,
                       (unsigned int)&v19.m128i_u32[2],
                       (unsigned int)&v16,
                       a6) == 2 )
  {
    v17 = 0;
    for ( i = &v7[v16];
          (unsigned int)qsscanf((_DWORD)i, (unsigned int)"%02X", (unsigned int)&v17, v11, v12, v13) == 1 && v17 <= 0xFF;
          i += 2 )
    {
      *(_BYTE *)v10 = v17;
      v10 = (__int128 *)((char *)v10 + 1);
      if ( &v21 == (char *)v10 )
      {
        v7 = v9 + 1;
        v18 = i + 3;
        sub_732C30(a1, &v18, &v19);
        if ( (unsigned __int64)(v9 + 1) < v8 )
          goto LABEL_2;
        return 1;
      }
    }
  }
  return 0;
}
