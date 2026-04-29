char __fastcall sub_1EA670(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4, unsigned int a5)
{
  signed int tinfo_size; // r15d
  unsigned int v7; // ebx
  char result; // al
  bool v10; // [rsp+Ch] [rbp-5Ch]
  int v11[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  tinfo_size = a4;
  v7 = a4;
  v12 = __readfsqword(0x28u);
  if ( a3 )
    tinfo_size = get_tinfo_size(0, *(_QWORD *)a3, 0);
  if ( *(_DWORD *)a1 != 1
    || *(_DWORD *)(a2 + 80) > tinfo_size
    || (*(_BYTE *)(a1 + 27) & 4) != 0
    || (result = sub_D25C0(*(int **)(a2 + 96), (_DWORD *)a1, (_DWORD **)a3, v7, a5)) != 0 )
  {
    v11[0] = 0;
    copy_argloc(v11, a1);
    if ( v7 == -1 )
      v7 = tinfo_size;
    sub_1C3560((__int64)v11, a2, a3, v7, a5);
    v10 = (unsigned int)sub_1BE710(v11, (int *)a1) == 0;
    cleanup_argloc(v11);
    return v10;
  }
  return result;
}
