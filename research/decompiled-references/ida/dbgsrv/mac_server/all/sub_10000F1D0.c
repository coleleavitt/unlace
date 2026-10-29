/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000F1D0
// Address: 0x000000010000F1D0

//----- (000000010000F1D0) ----------------------------------------------------
__int64 __fastcall sub_10000F1D0(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  int v4; // ecx
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  __int64 v8; // rdx
  unsigned int v9; // edi
  unsigned int v10; // eax
  _DWORD *v11; // rbx

  if ( *(int *)a1 >= 0 )
    goto LABEL_3;
  v3 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 24) != 2 || v3 - 5277 < 0xFFFFEBAF )
    goto LABEL_3;
  v4 = -300;
  if ( *(unsigned __int16 *)(a1 + 38) << 16 != 1114112 || *(unsigned __int16 *)(a1 + 50) << 16 != 1114112 )
    goto LABEL_4;
  v6 = *(_DWORD *)(a1 + 64);
  if ( v6 > 2
    || (v7 = 8 * v6, (v3 - 76) >> 3 < v6 || v3 < 8 * v6 + 76)
    || (v8 = v7, v9 = *(_DWORD *)(a1 + v7 + 72), v9 > 0x510)
    || (v10 = v3 - v7, (v10 - 76) >> 2 < v9) )
  {
LABEL_3:
    v4 = -304;
LABEL_4:
    *(_DWORD *)(a2 + 32) = v4;
    result = (__int64)NDR_record;
    *(NDR_record_t *)(a2 + 24) = NDR_record;
    return result;
  }
  v4 = -304;
  if ( v10 != 4 * v9 + 76 )
    goto LABEL_4;
  *(_DWORD *)(a2 + 40) = 1296;
  v11 = (_DWORD *)(a1 + v8 - 16 + 84);
  result = sub_100001DE0();
  *(_DWORD *)(a2 + 32) = result;
  *(NDR_record_t *)(a2 + 24) = NDR_record;
  if ( !(_DWORD)result )
  {
    *(_DWORD *)(a2 + 36) = *v11;
    result = (unsigned int)(4 * *(_DWORD *)(a2 + 40) + 44);
    *(_DWORD *)(a2 + 4) = result;
  }
  return result;
}
