__int64 __fastcall sub_82AA80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // r15d
  __int64 v10; // rdi
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rax
  __int64 result; // rax
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  int v18; // eax
  int v19; // edx
  __int64 v20; // rdx

  if ( a5 )
  {
    v9 = sub_8124E0(a2);
    v10 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v12 = *(_BYTE *)(v11 + 16);
    if ( v12 == 13 )
    {
      if ( ((*(_WORD *)(v11 + 18) >> 3) & 0x1FF) == 0x1B2 )
      {
        v13 = 1;
LABEL_7:
        *(_QWORD *)(a3 + 16) += a5 * v13;
        goto LABEL_8;
      }
LABEL_4:
      if ( (*(_BYTE *)(v10 + 17) & 4) != 0 || !(unsigned __int8)sub_B08470() )
        return sub_A2E1A0(a1, v9, 110, 0);
      v13 = sub_70E2F0(*(_QWORD *)(a1 + 16), a4);
      goto LABEL_7;
    }
    if ( (unsigned __int8)(v12 - 25) > 1u )
      goto LABEL_4;
    *(_QWORD *)(a3 + 16) += a5;
  }
LABEL_8:
  result = *(unsigned __int8 *)(a3 + 24);
  if ( (result & 1) != 0 )
    return result;
  if ( (*(_BYTE *)(a3 + 128) & 1) != 0 )
  {
    v20 = 2259;
  }
  else
  {
    if ( (result & 2) == 0 )
    {
      if ( (v15 = *(_DWORD *)(a3 + 56), v15 == 1) && (result & 4) != 0
        || (result & 8) == 0
        || *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * ((*(_DWORD *)(a3 + 24) >> 4) - 1)) != *(_QWORD *)(a3 + 32) )
      {
        v16 = v15;
        v17 = v15 + 1LL;
        if ( *(unsigned int *)(a3 + 60) < v17 )
        {
          sub_25D6060(a3 + 48, a3 + 64, v17, 8);
          v16 = *(unsigned int *)(a3 + 56);
        }
        *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8 * v16) = a5;
        v18 = *(_DWORD *)(a3 + 56);
        v19 = *(_DWORD *)(a3 + 24);
        *(_QWORD *)(a3 + 40) = a4;
        ++v18;
        *(_QWORD *)(a3 + 32) = 0;
        *(_DWORD *)(a3 + 56) = v18;
        result = v19 & 7 | (unsigned int)(16 * v18);
        *(_DWORD *)(a3 + 24) = result;
        return result;
      }
    }
    v20 = 2264;
  }
  result = sub_A2E240(a1, a2, v20, 0);
  if ( result )
    result = sub_823450((unsigned __int8 **)result, 7);
  *(_BYTE *)(a3 + 24) |= 1u;
  *(_DWORD *)(a3 + 56) = 0;
  return result;
}

