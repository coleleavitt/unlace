/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BDC10
// Address: 0x080BDC10

//----- (080BDC10) --------------------------------------------------------
int __usercall sub_80BDC10@<eax>(void **a1@<eax>, const struct sockaddr *a2@<edx>, socklen_t a3@<ecx>, char a4)
{
  void *v5; // edi
  unsigned int v7; // edi
  char *v8; // ebp
  size_t v9; // ecx
  void *v10; // eax
  unsigned int v11; // edx
  char *v12; // eax
  int v13; // edx
  int v15; // eax
  size_t v16; // eax
  int v17; // edx
  size_t v18; // ecx
  _BYTE *v19; // ebp
  unsigned int v20; // edx
  int v21; // ecx
  void *v22; // eax
  void *v23; // eax
  void *v24; // edx
  size_t v25; // eax
  char *host; // [esp+0h] [ebp-448h]
  size_t n; // [esp+4h] [ebp-444h]
  size_t na; // [esp+4h] [ebp-444h]
  size_t nb; // [esp+4h] [ebp-444h]
  size_t nc; // [esp+4h] [ebp-444h]
  unsigned int v31; // [esp+8h] [ebp-440h]
  int v32; // [esp+8h] [ebp-440h]
  int v33; // [esp+8h] [ebp-440h]
  void *ptra; // [esp+Ch] [ebp-43Ch]
  void *ptr; // [esp+Ch] [ebp-43Ch]
  size_t v36; // [esp+10h] [ebp-438h]
  size_t v37; // [esp+14h] [ebp-434h]
  size_t v38; // [esp+18h] [ebp-430h]
  char v39[1024]; // [esp+28h] [ebp-420h] BYREF
  unsigned int v40; // [esp+428h] [ebp-20h]

  v5 = a1[1];
  v40 = __readgsdword(0x14u);
  v7 = (unsigned int)v5 + (v5 == nullptr) - 1;
  if ( a4 )
  {
    na = a3;
    v15 = getnameinfo(a2, a3, v39, 0x400u, nullptr, 0, 8u);
    a3 = na;
    if ( !v15 )
    {
      v16 = strlen(v39);
      v17 = (int)a1[1];
      v18 = na;
      v37 = v16;
      nb = v16;
      if ( v17 )
        nb = --v17 + v16;
      ptr = *a1;
      if ( (unsigned int)a1[2] < nb + 1 )
      {
        v38 = v18;
        v33 = v17;
        ptr = sub_80CF920((int)a1, ptr, nb + 1, 1u);
        v18 = v38;
        *a1 = ptr;
        v17 = v33;
      }
      v32 = v18;
      a1[1] = (void *)(nb + 1);
      *((_BYTE *)ptr + nb) = 0;
      memmove((char *)*a1 + v17, v39, v37);
      a3 = v32;
    }
  }
  if ( !getnameinfo(a2, a3, v39, 0x400u, nullptr, 0, 1u) )
  {
    v8 = (char *)a1[1];
    if ( !v8 )
    {
      n = strlen(v39);
      v9 = n;
      v31 = 0;
      goto LABEL_5;
    }
    v31 = (unsigned int)(v8 - 1);
    if ( v7 < (unsigned int)(v8 - 1) )
    {
      v23 = *a1;
      v24 = v8 + 1;
      if ( a1[2] < v8 + 1 )
      {
        v23 = sub_80CF920((int)a1, v23, (unsigned int)(v8 + 1), 1u);
        v24 = v8 + 1;
        *a1 = v23;
      }
      a1[1] = v24;
      *((_BYTE *)v23 + v31) = 40;
      v8[(_DWORD)*a1] = 0;
      v25 = strlen(v39);
      v8 = (char *)a1[1];
      n = v25;
      if ( !v8 )
      {
        v9 = v25;
LABEL_5:
        v10 = *a1;
        v11 = v9 + 1;
        if ( (unsigned int)a1[2] >= v9 + 1 )
          goto LABEL_6;
LABEL_14:
        v36 = v9;
        ptra = (void *)v11;
        v10 = sub_80CF920((int)a1, v10, v11, 1u);
        v9 = v36;
        v11 = (unsigned int)ptra;
        *a1 = v10;
LABEL_6:
        a1[1] = (void *)v11;
        *((_BYTE *)v10 + v9) = 0;
        memmove(&v8[(_DWORD)*a1], v39, n);
        if ( v7 < v31 )
        {
          v19 = a1[1];
          if ( v19 )
          {
            v20 = (unsigned int)(v19 + 1);
            v21 = (int)a1[1];
            --v19;
          }
          else
          {
            v21 = 1;
            v20 = 2;
          }
          v22 = *a1;
          if ( (unsigned int)a1[2] < v20 )
          {
            nc = v21;
            host = (char *)v20;
            v22 = sub_80CF920((int)a1, v22, v20, 1u);
            v21 = nc;
            v20 = (unsigned int)host;
            *a1 = v22;
          }
          a1[1] = (void *)v20;
          v19[(_DWORD)v22] = 41;
          *((_BYTE *)*a1 + v21) = 0;
        }
        goto LABEL_7;
      }
      --v8;
    }
    else
    {
      --v8;
      n = strlen(v39);
    }
    v9 = (size_t)&v8[n];
    v10 = *a1;
    v11 = (unsigned int)&v8[n + 1];
    if ( (unsigned int)a1[2] >= v11 )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_7:
  v12 = (char *)a1[1];
  v13 = 0;
  if ( v12 )
    LOBYTE(v13) = v7 < (unsigned int)(v12 - 1);
  if ( v40 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v13;
}
