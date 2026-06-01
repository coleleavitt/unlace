__int64 __fastcall sub_964EB0(_QWORD *a1, __int64 a2, unsigned int *a3, void **a4)
{
  unsigned int v7; // r12d
  void *v8; // rcx
  int v9; // eax
  int v10; // r14d
  unsigned __int8 **v12; // rax
  void *v13; // rdx
  _QWORD **v14; // rdi
  __int64 (*v15)(void); // rax
  unsigned int v16; // ecx
  signed int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 **v20; // [rsp+8h] [rbp-40h] BYREF
  void *v21; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-30h]
  char v23; // [rsp+1Ch] [rbp-2Ch]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    *a4 = (void *)((unsigned __int64)*a4 & 0x1F);
    goto LABEL_3;
  }
  if ( (__int64)*a4 >= 0 )
  {
LABEL_3:
    v7 = sub_953EA0((__int64)a1, a2, a3, a4, 0x20u);
    if ( (_BYTE)v7 )
    {
      v8 = *a4;
      v9 = *a3;
      if ( (__int64)*a4 > 31 )
      {
        v10 = 0;
        if ( v9 >= 0 )
        {
          if ( v9 )
          {
            _BitScanReverse(&v16, v9);
            v17 = v16 ^ 0x1F;
            v18 = v17;
          }
          else
          {
            v18 = 32;
            LOBYTE(v17) = 32;
          }
          *a4 = (void *)v18;
          v10 = *a3 << v17;
        }
      }
      else
      {
        v10 = v9 << (char)v8;
        if ( v9 < 0 )
        {
          v10 = v9 << (char)v8;
          if ( v9 == 0x80000000 )
            v10 = 0;
        }
      }
      *(_DWORD *)sub_A1A4E0(a1[23], 8) = v10;
    }
    return v7;
  }
  v19 = sub_A16CE0(a1[25], a2);
  v12 = (unsigned __int8 **)sub_A2E1B0(a1, &v19, 2242, 0);
  v13 = *a4;
  v23 = 0;
  v20 = v12;
  v22 = 64;
  v21 = v13;
  if ( v12 )
  {
    sub_8DF340(&v20, (__int64)&v21);
    if ( v22 > 0x40 )
    {
      if ( v21 )
        operator delete[](v21);
    }
  }
  v14 = (_QWORD **)a1[3];
  v15 = (__int64 (*)(void))(*v14)[4];
  if ( (char *)v15 == (char *)sub_8D7FC0 )
    v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v14[3] + 32LL))(v14[3]);
  else
    v7 = v15();
  if ( !(_BYTE)v7 )
    return v7;
  *a4 = (void *)-(__int64)*a4;
  return (unsigned int)sub_964C60((__int64)a1, a2, (int *)a3, (__int64 *)a4);
}

