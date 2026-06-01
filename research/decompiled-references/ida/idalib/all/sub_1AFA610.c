unsigned __int64 __fastcall sub_1AFA610(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // r10
  unsigned int v5; // eax
  _QWORD *v6; // r11
  __int64 v7; // rdx
  __int64 v9; // r9
  unsigned int v10; // r8d
  int v11; // ebx
  __int64 v12; // rdx
  int v13; // edx
  __m128 v14; // [rsp+0h] [rbp-18h] BYREF

  v3 = *(_BYTE *)a1 & 1;
  if ( !v3 )
  {
    v9 = *(unsigned int *)(a1 + 16);
    v4 = *(_QWORD *)(a1 + 8);
    v10 = v9;
    if ( !(_DWORD)v9 )
      goto LABEL_10;
    v11 = v9 - 1;
    v5 = (v9 - 1) & (((unsigned int)a2 >> 4) ^ ((unsigned int)a2 >> 9));
    v6 = (_QWORD *)(v4 + 24LL * v5);
    if ( *v6 == a2 )
    {
LABEL_6:
      v7 = 24LL * v10;
      goto LABEL_3;
    }
    if ( *v6 == -4096 )
    {
LABEL_10:
      v12 = 24 * v9;
      goto LABEL_8;
    }
LABEL_12:
    v13 = 1;
    while ( 1 )
    {
      v5 = v11 & (v13 + v5);
      v6 = (_QWORD *)(v4 + 24LL * v5);
      if ( *v6 == a2 )
        break;
      ++v13;
      if ( *v6 == -4096 )
      {
        if ( !(_BYTE)v3 )
        {
          v9 = *(unsigned int *)(a1 + 16);
          goto LABEL_10;
        }
        v12 = 192;
        goto LABEL_8;
      }
    }
    if ( !(_BYTE)v3 )
    {
      v10 = *(_DWORD *)(a1 + 16);
      goto LABEL_6;
    }
    v7 = 192;
    goto LABEL_3;
  }
  v4 = a1 + 8;
  v5 = ((unsigned __int8)((unsigned int)a2 >> 4) ^ (unsigned __int8)((unsigned int)a2 >> 9)) & 7;
  v6 = (_QWORD *)(a1
                + 8
                + 24LL * (((unsigned __int8)((unsigned int)a2 >> 4) ^ (unsigned __int8)((unsigned int)a2 >> 9)) & 7));
  v7 = 192;
  if ( a2 == *v6 )
  {
LABEL_3:
    sub_1AF9650(&v14, v6, (_QWORD *)(v4 + v7), a1, 1);
    return v14.m128_u64[0];
  }
  v12 = 192;
  v11 = 7;
  if ( *v6 != -4096 )
    goto LABEL_12;
LABEL_8:
  sub_1AF9650(&v14, (_QWORD *)(v4 + v12), (_QWORD *)(v4 + v12), a1, 1);
  return v14.m128_u64[0];
}
