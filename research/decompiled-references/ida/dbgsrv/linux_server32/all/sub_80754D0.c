/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80754D0
// Address: 0x080754D0

//----- (080754D0) --------------------------------------------------------
unsigned int __usercall sub_80754D0@<eax>(void **a1@<eax>, char **a2@<edx>)
{
  size_t v3; // eax
  bool v4; // zf
  int v6; // ebx
  char *v7; // eax
  char *v8; // edi
  int v9; // edx
  void *v10; // eax
  void *v11; // ecx
  unsigned int result; // eax
  size_t v13; // ecx
  char *v14; // edx
  void *v15; // eax
  int v16; // [esp-18h] [ebp-54h]
  int v17; // [esp-14h] [ebp-50h]
  int v18; // [esp-10h] [ebp-4Ch]
  int v19; // [esp+0h] [ebp-3Ch]
  char *v20; // [esp+0h] [ebp-3Ch]
  int v21; // [esp+4h] [ebp-38h]
  size_t v22; // [esp+4h] [ebp-38h]
  char *src; // [esp+8h] [ebp-34h]
  char *srca; // [esp+8h] [ebp-34h]
  size_t n; // [esp+Ch] [ebp-30h]
  int na; // [esp+Ch] [ebp-30h]
  void *ptr; // [esp+14h] [ebp-28h] BYREF
  int v28; // [esp+18h] [ebp-24h]
  int v29; // [esp+1Ch] [ebp-20h]
  unsigned int v30; // [esp+20h] [ebp-1Ch]

  v3 = (size_t)a2[1];
  v4 = *((_BYTE *)a2 + 20) == 0;
  v30 = __readgsdword(0x14u);
  n = v3;
  if ( v4 )
  {
    if ( v3 )
    {
      v13 = v3 - 1;
      if ( v3 != 1 )
      {
        v14 = (char *)a1[1];
        srca = (char *)(v3 - 1);
        if ( v14 )
        {
          --v14;
          srca = &v14[v13];
          n = (size_t)&v14[v3];
        }
        v15 = *a1;
        if ( (unsigned int)a1[2] < n )
        {
          v20 = v14;
          v22 = v13;
          v15 = sub_80CF920((int)a1, v15, n, 1u);
          v14 = v20;
          v13 = v22;
          *a1 = v15;
        }
        a1[1] = (void *)n;
        srca[(_DWORD)v15] = 0;
        memcpy(&v14[(_DWORD)*a1], *a2, v13);
      }
    }
  }
  else
  {
    ptr = nullptr;
    v28 = 0;
    v29 = 0;
    if ( v3 )
    {
      v6 = v3 - 1;
      v7 = *a2;
    }
    else
    {
      v6 = 0;
      v7 = (char *)&qword_811CFF4 - 258076;
    }
    if ( !(unsigned __int8)sub_80C7620((int)&ptr, (int)v7, v6) )
    {
      if ( !byte_811F8A1 )
      {
        if ( v30 == __readgsdword(0x14u) )
          sub_80CFF40(274, v16, v17, v18);
        sub_80D7AB0();
      }
      BUG();
    }
    na = v28;
    src = (char *)&qword_811CFF4 - 254548;
    if ( v28 )
    {
      na = 2 * v28 - 2;
      src = (char *)ptr;
    }
    v8 = (char *)a1[1];
    v9 = na;
    if ( v8 )
      v9 = (int)&(--v8)[na];
    v10 = *a1;
    v11 = (void *)(v9 + 1);
    if ( (unsigned int)a1[2] < v9 + 1 )
    {
      v19 = v9;
      v21 = v9 + 1;
      v10 = sub_80CF920((int)a1, v10, v9 + 1, 1u);
      v9 = v19;
      v11 = (void *)v21;
      *a1 = v10;
    }
    a1[1] = v11;
    *((_BYTE *)v10 + v9) = 0;
    memmove(&v8[(_DWORD)*a1], src, na);
    if ( ptr )
    {
      v28 = 0;
      sub_80CF780(ptr);
    }
  }
  result = v30 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80756C9: variable 'v16' is possibly undefined
// 80756C9: variable 'v17' is possibly undefined
// 80756C9: variable 'v18' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811F8A1: using guessed type char byte_811F8A1;
