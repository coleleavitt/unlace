unsigned __int64 __fastcall sub_507160(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  int v10; // r15d
  int v11; // eax
  unsigned int v12; // ebp
  unsigned int v13; // ebx
  int i; // r12d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+18h] [rbp-1B0h]
  int v22; // [rsp+2Ch] [rbp-19Ch] BYREF
  __int64 v23; // [rsp+30h] [rbp-198h] BYREF
  void *v24; // [rsp+40h] [rbp-188h] BYREF
  __int128 v25; // [rsp+48h] [rbp-180h]
  void *ptr; // [rsp+60h] [rbp-168h] BYREF
  __int128 v27; // [rsp+68h] [rbp-160h]
  _BYTE v28[264]; // [rsp+80h] [rbp-148h] BYREF
  unsigned __int64 v29; // [rsp+188h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 1576);
  v29 = __readfsqword(0x28u);
  v21 = v4;
  v22 = *(_DWORD *)(v4 + 64);
  if ( (unsigned __int8)sub_79B370(a2, &v22) )
  {
    v24 = nullptr;
    v25 = 0;
    sub_79BD30(&v22, a2, &v24);
    v7 = a3[1];
    v8 = *a3;
    if ( a3[2] < (unsigned __int64)(v7 + 1) )
    {
      v20 = qvector_reserve(a3, v8, v7 + 1, 24);
      *a3 = v20;
      v7 = a3[1];
      v8 = v20;
    }
    v9 = v8 + 24 * v7;
    *(_QWORD *)v9 = 0;
    *(_OWORD *)(v9 + 8) = 0;
    ++a3[1];
    sub_3573A0((char **)v9);
    v10 = *(_DWORD *)(a2 + 828);
    if ( v10 <= *(_DWORD *)(a2 + 832) )
    {
      LOBYTE(v11) = *(_DWORD *)(a2 + 828);
      while ( 1 )
      {
        v27 = 0;
        ptr = nullptr;
        v12 = (unsigned __int8)(v10 - v11 + 97);
        v13 = sub_79B7E0(&v22, a2, (unsigned __int8)(v10 - v11 + 97));
        for ( i = 3; v13 != -1; v13 = sub_79B840(&v22, a2, v13, v12) )
        {
          if ( !--i )
            break;
          v15 = sub_79B5C0(&v22, a2, v13, v28, 256, v12);
          if ( v15 > 0 )
          {
            v23 = 0;
            (*(void (__fastcall **)(__int64 *, _BYTE *, _BYTE *))(v21 + 72))(&v23, v28, &v28[v15]);
            sub_357520((__int64 *)&ptr);
          }
        }
        v16 = a3[1];
        v17 = *a3;
        if ( a3[2] < (unsigned __int64)(v16 + 1) )
        {
          v19 = qvector_reserve(a3, v17, v16 + 1, 24);
          *a3 = v19;
          v16 = a3[1];
          v17 = v19;
        }
        v18 = v17 + 24 * v16;
        *(_QWORD *)v18 = 0;
        *(_OWORD *)(v18 + 8) = 0;
        ++a3[1];
        sub_3573A0((char **)v18);
        if ( ptr )
        {
          *(_QWORD *)&v27 = 0;
          qfree(ptr);
        }
        if ( *(_DWORD *)(a2 + 832) < ++v10 )
          break;
        v11 = *(_DWORD *)(a2 + 828);
      }
    }
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v24);
    }
  }
  return v29 - __readfsqword(0x28u);
}

