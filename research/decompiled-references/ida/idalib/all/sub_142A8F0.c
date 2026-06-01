void __fastcall sub_142A8F0(__int64 a1, __int64 a2, unsigned int a3, __m128i a4, double a5)
{
  __int16 v6; // ax
  __int64 v7; // r12
  unsigned __int16 v8; // r12
  char v9; // al
  __int64 v10; // r12
  size_t v11; // rax
  unsigned int *v12; // rcx
  size_t v13; // rdx
  unsigned int v14[18]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_WORD *)(a2 + 16);
  if ( (unsigned __int16)(v6 - 7) <= 0xCu )
    goto LABEL_3;
  if ( v6 == 1 )
    goto LABEL_3;
  v7 = *(_QWORD *)(a2 + 8);
  if ( !v7 )
    goto LABEL_3;
  if ( (unsigned int)sub_FDE240(*(_QWORD *)(a2 + 8)) != 12 )
  {
    if ( *(_BYTE *)(a1 + 2401) && (unsigned int)sub_FDE240(v7) == 10 )
    {
      sub_142A3D0((_QWORD *)a1, a3, a2, 0, 0, 0);
      return;
    }
    if ( *(_BYTE *)(a1 + 2400) )
    {
      if ( (unsigned int)sub_FDE240(v7) == 16 )
      {
        sub_14634E0(a1, a2);
        v8 = *(_WORD *)(a2 + 16);
        v9 = sub_141A630(v8);
        if ( v8 != 1 && !v9 )
        {
          v10 = *(_QWORD *)(a2 + 8);
          if ( v10 )
          {
            v11 = j__strlen("hdrstop");
            v12 = *(unsigned int **)(v10 + 16);
            v13 = *v12;
            if ( v13 == v11 && (!*v12 || !memcmp(v12 + 4, "hdrstop", v13)) )
            {
              sub_1451EB0(a1, a2);
              return;
            }
          }
        }
      }
    }
LABEL_3:
    sub_141A820(a1, v14);
    return;
  }
  sub_14264A0(a1, (int *)a2, 0, a4, a5);
}
