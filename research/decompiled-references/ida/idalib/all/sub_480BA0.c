__int64 __fastcall sub_480BA0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 *v4; // r12
  unsigned __int64 v5; // rbx
  __int64 *v6; // rbp
  __int64 *v7; // rbp
  __int64 v8; // rbp
  __int64 *v9; // rdi
  __int64 v11[9]; // [rsp+10h] [rbp-48h] BYREF

  v11[1] = __readfsqword(0x28u);
  v4 = (unsigned __int64 *)(**(_QWORD **)(a1 + 40) + 16LL * a3);
  v5 = *v4;
  if ( *v4 >= v4[1] )
    return 0;
  while ( 1 )
  {
    v7 = *(__int64 **)(switch_dbctx(*(int *)(a2 + 8)) + 1672);
    if ( (sub_3BE900(v7, v5, 1) & 0x100) == 0 )
      break;
    sub_3BEFF0(v7, v11, v5);
    v8 = v11[0];
    v9 = *(__int64 **)(switch_dbctx(*(int *)(a1 + 8)) + 1672);
    if ( (sub_3BE900(v9, v5, 1) & 0x100) == 0 )
      return 1;
    sub_3BEFF0(v9, v11, v5);
    if ( v11[0] != v8 )
      return 1;
LABEL_4:
    if ( ++v5 >= v4[1] )
      return 0;
  }
  v6 = *(__int64 **)(switch_dbctx(*(int *)(a1 + 8)) + 1672);
  if ( (sub_3BE900(v6, v5, 1) & 0x100) == 0 )
    goto LABEL_4;
  sub_3BEFF0(v6, v11, v5);
  return 1;
}
