__int64 __fastcall sub_BEE6B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rdx
  _QWORD *v9; // rdx

  result = *(unsigned __int8 *)(a1 + 24);
  if ( (result & 1) == 0 )
  {
    if ( (result & 2) != 0
      || ((v6 = *(unsigned int *)(a1 + 56), (_DWORD)v6 != 1) || (result & 4) == 0)
      && (result & 8) != 0
      && *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * ((*(_DWORD *)(a1 + 24) >> 4) - 1)) == *(_QWORD *)(a1 + 32) )
    {
      result = sub_E0FF50(a2, a3, 2466, 0);
      if ( result )
        result = sub_BED5E0((unsigned __int8 **)result, 3);
      *(_BYTE *)(a1 + 24) |= 1u;
      *(_DWORD *)(a1 + 56) = 0;
    }
    else
    {
      if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 60) )
      {
        sub_22134E0(a1 + 48, a1 + 64, v6 + 1, 8);
        v6 = *(unsigned int *)(a1 + 56);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v6) = 0;
      v7 = *(_DWORD *)(a1 + 56) + 1;
      *(_DWORD *)(a1 + 56) = v7;
      v8 = *(_QWORD *)(a4 + 32);
      *(_BYTE *)(a1 + 24) |= 8u;
      *(_QWORD *)(a1 + 40) = v8;
      v9 = *(_QWORD **)(a4 + 40);
      if ( (*(_BYTE *)(a4 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v9 + 2) <= 0x40u )
          v9 = (_QWORD *)*v9;
        else
          v9 = *(_QWORD **)*v9;
      }
      *(_QWORD *)(a1 + 32) = v9;
      result = *(_DWORD *)(a1 + 24) & 0xF | (unsigned int)(16 * v7);
      *(_DWORD *)(a1 + 24) = result;
    }
  }
  return result;
}

