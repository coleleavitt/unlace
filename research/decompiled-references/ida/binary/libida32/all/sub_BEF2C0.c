__int64 __fastcall sub_BEF2C0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // eax
  __int64 result; // rax
  char v10; // al
  __int64 v11; // rdx
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  unsigned __int8 **v17; // rax
  __int64 v18[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( a5 )
  {
    v18[0] = 0;
    v8 = sub_BDCD00(a2, a2, a3, a4, a5);
    result = sub_BEC0F0(a1, v8, a4, v18, 0);
    if ( !(_BYTE)result )
      return result;
    *(_QWORD *)(a3 + 16) += a5 * v18[0];
  }
  v10 = *(_BYTE *)(a3 + 24);
  if ( (v10 & 1) != 0 )
    return 1;
  v11 = 2461;
  if ( (*(_BYTE *)(a3 + 128) & 1) == 0 )
  {
    if ( (v10 & 2) == 0 )
    {
      if ( (v12 = *(_DWORD *)(a3 + 56), v12 == 1) && (v10 & 4) != 0
        || (v10 & 8) == 0
        || *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * ((*(_DWORD *)(a3 + 24) >> 4) - 1)) != *(_QWORD *)(a3 + 32) )
      {
        v13 = v12;
        v14 = v12 + 1LL;
        if ( v14 > *(unsigned int *)(a3 + 60) )
        {
          sub_22134E0(a3 + 48, a3 + 64, v14, 8);
          v13 = *(unsigned int *)(a3 + 56);
        }
        *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8 * v13) = a5;
        v15 = *(_DWORD *)(a3 + 56);
        *(_QWORD *)(a3 + 40) = a4;
        ++v15;
        *(_QWORD *)(a3 + 32) = 0;
        *(_DWORD *)(a3 + 56) = v15;
        v16 = (16 * v15) | *(_DWORD *)(a3 + 24) & 0xF;
        *(_DWORD *)(a3 + 24) = v16;
        *(_BYTE *)(a3 + 24) = v16 & 0xF7;
        return 1;
      }
    }
    v11 = 2466;
  }
  v17 = (unsigned __int8 **)sub_E0FF50(a1, a2, v11, 0);
  if ( v17 )
    sub_BED5E0(v17, 7);
  *(_BYTE *)(a3 + 24) |= 1u;
  *(_DWORD *)(a3 + 56) = 0;
  return 1;
}

