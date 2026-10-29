/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_426A90
// Address: 0x0000000000426A90

//----- (0000000000426A90) ----------------------------------------------------
unsigned __int64 __fastcall sub_426A90(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // rdx

  v2 = 0;
  if ( *(_DWORD *)(a2 + 4) != 8 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    v4 = *(_QWORD *)(a1[20] + 488LL) - *(_QWORD *)(a1[20] + 480LL);
    v5 = a1[4];
    if ( a2 + 64 >= v5 && a2 + 64 < (a1[5] << 6) + v5 )
    {
      v8 = *(_QWORD *)(a2 + 88);
      if ( v8 < v4 && v8 >= v3 )
        v4 = *(_QWORD *)(a2 + 88);
    }
    v2 = 0;
    if ( v3 < v4 )
    {
      v2 = *(_QWORD *)(a2 + 32);
      v6 = v4 - v3;
      if ( v6 <= v2 )
        return v6;
    }
  }
  return v2;
}
