void __fastcall sub_1364960(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  int v4; // eax
  char *v5; // r12
  char *v6; // rbx
  double v7; // rcx
  signed __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r15
  char *v12; // rax
  char *v13; // r13
  char *v14; // r15
  double v15[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 32) == 1 && a3 && (*(_BYTE *)(a3 + 28) & 0x7B) != 0 && (*(_BYTE *)(a3 + 28) & 0x7F) != 0x18 )
  {
    v3 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    {
      v3 = *(_QWORD *)v3;
      if ( !v3 )
        return;
    }
    else if ( !v3 )
    {
      return;
    }
    v4 = *(_BYTE *)(v3 + 8) & 0x7F;
    if ( v4 == 24 || !v4 )
    {
      v5 = *(char **)(a1 + 16);
      if ( v5 != *(char **)(a1 + 24) )
      {
        *(_QWORD *)v5 = a3;
        *(_QWORD *)(a1 + 16) = v5 + 8;
        return;
      }
      v6 = *(char **)(a1 + 8);
      v7 = *(double *)&a3;
      v8 = v5 - v6;
      v9 = (v5 - v6) >> 3;
      if ( v9 )
      {
        v10 = 2 * v9;
        v11 = -8;
        if ( v9 <= 2 * v9 && v10 <= 0x1FFFFFFFFFFFFFFFLL )
        {
          if ( !v10 )
          {
            v14 = nullptr;
            v13 = nullptr;
LABEL_17:
            *(double *)&v13[v8] = v7;
            *(_QWORD *)&v15[0] = &v13[v8 + 8];
            if ( v5 == v6 )
            {
              if ( !v6 )
                goto LABEL_20;
            }
            else
            {
              memmove(v13, v6, v5 - v6);
            }
            operator delete(v6);
LABEL_20:
            *(_QWORD *)&v15[1] = v13;
            *(_QWORD *)(a1 + 24) = v14;
            *(__m128 *)(a1 + 8) = _mm_loadh_ps(v15);
            return;
          }
          v11 = 16 * v9;
        }
      }
      else
      {
        v11 = 8;
      }
      v15[0] = v7;
      v12 = (char *)operator new(v11);
      v7 = v15[0];
      v13 = v12;
      v14 = &v12[v11];
      goto LABEL_17;
    }
  }
}
