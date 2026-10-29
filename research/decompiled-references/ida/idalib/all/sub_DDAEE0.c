__int64 __fastcall sub_DDAEE0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  _BYTE *v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v15; // [rsp+18h] [rbp-80h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v17; // [rsp+28h] [rbp-70h]
  _BYTE v18[104]; // [rsp+30h] [rbp-68h] BYREF

  v17 = 0x600000000LL;
  v4 = *(_DWORD *)(a3 + 36);
  ptr = v18;
  if ( v4 )
  {
    v5 = 0;
    do
    {
      v6 = *(_QWORD *)(a1 + 176);
      v7 = *(_QWORD *)sub_E21760(v6, 8);
      sub_E21790(v6, 8);
      v8 = (unsigned int)v17;
      if ( (unsigned int)v17 >= (unsigned __int64)HIDWORD(v17) )
      {
        if ( HIDWORD(v17) < (unsigned __int64)(unsigned int)v17 + 1 )
        {
          sub_2237220(&ptr, v18, (unsigned int)v17 + 1LL, 8);
          v8 = (unsigned int)v17;
        }
        *((_QWORD *)ptr + v8) = v7;
        v9 = (unsigned int)(v17 + 1);
        LODWORD(v17) = v17 + 1;
      }
      else
      {
        v9 = (unsigned int)(v17 + 1);
        *((_QWORD *)ptr + (unsigned int)v17) = v7;
        LODWORD(v17) = v9;
      }
      ++v5;
    }
    while ( *(_DWORD *)(a3 + 36) != v5 );
    v10 = ptr;
  }
  else
  {
    v9 = 0;
    v10 = v18;
  }
  v11 = sub_D9C6F0(a1, a2, a3, (__int64)v10, v9, &v15);
  if ( (_BYTE)v11 )
  {
    v12 = v15;
    v13 = sub_E216C0(*(_QWORD *)(a1 + 176), 16);
    *(_QWORD *)v13 = v12;
    *(_DWORD *)(v13 + 8) = 64;
  }
  if ( ptr != v18 )
    free(ptr);
  return v11;
}
