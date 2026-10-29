__int64 __fastcall sub_E0DEC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rdi
  int v10; // esi
  unsigned int v11; // ecx
  __int64 *v12; // rdx
  __int64 v13; // r8
  int v15; // edx
  int v16; // r9d
  __int64 v17; // r8

  v5 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v6 + 16LL) == 48 )
  {
    v7 = sub_F3D1D0(*v6, v5, a3, a4, a5);
    v8 = *(_DWORD *)(a1 + 584);
    v9 = *(_QWORD *)(a1 + 568);
    if ( v8 )
    {
      v10 = v8 - 1;
      v11 = (v8 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
      v12 = (__int64 *)(v9 + 16LL * v11);
      v13 = *v12;
      if ( v7 == *v12 )
        return v12[1];
      v15 = 1;
      if ( v13 != -4096 )
      {
        while ( 1 )
        {
          v16 = v15 + 1;
          v11 = v10 & (v15 + v11);
          v12 = (__int64 *)(v9 + 16LL * v11);
          v17 = *v12;
          if ( v7 == *v12 )
            break;
          v15 = v16;
          if ( v17 == -4096 )
            return 0;
        }
        return v12[1];
      }
    }
  }
  return 0;
}

