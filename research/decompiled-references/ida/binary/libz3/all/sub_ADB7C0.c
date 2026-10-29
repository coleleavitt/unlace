__int64 __fastcall sub_ADB7C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  float v6; // xmm1_4
  char v7; // cl
  __int64 v8; // rdx
  float v9; // xmm3_4
  float v10; // xmm0_4
  __int64 v11; // rcx
  float v12; // xmm2_4

  sub_18183E0(a2, "quant instantiations", *(unsigned int *)(a1 + 32));
  sub_18183E0(a2, "lazy quant instantiations", *(unsigned int *)(a1 + 36));
  v2 = *(_QWORD *)(a1 + 1040);
  if ( v2 )
    v3 = *(unsigned int *)(v2 - 4);
  else
    v3 = 0;
  sub_18183E0(a2, "missed quant instantiations", v3);
  v4 = *(_QWORD *)(a1 + 1040);
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v6 = 0.0;
      v7 = 0;
      v8 = v4 + 16 * v5;
      v9 = 0.0;
      while ( *(char *)(v4 + 15) < 0 )
      {
LABEL_14:
        v4 += 16;
        if ( v4 == v8 )
          goto LABEL_12;
      }
      v10 = *(float *)(v4 + 8);
      if ( v7 )
      {
        v12 = *(float *)(v4 + 8);
        v11 = v4;
        v10 = v9;
        while ( 1 )
        {
          v4 = v11;
          v11 += 16;
          v6 = fmaxf(v12, v6);
          v10 = fminf(v12, v10);
          if ( v11 == v8 )
            break;
LABEL_9:
          if ( *(char *)(v11 + 15) < 0 )
          {
            v4 += 32;
            if ( v8 == v4 )
              break;
            if ( *(char *)(v4 + 15) < 0 )
            {
              v9 = v10;
              v7 = 1;
              goto LABEL_14;
            }
            v12 = *(float *)(v4 + 8);
            v11 = v4;
          }
          else
          {
            v12 = *(float *)(v11 + 8);
          }
        }
      }
      else
      {
        v11 = v4 + 16;
        v6 = *(float *)(v4 + 8);
        if ( v4 + 16 != v8 )
          goto LABEL_9;
      }
    }
  }
LABEL_12:
  sub_1818270(a2, "min missed qa cost");
  return sub_1818270(a2, "max missed qa cost");
}

