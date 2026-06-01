__int64 __fastcall sub_6F4800(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 result; // rax
  int v8; // edx
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+8h] [rbp-40h] BYREF
  __int64 v15; // [rsp+10h] [rbp-38h] BYREF
  __int64 v16; // [rsp+18h] [rbp-30h]

  v2 = *(_DWORD *)(a2 + 16);
  v15 = 0;
  sub_6EF800(a1 + 11, &v15);
  v3 = a1[20];
  if ( v3 && (v4 = *(_DWORD *)(v3 - 4), v2 < v4) && (v5 = v4 - v2 - 1, (v6 = *(_QWORD *)(v3 + 8 * v5)) != 0) )
  {
    if ( !*(_WORD *)(v6 + 4) && (*(_BYTE *)(v6 + 30) & 1) != 0 || (v9 = *(_DWORD *)(a1[66] + 4 * v5), v9 == v4) )
    {
      v15 = v6;
      ++*(_DWORD *)(v6 + 8);
      sub_6EFE70(a1 + 7, &v15);
    }
    else
    {
      v10 = v4 - v9;
      v11 = v10;
      v12 = sub_1680FB0(a1[4], v6, v10);
      if ( v12 )
      {
        v15 = v12;
        ++*(_DWORD *)(v12 + 8);
        sub_6EFE70(a1 + 7, &v15);
      }
      else
      {
        v13 = a1[1];
        v15 = 0;
        v16 = v13;
        sub_1585D20(a1 + 21, v6, 0, v11, 0, &v15);
        v14 = v15;
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        sub_6EFE70(a1 + 7, &v14);
        sub_1584390(a1, v6, v11, v15);
        sub_6EF400(v15, v16);
      }
    }
    result = a1[5];
    if ( result )
    {
      v8 = *(_DWORD *)(result - 4);
      if ( v8 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v8 - 1) + 8) |= 2u;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 8);
    v15 = a2;
    return sub_6EFE70(a1 + 7, &v15);
  }
  return result;
}

