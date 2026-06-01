/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80F5C
// Address: 0x0000000000080F5C

//----- (0000000000080F5C) ----------------------------------------------------
__int64 __fastcall sub_80F5C(_QWORD *a1, char a2, __int64 a3)
{
  __int64 result; // x0
  const char *v6; // x21
  size_t v7; // x0
  size_t v8; // x22
  char *v9; // x23
  size_t v10; // x24
  __int64 **v11; // x20
  __int16 v12; // w8
  __int64 v13; // [xsp+0h] [xbp-60h] BYREF
  size_t v14; // [xsp+8h] [xbp-58h]
  void *ptr; // [xsp+10h] [xbp-50h]
  __int64 v16; // [xsp+18h] [xbp-48h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (a2 & 1) == 0 )
    sub_8005C(a1, a3);
  if ( (sub_8055C((__int64)a1, a3) & 1) != 0 )
    return 0;
  if ( (unsigned int)sub_801FC((__int64)a1, a3, &v13) )
    result = 0xFFFFFFFFLL;
  else
    result = (unsigned __int8)v13;
  if ( (_DWORD)result != -1 )
  {
    if ( (_DWORD)result == 2 )
      return 0;
    if ( (_DWORD)result != 1 )
    {
      if ( *(_QWORD *)(a3 + 8) )
        v6 = *(const char **)a3;
      else
        v6 = &byte_F154B;
      v13 = 0;
      v14 = 0;
      ptr = nullptr;
      v7 = strlen(v6);
      if ( v7 >= 0xFFFFFFFFFFFFFFF0LL )
        sub_86648();
      v8 = v7;
      if ( v7 >= 0x17 )
      {
        v10 = (v7 + 16) & 0xFFFFFFFFFFFFFFF0LL;
        v9 = (char *)operator new(v10);
        v14 = v8;
        ptr = v9;
        v13 = v10 | 1;
      }
      else
      {
        v9 = (char *)&v13 + 1;
        LOBYTE(v13) = 2 * v7;
        if ( !v7 )
          goto LABEL_21;
      }
      memcpy(v9, v6, v8);
LABEL_21:
      v9[v8] = 0;
      v11 = sub_87C90(a1 + 11, (unsigned __int8 *)&v13);
      if ( (v13 & 1) != 0 )
        operator delete(ptr);
      result = 0;
      if ( v11 )
        v12 = *((_WORD *)v11 + 20);
      else
        v12 = 2;
      *(_WORD *)(a3 + 24) = v12;
    }
  }
  return result;
}
// F154B: using guessed type char byte_F154B;
