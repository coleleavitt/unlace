__int64 __fastcall sub_9E7620(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r12d
  unsigned __int64 v7; // rdx
  __int64 v9; // r14
  void **v10; // rdi
  unsigned __int64 v11; // r8
  void **v12; // rax
  _QWORD *v13; // r9
  unsigned int v14; // edx
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  void *v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // [rsp+8h] [rbp-D0h]
  const char *v23; // [rsp+10h] [rbp-C8h] BYREF
  __int64 (__fastcall **v24)(); // [rsp+18h] [rbp-C0h]
  __m128 v25; // [rsp+20h] [rbp-B8h] BYREF
  unsigned int v26; // [rsp+30h] [rbp-A8h]
  int v27; // [rsp+34h] [rbp-A4h]
  void *v28[2]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v29[16]; // [rsp+50h] [rbp-88h] BYREF
  void **v30; // [rsp+60h] [rbp-78h] BYREF
  int v31; // [rsp+68h] [rbp-70h]
  __int128 v32; // [rsp+70h] [rbp-68h]
  __int64 v33; // [rsp+80h] [rbp-58h]
  char v34; // [rsp+88h] [rbp-50h]
  int v35; // [rsp+8Ch] [rbp-4Ch]
  void **v36; // [rsp+90h] [rbp-48h]

  v6 = *(_DWORD *)(a2 + 32);
  if ( v6 < a3 )
  {
    v9 = 0;
    if ( v6 )
      v9 = *(_QWORD *)(a2 + 24);
    v10 = *(void ***)(a2 + 16);
    v11 = *(_QWORD *)(a2 + 8);
    if ( (unsigned __int64)v10 >= v11 )
    {
      v30 = *(void ***)(a2 + 8);
      v16 = std::_V2::generic_category((std::_V2 *)v10);
      v10 = v28;
      sub_9E74D0(
        (__int64 *)v28,
        5u,
        v16,
        (__int64)"Unexpected end of file reading %u of %u bytes",
        (const double *)(a2 + 16));
      v17 = v28[0];
      if ( v28[0] )
      {
        *(_BYTE *)(a1 + 8) |= 1u;
        *(_QWORD *)a1 = v17;
        return a1;
      }
      v14 = *(_DWORD *)(a2 + 32);
    }
    else
    {
      v12 = v10 + 1;
      v13 = (void **)((char *)v10 + *(_QWORD *)a2);
      if ( v11 < (unsigned __int64)(v10 + 1) )
      {
        *(_QWORD *)(a2 + 24) = 0;
        v18 = v11 - (_DWORD)v10;
        if ( v18 )
        {
          v19 = 0;
          v20 = 0;
          while ( 1 )
          {
            v20 |= (unsigned __int64)*((unsigned __int8 *)v13 + v19) << (8 * (unsigned __int8)v19);
            *(_QWORD *)(a2 + 24) = v20;
            if ( v19 == v18 - 1 )
              break;
            ++v19;
          }
          v14 = 8 * v18;
          v12 = (void **)((char *)v10 + v18);
        }
        else
        {
          v14 = 0;
          v12 = v10;
        }
      }
      else
      {
        *(_QWORD *)(a2 + 24) = *v13;
        v14 = 64;
      }
      *(_QWORD *)(a2 + 16) = v12;
      *(_DWORD *)(a2 + 32) = v14;
    }
    if ( a3 - v6 > v14 )
    {
      v22 = std::_V2::generic_category((std::_V2 *)v10);
      v32 = 0;
      v28[0] = v29;
      v30 = (void **)&off_2BC1EC8;
      v24 = &off_2BC1EC8;
      v28[1] = nullptr;
      v29[0] = 0;
      v31 = 0;
      v34 = 0;
      v35 = 1;
      v33 = 0;
      v36 = v28;
      sub_2257B70(&v30, 0, 0, 0);
      v26 = a3 - v6;
      v23 = "Unexpected end of file reading %u of %u bits";
      v27 = *(_DWORD *)(a2 + 32);
      v25 = _mm_loadh_ps((const double *)&v23);
      sub_2258820(&v30, &v25);
      v30 = (void **)v24;
      sub_2257A60(&v30);
      v30 = v28;
      LOWORD(v33) = 260;
      v21 = operator new(0x40u);
      sub_21FC850(v21, &v30, 5, v22);
      if ( v28[0] != v29 )
        operator delete(v28[0]);
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v21;
    }
    else
    {
      v15 = *(_QWORD *)(a2 + 24);
      *(_DWORD *)(a2 + 32) = v6 - a3 + v14;
      *(_QWORD *)(a2 + 24) = v15 >> ((unsigned __int8)a3 - (unsigned __int8)v6);
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_QWORD *)a1 = ((v15 & (0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v6 - (unsigned __int8)a3 + 64))) << v6) | v9;
    }
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 32) = v6 - a3;
    *(_QWORD *)(a2 + 24) = v7 >> a3;
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = v7 & (0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)a3));
  }
  return a1;
}

