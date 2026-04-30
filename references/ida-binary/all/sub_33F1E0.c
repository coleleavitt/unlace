unsigned __int64 __fastcall sub_33F1E0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rax

  v3 = *a1;
  v4 = a1[2];
  v5 = a1[1] - *a1;
  v6 = ~v4;
  if ( *((_BYTE *)a1 + 24) )
  {
    v7 = *(int *)(a3 + 176);
    v8 = v7 + v4;
    if ( v6 < v7 )
      v8 = -1;
    if ( (int)v7 <= 0 )
      LODWORD(v7) = 1;
    v9 = v5 / (int)v7;
    goto LABEL_7;
  }
  v9 = *(_QWORD *)(a3 + 168);
  if ( v3 - 1 - a1[1] >= v9 )
  {
    v11 = (v9 + v5 - 1) / v9;
    v8 = v4 + v11;
    if ( v6 < v11 )
      v8 = -1;
LABEL_7:
    result = -1;
    if ( !v9 )
      return result;
    goto LABEL_8;
  }
  v8 = v4 + 0xFFFFFFFFFFFFFFFELL / v9;
  if ( v6 < 0xFFFFFFFFFFFFFFFELL / v9 )
    v8 = -1;
LABEL_8:
  result = v4 + (a2 - v3) / v9;
  if ( result >= v8 )
    return v8 - 1;
  return result;
}
