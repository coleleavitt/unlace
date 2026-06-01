__int64 __fastcall sub_777BE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // edx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  char v8[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  __int64 v10; // [rsp+18h] [rbp-30h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v11 = __readfsqword(0x28u);
  v4 = move_idcv(a2, v3 + 32 * v2 - 32);
  result = 0;
  if ( !v4 )
  {
    v8[0] = 2;
    v9 = 0;
    v10 = 0;
    copy_idcv(v8);
    v6 = *(_QWORD *)(a1 + 32);
    if ( v6 )
    {
      v7 = v6 - 1;
      *(_QWORD *)(a1 + 32) = v7;
      free_idcv(*(_QWORD *)(a1 + 24) + 32 * v7);
    }
    free_idcv(v8);
    return 1;
  }
  return result;
}

