/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36C78
// Address: 0x00036C78

//----- (00036C78) --------------------------------------------------------
int __fastcall sub_36C78(int a1, _DWORD *a2)
{
  unsigned int v3; // r1
  unsigned int v4; // r0
  __int64 v5; // r0
  __int64 v6; // r2
  _DWORD *v7; // r6
  int v8; // r7
  bool v9; // cf
  unsigned int v12; // [sp+Ch] [bp-4Ch]
  void *v13[17]; // [sp+10h] [bp-48h] BYREF

  v3 = *(_DWORD *)(a1 + 48);
  v4 = *(_DWORD *)(a1 + 52);
  if ( v3 < v4 )
  {
LABEL_13:
    v8 = 0;
    if ( v3 < v4 )
    {
      *a2 = *(_DWORD *)(a1 + 28) + 68 * v3;
      ++*(_DWORD *)(a1 + 48);
      return 1;
    }
    return v8;
  }
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 16) - v5;
  v7 = (_DWORD *)(a1 + 40);
  v8 = 0;
  if ( v6 )
  {
    v12 = *(_DWORD *)(a1 + 16) - v5;
    if ( *(_DWORD *)(a1 + 32) != (_DWORD)v6 )
    {
      memset(v13, 0, 0x43u);
      sub_36F54(a1 + 28, v12, (unsigned int)v13);
      LODWORD(v6) = v12;
      if ( v13[3] )
      {
        v13[4] = nullptr;
        qfree(v13[3]);
        v13[5] = nullptr;
        v13[3] = nullptr;
        LODWORD(v6) = v12;
      }
      if ( v13[0] )
      {
        v13[1] = nullptr;
        qfree(v13[0]);
        v13[2] = nullptr;
        v13[0] = nullptr;
        LODWORD(v6) = v12;
      }
      LODWORD(v5) = *v7;
      HIDWORD(v5) = *(_DWORD *)(a1 + 44);
      v7 = (_DWORD *)(a1 + 40);
    }
    v8 = 0;
    *(_DWORD *)(a1 + 48) = 0;
    if ( !v5 )
    {
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 4) + 472) + 8))(*(_DWORD *)(*(_DWORD *)(a1 + 4)
                                                                                                + 472));
      LODWORD(v6) = v12;
    }
    v4 = sub_36E14(a1, v6);
    *(_DWORD *)(a1 + 52) = v4;
    if ( v4 )
    {
      v9 = __CFADD__(*v7, v4);
      *v7 += v4;
      v7[1] += v9;
      v3 = *(_DWORD *)(a1 + 48);
      goto LABEL_13;
    }
  }
  return v8;
}
