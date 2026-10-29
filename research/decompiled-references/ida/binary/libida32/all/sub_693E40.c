__int64 __fastcall sub_693E40(__int64 **a1, int *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v6; // r9d
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 *v9; // r13
  __int64 v10; // [rsp-10h] [rbp-38h]

  v6 = *a3;
  v7 = a3[1];
  if ( v6 != *a4 || a4[1] != (_DWORD)v7 )
  {
    if ( *((_BYTE *)a1 + 40) )
    {
      v9 = *a1;
      sub_3A1A90(*a1, v6, v7, 0x28u);
      sub_3A1A90(v9, *a4, a4[1], 0x28u);
      *(_QWORD *)a3 = *(_QWORD *)a4;
      return sub_5AD0D0(v9, (__int64)a2, 1);
    }
    else
    {
      v10 = v7;
      sub_693D00(a1, *a2);
      return v10;
    }
  }
  return result;
}

