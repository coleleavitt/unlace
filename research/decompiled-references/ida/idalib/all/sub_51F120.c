unsigned __int64 __fastcall sub_51F120(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  int v10; // r15d
  int v11; // eax
  unsigned int v12; // ebp
  __int64 v13; // rbx
  int i; // r12d
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+18h] [rbp-1C0h]
  __int64 v22; // [rsp+28h] [rbp-1B0h] BYREF
  void *v23; // [rsp+30h] [rbp-1A8h] BYREF
  __int128 v24; // [rsp+38h] [rbp-1A0h]
  void *ptr; // [rsp+50h] [rbp-188h] BYREF
  __int128 v26; // [rsp+58h] [rbp-180h]
  __int128 v27; // [rsp+70h] [rbp-168h] BYREF
  _BYTE v28[264]; // [rsp+90h] [rbp-148h] BYREF
  unsigned __int64 v29; // [rsp+198h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 1768);
  v29 = __readfsqword(0x28u);
  v21 = v4;
  v22 = *(_QWORD *)(v4 + 64);
  if ( (unsigned __int8)sub_7BE6E0(a2, &v22) )
  {
    v23 = nullptr;
    v24 = 0;
    sub_7BF130(&v22, a2, &v23);
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
    sub_35A790((char **)v9);
    v10 = *(_DWORD *)(a2 + 996);
    if ( v10 <= *(_DWORD *)(a2 + 1000) )
    {
      LOBYTE(v11) = *(_DWORD *)(a2 + 996);
      while ( 1 )
      {
        v26 = 0;
        ptr = nullptr;
        v12 = (unsigned __int8)(v10 - v11 + 97);
        v13 = sub_7BEB80(&v22, a2, (unsigned __int8)(v10 - v11 + 97));
        for ( i = 3; v13 != -1; v13 = sub_7BEBF0(&v22, a2, v13, v12) )
        {
          if ( !--i )
            break;
          v15 = sub_7BE950(&v22, a2, v13, v28, 256, v12);
          if ( v15 > 0 )
          {
            v27 = 0;
            (*(void (__fastcall **)(__int128 *, _BYTE *, _BYTE *))(v21 + 80))(&v27, v28, &v28[v15]);
            sub_35A910((__int64 *)&ptr);
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
        sub_35A790((char **)v18);
        if ( ptr )
        {
          *(_QWORD *)&v26 = 0;
          qfree(ptr);
        }
        if ( *(_DWORD *)(a2 + 1000) < ++v10 )
          break;
        v11 = *(_DWORD *)(a2 + 996);
      }
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23);
    }
  }
  return v29 - __readfsqword(0x28u);
}
