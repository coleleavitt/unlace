__int64 __fastcall sub_BC9640(__int64 **a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rax
  __int64 (*v5)(); // rdx
  __int64 *v6; // rdi
  unsigned __int64 v7; // r13
  __int64 v8; // rdx
  unsigned __int64 *v9; // r12
  __int64 (*v10)(); // rax
  __int64 v11; // r12
  __int64 result; // rax
  __int64 *v13; // rcx
  __int64 *v14; // rdx
  __int64 *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // [rsp+Ah] [rbp-70h]
  _QWORD v19[13]; // [rsp+12h] [rbp-68h] BYREF

  if ( !a2 )
    return 1;
  v2 = a2 & 0xFFFFFFFFFFFFFFFBLL;
  v18 = 0x800000001LL;
  v4 = 1;
  v19[0] = v2;
  while ( 1 )
  {
    v6 = *a1;
    v7 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    v8 = **a1;
    if ( (v2 & 4) != 0 )
      break;
    v9 = &v19[v4 - 1];
    v10 = *(__int64 (**)())(v8 + 248);
    if ( v10 != sub_BC5920 )
    {
      if ( !((unsigned __int8 (__fastcall *)(__int64 *, unsigned __int64))v10)(v6, v2 & 0xFFFFFFFFFFFFFFF8LL) )
      {
        v4 = (unsigned int)(v18 - 1);
        LODWORD(v18) = v18 - 1;
        goto LABEL_4;
      }
      v2 = *v9;
    }
    *v9 = v2 | 4;
    v11 = (unsigned int)v18;
    result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(**a1 + 264))(*a1, v7);
    if ( !(_BYTE)result )
      return result;
    v4 = (unsigned int)v18;
    v13 = &v19[v11];
    v14 = &v19[(unsigned int)v18];
    if ( v14 != v13 )
    {
      v15 = v14 - 1;
      if ( v13 < v15 )
      {
        do
        {
          v16 = *v13;
          v17 = *v15;
          ++v13;
          --v15;
          *(v13 - 1) = v17;
          v15[1] = v16;
        }
        while ( v13 < v15 );
        goto LABEL_12;
      }
    }
LABEL_4:
    if ( !(_DWORD)v4 )
      return 1;
LABEL_5:
    v2 = v19[(unsigned int)v4 - 1];
  }
  v4 = (unsigned int)(v4 - 1);
  v5 = *(__int64 (**)())(v8 + 256);
  LODWORD(v18) = v4;
  if ( v5 == sub_BC5930 )
    goto LABEL_4;
  result = ((__int64 (__fastcall *)(__int64 *, unsigned __int64))v5)(v6, v2 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !(_BYTE)result )
    return result;
LABEL_12:
  v4 = (unsigned int)v18;
  if ( (_DWORD)v18 )
    goto LABEL_5;
  return 1;
}
