__int64 __fastcall sub_CA20(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int8 *v4; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // r9
  unsigned __int8 v8; // al
  unsigned __int8 v9; // cl
  int v10; // edi
  int v11; // edx

  v4 = (unsigned __int8 *)*a2;
  result = 0;
  v7 = *a2 + 4;
  if ( v7 <= a3 )
  {
    *a2 = (unsigned __int64)(v4 + 1);
    v8 = *v4;
    *a2 = (unsigned __int64)(v4 + 2);
    v9 = v4[1];
    *a2 = (unsigned __int64)(v4 + 3);
    v10 = v4[2];
    *a2 = v7;
    v11 = v4[3];
    if ( *(_BYTE *)(a1 + 509) == 2 )
      return (v10 << 8) | v11 | (v9 << 16) | (v8 << 24);
    else
      return (v9 << 8) | v8 | (v10 << 16) | (unsigned int)(v11 << 24);
  }
  return result;
}
