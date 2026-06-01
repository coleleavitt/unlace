__int64 __fastcall sub_CB64B0(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v5; // r13d
  unsigned int v6; // ebp
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v13[8]; // [rsp+8h] [rbp-40h] BYREF

  if ( BYTE4(a4) )
  {
    v5 = a4;
    v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, a3);
    if ( (_BYTE)v6 )
    {
      v13[0] = a3 | 4;
      return (unsigned int)sub_CF5810(a1, v5, a2, v13);
    }
  }
  else
  {
    v6 = HIDWORD(a4);
    v8 = *(unsigned int *)(a1 + 1384);
    if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1388) )
    {
      sub_22134E0(a1 + 1376, a1 + 1392, v8 + 1, 16);
      v8 = *(unsigned int *)(a1 + 1384);
    }
    v9 = (_QWORD *)(*(_QWORD *)(a1 + 1376) + 16 * v8);
    v9[1] = a2;
    *v9 = 5;
    ++*(_DWORD *)(a1 + 1384);
    v13[0] = a3 | 4;
    if ( (unsigned __int8)sub_CDCCE0(a1, a2, v13) )
    {
      v13[0] = a3 | 4;
      if ( (unsigned __int8)sub_D08110(a1, v13) )
      {
        if ( (unsigned __int8)sub_CB2E50(a1, a3, v10, v11, v12) )
        {
          v13[0] = a3 | 4;
          v6 = sub_CDD1D0(a1, v13);
        }
      }
    }
    --*(_DWORD *)(a1 + 1384);
  }
  return v6;
}

