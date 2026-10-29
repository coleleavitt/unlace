__int64 __fastcall sub_205A6C0(__int64 a1)
{
  __int64 v1; // r8
  int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 i; // r12
  __int64 v7; // r15
  __int64 v8; // rbp
  unsigned int v9; // ebp
  int v11; // [rsp+Ch] [rbp-14Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-148h] BYREF
  __int64 v13; // [rsp+18h] [rbp-140h]
  _BYTE v14[312]; // [rsp+20h] [rbp-138h] BYREF

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 4);
  v13 = 0x2000000000LL;
  v3 = 0;
  v4 = v2 & 0x7FFFFFF;
  ptr = v14;
  if ( (unsigned int)v4 > 0x20uLL )
  {
    sub_2237220(&ptr, v14, (unsigned int)v4, 8);
    v1 = (unsigned int)v13;
    v4 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
    v3 = (unsigned int)v13;
  }
  if ( (_DWORD)v4 )
  {
    v5 = (unsigned int)(v4 - 1);
    for ( i = 0; ; ++i )
    {
      v7 = *(_QWORD *)(a1 + 32 * (i - v4));
      if ( v3 + 1 > (unsigned __int64)HIDWORD(v13) )
      {
        sub_2237220(&ptr, v14, v3 + 1, 8);
        *((_QWORD *)ptr + (unsigned int)v13) = v7;
      }
      else
      {
        *((_QWORD *)ptr + v3) = v7;
      }
      v3 = (unsigned int)(v13 + 1);
      LODWORD(v13) = v13 + 1;
      if ( v5 == i )
        break;
      v4 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
    }
    v1 = (unsigned int)v3;
  }
  v8 = *(_QWORD *)(a1 + 8);
  v11 = sub_2053D00(ptr, (__int64)ptr + 8 * v1);
  v9 = sub_2050F10(v8, &v11);
  if ( ptr != v14 )
    free(ptr);
  return v9;
}
