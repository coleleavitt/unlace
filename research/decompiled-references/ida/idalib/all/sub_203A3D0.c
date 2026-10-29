void __fastcall sub_203A3D0(__int64 a1, const void *a2, size_t a3, __int64 a4, char a5, char a6)
{
  __int64 v6; // rax
  unsigned int v7; // r10d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx

  if ( a4 )
  {
    if ( *(_BYTE *)a4 == 1 )
    {
      v6 = *(_QWORD *)(a4 + 128);
      v7 = *(_DWORD *)(v6 + 32);
      v8 = *(_QWORD *)(v6 + 24);
      if ( a5 )
      {
        v9 = v8;
        if ( v7 > 0x40 )
          v9 = *(_QWORD *)v8;
        sub_2031390(a1, a2, a3, v9, a6);
      }
      else
      {
        if ( v7 > 0x40 )
        {
          v10 = *(_QWORD *)v8;
        }
        else
        {
          v10 = 0;
          if ( v7 )
            v10 = v8 << (64 - (unsigned __int8)v7) >> (64 - (unsigned __int8)v7);
        }
        sub_2031310(a1, a2, a3, v10, a6);
      }
    }
    else
    {
      sub_203A140(a1, a2, a3, a4);
    }
  }
}
