__int64 __fastcall sub_8AE9A0(__int64 *a1, unsigned int *a2, __int64 *a3)
{
  __int64 v3; // r14
  __int64 *v6; // r15
  __int64 v7; // r12
  __int64 v8; // r8
  _QWORD *v9; // r8
  __int64 v10; // rdi
  int v11; // r12d
  int *v12; // rdx
  __int64 result; // rax
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // ecx
  char v19; // dl
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 *v22; // rbp
  __int64 v23; // rsi
  unsigned int v24; // ebx
  int *v25; // rdx
  int v26; // ecx
  __int64 v27; // rax
  int v28; // edx
  _QWORD *v29; // [rsp+8h] [rbp-70h]
  __int64 v30; // [rsp+8h] [rbp-70h]
  int v31; // [rsp+10h] [rbp-68h]
  _QWORD *v32; // [rsp+10h] [rbp-68h]
  int v33; // [rsp+1Ch] [rbp-5Ch]
  __int64 v34; // [rsp+20h] [rbp-58h] BYREF
  __int64 v35; // [rsp+28h] [rbp-50h]
  __int64 v36; // [rsp+30h] [rbp-48h]
  __int64 v37; // [rsp+38h] [rbp-40h]

  v3 = (__int64)(a3 + 1);
  v6 = a3 + 3;
  v7 = *a3;
  sub_182F200(*a3, a3 + 1);
  sub_182EF00(v7, v6);
  *((_BYTE *)a3 + 28) &= ~1u;
  v8 = *a2;
  *((_DWORD *)a3 + 6) = 1;
  v9 = (_QWORD *)(a1[1] + 16 * v8);
  v10 = *v9;
  if ( !*v9 )
  {
    result = *((unsigned int *)a3 + 2);
    v11 = 0;
    goto LABEL_23;
  }
  v11 = *(_DWORD *)(v10 - 4);
  v12 = (int *)(v10 + 32);
  for ( result = 0; v11 != (_DWORD)result; result = (unsigned int)(result + 1) )
  {
    v14 = *v12;
    v12 += 10;
    if ( v14 != -1 )
    {
      while ( 1 )
      {
        v19 = *((_BYTE *)a3 + 12);
        if ( (v19 & 1) != 0 )
          goto LABEL_9;
        if ( *((_DWORD *)a3 + 2) == 1 )
          break;
        v15 = v10 + 40LL * (unsigned int)result;
        if ( (*(_BYTE *)(v15 + 20) & 1) != 0 )
        {
LABEL_22:
          v20 = *a3;
          v34 = 1;
          v35 = 0;
          v36 = 1;
          v37 = 0;
          sub_8ADE80(v20, v3, (int *)&v34);
          result = *((unsigned int *)a3 + 2);
          goto LABEL_23;
        }
LABEL_10:
        if ( *(_DWORD *)(v15 + 16) != 1 )
          goto LABEL_22;
        if ( *((_DWORD *)a3 + 2) )
        {
          v33 = result;
          v32 = v9;
          v30 = *a1;
          sub_183B0A0(*a1, v3, v15, v3);
          sub_182EF00(v30, v6);
          *((_BYTE *)a3 + 28) &= ~1u;
          v16 = v33;
          *((_DWORD *)a3 + 6) = 1;
          v9 = v32;
        }
        else
        {
          v31 = result;
          v29 = v9;
          sub_8ADE80(*a3, v3, (int *)v15);
          v9 = v29;
          v16 = v31;
        }
        v10 = *v9;
        result = (unsigned int)(v16 + 1);
        if ( *v9 )
        {
          v17 = v10 + 40LL * (unsigned int)result;
          while ( (unsigned int)result < *(_DWORD *)(v10 - 4) )
          {
            v18 = *(_DWORD *)(v17 + 32);
            v17 += 40;
            if ( v18 != -1 )
              break;
            result = (unsigned int)(result + 1);
          }
        }
        if ( (_DWORD)result == v11 )
          goto LABEL_6;
      }
      if ( (*((_BYTE *)a3 + 28) & 1) == 0 && *((_DWORD *)a3 + 6) == 1 )
        goto LABEL_26;
LABEL_9:
      v15 = v10 + 40LL * (unsigned int)result;
      if ( (*(_BYTE *)(v15 + 20) & 1) != 0 )
        goto LABEL_22;
      goto LABEL_10;
    }
  }
LABEL_6:
  result = *((unsigned int *)a3 + 2);
LABEL_23:
  if ( !(_DWORD)result )
  {
    v21 = *a3;
    v34 = 1;
    v35 = 0;
    v36 = 1;
    v37 = 0;
    result = sub_8ADE80(v21, v3, (int *)&v34);
  }
  v19 = *((_BYTE *)a3 + 12);
LABEL_26:
  if ( (v19 & 1) != 0 || *((_DWORD *)a3 + 2) != 1 || (*((_BYTE *)a3 + 28) & 1) != 0 || *((_DWORD *)a3 + 6) != 1 )
  {
    v22 = (__int64 *)(a1[1] + 16LL * *a2);
    v23 = *v22;
    if ( *v22 )
    {
      v24 = *(_DWORD *)(v23 - 4);
      v25 = (int *)(v23 + 32);
      for ( result = 0; v24 != (_DWORD)result; result = (unsigned int)(result + 1) )
      {
        v26 = *v25;
        v25 += 10;
        if ( v26 != -1 )
        {
          v24 = result;
          break;
        }
      }
    }
    else
    {
      v24 = 0;
    }
    while ( v24 != v11 )
    {
      v27 = v24++;
      result = sub_8AE7F0(*a1, (int *)(v23 + 40 * v27), v3, v23 + 40 * v27);
      v23 = *v22;
      if ( *v22 )
      {
        result = v23 + 40LL * v24;
        while ( v24 < *(_DWORD *)(v23 - 4) )
        {
          v28 = *(_DWORD *)(result + 32);
          result += 40;
          if ( v28 != -1 )
            break;
          ++v24;
        }
      }
    }
  }
  return result;
}

