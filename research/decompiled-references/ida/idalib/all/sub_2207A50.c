__int64 __fastcall sub_2207A50(__int64 a1, unsigned __int64 **a2, unsigned __int64 a3)
{
  unsigned int v3; // ebp
  unsigned __int64 v4; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+18h] [rbp-30h]

  v3 = *((_DWORD *)a2 + 2);
  v10 = a3;
  if ( v3 <= 0x40 )
  {
    v4 = (unsigned __int64)*a2;
    *(_DWORD *)(a1 + 8) = v3;
    *(_QWORD *)a1 = v4 / v10;
    return a1;
  }
  v6 = v3 - (unsigned int)sub_C16760((__int64)a2);
  v7 = (unsigned __int64)(v6 + 63) >> 6;
  if ( v7 )
  {
    v8 = v10;
    if ( v10 == 1 )
    {
      *(_DWORD *)(a1 + 8) = v3;
      sub_2205510(a1, (const void **)a2);
      return a1;
    }
    if ( (unsigned int)v6 > 0x40 )
    {
LABEL_9:
      if ( v7 == 1 )
      {
        v9 = **a2;
        *(_DWORD *)(a1 + 8) = v3;
        sub_2205470(a1, v9 / v8, 0);
      }
      else
      {
        v12 = v3;
        sub_2205470((__int64)&v11, 0, 0);
        sub_2206F10((__int64 *)*a2, v7, (__int64 *)&v10, 1, v11, 0);
        *(_DWORD *)(a1 + 8) = v12;
        *(_QWORD *)a1 = v11;
      }
      return a1;
    }
    if ( v10 <= **a2 )
    {
      if ( v10 == **a2 )
      {
        *(_DWORD *)(a1 + 8) = v3;
        sub_2205470(a1, 1, 0);
        return a1;
      }
      goto LABEL_9;
    }
  }
  *(_DWORD *)(a1 + 8) = v3;
  sub_2205470(a1, 0, 0);
  return a1;
}
