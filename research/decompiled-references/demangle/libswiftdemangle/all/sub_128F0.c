unsigned __int64 __fastcall sub_128F0(__int64 a1)
{
  unsigned __int64 v1; // r10
  unsigned __int64 v2; // rax
  char v3; // dl
  int v4; // ebx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  char *v8; // rdx
  char v9; // r8
  char v10; // si
  unsigned __int64 v11; // r14
  int v12; // r12d
  __int64 v13; // rax
  unsigned int v14; // edx
  char *v15; // r13
  char *v16; // rcx
  size_t v17; // r8
  unsigned __int64 v18; // rax
  unsigned int v19; // ebx
  char *v20; // rcx
  unsigned __int64 v21; // rdx
  char *v22; // rax
  unsigned __int64 v23; // r15
  size_t v24; // r15
  _QWORD *v25; // rax
  __int64 v26; // rcx
  char *v27; // rcx
  int v28; // eax
  const char *v29; // rdx
  char *v30; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned __int64 v35; // r12
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // [rsp+0h] [rbp-58h]
  size_t v39; // [rsp+8h] [rbp-50h]
  __int64 v40[9]; // [rsp+10h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  v40[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 < v1 )
  {
    *(_QWORD *)(a1 + 72) = v2 + 1;
    v3 = *(_BYTE *)(*(_QWORD *)(a1 + 56) + v2);
    switch ( v3 )
    {
      case 'g':
        v32 = *(_DWORD *)(a1 + 96);
        if ( v32
          && (v33 = (unsigned int)(v32 - 1),
              v34 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v33),
              *(_WORD *)(v34 + 16) == 221) )
        {
          *(_DWORD *)(a1 + 96) = v33;
        }
        else
        {
          v34 = 0;
        }
        v35 = sub_CD20((_QWORD *)a1, 224, v34);
        v36 = sub_D400((_QWORD *)a1, 58, "Optional");
        v37 = sub_CE00((_QWORD *)a1, 13, v36, v35);
        v40[0] = sub_CD20((_QWORD *)a1, 221, v37);
        v11 = v40[0];
        if ( v40[0] )
          sub_11EC0(a1 + 104, v40, (_QWORD *)a1);
        return v11;
      case 'o':
        v29 = "__C";
        v30 = (char *)&dword_0 + 3;
        break;
      case 'C':
        v29 = "__C_Synthesized";
        v30 = &byte_9[6];
        break;
      default:
        goto LABEL_5;
    }
    return sub_BAC0((_QWORD *)a1, 143, v29, (size_t)v30);
  }
  --v2;
LABEL_5:
  *(_QWORD *)(a1 + 72) = v2;
  v4 = sub_D100((_QWORD *)a1);
  if ( v4 > 2048 )
    return 0;
  v6 = *(_QWORD *)(a1 + 72);
  if ( v5 <= v6 )
  {
    v10 = 0;
    v9 = 0;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 56);
    v8 = (char *)(v7 + v6);
    if ( *(_BYTE *)(v7 + v6) != 99 )
    {
      v9 = 0;
      goto LABEL_10;
    }
    *(_QWORD *)(a1 + 72) = ++v6;
    if ( v5 > v6 )
    {
      v8 = (char *)(v7 + v6);
      v9 = 1;
LABEL_10:
      *(_QWORD *)(a1 + 72) = v6 + 1;
      v10 = *v8;
      goto LABEL_11;
    }
    v10 = 0;
    v9 = 1;
  }
LABEL_11:
  v11 = sub_D500((_QWORD *)a1, v10, v9);
  if ( v11 )
  {
    v12 = v4 - 1;
    if ( v4 > 1 )
    {
      do
      {
        v13 = *(unsigned int *)(a1 + 96);
        v14 = *(_DWORD *)(a1 + 100);
        v15 = *(char **)(a1 + 88);
        if ( (unsigned int)v13 >= v14 )
        {
          v16 = *(char **)(a1 + 8);
          v17 = 8LL * v14;
          if ( v16 == &v15[v17] && (unsigned __int64)(v16 + 8) <= *(_QWORD *)(a1 + 16) )
          {
            *(_QWORD *)(a1 + 8) = v16 + 8;
            *(_DWORD *)(a1 + 100) = v14 + 1;
          }
          else
          {
            v18 = 2 * v14;
            v19 = 2 * v14;
            if ( v18 < 4 )
              v18 = 4;
            v20 = (char *)((unsigned __int64)(v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            *(_QWORD *)(a1 + 8) = v20;
            v21 = 8 * (v14 + v18);
            if ( !v20 || (v22 = &v20[v21], (unsigned __int64)&v20[v21] > *(_QWORD *)(a1 + 16)) )
            {
              v39 = v17;
              v38 = v21;
              v23 = 2LL * *(_QWORD *)(a1 + 32);
              if ( v23 < v21 + 8 )
                v23 = v21 + 8;
              *(_QWORD *)(a1 + 32) = v23;
              v24 = v23 + 8;
              v25 = malloc(v24);
              v26 = *(_QWORD *)(a1 + 24);
              *(_QWORD *)(a1 + 24) = v25;
              v17 = v39;
              *v25 = v26;
              v20 = (char *)(((unsigned __int64)v25 + 15) & 0xFFFFFFFFFFFFFFF8LL);
              *(_QWORD *)(a1 + 16) = (char *)v25 + v24;
              v22 = &v20[v38];
            }
            *(_QWORD *)(a1 + 8) = v22;
            v27 = (char *)memcpy(v20, v15, v17);
            *(_QWORD *)(a1 + 88) = v27;
            v28 = 4;
            v15 = v27;
            if ( v19 >= 4 )
              v28 = v19;
            *(_DWORD *)(a1 + 100) += v28;
            v13 = *(unsigned int *)(a1 + 96);
          }
        }
        *(_DWORD *)(a1 + 96) = v13 + 1;
        *(_QWORD *)&v15[8 * v13] = v11;
        --v12;
      }
      while ( v12 );
    }
    return v11;
  }
  return 0;
}
