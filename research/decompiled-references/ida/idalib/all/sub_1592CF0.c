void __fastcall sub_1592CF0(__int64 *a1, __int64 *a2)
{
  char ***v2; // r13
  __int64 v3; // rdx
  __int64 v4; // [rsp+0h] [rbp-68h]
  int v5; // [rsp+8h] [rbp-60h]
  char v6; // [rsp+Ch] [rbp-5Ch]
  void *ptr[2]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v8[72]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (char ***)(a1 + 2);
  v3 = *a1;
  v6 = *((_BYTE *)a1 + 12);
  ptr[0] = v8;
  v4 = v3;
  LODWORD(v3) = *((_DWORD *)a1 + 2);
  ptr[1] = (void *)0x200000000LL;
  v5 = v3;
  if ( *((_DWORD *)a1 + 6) )
    sub_1591FE0((char ***)ptr, v2);
  *a1 = *a2;
  *((_BYTE *)a1 + 8) = *((_BYTE *)a2 + 8);
  *((_BYTE *)a1 + 9) = *((_BYTE *)a2 + 9);
  *((_BYTE *)a1 + 10) = *((_BYTE *)a2 + 10);
  *((_BYTE *)a1 + 11) = *((_BYTE *)a2 + 11);
  *((_BYTE *)a1 + 12) = *((_BYTE *)a2 + 12);
  sub_1591FE0(v2, (char ***)a2 + 2);
  *a2 = v4;
  *((_DWORD *)a2 + 2) = v5;
  *((_BYTE *)a2 + 12) = v6;
  sub_1591FE0((char ***)a2 + 2, (char ***)ptr);
  if ( ptr[0] != v8 )
    free(ptr[0]);
}
