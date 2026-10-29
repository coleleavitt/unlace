__int64 __fastcall sub_BFA5E0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v8; // r9
  unsigned int v9; // ebp
  __int64 v10; // r12
  __int64 v11; // [rsp+0h] [rbp-38h]
  __int64 v12; // [rsp+0h] [rbp-38h]
  __int64 v13; // [rsp+8h] [rbp-30h]
  __int64 v14; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+18h] [rbp-20h]

  v6 = *(unsigned __int8 *)(a3 + 12);
  if ( (_BYTE)v6 )
  {
    v15 = *(_DWORD *)(a3 + 8);
    if ( v15 > 0x40 )
    {
      v13 = a6;
      v12 = a4;
      sub_21E17D0(&v14);
      a6 = v13;
      a4 = v12;
    }
    else
    {
      v14 = *(_QWORD *)a3;
    }
    v11 = a6;
    sub_21E1C60(&v14, a4);
    v8 = v11;
    v9 = v15;
    v10 = v14;
    if ( *(_DWORD *)(v11 + 8) > 0x40u )
    {
      if ( *(_QWORD *)v11 )
      {
        operator delete[](*(void **)v11);
        v8 = v11;
      }
    }
    *(_QWORD *)v8 = v10;
    *(_DWORD *)(v8 + 8) = v9;
    *(_BYTE *)(v8 + 12) = 1;
    return v6;
  }
  else
  {
    LOBYTE(result) = sub_BFA270(a1, a2, a3, a4, a5, a6);
    return (unsigned int)result;
  }
}

