void __fastcall sub_19F5A40(char *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 *v6; // r15
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r14
  char *v10; // rdx
  int v11; // r8d
  int v12; // edi
  __int64 v13; // r11
  unsigned int v14; // r9d
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // r10d
  __int64 v18; // rax
  int v19; // r11d
  __int64 *v20; // rbp
  __int64 *v21; // rax
  int v22; // r10d
  __int64 v23; // r9
  unsigned int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 *v28; // r12
  __int64 v29; // rbp
  __int64 v30; // r13
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  int v34; // [rsp+Ch] [rbp-3Ch]

  v4 = (char *)a2 - a1;
  if ( (char *)a2 - a1 > 256 )
  {
    v6 = (__int64 *)(a1 + 16);
    if ( !a3 )
    {
      v28 = a2;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v7 = *((_QWORD *)a1 + 3);
      v8 = *(a2 - 1);
      --a3;
      v9 = *(_QWORD *)a1;
      v10 = &a1[16 * (v4 >> 5)];
      v11 = *(_DWORD *)(v7 + 40);
      v12 = *(_DWORD *)(v7 + 44);
      v13 = *((_QWORD *)v10 + 1);
      v14 = 4 * (v12 + 4 * v11);
      v15 = 4 * (*(_DWORD *)(v13 + 44) + 4 * *(_DWORD *)(v13 + 40));
      v16 = *((_QWORD *)a1 + 1);
      v17 = 4 * (*(_DWORD *)(v8 + 44) + 4 * *(_DWORD *)(v8 + 40));
      if ( v14 >= v15 )
      {
        if ( v14 >= v17 )
        {
          if ( v15 >= v17 )
          {
LABEL_23:
            *(_QWORD *)a1 = *(_QWORD *)v10;
            *(_QWORD *)v10 = v9;
            *((_QWORD *)a1 + 1) = v13;
            *((_QWORD *)v10 + 1) = v16;
            v33 = *((_QWORD *)a1 + 1);
            v16 = *(a2 - 1);
            v11 = *(_DWORD *)(v33 + 40);
            v12 = *(_DWORD *)(v33 + 44);
            goto LABEL_7;
          }
LABEL_16:
          *(_QWORD *)a1 = *(a2 - 2);
          *(a2 - 2) = v9;
          *((_QWORD *)a1 + 1) = v8;
          *(a2 - 1) = v16;
          v27 = *((_QWORD *)a1 + 1);
          v11 = *(_DWORD *)(v27 + 40);
          v12 = *(_DWORD *)(v27 + 44);
          goto LABEL_7;
        }
      }
      else
      {
        if ( v15 < v17 )
          goto LABEL_23;
        if ( v14 < v17 )
          goto LABEL_16;
      }
      v18 = *((_QWORD *)a1 + 2);
      *((_QWORD *)a1 + 2) = v9;
      *((_QWORD *)a1 + 1) = v7;
      *(_QWORD *)a1 = v18;
      *((_QWORD *)a1 + 3) = v16;
      v16 = *(a2 - 1);
LABEL_7:
      v34 = v12;
      v19 = *(_DWORD *)(v16 + 44);
      v20 = v6;
      v21 = a2;
      v22 = *(_DWORD *)(v16 + 40);
      while ( 1 )
      {
        v23 = v20[1];
        v24 = 4 * (v34 + 4 * v11);
        if ( 4 * (*(_DWORD *)(v23 + 44) + 4 * *(_DWORD *)(v23 + 40)) < v24 )
          goto LABEL_13;
        v21 -= 2;
        if ( v24 < 4 * (v19 + 4 * v22) )
        {
          do
          {
            v21 -= 2;
            v16 = v21[1];
          }
          while ( v24 < 4 * (*(_DWORD *)(v16 + 44) + 4 * *(_DWORD *)(v16 + 40)) );
        }
        if ( v21 <= v20 )
          break;
        v25 = *v20;
        *v20 = *v21;
        *v21 = v25;
        v20[1] = v16;
        v16 = *(v21 - 1);
        v21[1] = v23;
        v26 = *((_QWORD *)a1 + 1);
        v19 = *(_DWORD *)(v16 + 44);
        v22 = *(_DWORD *)(v16 + 40);
        v11 = *(_DWORD *)(v26 + 40);
        v34 = *(_DWORD *)(v26 + 44);
LABEL_13:
        v20 += 2;
      }
      v28 = v20;
      sub_19F5A40(v20, a2, a3);
      v4 = (char *)v20 - a1;
      if ( (char *)v20 - a1 <= 256 )
        return;
      a2 = v20;
      if ( !a3 )
      {
LABEL_19:
        v29 = v4 >> 4;
        v30 = ((v4 >> 4) - 2) >> 1;
        sub_19F5380((__int64)a1, v30, v4 >> 4, *(_QWORD *)&a1[16 * v30], *(_QWORD *)&a1[16 * v30 + 8]);
        do
        {
          --v30;
          sub_19F5380((__int64)a1, v30, v29, *(_QWORD *)&a1[16 * v30], *(_QWORD *)&a1[16 * v30 + 8]);
        }
        while ( v30 );
        do
        {
          v28 -= 2;
          v31 = *v28;
          v32 = v28[1];
          *v28 = *(_QWORD *)a1;
          v28[1] = *((_QWORD *)a1 + 1);
          sub_19F5380((__int64)a1, 0, ((char *)v28 - a1) >> 4, v31, v32);
        }
        while ( (char *)v28 - a1 > 16 );
        return;
      }
    }
  }
}
