__int64 __fastcall sub_BEEF00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  char v8; // dl
  int v10; // edx
  int v11; // eax
  int v12; // edx

  result = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)result )
  {
    result = sub_E0FF50(a2, a3, 2499, 0);
    *(_BYTE *)(a1 + 24) |= 1u;
    *(_DWORD *)(a1 + 56) = 0;
  }
  else
  {
    v8 = *(_BYTE *)(a1 + 24);
    if ( (v8 & 1) == 0 )
    {
      if ( (v8 & 2) != 0
        || (*(_BYTE *)(a1 + 24) & 8) != 0
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
        v10 = *(_DWORD *)(a1 + 60);
        *(_BYTE *)(a1 + 24) |= 4u;
        if ( !v10 )
        {
          sub_22134E0(a1 + 48, a1 + 64, 1, 8);
          result = *(unsigned int *)(a1 + 56);
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * result) = 0;
        v11 = *(_DWORD *)(a1 + 56);
        *(_BYTE *)(a1 + 24) |= 8u;
        v12 = *(_DWORD *)(a1 + 24);
        ++v11;
        *(_QWORD *)(a1 + 40) = a4;
        *(_DWORD *)(a1 + 56) = v11;
        result = v12 & 0xF | (unsigned int)(16 * v11);
        *(_QWORD *)(a1 + 32) = 0x7FFFFFFFFFFFFFFFLL;
        *(_DWORD *)(a1 + 24) = result;
      }
    }
  }
  return result;
}

