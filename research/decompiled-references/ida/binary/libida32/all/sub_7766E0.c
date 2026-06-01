unsigned __int64 __fastcall sub_7766E0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v4; // rdi
  char vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  __int64 vars18; // [rsp+18h] [rbp+18h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  vars28 = __readfsqword(0x28u);
  vars0 = 2;
  vars8 = 0;
  vars18 = 0;
  copy_idcv(&vars0);
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v4 = v2 - 1;
    *(_QWORD *)(a1 + 32) = v4;
    free_idcv(*(_QWORD *)(a1 + 24) + 32 * v4);
  }
  free_idcv(&vars0);
  return vars28 - __readfsqword(0x28u);
}

