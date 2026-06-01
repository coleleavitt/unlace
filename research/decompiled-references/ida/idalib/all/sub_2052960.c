char __fastcall sub_2052960(__int64 *a1, int *a2, _QWORD *a3)
{
  int v3; // ebp
  char result; // al
  __int64 v5; // r15
  unsigned int v7; // eax
  int v8; // edx
  int v9; // r11d
  int *v10; // r10
  char v11; // cl
  int v12; // ebp
  __int64 v13; // r9
  unsigned int i; // ebx
  int *v15; // r12
  int v16; // r8d
  unsigned int v17; // ebx
  char v18; // al
  char v19; // al
  __int64 v20; // [rsp+8h] [rbp-A0h]
  int *v21; // [rsp+8h] [rbp-A0h]
  __int64 v22; // [rsp+8h] [rbp-A0h]
  int v23; // [rsp+10h] [rbp-98h]
  __int64 v24; // [rsp+10h] [rbp-98h]
  int v25; // [rsp+10h] [rbp-98h]
  int v26; // [rsp+18h] [rbp-90h]
  int v27; // [rsp+18h] [rbp-90h]
  int v28; // [rsp+18h] [rbp-90h]
  int v29; // [rsp+1Ch] [rbp-8Ch]
  int v30; // [rsp+1Ch] [rbp-8Ch]
  char v31; // [rsp+1Ch] [rbp-8Ch]
  char v32; // [rsp+20h] [rbp-88h]
  char v33; // [rsp+20h] [rbp-88h]
  int *v34; // [rsp+20h] [rbp-88h]
  int *v35; // [rsp+28h] [rbp-80h]
  int v36; // [rsp+30h] [rbp-78h] BYREF
  char v37; // [rsp+34h] [rbp-74h]
  __int64 v38; // [rsp+38h] [rbp-70h]
  int v39; // [rsp+40h] [rbp-68h]
  int v40; // [rsp+50h] [rbp-58h] BYREF
  char v41; // [rsp+54h] [rbp-54h]
  __int64 v42; // [rsp+58h] [rbp-50h]
  int v43; // [rsp+60h] [rbp-48h]

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v5 = *a1;
  v36 = -1;
  v37 = 1;
  v39 = 0;
  v38 = -1;
  v40 = -2;
  v41 = 0;
  v43 = 0;
  v42 = -2;
  v7 = sub_220C660(a2 + 2);
  v8 = *a2;
  v9 = 1;
  v10 = &v36;
  v11 = *((_BYTE *)a2 + 4);
  v12 = v3 - 1;
  v13 = 0;
  for ( i = v12
          & (((0xBF58476D1CE4E5B9LL * (v7 | ((unsigned __int64)((unsigned int)(v11 == 0) + 37 * *a2 - 1) << 32))) >> 31)
           ^ (484763065 * v7)); ; i = v12 & v17 )
  {
    v15 = (int *)(v5 + 32LL * i);
    v16 = *v15;
    if ( *v15 == v8 && v11 == *((_BYTE *)v15 + 4) )
    {
      v35 = v10;
      v32 = v11;
      v29 = v8;
      v26 = *v15;
      v23 = v9;
      v20 = v13;
      result = sub_2050E70((__int64)(a2 + 2), (__int64)(v15 + 2));
      v13 = v20;
      v9 = v23;
      v16 = v26;
      v8 = v29;
      v11 = v32;
      v10 = v35;
      if ( result )
      {
        *a3 = v15;
        return result;
      }
    }
    if ( v16 == -1 )
      break;
    if ( v16 == -2 )
    {
      v34 = v10;
      v31 = v11;
      v28 = v8;
      v25 = v9;
      v22 = v13;
      v19 = sub_2050DD0(v5 + 32LL * i, (__int64)&v40);
      v13 = v22;
      v9 = v25;
      v8 = v28;
      v11 = v31;
      v10 = v34;
      if ( !v22 )
      {
        if ( v19 )
          v13 = v5 + 32LL * i;
      }
    }
LABEL_7:
    v17 = v9 + i;
    ++v9;
  }
  v33 = v11;
  v30 = v8;
  v27 = v9;
  v24 = v13;
  v21 = v10;
  v18 = sub_2050DD0(v5 + 32LL * i, (__int64)v10);
  v10 = v21;
  v13 = v24;
  v9 = v27;
  v8 = v30;
  v11 = v33;
  if ( !v18 )
    goto LABEL_7;
  if ( !v24 )
    v13 = v5 + 32LL * i;
  *a3 = v13;
  return 0;
}
