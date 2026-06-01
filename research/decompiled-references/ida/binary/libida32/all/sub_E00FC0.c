void __fastcall sub_E00FC0(__int64 a1)
{
  char v2; // al
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // r12d
  unsigned int v6; // r13d
  __int64 v7; // rbp
  unsigned int v8; // eax
  volatile signed __int32 *v9; // rdi
  _QWORD *v10; // r15
  bool v11; // zf
  volatile signed __int32 *v12; // rdi
  double v13[8]; // [rsp+0h] [rbp-40h] BYREF

  if ( !*(_DWORD *)(a1 + 24) )
  {
    v2 = sub_CDA840(a1);
    v3 = *(_QWORD *)(a1 + 32);
    if ( v2 && *(_DWORD *)(a1 + 40) == 8 )
    {
      *(_DWORD *)(v3 + 40) = 0;
      return;
    }
    v4 = sub_CDA220(a1);
    if ( *(_QWORD *)(v4 + 40) || !*(_BYTE *)(v4 + 60) )
    {
      *(_BYTE *)(v3 + *(unsigned int *)(a1 + 40) + 28) |= 2u;
      return;
    }
    if ( !*(_BYTE *)(v3 + 24) || *(_DWORD *)(a1 + 40) )
    {
      v5 = *(_DWORD *)(v4 + 20);
      if ( v5 != -1 )
      {
        v6 = *(_DWORD *)(v4 + 16);
        if ( v6 <= v5 )
        {
          v7 = v3 + *(unsigned int *)(a1 + 40) + 40;
          if ( *(_BYTE *)(v7 + 24) )
            goto LABEL_14;
          v10 = (_QWORD *)operator new(0x20u);
          v10[1] = 0x100000001LL;
          *v10 = off_2BDAD70;
          sub_CCBCD0((__int64)(v10 + 2), v5 / v6);
          v11 = *(_BYTE *)(v7 + 24) == 0;
          *(_BYTE *)v7 = 0;
          if ( v11 )
          {
            *(_QWORD *)(v7 + 8) = v10 + 2;
            *(_QWORD *)(v7 + 16) = v10;
            *(_BYTE *)(v7 + 24) = 1;
          }
          else
          {
            *(_QWORD *)&v13[0] = v10;
            v12 = *(volatile signed __int32 **)(v7 + 16);
            *(__m128 *)(v7 + 8) = _mm_loadh_ps(v13);
            if ( v12 )
            {
              sub_4204D0(v12);
LABEL_14:
              if ( *(_BYTE *)v7 )
                return;
            }
          }
          v8 = sub_CDA8F0((unsigned int *)a1);
          if ( sub_CCBD30(*(int **)(v7 + 8), v8) )
          {
            v9 = *(volatile signed __int32 **)(v7 + 16);
            *(_BYTE *)v7 = 1;
            *(_OWORD *)(v7 + 8) = 0;
            if ( v9 )
              sub_4204D0(v9);
          }
        }
      }
    }
  }
}

