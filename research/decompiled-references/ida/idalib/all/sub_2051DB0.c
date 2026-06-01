__int64 __fastcall sub_2051DB0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // edx
  unsigned int v4; // edx
  __int64 v5; // rdx
  unsigned int v6; // edx
  __int64 v7; // [rsp+0h] [rbp-10h]

  *(_BYTE *)(a1 + 32) = 0;
  result = a1;
  if ( *(_BYTE *)(a2 + 72) )
  {
    v3 = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(a1 + 8) = v3;
    if ( v3 > 0x40 )
    {
      sub_2205510(a1);
      result = a1;
      v6 = *(_DWORD *)(a2 + 64);
      *(_DWORD *)(a1 + 24) = v6;
      if ( v6 <= 0x40 )
        goto LABEL_4;
    }
    else
    {
      *(_QWORD *)a1 = *(_QWORD *)(a2 + 40);
      v4 = *(_DWORD *)(a2 + 64);
      *(_DWORD *)(a1 + 24) = v4;
      if ( v4 <= 0x40 )
      {
LABEL_4:
        v5 = *(_QWORD *)(a2 + 56);
        *(_BYTE *)(result + 32) = 1;
        *(_QWORD *)(result + 16) = v5;
        return result;
      }
    }
    v7 = result;
    sub_2205510(result + 16);
    *(_BYTE *)(v7 + 32) = 1;
    return v7;
  }
  return result;
}
