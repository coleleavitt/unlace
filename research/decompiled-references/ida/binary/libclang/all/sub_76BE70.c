__int64 __fastcall sub_76BE70(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r13d
  unsigned __int16 v5; // ax
  unsigned int v6; // ebx
  unsigned int i; // ebp
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  char v12; // al
  unsigned __int16 v13; // dx
  _DWORD *v15; // [rsp+0h] [rbp-48h] BYREF
  _DWORD *v16; // [rsp+8h] [rbp-40h]
  _DWORD *v17; // [rsp+10h] [rbp-38h]

  v4 = *(_DWORD *)(a1 + 28);
  v5 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
  LOBYTE(a4) = (unsigned __int8)v5 > 0xFu;
  v6 = (2 * ((v5 >> 1) & 1))
     | (16 * a4)
     | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 0xC : 0);
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v8 = i;
      v9 = sub_81CED0(a1, i);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 56);
        v11 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v10 & 4) != 0 )
          v11 = (_QWORD *)v11[4];
        if ( v11 )
        {
          v12 = *(_BYTE *)(*(_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
          v13 = v12 & 0x1F;
          LOBYTE(v8) = (unsigned __int8)v13 > 0xFu;
          v6 |= (2 * ((v13 >> 1) & 1)) | (16 * v8) | v12 & 1 | ((v12 & 4) != 0 ? 0xC : 0);
        }
      }
      sub_81CEE0(&v15, a1, i);
      if ( v15 )
        v6 |= (*v15 >> 14) & 0x1F;
      if ( v16 )
        v6 |= (*v16 >> 14) & 0x1F;
      if ( v17 )
        v6 |= (*v17 >> 14) & 0x1F;
    }
  }
  return v6;
}

