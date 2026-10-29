__int64 __fastcall sub_9652C0(_QWORD *a1, __int64 a2, unsigned int *a3, int *a4)
{
  unsigned int v7; // r12d
  int v8; // ecx
  int v9; // eax
  int v10; // r14d
  unsigned __int8 **v12; // rax
  unsigned __int64 v13; // rcx
  _QWORD **v14; // rdi
  __int64 (*v15)(void); // rax
  int v16; // eax
  char v17; // cl
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 **v19; // [rsp+8h] [rbp-40h] BYREF
  void *v20; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-30h]
  char v22; // [rsp+1Ch] [rbp-2Ch]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    *a4 &= 0x1Fu;
    goto LABEL_3;
  }
  if ( *a4 >= 0 )
  {
LABEL_3:
    v7 = sub_953C20((__int64)a1, a2, a3, a4, 0x20u);
    if ( (_BYTE)v7 )
    {
      v8 = *a4;
      v9 = *a3;
      if ( *a4 > 31 )
      {
        v10 = 0;
        if ( v9 >= 0 )
        {
          if ( v9 )
          {
            _BitScanReverse((unsigned int *)&v9, v9);
            v16 = v9 ^ 0x1F;
            v17 = v16;
          }
          else
          {
            v17 = 32;
            v16 = 32;
          }
          *a4 = v16;
          v10 = *a3 << v17;
        }
      }
      else
      {
        v10 = v9 << v8;
        if ( v9 < 0 )
        {
          v10 = v9 << v8;
          if ( v9 == 0x80000000 )
            v10 = 0;
        }
      }
      *(_DWORD *)sub_A1A4E0(a1[23], 8) = v10;
    }
    return v7;
  }
  v18 = sub_A16CE0(a1[25], a2);
  v12 = (unsigned __int8 **)sub_A2E1B0(a1, &v18, 2242, 0);
  v13 = (unsigned int)*a4;
  v22 = 0;
  v19 = v12;
  v21 = 32;
  v20 = (void *)v13;
  if ( v12 )
  {
    sub_8DF340(&v19, (__int64)&v20);
    if ( v21 > 0x40 )
    {
      if ( v20 )
        operator delete[](v20);
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
  *a4 = -*a4;
  return (unsigned int)sub_965070((__int64)a1, a2, (int *)a3, a4);
}

