/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DB0C
// Address: 0x000000000007DB0C

//----- (000000000007DB0C) ----------------------------------------------------
__int64 **__fastcall sub_7DB0C(__int64 a1, char *s)
{
  _QWORD *v3; // x19
  size_t v4; // x0
  size_t v5; // x21
  char *v6; // x22
  size_t v7; // x23
  __int64 **v8; // x19
  __int64 v10; // [xsp+0h] [xbp-60h] BYREF
  size_t v11; // [xsp+8h] [xbp-58h]
  void *ptr; // [xsp+10h] [xbp-50h]
  __int64 v13; // [xsp+18h] [xbp-48h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD **)(a1 + 624);
  v10 = 0;
  v11 = 0;
  ptr = nullptr;
  v4 = strlen(s);
  if ( v4 >= 0xFFFFFFFFFFFFFFF0LL )
    sub_86648();
  v5 = v4;
  if ( v4 >= 0x17 )
  {
    v7 = (v4 + 16) & 0xFFFFFFFFFFFFFFF0LL;
    v6 = (char *)operator new(v7);
    v11 = v5;
    ptr = v6;
    v10 = v7 | 1;
    goto LABEL_6;
  }
  v6 = (char *)&v10 + 1;
  LOBYTE(v10) = 2 * v4;
  if ( v4 )
LABEL_6:
    memcpy(v6, s, v5);
  v6[v5] = 0;
  v8 = sub_86E98(v3, (unsigned __int8 *)&v10);
  if ( (v10 & 1) != 0 )
    operator delete(ptr);
  if ( v8 )
    return v8 + 5;
  else
    return nullptr;
}
