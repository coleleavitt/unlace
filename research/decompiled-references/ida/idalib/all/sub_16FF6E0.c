__int64 __fastcall sub_16FF6E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  result = *(_QWORD *)a1;
  v4 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v4 )
  {
    v5 = a3;
    if ( (result & 4) == 0 )
    {
      v6 = operator new(0x50u);
      v7 = *(unsigned int *)(a1 + 8);
      *(_QWORD *)(v6 + 16) = v4;
      *(_QWORD *)v6 = v6 + 16;
      *(_DWORD *)(v6 + 12) = 4;
      *(_QWORD *)a1 = v6 | 4;
      *(_QWORD *)(v6 + 24) = v7;
      *(_DWORD *)(v6 + 8) = 1;
      v4 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    }
    v8 = *(unsigned int *)(v4 + 8);
    if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 12) )
    {
      sub_2237220(v4, v4 + 16, v8 + 1, 16);
      v8 = *(unsigned int *)(v4 + 8);
    }
    result = *(_QWORD *)v4 + 16 * v8;
    *(_QWORD *)result = a2;
    *(_QWORD *)(result + 8) = v5;
    ++*(_DWORD *)(v4 + 8);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = a3;
    *(_QWORD *)a1 = a2 & 0xFFFFFFFFFFFFFFFBLL;
  }
  return result;
}
