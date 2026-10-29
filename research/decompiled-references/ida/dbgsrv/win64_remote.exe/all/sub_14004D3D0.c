/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004D3D0
// Address: 0x000000014004D3D0

//----- (000000014004D3D0) ----------------------------------------------------
char __fastcall sub_14004D3D0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // r8
  _BYTE *v9; // rax
  _BYTE *v10; // rdi
  __int64 v11; // rbx
  __int64 v13; // rcx
  unsigned int v14; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(unsigned int *)(a1 + 84);
  if ( !(_DWORD)v5 )
    return 0;
  v6 = v5 + (unsigned int)(18 * *(_DWORD *)(a1 + 88));
  if ( (!v6 || sub_140063BF0(a3, v6, 0) == v6) && sub_140063BD0(a3, &v14, 4) == 4 && v14 > 4 )
  {
    sub_140063BF0(a3, -4, 1);
    v7 = sub_140063BF0(a3, 0, 1);
    v8 = sub_140063C70(a3) - v7;
    if ( v7 >= 0 && v8 >= 0 && (!v14 || 0xFFFFFFFFFFFFFFFFuLL / v14 && v8 >= (unsigned __int64)v14) )
    {
      v9 = sub_14005AA50(v14 + 1);
      v10 = v9;
      if ( v9 )
      {
        v11 = v14;
        if ( sub_140063BD0(a3, v9, v14) == v11 )
        {
          v10[v14] = 0;
          sub_14000E720((__int64)a2);
          v13 = v14 + 1;
          *a2 = v10;
          a2[2] = v13;
          a2[1] = v13;
          return 1;
        }
        j_free(v10);
      }
    }
  }
  return 0;
}
