__int64 __fastcall sub_B65CE0(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 result; // rax
  char v3; // al
  char v4; // r8
  bool v5; // si
  char v6; // dl
  char v7; // dl
  unsigned int v8; // ecx
  _DWORD **v9; // rcx
  __int64 v10; // rsi
  _DWORD *v11; // rdx

  if ( *(_BYTE *)(a1 + 26) == 1 && (v1 = *(_DWORD **)(a1 + 40)) != nullptr )
  {
    result = (*v1 >> 14) & 0x1F;
  }
  else
  {
    v3 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
    v4 = 16 * ((v3 & 0x10) != 0);
    v5 = (v3 & 2) != 0;
    v6 = (32 * ((v3 & 8) != 0)) | v3 & 1;
    result = 8;
    v7 = (2 * v5)
       | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 0xC : 0)
       | v4
       | v6;
    v8 = v7 & 0x10;
    if ( (v7 & 0x10) != 0 )
    {
      result = 24;
      v8 = 16;
    }
    if ( (v7 & 8) == 0 )
      result = v8;
    if ( (v7 & 4) != 0 )
      result = (unsigned int)result | 4;
    if ( (v7 & 2) != 0 )
      result = (unsigned int)result | 2;
  }
  v9 = (_DWORD **)(a1 + 48);
  v10 = a1 + 48 + 8LL * *(unsigned __int16 *)(a1 + 24);
  if ( a1 + 48 != v10 )
  {
    do
    {
      v11 = *v9++;
      result = (*v11 >> 14) & 0x1F | (unsigned int)result;
    }
    while ( (_DWORD **)v10 != v9 );
  }
  return result;
}
