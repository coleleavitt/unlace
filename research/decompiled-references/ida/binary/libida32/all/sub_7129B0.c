__int64 __fastcall sub_7129B0(_QWORD *a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
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
  char v16; // [rsp+0h] [rbp-98h]
  int v17; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v18; // [rsp+24h] [rbp-74h] BYREF
  const char *v19; // [rsp+28h] [rbp-70h] BYREF
  __m128i v20; // [rsp+30h] [rbp-68h] BYREF
  __int128 v21; // [rsp+40h] [rbp-58h] BYREF
  char v22; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v6 = a2[1];
  v23 = __readfsqword(0x28u);
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
  v10 = &v21;
  v21 = 0;
  if ( (unsigned int)qsscanf((int)v7, (int)"%llu %lld %n", (int)&v20, (int)&v20.m128i_i32[2], (int)&v17, a6, v16) == 2 )
  {
    v18 = 0;
    for ( i = &v7[v17];
          (unsigned int)qsscanf((int)i, (int)"%02X", (int)&v18, v11, v12, v13, v16) == 1 && v18 <= 0xFF;
          i += 2 )
    {
      *(_BYTE *)v10 = v18;
      v10 = (__int128 *)((char *)v10 + 1);
      if ( &v22 == (char *)v10 )
      {
        v7 = v9 + 1;
        v19 = i + 3;
        sub_7126D0(a1, &v19, &v20);
        if ( (unsigned __int64)(v9 + 1) < v8 )
          goto LABEL_2;
        return 1;
      }
    }
  }
  return 0;
}

