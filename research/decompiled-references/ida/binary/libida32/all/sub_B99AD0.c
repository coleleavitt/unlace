__int64 __fastcall sub_B99AD0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbp
  char v11; // al
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+10h] [rbp-48h]
  unsigned __int64 v23; // [rsp+18h] [rbp-40h]

  result = *(unsigned __int8 *)(a1 + 23);
  if ( (result & 0x80u) != 0LL )
  {
    v3 = (__int64 *)(a1 + 24);
    v4 = a1 + 8LL * (*(_DWORD *)(a1 + 20) & 0x1FFFFFFF) + 24;
    if ( a1 + 24 != v4 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = *v3;
          v11 = *(_BYTE *)(*v3 + 28) & 0x7F;
          if ( v11 == 67 )
            break;
          if ( v11 != 47 )
            goto LABEL_10;
          v12 = sub_F34140(*(_QWORD *)(*(_QWORD *)(v10 + 48) & 0xFFFFFFFFFFFFFFF0LL));
          if ( !v12 )
            goto LABEL_10;
          if ( *(_BYTE *)(v12 + 16) != 16 )
            goto LABEL_10;
          if ( !*(_QWORD *)(v12 + 32) )
            goto LABEL_10;
          v8 = *(_QWORD *)(v10 + 16LL * *(unsigned int *)(v10 + 84) + 88);
          if ( !v8 )
            goto LABEL_10;
          v5 = *(unsigned int *)(a2 + 8);
          v13 = *(unsigned int *)(a2 + 12);
          if ( v5 >= v13 )
          {
            v19 = v5 + 1;
            v18 = v22 & 0xFFFFFFFF00000000LL;
            v22 &= 0xFFFFFFFF00000000LL;
            if ( v13 < v5 + 1 )
            {
LABEL_25:
              v23 = v18;
              sub_22134E0(a2, a2 + 16, v19, 16);
              v5 = *(unsigned int *)(a2 + 8);
              v18 = v23;
            }
LABEL_23:
            v20 = (_QWORD *)(*(_QWORD *)a2 + 16 * v5);
            *v20 = v8;
            v20[1] = v18;
            ++*(_DWORD *)(a2 + 8);
            goto LABEL_10;
          }
          ++v3;
          v14 = *(_QWORD *)a2 + 16 * v5;
          *(_QWORD *)v14 = v8;
          *(_DWORD *)(v14 + 8) = 0;
          ++*(_DWORD *)(a2 + 8);
          if ( (__int64 *)v4 == v3 )
          {
LABEL_19:
            result = *(unsigned __int8 *)(a1 + 23);
            if ( (result & 0x40) != 0 )
              goto LABEL_20;
            return result;
          }
        }
        if ( (*(_BYTE *)(v10 + 60) & 4) == 0 || v10 == -80 )
          goto LABEL_10;
        v5 = *(unsigned int *)(a2 + 8);
        v6 = *(unsigned int *)(a2 + 12);
        v7 = *(unsigned int *)(v10 + 96);
        v8 = *(_QWORD *)(v10 + 80);
        if ( v5 >= v6 )
        {
          v18 = v21 & 0xFFFFFFFF00000000LL | v7;
          v19 = v5 + 1;
          v21 = v18;
          if ( v6 < v5 + 1 )
            goto LABEL_25;
          goto LABEL_23;
        }
        v9 = *(_QWORD *)a2 + 16 * v5;
        *(_QWORD *)v9 = v8;
        *(_DWORD *)(v9 + 8) = v7;
        ++*(_DWORD *)(a2 + 8);
LABEL_10:
        if ( (__int64 *)v4 == ++v3 )
          goto LABEL_19;
      }
    }
  }
  if ( (result & 0x40) != 0 )
  {
LABEL_20:
    v15 = *(unsigned int *)(a2 + 12);
    v16 = *(_QWORD *)(a1 + 8LL * (*(_DWORD *)(a1 + 20) & 0x1FFFFFFF) + 24);
    v17 = *(unsigned int *)(a2 + 8);
    if ( v17 >= v15 )
    {
      if ( v15 < v17 + 1 )
      {
        sub_22134E0(a2, a2 + 16, v17 + 1, 16);
        v17 = *(unsigned int *)(a2 + 8);
      }
      result = *(_QWORD *)a2 + 16 * v17;
      *(_QWORD *)result = v16;
      *(_QWORD *)(result + 8) = 0;
      ++*(_DWORD *)(a2 + 8);
    }
    else
    {
      result = *(_QWORD *)a2 + 16 * v17;
      *(_QWORD *)result = v16;
      *(_DWORD *)(result + 8) = 0;
      ++*(_DWORD *)(a2 + 8);
    }
  }
  return result;
}

