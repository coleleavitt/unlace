__int64 __fastcall sub_1E534E0(__int64 a1, __int16 *a2, unsigned int a3, double a4)
{
  __int64 result; // rax
  __int64 v5; // r15
  __int16 v7; // ax
  _BYTE *v8; // r14
  unsigned int v9; // eax
  __int64 v10; // r9
  unsigned __int8 v11; // [rsp+1h] [rbp-89h]
  __int64 (__fastcall **v12)(); // [rsp+2h] [rbp-88h] BYREF
  int v13; // [rsp+Ah] [rbp-80h]
  void **p_ptr; // [rsp+12h] [rbp-78h]
  char v15; // [rsp+1Ah] [rbp-70h]
  int v16; // [rsp+1Eh] [rbp-6Ch]
  void *ptr; // [rsp+22h] [rbp-68h] BYREF
  __int64 v18; // [rsp+2Ah] [rbp-60h]
  _BYTE v19[88]; // [rsp+32h] [rbp-58h] BYREF

  result = 0;
  if ( (*(_DWORD *)a2 & 0x4000) != 0 )
  {
    v5 = 0;
    v18 = 0x200000000LL;
    v12 = off_2C6ECE0;
    v7 = *a2;
    ptr = v19;
    v8 = v19;
    p_ptr = &ptr;
    v15 = 0;
    v16 = -1;
    v13 = 16842752;
    if ( ((v7 + 509) & 0x1FFu) <= 0x7E )
    {
      sub_BC97E0((__int64 *)&v12, (__int64)a2);
      v8 = ptr;
      v5 = (unsigned int)v18;
    }
    v9 = sub_EEB7E0((unsigned __int64)a2, (__int64)a2, a4);
    result = sub_1E50B50(a1, v9, a3, (__int64)v8, v5, v10);
    if ( ptr != v19 )
    {
      v11 = result;
      free(ptr);
      return v11;
    }
  }
  return result;
}
