__int64 __fastcall sub_B16900(__int64 a1)
{
  __int64 *v1; // r10
  __int64 *v2; // rbx
  __int64 i; // r11
  char v4; // r9
  unsigned __int8 *v5; // rdi
  __int64 v6; // r12
  unsigned __int8 *v7; // rax
  char v8; // r9
  __int64 v9; // r11

  v1 = *(__int64 **)(a1 + 16);
  v2 = &v1[*(_QWORD *)(a1 + 24)];
  if ( v2 == v1 )
    return 1;
  for ( i = *v1; *(_BYTE *)(*v1 + 12) == 2; i = *v1 )
  {
    v4 = *(_BYTE *)(i + 13);
    if ( (v4 & 2) == 0 )
    {
      v5 = *(unsigned __int8 **)(i + 16);
      v6 = (__int64)&v5[*(_QWORD *)(i + 24)];
      v7 = sub_B16680(v5, v6);
      v4 = (4 * (v6 == (_QWORD)v7)) | v8 & 0xFB | 2;
      *(_BYTE *)(v9 + 13) = v4;
    }
    if ( (v4 & 4) == 0 )
      break;
    if ( ++v1 == v2 )
      return 1;
  }
  return 0;
}

