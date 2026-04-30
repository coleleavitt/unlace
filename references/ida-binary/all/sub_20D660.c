unsigned __int64 __fastcall sub_20D660(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // r10
  __int64 v5; // r9
  int v6; // r11d
  int v7; // eax
  char *v8; // r12
  int v9; // edx
  __int64 v11; // rsi
  __int64 v12; // rdx
  char *v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // [rsp+0h] [rbp-78h] BYREF
  __int64 v16; // [rsp+8h] [rbp-70h]
  int v17; // [rsp+10h] [rbp-68h]
  int v18; // [rsp+20h] [rbp-58h] BYREF
  __int128 v19; // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+38h] [rbp-40h]
  unsigned __int64 v21; // [rsp+48h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v15 = a1;
  v16 = 0;
  v17 = 0;
  if ( a1 )
  {
    v4 = a3;
    v5 = *(int *)(dbg + 64LL);
    v6 = *(_DWORD *)(dbg + 64LL);
    if ( a2 <= (int)v5 )
      v6 = a2;
    v7 = 0;
    while ( v7 < v6 )
    {
      sub_20D150((__int64)&v15);
      v7 = v16;
      if ( (int)v16 < 0 )
        return v21 - __readfsqword(0x28u);
    }
    if ( (int)v5 > (int)v16 )
    {
      v8 = (char *)(a1[3] + 32LL * SHIDWORD(v16));
      if ( a1[4] == v5 || (v9 = *(unsigned __int8 *)(*a1 + ((unsigned __int64)(int)v16 >> 3)), _bittest(&v9, v16 & 7)) )
      {
        sub_20BB80(a1[3] + 32LL * SHIDWORD(v16), v4);
      }
      else
      {
        v18 = -2;
        v20 = 0;
        v19 = 0;
        sub_20BB80((__int64)&v18, v4);
        v11 = a1[3];
        v12 = a1[4];
        v13 = &v8[-v11];
        if ( a1[5] < (unsigned __int64)(v12 + 1) )
        {
          v14 = qvector_reserve(a1 + 3, v11, v12 + 1, 32);
          a1[3] = v14;
          v12 = a1[4];
          v8 = &v13[v14];
        }
        memmove(v8 + 32, v8, 32 * v12 - (_QWORD)v13);
        *(_DWORD *)v8 = -2;
        *((_QWORD *)v8 + 3) = 0;
        *(_OWORD *)(v8 + 8) = 0;
        sub_20BB80((__int64)v8, (__int64)&v18);
        ++a1[4];
        if ( v18 >= -1 && (_QWORD)v19 )
        {
          *((_QWORD *)&v19 + 1) = 0;
          qfree(v19, (const char *)&v18);
        }
      }
      *(_BYTE *)(*a1 + ((unsigned __int64)(unsigned int)a2 >> 3)) |= 1 << (a2 & 7);
    }
  }
  return v21 - __readfsqword(0x28u);
}
