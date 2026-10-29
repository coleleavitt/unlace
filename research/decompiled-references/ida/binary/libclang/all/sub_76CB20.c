__int64 __fastcall sub_76CB20(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned int v3; // ebx
  _QWORD *v4; // rdx
  char v5; // dl
  __int64 v6; // rdi
  unsigned __int16 v7; // ax
  _QWORD *v9; // rdx
  char v10; // dl
  unsigned __int16 v11; // cx

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 64);
  v3 = (**(_DWORD **)(a1 + 16) >> 14) & 0x1F;
  if ( v2 )
  {
    if ( (v2 & 4) == 0 )
    {
      v9 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v9 )
      {
        v10 = *(_BYTE *)(*(_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
        v11 = v10 & 0x1F;
        LOBYTE(a1) = (unsigned __int8)v11 > 0xFu;
        v3 |= (2 * ((v11 >> 1) & 1)) | (16 * a1) | v10 & 1 | ((v10 & 4) != 0 ? 0xC : 0);
      }
    }
  }
  v4 = *(_QWORD **)(v1 + 48);
  if ( v4 )
  {
    v5 = *(_BYTE *)(*(_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
    v3 |= (2 * ((v5 & 2) != 0)) & 0x1B | (16 * ((v5 & 0x1Fu) > 0xF)) & 0x1B | v5 & 1 | ((v5 & 4) != 0 ? 8 : 0);
  }
  v6 = *(_QWORD *)(v1 + 32);
  if ( v6 )
  {
    v7 = sub_A7AF30(v6);
    v3 |= (2 * ((v7 >> 1) & 1)) | v7 & 1 | (2 * (_BYTE)v7) & 0x10;
  }
  return v3;
}

