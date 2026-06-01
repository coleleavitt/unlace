__int64 __fastcall sub_9B6470(int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  unsigned int v4; // ecx
  __int64 *v5; // rdx
  __int64 v6; // r9
  int v8; // edx
  int v9; // r11d
  __int64 v10; // r9
  unsigned __int64 v11; // r13
  unsigned int v13; // ebx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // esi
  __int64 v24; // r8
  __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // [rsp+0h] [rbp-40h] BYREF
  __int64 v28; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v29[6]; // [rsp+10h] [rbp-30h] BYREF

  v2 = (unsigned int)a1[22];
  v3 = *((_QWORD *)a1 + 9);
  if ( (_DWORD)v2 )
  {
    v4 = (v2 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v5 = (__int64 *)(v3 + 16LL * v4);
    v6 = *v5;
    if ( a2 != *v5 )
    {
      v8 = 1;
      if ( v6 == -4096 )
        goto LABEL_8;
      while ( 1 )
      {
        v9 = v8 + 1;
        v4 = (v2 - 1) & (v8 + v4);
        v5 = (__int64 *)(v3 + 16LL * v4);
        v10 = *v5;
        if ( a2 == *v5 )
          break;
        v8 = v9;
        if ( v10 == -4096 )
          goto LABEL_8;
      }
    }
    if ( v5 != (__int64 *)(v3 + 16 * v2) )
      return *((unsigned int *)v5 + 2);
  }
LABEL_8:
  v11 = a2 & 0xFFFFFFFFFFFFFFFDLL;
  v13 = *a1;
  v14 = (unsigned int)a1[5];
  ++*a1;
  v15 = (unsigned int)a1[4];
  if ( v15 >= v14 )
  {
    if ( v14 < v15 + 1 )
    {
      sub_2237220(a1 + 2, a1 + 6, v15 + 1, 16);
      v15 = (unsigned int)a1[4];
    }
    v26 = (_QWORD *)(*((_QWORD *)a1 + 1) + 16 * v15);
    *v26 = v13;
    v26[1] = v11;
    ++a1[4];
  }
  else
  {
    v16 = *((_QWORD *)a1 + 1) + 16 * v15;
    *(_DWORD *)v16 = v13;
    *(_QWORD *)(v16 + 8) = v11;
    ++a1[4];
  }
  v27 = a2;
  v17 = (unsigned __int8)sub_9B5450((__int64 *)a1 + 9, &v27, &v28) == 0;
  v19 = v28;
  if ( !v17 )
    goto LABEL_16;
  v20 = a1[20];
  v21 = (unsigned int)a1[22];
  v29[0] = v28;
  v22 = (unsigned int)(v20 + 1);
  v23 = 2 * v21;
  v24 = (unsigned int)(4 * v22);
  if ( (unsigned int)v24 >= 3 * (int)v21 )
    goto LABEL_21;
  if ( (int)v21 - a1[21] - (int)v22 <= (unsigned int)v21 >> 3 )
  {
    v23 = v21;
LABEL_21:
    sub_9B5940((__int64)(a1 + 18), v23, v22, v21, v24, v18);
    sub_9B5450((__int64 *)a1 + 9, &v27, v29);
    LODWORD(v22) = a1[20] + 1;
    v19 = v29[0];
  }
  v17 = *(_QWORD *)v19 == -4096;
  a1[20] = v22;
  if ( !v17 )
    --a1[21];
  v25 = v27;
  *(_DWORD *)(v19 + 8) = 0;
  *(_QWORD *)v19 = v25;
LABEL_16:
  *(_DWORD *)(v19 + 8) = v13;
  return v13;
}
