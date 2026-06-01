unsigned __int64 __fastcall sub_9E9E0(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  int v5; // r11d
  int v6; // eax
  char *v7; // r12
  int v8; // edx
  __int64 v10; // rdx
  char *v11; // r14
  __int64 v12; // rax
  _QWORD *v13; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+8h] [rbp-70h]
  int v15; // [rsp+10h] [rbp-68h]
  int v16; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  unsigned __int64 v19; // [rsp+48h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v13 = a1;
  v14 = 0;
  v15 = 0;
  if ( a1 )
  {
    v3 = a3;
    v4 = *(int *)(dbg + 64LL);
    v5 = *(_DWORD *)(dbg + 64LL);
    if ( a2 <= (int)v4 )
      v5 = a2;
    v6 = 0;
    while ( v6 < v5 )
    {
      sub_9E4D0((__int64)&v13);
      v6 = v14;
      if ( (int)v14 < 0 )
        return v19 - __readfsqword(0x28u);
    }
    if ( (int)v4 > (int)v14 )
    {
      v7 = (char *)(a1[3] + 32LL * SHIDWORD(v14));
      if ( a1[4] == v4 || (v8 = *(unsigned __int8 *)(*a1 + ((unsigned __int64)(int)v14 >> 3)), _bittest(&v8, v14 & 7)) )
      {
        sub_9CC30(a1[3] + 32LL * SHIDWORD(v14), v3);
      }
      else
      {
        v16 = -2;
        v18 = 0;
        v17 = 0;
        sub_9CC30((__int64)&v16, v3);
        v10 = a1[4];
        v11 = &v7[-a1[3]];
        if ( a1[5] < (unsigned __int64)(v10 + 1) )
        {
          v12 = qvector_reserve();
          a1[3] = v12;
          v10 = a1[4];
          v7 = &v11[v12];
        }
        memmove(v7 + 32, v7, 32 * v10 - (_QWORD)v11);
        *(_DWORD *)v7 = -2;
        *((_QWORD *)v7 + 3) = 0;
        *(_OWORD *)(v7 + 8) = 0;
        sub_9CC30((__int64)v7, (__int64)&v16);
        ++a1[4];
        if ( v16 >= -1 && (_QWORD)v17 )
        {
          *((_QWORD *)&v17 + 1) = 0;
          qfree();
        }
      }
      *(_BYTE *)(*a1 + ((unsigned __int64)(unsigned int)a2 >> 3)) |= 1 << (a2 & 7);
    }
  }
  return v19 - __readfsqword(0x28u);
}

