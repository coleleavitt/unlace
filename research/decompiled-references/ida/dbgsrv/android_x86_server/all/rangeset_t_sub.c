/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_sub
// Address: 0x000B77D0

//----- (000B77D0) --------------------------------------------------------
char *__cdecl rangeset_t_sub(char **a1, unsigned int *a2)
{
  char *v2; // eax
  char v3; // al
  unsigned int v4; // edx
  char *v5; // ebx
  char *v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // edi
  unsigned int v9; // edx
  unsigned int v10; // ebx
  unsigned int v11; // eax
  char *v12; // ebx
  unsigned int v13; // eax
  char **v14; // edi
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // esi
  char *v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  char *v23; // edi
  char *v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  char **v27; // ecx
  char *v28; // edi
  char *v29; // esi
  char *v30; // [esp+18h] [ebp-44h]
  char *v31; // [esp+18h] [ebp-44h]
  char *v32; // [esp+18h] [ebp-44h]
  void *v33; // [esp+20h] [ebp-3Ch] BYREF
  int v34; // [esp+24h] [ebp-38h]
  int v35; // [esp+28h] [ebp-34h]
  char *v36; // [esp+2Ch] [ebp-30h]
  char v37; // [esp+30h] [ebp-2Ch]
  unsigned int v38; // [esp+38h] [ebp-24h] BYREF
  unsigned int v39; // [esp+3Ch] [ebp-20h]
  char v40; // [esp+40h] [ebp-1Ch]
  unsigned int v41; // [esp+48h] [ebp-14h]

  v41 = __readgsdword(0x14u);
  if ( *a2 >= a2[1] )
    return nullptr;
  v2 = a1[4];
  v33 = nullptr;
  v34 = 0;
  v35 = 0;
  v36 = v2;
  if ( v2 == (char *)-1 )
    v3 = 0;
  else
    v3 = must_journal();
  v37 = v3;
  v4 = (unsigned int)a1[1];
  v5 = nullptr;
  if ( v4 )
  {
    v6 = *a1;
    v7 = *a2;
    while ( 1 )
    {
      v8 = *(_DWORD *)&v6[8 * (_DWORD)v5 + 4];
      if ( v8 > v7 )
        break;
      if ( (unsigned int)++v5 >= v4 )
        goto LABEL_19;
    }
    v31 = v5;
    v9 = *(_DWORD *)&v6[8 * (_DWORD)v5];
    v10 = a2[1];
    if ( v9 < v10 )
    {
      if ( v9 >= v7 )
      {
        if ( v8 <= v10 )
        {
          v12 = v31 - 1;
        }
        else
        {
          if ( v3 )
          {
            v16 = *(_DWORD *)&v6[8 * (_DWORD)v31];
            v39 = *(_DWORD *)&v6[8 * (_DWORD)v31 + 4];
            v38 = v16;
            v40 = 1;
            sub_B8FF0((unsigned int *)&v33, (unsigned int)&v38);
            v10 = a2[1];
          }
          *(_DWORD *)&v6[8 * (_DWORD)v31] = v10;
          v12 = v31;
          if ( v37 )
          {
            v17 = *(_DWORD *)&v6[8 * (_DWORD)v31];
            v39 = *(_DWORD *)&v6[8 * (_DWORD)v31 + 4];
            v38 = v17;
            v40 = 0;
            sub_B8FF0((unsigned int *)&v33, (unsigned int)&v38);
            v12 = v31;
          }
        }
      }
      else
      {
        if ( v3 )
        {
          v11 = *(_DWORD *)&v6[8 * (_DWORD)v31];
          v39 = *(_DWORD *)&v6[8 * (_DWORD)v31 + 4];
          v38 = v11;
          v40 = 1;
          sub_B8FF0((unsigned int *)&v33, (unsigned int)&v38);
          v7 = *a2;
        }
        v12 = v31;
        *(_DWORD *)&v6[8 * (_DWORD)v31 + 4] = v7;
        if ( v37 )
        {
          v13 = *(_DWORD *)&v6[8 * (_DWORD)v31];
          v39 = *(_DWORD *)&v6[8 * (_DWORD)v31 + 4];
          v38 = v13;
          v40 = 0;
          sub_B8FF0((unsigned int *)&v33, (unsigned int)&v38);
          v12 = v31;
        }
        if ( a2[1] < v8 )
        {
          v38 = a2[1];
          v39 = v8;
          v14 = a1;
          sub_B7130(a1, &v38, (int)&v33);
          v12 = v31 + 1;
LABEL_30:
          v18 = (unsigned int)(v12 + 1);
          v19 = v12;
          v20 = (unsigned int)v14[1];
          if ( v18 >= v20 )
          {
            v23 = v19;
            v24 = v19;
          }
          else
          {
            v32 = v19;
            while ( 1 )
            {
              v21 = a2[1];
              v19 = *v14;
              if ( v21 <= *(_DWORD *)&(*v14)[8 * v18] )
              {
LABEL_37:
                v23 = (char *)(v18 - 1);
                goto LABEL_43;
              }
              if ( v21 < *(_DWORD *)&v19[8 * v18 + 4] )
                break;
              if ( v37 )
              {
                v22 = *(_DWORD *)&v19[8 * v18];
                v39 = *(_DWORD *)&v19[8 * v18 + 4];
                v38 = v22;
                v40 = 1;
                sub_B8FF0((unsigned int *)&v33, (unsigned int)&v38);
                v19 = (char *)a1;
                v20 = (unsigned int)a1[1];
                v14 = a1;
              }
              if ( ++v18 >= v20 )
                goto LABEL_37;
            }
            if ( v37 )
            {
              v25 = *(_DWORD *)&v19[8 * v18];
              v39 = *(_DWORD *)&v19[8 * v18 + 4];
              v38 = v25;
              v40 = 1;
              sub_B8FF0((unsigned int *)&v33, (unsigned int)&v38);
              v21 = a2[1];
              v19 = *a1;
            }
            v23 = (char *)(v18 - 1);
            *(_DWORD *)&v19[8 * v18] = v21;
            if ( v37 )
            {
              v26 = *(_DWORD *)&(*a1)[8 * v18];
              v39 = *(_DWORD *)&(*a1)[8 * v18 + 4];
              v38 = v26;
              v40 = 0;
              v19 = (char *)sub_B8FF0((unsigned int *)&v33, (unsigned int)&v38);
            }
LABEL_43:
            v24 = v32;
          }
          v27 = a1;
          if ( v24 != v23 )
          {
            v28 = &(*a1)[8 * (_DWORD)v24 + 8];
            v29 = &(*a1)[8 * v18];
            v19 = (char *)memmove(v28, v29, &(*a1)[8 * (_DWORD)a1[1]] - v29);
            v27 = a1;
            a1[1] -= (v29 - v28) >> 3;
          }
          v27[3] = nullptr;
          LOBYTE(v19) = 1;
          v30 = v19;
          sub_B76D0((int)&v33);
          goto LABEL_20;
        }
      }
      v14 = a1;
      goto LABEL_30;
    }
  }
LABEL_19:
  v30 = nullptr;
LABEL_20:
  if ( v33 )
  {
    v34 = 0;
    qfree(v33);
    v33 = nullptr;
    v35 = 0;
  }
  return v30;
}
