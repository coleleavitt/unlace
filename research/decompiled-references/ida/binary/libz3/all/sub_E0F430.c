__int64 (__fastcall **__fastcall sub_E0F430(_QWORD *a1, const char *a2, const char **a3))(std::exception *this)
{
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v8; // esi
  unsigned __int64 v9; // rdi
  char *v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // edx
  __int64 v15; // r8
  _QWORD v16[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v17; // [rsp+10h] [rbp-18h] BYREF

  sub_E0EE00((__int64)v16, a2, a3);
  v4 = a1 + 3;
  a1[1] = a1 + 3;
  v5 = v16[1];
  *a1 = off_1C63128;
  v6 = v16[0];
  if ( (__int64 *)v16[0] == &v17 )
  {
    v8 = v5 + 1;
    if ( (unsigned int)(v5 + 1) >= 8 )
    {
      a1[3] = *(_QWORD *)v16[0];
      *(_QWORD *)((char *)v4 + v8 - 8) = *(_QWORD *)(v6 + v8 - 8);
      v9 = (unsigned __int64)(a1 + 4) & 0xFFFFFFFFFFFFFFF8LL;
      v10 = (char *)v4 - v9;
      v11 = v6 - (_QWORD)v10;
      v12 = ((_DWORD)v10 + v8) & 0xFFFFFFF8;
      if ( v12 >= 8 )
      {
        v13 = v12 & 0xFFFFFFF8;
        v14 = 0;
        do
        {
          v15 = v14;
          v14 += 8;
          *(_QWORD *)(v9 + v15) = *(_QWORD *)(v11 + v15);
        }
        while ( v14 < v13 );
      }
    }
    else if ( (v8 & 4) != 0 )
    {
      *((_DWORD *)a1 + 6) = *(_DWORD *)v16[0];
      *(_DWORD *)((char *)v4 + v8 - 4) = *(_DWORD *)(v6 + v8 - 4);
    }
    else if ( (_DWORD)v5 != -1 )
    {
      *((_BYTE *)a1 + 24) = *(_BYTE *)v16[0];
      if ( (v8 & 2) != 0 )
        *(_WORD *)((char *)v4 + v8 - 2) = *(_WORD *)(v6 + v8 - 2);
    }
  }
  else
  {
    a1[1] = v16[0];
    a1[3] = v17;
  }
  a1[2] = v5;
  *a1 = off_1C64218;
  a1[5] = -1;
  return off_1C64218;
}

