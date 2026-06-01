__int64 __fastcall sub_1671880(__int64 **a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned __int8 *v11; // rax
  size_t v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 result; // rax
  unsigned __int8 *v16; // rax
  size_t v17; // rdx
  __int64 v18; // rax
  unsigned __int8 v19; // dl

  v8 = *a1;
  v9 = **a1;
  v10 = *(_BYTE *)(v9 + 28) & 0x7F;
  if ( (_BYTE)v10 != 19 )
  {
    if ( (_BYTE)v10 == 22 )
    {
      v10 = sub_BADE20(v9, (__int64)a2, v10, (__int64)v8, a5, a6);
      result = 0;
      if ( !v10 )
        return result;
      v9 = *(_QWORD *)(v10 + 88);
      v8 = *a1;
      **a1 = v9;
      LOBYTE(v10) = *(_BYTE *)(v9 + 28) & 0x7F;
    }
    if ( (_BYTE)v10 == 23 )
    {
      v9 = *(_QWORD *)(v9 + 88);
      if ( !v9 )
        goto LABEL_17;
      *v8 = v9;
      LOBYTE(v10) = *(_BYTE *)(v9 + 28) & 0x7F;
    }
    if ( (unsigned int)(unsigned __int8)v10 - 21 <= 1 )
    {
      v9 = *(_QWORD *)(v9 + 88);
      if ( !v9 )
        goto LABEL_17;
      *v8 = v9;
      LOBYTE(v10) = *(_BYTE *)(v9 + 28) & 0x7F;
    }
    if ( (_BYTE)v10 == 20 )
    {
      v16 = (unsigned __int8 *)sub_995750(v9);
      v18 = sub_A0D380(a2, v16, v17);
      v19 = 0;
      if ( BYTE4(v18) )
      {
        v19 = 1;
        v6 = (unsigned int)v18 | 0x100000000LL;
      }
      return v6 & 0xFFFFFF00FFFFFFFFLL | ((unsigned __int64)v19 << 32);
    }
LABEL_17:
    v19 = 0;
    return v6 & 0xFFFFFF00FFFFFFFFLL | ((unsigned __int64)v19 << 32);
  }
  v11 = (unsigned __int8 *)sub_995750(v9);
  v13 = sub_A0D300(a2, v11, v12);
  v14 = HIDWORD(v13);
  result = (unsigned int)v13 | 0x100000000LL;
  if ( !(_BYTE)v14 )
    return 0;
  return result;
}
