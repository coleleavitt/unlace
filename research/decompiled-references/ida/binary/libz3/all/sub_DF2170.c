__int64 (__fastcall **__fastcall sub_DF2170(
        __int64 a1,
        const char *a2,
        const char **a3,
        int a4,
        int a5))(std::exception *this)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v12; // esi
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // esi
  unsigned int v17; // esi
  unsigned int v18; // edx
  __int64 v19; // r8
  _QWORD v20[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v21; // [rsp+10h] [rbp-28h] BYREF

  sub_DF1B30((__int64)v20, a2, a3);
  v8 = a1 + 24;
  *(_QWORD *)(a1 + 8) = a1 + 24;
  v9 = v20[1];
  *(_QWORD *)a1 = off_1C63128;
  v10 = v20[0];
  if ( (__int64 *)v20[0] == &v21 )
  {
    v12 = v9 + 1;
    if ( (unsigned int)(v9 + 1) >= 8 )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)v20[0];
      *(_QWORD *)(v8 + v12 - 8) = *(_QWORD *)(v10 + v12 - 8);
      v13 = (a1 + 32) & 0xFFFFFFFFFFFFFFF8LL;
      v14 = v8 - v13;
      v15 = v10 - v14;
      v16 = (v14 + v12) & 0xFFFFFFF8;
      if ( v16 >= 8 )
      {
        v17 = v16 & 0xFFFFFFF8;
        v18 = 0;
        do
        {
          v19 = v18;
          v18 += 8;
          *(_QWORD *)(v13 + v19) = *(_QWORD *)(v15 + v19);
        }
        while ( v18 < v17 );
      }
    }
    else if ( (v12 & 4) != 0 )
    {
      *(_DWORD *)(a1 + 24) = *(_DWORD *)v20[0];
      *(_DWORD *)(v8 + v12 - 4) = *(_DWORD *)(v10 + v12 - 4);
    }
    else if ( (_DWORD)v9 != -1 )
    {
      *(_BYTE *)(a1 + 24) = *(_BYTE *)v20[0];
      if ( (v12 & 2) != 0 )
        *(_WORD *)(v8 + v12 - 2) = *(_WORD *)(v10 + v12 - 2);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v20[0];
    *(_QWORD *)(a1 + 24) = v21;
  }
  *(_QWORD *)(a1 + 16) = v9;
  *(_QWORD *)a1 = off_1C64218;
  *(_DWORD *)(a1 + 40) = a4;
  *(_DWORD *)(a1 + 44) = a5;
  return off_1C64218;
}

