__int64 __fastcall sub_FB0100(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // r10
  __int64 result; // rax
  unsigned __int16 *v8; // rax

  v4 = a1;
  v5 = a3;
  v6 = a4;
  if ( a2 > 0x233B )
  {
    result = (*(_BYTE *)(**(_QWORD **)(a1 + 8) + 40LL * (a2 - 9020)) >> 3) & 7;
    goto LABEL_3;
  }
  v8 = sub_FAEEC0(a2);
  if ( v8 )
  {
    result = (*((_BYTE *)v8 + 2) >> 3) & 7;
LABEL_3:
    if ( (_DWORD)result == 1 )
      return result;
  }
  return byte_23ED960[(unsigned __int8)(sub_FAFAF0(v4, a2, (unsigned int)v5, v6, v4, v5) - 1)];
}

