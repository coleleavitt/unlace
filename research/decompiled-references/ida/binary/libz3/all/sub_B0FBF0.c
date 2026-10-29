__int64 __fastcall sub_B0FBF0(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax
  unsigned int v6; // r14d
  unsigned int v7; // eax
  int v8; // edx
  __int64 v9; // rdi
  __int64 v10; // rbp
  char v11; // r14
  char *v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  unsigned int **v15; // r14
  unsigned int **v16; // r15
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // [rsp+0h] [rbp-78h]
  unsigned int v23; // [rsp+18h] [rbp-60h] BYREF
  int v24; // [rsp+1Ch] [rbp-5Ch] BYREF
  unsigned int v25[22]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8832LL);
  if ( v3 )
  {
    v4 = *a2;
    if ( (unsigned int)v4 < *(_DWORD *)(v3 - 4) && *(_DWORD *)(v3 + 4 * v4) != 0x7FFFFFFF )
      return 1;
  }
  result = sub_B05190(a1, (__int64)a2);
  if ( (_BYTE)result )
  {
    v6 = a2[6];
    v7 = sub_B67520(*(_QWORD *)(a1 + 16), a2);
    v8 = *(_DWORD *)(a1 + 8);
    v9 = *(_QWORD *)(a1 + 16);
    v10 = v7;
    v23 = v7;
    sub_8F1CE0(v9, v7, v8);
    sub_168DDF0(v25, a1 + 712, *((_QWORD *)a2 + 2));
    v22 = sub_182D020(qword_1C7F2C0, v25);
    sub_25A130((char *)v25);
    v24 = 2 * v10;
    if ( v22 )
    {
      if ( v6 >= v22 )
      {
        v11 = 0;
        if ( !*((_WORD *)a2 + 2) )
          v11 = sub_168DAD0(a1 + 712, *((_QWORD *)a2 + 2));
        v12 = (char *)sub_186B270(0x20u);
        v13 = v24;
        v12[28] = v11;
        *(_DWORD *)v12 = v13;
        *((_QWORD *)v12 + 1) = 0;
        *((_DWORD *)v12 + 4) = v22;
        v14 = a2[6];
        *(_QWORD *)(v12 + 20) = 0;
        v14 *= 8;
        v15 = (unsigned int **)((char *)a2 + v14 + 32);
        if ( !v14 )
          goto LABEL_22;
        v16 = (unsigned int **)(a2 + 8);
        do
        {
          v18 = sub_B04A40(a1, *v16);
          if ( v18 != dword_1C7ED20 )
          {
            if ( v18 == dword_1C7ED24 )
            {
              v17 = *((_DWORD *)v12 + 4);
              if ( v17 )
                *((_DWORD *)v12 + 4) = v17 - 1;
            }
            else
            {
              v25[0] = v18;
              sub_B0E5E0((unsigned int **)v12 + 1, v25);
            }
          }
          ++v16;
        }
        while ( v15 != v16 );
        v19 = *((_QWORD *)v12 + 1);
        if ( !v19 )
          goto LABEL_22;
        v20 = *(_DWORD *)(v19 - 4);
        if ( v22 == v20 )
        {
          sub_B0F9C0(a1, (__int64)v12);
          sub_B15570(v12);
        }
        else
        {
          if ( v20 != 1 )
          {
LABEL_22:
            v21 = *(_QWORD *)(a1 + 64);
            if ( !v21 || (unsigned int)v10 >= *(_DWORD *)(v21 - 4) )
            {
              sub_B09720(a1, v10);
              v21 = *(_QWORD *)(a1 + 64);
            }
            *(_QWORD *)(v21 + 48 * v10 + 40) = v12;
            sub_B0C950((unsigned int **)(a1 + 816), &v23);
            return 1;
          }
          sub_B0E400(a1, (int *)v12);
          sub_B15570(v12);
        }
        return 1;
      }
      v24 = (2 * v10) ^ 1;
    }
    sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), 1, (unsigned int)&v24, 0, 0, 1);
    return 1;
  }
  return result;
}

