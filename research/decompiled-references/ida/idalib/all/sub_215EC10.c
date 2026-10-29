__int64 __fastcall sub_215EC10(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rdi
  size_t v9; // rax
  const char *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD v16[4]; // [rsp+18h] [rbp-20h] BYREF

  if ( *(_DWORD *)a3 )
  {
    if ( *(_BYTE *)(a3 + 7) )
    {
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)a1 = a3;
      *(_QWORD *)(a1 + 8) = 8;
      return a1;
    }
    v5 = strlen((const char *)a3);
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)a1 = a3;
    return a1;
  }
  else
  {
    v6 = *(unsigned int *)(a2 + 120);
    if ( (unsigned int)v6 <= 4 )
    {
      v13 = sub_2195B10(a1, a2, a3, v6);
      sub_A09EA0((__int64)v16, 3u, v13, "string table empty");
      v14 = v16[0];
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v14;
      return a1;
    }
    else
    {
      v7 = *(_DWORD *)(a3 + 4);
      if ( v7 >= (unsigned int)v6 )
      {
        v11 = sub_2195B10(a1, a2, a3, v6);
        sub_2220500(v16, 4, v11);
        v12 = v16[0];
        *(_BYTE *)(a1 + 16) |= 1u;
        *(_QWORD *)a1 = v12;
        return a1;
      }
      v8 = v7;
      v9 = 0;
      v10 = (const char *)(*(_QWORD *)(a2 + 112) + v8);
      if ( v10 )
        v9 = strlen(v10);
      *(_QWORD *)a1 = v10;
      *(_QWORD *)(a1 + 8) = v9;
      *(_BYTE *)(a1 + 16) &= ~1u;
      return a1;
    }
  }
}
