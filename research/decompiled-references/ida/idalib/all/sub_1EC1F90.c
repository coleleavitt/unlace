__int64 __fastcall sub_1EC1F90(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rcx
  size_t v7; // rdx
  unsigned int v8; // eax
  _QWORD *v10; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v11[4]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v12; // [rsp+30h] [rbp-38h]

  v3 = 0;
  if ( *(_QWORD *)a2 == *(_QWORD *)a3 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( !v4 || (v5 = *(_QWORD *)(a3 + 8)) == 0 || v4 == v5 )
    {
      v12 = 261;
      v11[0] = *(_QWORD *)(a2 + 16);
      v11[1] = *(_QWORD *)(a2 + 24);
      v3 = sub_228B020(v11, 0);
      if ( !(_BYTE)v3
        || (v7 = *(_QWORD *)(a2 + 24), v7 != *(_QWORD *)(a3 + 24))
        || v7 && memcmp(*(const void **)(a2 + 16), *(const void **)(a3 + 16), v7) )
      {
        v3 = 0;
        v10 = sub_1EC1DC0(a1, a2);
        v11[0] = (unsigned __int64)sub_1EC1DC0(a1, a3);
        if ( v10 && v11[0] )
        {
          LOBYTE(v8) = sub_FEE430((unsigned __int64 *)&v10, v11);
          return v8;
        }
      }
    }
  }
  return v3;
}
