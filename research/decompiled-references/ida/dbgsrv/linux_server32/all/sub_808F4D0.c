/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808F4D0
// Address: 0x0808F4D0

//----- (0808F4D0) --------------------------------------------------------
int __cdecl sub_808F4D0(unsigned __int8 *a1, char *s2, unsigned __int8 *a3, unsigned int a4, _DWORD *a5)
{
  int v5; // edx
  unsigned int v6; // esi
  int v7; // eax
  int v8; // eax
  _BYTE *v9; // eax
  char *v10; // edx
  int v11; // ecx
  unsigned __int8 *v12; // edx
  int v13; // esi
  int v14; // eax
  unsigned __int8 *v16; // eax
  const char *v17; // eax
  const char *v18; // esi
  size_t v19; // eax
  unsigned int v20; // edx
  void *v21; // eax
  int v22; // [esp+0h] [ebp-B0h]
  _DWORD *v23; // [esp+14h] [ebp-9Ch]
  unsigned int v24; // [esp+14h] [ebp-9Ch]
  unsigned __int8 *v25; // [esp+1Ch] [ebp-94h]
  _DWORD *n; // [esp+20h] [ebp-90h]
  size_t nb; // [esp+20h] [ebp-90h]
  size_t nc; // [esp+20h] [ebp-90h]
  unsigned __int8 na; // [esp+20h] [ebp-90h]
  size_t nd; // [esp+20h] [ebp-90h]
  char *s; // [esp+24h] [ebp-8Ch]
  char *sb; // [esp+24h] [ebp-8Ch]
  void *ptr; // [esp+30h] [ebp-80h] BYREF
  size_t v35; // [esp+34h] [ebp-7Ch]
  int v36; // [esp+38h] [ebp-78h]
  unsigned __int8 v37[4]; // [esp+80h] [ebp-30h] BYREF
  __int128 v38; // [esp+84h] [ebp-2Ch]
  unsigned int v39; // [esp+94h] [ebp-1Ch]

  v39 = __readgsdword(0x14u);
  if ( s2 )
  {
    v5 = sub_8080EC0(s2);
    if ( !v5 )
    {
      v6 = 1536;
      sub_80C7910(0, s2);
      goto LABEL_37;
    }
  }
  else
  {
    v5 = 0;
  }
  v37[0] = 2;
  v38 = 0;
  n = (_DWORD *)v5;
  v6 = sub_808AAF0((int)v37, v5);
  if ( !v6 )
  {
    if ( n )
    {
      ptr = nullptr;
      v35 = 0;
      v36 = 0;
      if ( s2 )
      {
        v23 = n;
        nb = strlen(s2);
        ptr = sub_80CF920((int)&ptr, nullptr, nb + 1, 1u);
        v35 = nb + 1;
        memmove(ptr, s2, nb);
        *((_BYTE *)ptr + nb) = 0;
        v7 = sub_8084920(v23, (int)&ptr);
      }
      else
      {
        v7 = sub_8084920(n, (int)&ptr);
      }
      v22 = v7;
      if ( v7 != -1 )
      {
        if ( ptr )
        {
          v35 = 0;
          sub_80CF780(ptr);
        }
        v24 = a4 + 1;
        if ( a4 == -1 )
        {
          v16 = (unsigned __int8 *)(operator new[](4u) + 4);
          *((_DWORD *)v16 - 1) = 0;
          v25 = v16;
          sub_8089810(v16, v37);
        }
        else
        {
          if ( v24 <= 0xCCCCCCC )
          {
            if ( v24 <= 0x6666666 )
              v8 = operator new[](20 * v24 + 4);
            else
              v8 = operator new[](0xFFFFFFFF);
            v9 = (_BYTE *)(v8 + 4);
            *((_DWORD *)v9 - 1) = v24;
            v25 = v9;
            v10 = v9 + 20;
            v11 = (int)&v9[20 * a4 + 20];
            do
            {
              *v9 = 2;
              v9 += 20;
              *((_OWORD *)v9 - 1) = 0;
            }
            while ( v9 != (_BYTE *)v11 );
            s = v10;
            sub_8089810(v25, v37);
            if ( !a4 )
              goto LABEL_19;
            goto LABEL_17;
          }
          v25 = (unsigned __int8 *)sub_80CF8B0(0x7FFFFFFFu);
          sub_8089810(v25, v37);
        }
        s = (char *)(v25 + 20);
LABEL_17:
        v12 = (unsigned __int8 *)s;
        do
        {
          nc = (size_t)v12;
          sub_8089810(v12, a3);
          ++v6;
          a3 += 20;
          v12 = (unsigned __int8 *)(nc + 20);
        }
        while ( v6 < a4 );
LABEL_19:
        sub_808ACA0((int)&ptr, 0, 0);
        na = sub_808EDA0(&ptr, nullptr, v22, v24, v25, a1, (int)a5);
        if ( v25 )
        {
          v13 = (int)&v25[20 * *((_DWORD *)v25 - 1)];
          if ( (unsigned __int8 *)v13 == v25 )
          {
            v14 = 0;
          }
          else
          {
            do
            {
              v13 -= 20;
              sub_8089430(v13);
            }
            while ( (unsigned __int8 *)v13 != v25 );
            v14 = 20 * *((_DWORD *)v25 - 1);
          }
          operator delete[](v25 - 4, v14 + 4);
        }
        sub_808AE30((int)&ptr);
        goto LABEL_28;
      }
      if ( ptr )
      {
        v35 = 0;
        sub_80CF780(ptr);
      }
    }
    sub_808A290(a1, v37);
    na = 1;
LABEL_28:
    sub_8089430((int)v37);
    goto LABEL_29;
  }
  sub_8089430((int)v37);
LABEL_37:
  sub_80C7880(v6);
  sub_808C8A0((int)a1);
  if ( a5 )
  {
    v17 = sub_80D0970(-1);
    v18 = v17;
    if ( v17 && (v19 = strlen(v17), (sb = (char *)v19) != nullptr) )
    {
      v20 = v19 + 1;
      v21 = (void *)*a5;
      if ( a5[2] < v20 )
      {
        nd = v20;
        v21 = sub_80CF920((int)a5, v21, v20, 1u);
        v20 = nd;
        *a5 = v21;
      }
      a5[1] = v20;
      memmove(v21, v18, (size_t)sb);
      sb[*a5] = 0;
    }
    else
    {
      a5[1] = 0;
    }
  }
  na = 0;
LABEL_29:
  if ( v39 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return na;
}
