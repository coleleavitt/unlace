/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807BE60
// Address: 0x0807BE60

//----- (0807BE60) --------------------------------------------------------
unsigned int __usercall sub_807BE60@<eax>(_DWORD *a1@<eax>, int a2@<edx>, void **a3@<ecx>)
{
  void *v3; // eax
  unsigned int result; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  const char *v12; // eax
  size_t v13; // eax
  char *v14; // edx
  size_t v15; // ecx
  void *v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  void *v19; // eax
  int *v20; // eax
  unsigned int v21; // ecx
  void *v22; // eax
  char *v23; // [esp+0h] [ebp-4Ch]
  int v24; // [esp+0h] [ebp-4Ch]
  size_t v25; // [esp+4h] [ebp-48h]
  unsigned int v26; // [esp+4h] [ebp-48h]
  int v27; // [esp+4h] [ebp-48h]
  size_t n; // [esp+8h] [ebp-44h]
  size_t na; // [esp+8h] [ebp-44h]
  size_t nb; // [esp+8h] [ebp-44h]
  void *v32; // [esp+Ch] [ebp-40h]
  _BYTE *srca; // [esp+10h] [ebp-3Ch]
  void *srcd; // [esp+10h] [ebp-3Ch]
  _BYTE *srcb; // [esp+10h] [ebp-3Ch]
  const char *srcc; // [esp+10h] [ebp-3Ch]
  int v38; // [esp+20h] [ebp-2Ch] BYREF
  void *ptr; // [esp+24h] [ebp-28h] BYREF
  int v40; // [esp+28h] [ebp-24h]
  int v41; // [esp+2Ch] [ebp-20h]
  unsigned int v42; // [esp+30h] [ebp-1Ch]

  v42 = __readgsdword(0x14u);
  if ( a3 )
  {
    v3 = *a3;
    if ( *a3 )
    {
      a3[1] = nullptr;
      sub_80CF780(v3);
      *a3 = nullptr;
      a3[2] = nullptr;
    }
    n = sub_80C7850();
    if ( n )
    {
      v6 = sub_8092A50(a1, &v38, nullptr, 0);
      v7 = v38;
      v8 = n;
      if ( v38 != -1 )
      {
        if ( v6 )
        {
          sub_805ED10(a3, "%s", v6);
          v7 = v38;
          v8 = n;
        }
        if ( v7 )
        {
          v9 = (unsigned int)a3[1];
          srca = (_BYTE *)v9;
          if ( v9 > 1 )
          {
            v21 = v9 + 1;
            v22 = *a3;
            if ( (unsigned int)a3[2] < v21 )
            {
              v27 = v8;
              nb = v21;
              v22 = sub_80CF920((int)a3, v22, v21, 1u);
              v8 = v27;
              v21 = nb;
              *a3 = v22;
            }
            a3[1] = (void *)v21;
            srca[(_DWORD)v22 - 1] = 44;
            srca[(_DWORD)*a3] = 0;
            v10 = v38;
          }
          else
          {
            v10 = v7 - 1;
            v38 = v10;
          }
          srcd = (void *)v8;
          sub_8070240(a3, "%d", v10);
          v8 = (int)srcd;
        }
        v11 = (unsigned int)a3[1];
        srcb = (_BYTE *)v11;
        if ( v11 > 1 )
        {
          v17 = v11 - 1;
          v18 = v11 + 2;
          v19 = *a3;
          if ( (unsigned int)a3[2] < v18 )
          {
            v24 = v8;
            v26 = v18;
            v19 = sub_80CF920((int)a3, v19, v18, 1u);
            v8 = v24;
            v18 = v26;
            *a3 = v19;
          }
          a3[1] = (void *)v18;
          srcb[(_DWORD)v19 + 1] = 0;
          *(_WORD *)((char *)*a3 + v17) = 8250;
        }
      }
      if ( v8 == 47 )
      {
        ptr = nullptr;
        v40 = 0;
        v41 = 0;
        v20 = sub_809B450((int **)&ptr, a2);
        sub_80C7910(0, (char *)v20);
        v8 = 47;
        if ( ptr )
        {
          v40 = 0;
          sub_80CF780(ptr);
          v8 = 47;
        }
      }
      v12 = sub_80D0970(v8);
      srcc = v12;
      if ( v12 )
      {
        v13 = strlen(v12);
        v14 = (char *)a3[1];
        v15 = v13;
        na = v13;
        if ( v14 )
        {
          --v14;
          v15 = (size_t)&v14[v13];
        }
        v32 = (void *)(v15 + 1);
        v16 = *a3;
        if ( (unsigned int)a3[2] < v15 + 1 )
        {
          v23 = v14;
          v25 = v15;
          v16 = sub_80CF920((int)a3, v16, v15 + 1, 1u);
          v14 = v23;
          v15 = v25;
          *a3 = v16;
        }
        a3[1] = v32;
        *((_BYTE *)v16 + v15) = 0;
        memmove(&v14[(_DWORD)*a3], srcc, na);
      }
    }
  }
  result = v42 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
