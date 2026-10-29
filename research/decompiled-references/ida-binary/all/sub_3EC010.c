__int64 __fastcall sub_3EC010(__int64 a1, unsigned __int64 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx

  v2 = *(__int64 **)(a1 + 192);
  v3 = v2[1];
  if ( !v3 )
    return -1;
  v4 = *a2;
  v5 = 0;
  if ( *a2 == -1 )
    return v5;
  v6 = 16 * v3;
  v7 = *v2;
  v8 = *v2 + v6;
  v9 = v6 >> 4;
  v10 = *v2;
  if ( v6 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v11 = v9 >> 1;
        v12 = v10 + 16 * (v9 >> 1);
        if ( *(_QWORD *)v12 < v4 || v4 >= *(_QWORD *)v12 && *(_WORD *)(v12 + 8) < *((_WORD *)a2 + 4) )
          break;
        v9 >>= 1;
        if ( v11 <= 0 )
          goto LABEL_10;
      }
      v10 = v12 + 16;
      v9 = v9 - 1 - v11;
    }
    while ( v9 > 0 );
  }
LABEL_10:
  v13 = (v10 - v7) >> 4;
  if ( v8 == v10 )
    return 0;
  return v13;
}
