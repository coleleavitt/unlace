/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808FA60
// Address: 0x0808FA60

//----- (0808FA60) --------------------------------------------------------
int __cdecl sub_808FA60(unsigned __int8 *a1, unsigned __int8 *a2, char *a3, unsigned __int8 *a4, size_t a5, void **a6)
{
  unsigned __int8 *v6; // edi
  char *v7; // eax
  size_t v8; // edx
  char *v9; // eax
  int v10; // edx
  void *v11; // eax
  int i; // edi
  int v13; // edx
  const char *v14; // eax
  const char *v15; // edi
  size_t v16; // eax
  unsigned __int8 *v18; // ebx
  unsigned int v19; // edx
  void *v20; // eax
  unsigned __int8 *v21; // [esp+0h] [ebp-CCh]
  unsigned int v22; // [esp+4h] [ebp-C8h]
  size_t v23; // [esp+10h] [ebp-BCh]
  char *v24; // [esp+1Ch] [ebp-B0h]
  unsigned __int8 v25; // [esp+1Ch] [ebp-B0h]
  int v26; // [esp+1Ch] [ebp-B0h]
  unsigned int v27; // [esp+1Ch] [ebp-B0h]
  size_t n; // [esp+20h] [ebp-ACh]
  size_t na; // [esp+20h] [ebp-ACh]
  size_t nb; // [esp+20h] [ebp-ACh]
  void *ptr; // [esp+2Ch] [ebp-A0h] BYREF
  size_t v32; // [esp+30h] [ebp-9Ch]
  int v33; // [esp+34h] [ebp-98h]
  _DWORD v34[20]; // [esp+38h] [ebp-94h] BYREF
  unsigned __int8 v35; // [esp+88h] [ebp-44h] BYREF
  __int128 v36; // [esp+8Ch] [ebp-40h]
  unsigned __int8 v37[4]; // [esp+9Ch] [ebp-30h] BYREF
  __int128 v38; // [esp+A0h] [ebp-2Ch]
  unsigned int v39; // [esp+B0h] [ebp-1Ch]

  v6 = a4;
  v39 = __readgsdword(0x14u);
  v35 = 2;
  v36 = 0;
  if ( a3 || !a2 )
  {
    if ( sub_808CD90((__m128i *)&v35, (int)a2, a3, 0) )
      goto LABEL_20;
  }
  else
  {
    sub_8089810(&v35, a2);
  }
  if ( sub_8089920(&v35, 2) )
  {
    if ( v35 == 6 )
    {
      ptr = nullptr;
      v32 = 0;
      v33 = 0;
      if ( a2 )
      {
        v22 = a5 + 1;
        if ( a5 == -1 )
        {
          sub_8089810(nullptr, a2);
          v10 = 20;
          v21 = nullptr;
        }
        else
        {
          v37[0] = 2;
          v38 = 0;
          v7 = (char *)sub_80CF920((int)&ptr, nullptr, v22, 0x14u);
          v8 = v32;
          ptr = v7;
          if ( v32 < v22 )
          {
            while ( 1 )
            {
              v23 = v8;
              v9 = &v7[20 * v8];
              *v9 = 2;
              *(_OWORD *)(v9 + 4) = 0;
              sub_8089810((unsigned __int8 *)v9, v37);
              if ( a5 == v23 )
                break;
              v7 = (char *)ptr;
              v8 = v23 + 1;
            }
          }
          v32 = a5 + 1;
          sub_8089430((int)v37);
          v21 = (unsigned __int8 *)ptr;
          v24 = (char *)ptr + 20;
          sub_8089810((unsigned __int8 *)ptr, a2);
          v10 = (int)v24;
          if ( !a5 )
          {
            v22 = 1;
            goto LABEL_14;
          }
        }
        for ( nb = 0; nb < a5; ++nb )
        {
          v18 = v6;
          v26 = v10 + 20;
          v6 += 20;
          sub_8089810((unsigned __int8 *)v10, v18);
          v10 = v26;
        }
      }
      else
      {
        v22 = a5;
        v21 = a4;
      }
LABEL_14:
      sub_808ACA0((int)v34, 0, 0);
      v25 = sub_808EDA0(v34, nullptr, v36, v22, v21, a1, (int)a6);
      sub_808AE30((int)v34);
      v11 = ptr;
      if ( ptr )
      {
        if ( v32 )
        {
          n = v32;
          for ( i = 0; i != n; ++i )
          {
            v13 = 5 * i;
            sub_8089430((int)v11 + 4 * v13);
            v11 = ptr;
          }
        }
        v32 = 0;
        sub_80CF780(v11);
      }
      goto LABEL_25;
    }
    sub_80C7880(1541);
  }
LABEL_20:
  sub_808C8A0((int)a1);
  if ( a6 )
  {
    v14 = sub_80D0970(-1);
    v15 = v14;
    if ( v14 && (v16 = strlen(v14), (na = v16) != 0) )
    {
      v19 = v16 + 1;
      v20 = *a6;
      if ( (unsigned int)a6[2] < v19 )
      {
        v27 = v19;
        v20 = sub_80CF920((int)a6, v20, v19, 1u);
        v19 = v27;
        *a6 = v20;
      }
      a6[1] = (void *)v19;
      memmove(v20, v15, na);
      *((_BYTE *)*a6 + na) = 0;
    }
    else
    {
      a6[1] = nullptr;
    }
  }
  v25 = 0;
LABEL_25:
  sub_8089430((int)&v35);
  if ( v39 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v25;
}
