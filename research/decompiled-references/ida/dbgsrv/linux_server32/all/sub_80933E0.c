/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80933E0
// Address: 0x080933E0

//----- (080933E0) --------------------------------------------------------
char *__cdecl sub_80933E0(size_t *a1, char *a2, int a3, int a4, char *s2, char a6)
{
  size_t v6; // edx
  int v7; // eax
  size_t v8; // edi
  char *v9; // ebx
  char *v10; // eax
  size_t v12; // eax
  size_t v13; // edi
  char *v15; // eax
  char *v16; // eax
  const char **v17; // ebx
  const char *v18; // ecx
  pthread_mutex_t *mutex; // [esp+0h] [ebp-2Ch]
  int v20; // [esp+4h] [ebp-28h]
  size_t v21; // [esp+Ch] [ebp-20h]
  char *s1; // [esp+10h] [ebp-1Ch]

  mutex = (pthread_mutex_t *)dword_811E6F8;
  sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
  v6 = a1[3];
  v21 = v6 + 12 * a1[4];
  if ( v21 != v6 )
  {
    v7 = *(_DWORD *)(v6 + 4);
    v8 = a1[3];
    if ( !s2 )
      goto LABEL_7;
    v17 = (const char **)a1[3];
    v18 = (const char *)&dword_80DDFD8;
    if ( v7 )
LABEL_25:
      v18 = *v17;
    while ( strcasecmp(v18, s2) )
    {
      v8 += 12;
      if ( v21 == v8 )
        goto LABEL_12;
      v18 = (const char *)&dword_80DDFD8;
      v17 = (const char **)v8;
      if ( *(_DWORD *)(v8 + 4) )
        goto LABEL_25;
    }
    while ( 1 )
    {
      v8 += 12;
      v6 = v8;
      if ( v21 == v8 )
        break;
      v7 = *(_DWORD *)(v8 + 4);
LABEL_7:
      v9 = (char *)&dword_80DDFD8;
      if ( v7 )
        v9 = *(char **)v6;
      v10 = sub_80CE680(a2, a3, v9, a4, 0);
      s1 = v10;
      if ( a6 )
      {
        if ( (unsigned __int8)sub_8091BB0(v10, a3) )
          goto LABEL_11;
      }
      else if ( (unsigned __int8)sub_80CED40((int)v10) )
      {
        goto LABEL_11;
      }
    }
  }
LABEL_12:
  v12 = a1[1];
  if ( !v12 )
  {
    sub_80CC820(a1, "idc", 0);
    v12 = a1[1];
  }
  v13 = *a1;
  v20 = *a1 + 12 * v12;
  if ( v20 == *a1 )
  {
LABEL_23:
    s1 = sub_80CCBA0(a2, a3, a4, nullptr);
  }
  else
  {
    while ( 1 )
    {
      v15 = (char *)&dword_80DDFD8;
      if ( *(_DWORD *)(v13 + 4) )
        v15 = *(char **)v13;
      v16 = sub_80CE680(a2, a3, v15, a4, 0);
      s1 = v16;
      if ( a6 ? sub_8091BB0(v16, a3) : (unsigned __int8)sub_80CED40((int)v16) )
        break;
      v13 += 12;
      if ( v20 == v13 )
        goto LABEL_23;
    }
  }
LABEL_11:
  sub_80D1600(mutex);
  return s1;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811E6F8: using guessed type int dword_811E6F8;
