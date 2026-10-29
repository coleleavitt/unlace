__int64 __fastcall sub_1440C90(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned int *v7; // rax
  __int64 v8; // rdx
  bool v9; // bl
  _QWORD v11[2]; // [rsp+0h] [rbp-B8h] BYREF
  void *v12[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v14[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v15; // [rsp+50h] [rbp-68h]
  void *v16; // [rsp+60h] [rbp-58h] BYREF
  _DWORD v17[18]; // [rsp+70h] [rbp-48h] BYREF

  v2 = sub_1440A00(a2, *a1);
  v3 = 0;
  if ( v2 )
  {
    v4 = *(_QWORD *)(*a1 + 64);
    v5 = *(unsigned int *)(v4 + 260);
    if ( (unsigned int)v5 <= 0x1F )
    {
      v6 = 4160750114LL;
      if ( _bittest64(&v6, v5) )
      {
        if ( *(_BYTE *)(v4 + 464) )
        {
          v7 = *(unsigned int **)(v2 + 16);
          v8 = *v7;
          v11[0] = v7 + 4;
          v11[1] = v8;
          sub_2246450(v12, v11);
          v14[0] = "---";
          v14[2] = v12;
          v15 = 1027;
          sub_22BA1B0(&v16, v14);
          if ( v12[0] != &v13 )
            operator delete(v12[0]);
          v9 = *(_DWORD *)(v4 + 456) == v17[8];
          if ( v16 != v17 )
            operator delete(v16);
          return v9;
        }
      }
    }
  }
  return v3;
}
