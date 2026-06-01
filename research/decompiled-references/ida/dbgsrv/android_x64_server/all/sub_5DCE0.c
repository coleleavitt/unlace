/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5DCE0
// Address: 0x000000000005DCE0

//----- (000000000005DCE0) ----------------------------------------------------
char __fastcall sub_5DCE0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  __int64 v4; // rax
  unsigned __int64 v5; // r15
  void *v7[2]; // [rsp+0h] [rbp-88h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-78h]
  __int128 v9; // [rsp+20h] [rbp-68h]
  __int128 v10; // [rsp+30h] [rbp-58h]
  _BYTE v11[31]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 72);
  v3 = *(_DWORD *)(a1 + 76);
  if ( v2 >= v3 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    v5 = *(_QWORD *)(a1 + 24) - v4;
    if ( !v5 )
      return 0;
    if ( *(_QWORD *)(a1 + 48) != v5 )
    {
      memset(v11, 0, sizeof(v11));
      v10 = 0;
      v9 = 0;
      *(_OWORD *)ptr = 0;
      *(_OWORD *)v7 = 0;
      sub_5E070(a1 + 40, v5, (unsigned __int64)v7);
      if ( ptr[1] )
      {
        *(_QWORD *)&v9 = 0;
        qfree(ptr[1]);
        ptr[1] = nullptr;
        *((_QWORD *)&v9 + 1) = 0;
      }
      if ( v7[0] )
      {
        v7[1] = nullptr;
        qfree(v7[0]);
        v7[0] = nullptr;
        ptr[0] = nullptr;
      }
      v4 = *(_QWORD *)(a1 + 64);
    }
    *(_DWORD *)(a1 + 72) = 0;
    if ( !v4 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 600LL) + 16LL))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 600LL));
    v3 = sub_5DF40((_QWORD *)a1, v5);
    *(_DWORD *)(a1 + 76) = v3;
    if ( !v3 )
      return 0;
    *(_QWORD *)(a1 + 64) += v3;
    v2 = *(_DWORD *)(a1 + 72);
  }
  if ( v2 < v3 )
  {
    *a2 = *(_QWORD *)(a1 + 40) + 96LL * v2;
    ++*(_DWORD *)(a1 + 72);
    return 1;
  }
  return 0;
}
