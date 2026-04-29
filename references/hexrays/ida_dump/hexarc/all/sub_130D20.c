unsigned __int64 __fastcall sub_130D20(__int64 a1, __int64 *a2, __int64 a3)
{
  int *v3; // rbx
  int *v4; // r14
  int v6; // eax
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v13[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+10h] [rbp-48h] BYREF
  __int128 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( a3 )
  {
    v3 = *(int **)(a3 + 8);
    v4 = &v3[*(_QWORD *)(a3 + 16)];
    while ( v3 != v4 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, (unsigned int)*v3);
      v7 = *v3;
      v13[0] = 0;
      v13[1] = 0;
      sub_5D900(v13, v7, v6);
      v14 = 0;
      v15 = 0;
      sub_5E0C0(a2, v13, v8, v9, v10, v11);
      sub_3108E0(a2 + 2, &v14);
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree(v14);
      }
      ++v3;
      qfree(v13[0]);
    }
  }
  return v16 - __readfsqword(0x28u);
}
