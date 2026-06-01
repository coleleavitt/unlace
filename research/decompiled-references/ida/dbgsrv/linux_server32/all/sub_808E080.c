/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808E080
// Address: 0x0808E080

//----- (0808E080) --------------------------------------------------------
int __cdecl sub_808E080(_DWORD *a1, unsigned __int8 **a2)
{
  int v2; // eax
  int v3; // esi
  int v5; // eax
  unsigned __int8 *v6; // eax
  int v7; // ecx
  int v8; // edx
  void *v9; // eax
  char *v10; // edx
  int v11; // eax
  char *v12; // eax
  int v13; // eax
  char *v14; // edx
  char *v15; // eax
  size_t n; // [esp+0h] [ebp-74h]
  _DWORD *v17; // [esp+8h] [ebp-6Ch]
  unsigned __int8 *v18; // [esp+Ch] [ebp-68h]
  int v19; // [esp+10h] [ebp-64h]
  char *s; // [esp+18h] [ebp-5Ch]
  char *sa; // [esp+18h] [ebp-5Ch]
  void *ptr; // [esp+1Ch] [ebp-58h] BYREF
  int v23; // [esp+20h] [ebp-54h]
  int v24; // [esp+24h] [ebp-50h]
  unsigned __int8 v25[4]; // [esp+2Ch] [ebp-48h] BYREF
  void *v26; // [esp+30h] [ebp-44h] BYREF
  size_t v27; // [esp+34h] [ebp-40h]
  int v28; // [esp+38h] [ebp-3Ch]
  unsigned __int8 v29[4]; // [esp+44h] [ebp-30h] BYREF
  char *v30; // [esp+48h] [ebp-2Ch]
  int v31; // [esp+4Ch] [ebp-28h]
  int v32; // [esp+50h] [ebp-24h]
  int v33; // [esp+54h] [ebp-20h]
  unsigned int v34; // [esp+58h] [ebp-1Ch]

  v34 = __readgsdword(0x14u);
  ptr = nullptr;
  v23 = 0;
  v24 = 0;
  v2 = sub_808B670((int)a1, (int *)&ptr);
  if ( v2 )
  {
    v3 = sub_808DC70(a1, v2, (const char **)&ptr, a2);
  }
  else
  {
    v5 = a1[3] + 20 * a1[4] - 20;
    if ( *(_BYTE *)v5 == 2 && dword_811D3C4[4] > 0 )
    {
      s = *(char **)(v5 + 4);
      v6 = *a2;
      *a2 = nullptr;
      v7 = a1[10];
      v18 = v6;
      v8 = a1[4];
      v9 = (void *)a1[9];
      if ( a1[11] < (unsigned int)(v7 + 1) )
      {
        v19 = a1[4];
        v9 = sub_80CF920((int)(a1 + 9), v9, v7 + 1, 4u);
        v7 = a1[10];
        v8 = v19;
        a1[9] = v9;
      }
      *((_DWORD *)v9 + v7) = v8;
      ++a1[10];
      v10 = (char *)a1[3];
      v30 = s;
      v17 = a1 + 3;
      v11 = a1[4];
      v29[0] = 2;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      if ( a1[5] < (unsigned int)(v11 + 1) )
      {
        v10 = (char *)sub_80CF920((int)v17, v10, v11 + 1, 0x14u);
        a1[3] = v10;
        v11 = a1[4];
      }
      v12 = &v10[20 * v11];
      *v12 = 2;
      *(_OWORD *)(v12 + 4) = 0;
      ++a1[4];
      sub_808A290((unsigned __int8 *)v12, v29);
      sa = (char *)&dword_80DDFD8;
      if ( v23 )
        sa = (char *)ptr;
      v25[0] = 7;
      v26 = nullptr;
      v27 = 0;
      v28 = 0;
      if ( sa )
      {
        n = strlen(sa);
        v26 = sub_80CF920((int)&v26, nullptr, n + 1, 1u);
        v27 = n + 1;
        memmove(v26, sa, n);
        *((_BYTE *)v26 + n) = 0;
      }
      v13 = a1[4];
      v14 = (char *)a1[3];
      if ( a1[5] < (unsigned int)(v13 + 1) )
      {
        v14 = (char *)sub_80CF920((int)v17, v14, v13 + 1, 0x14u);
        a1[3] = v14;
        v13 = a1[4];
      }
      v15 = &v14[20 * v13];
      *v15 = 2;
      *(_OWORD *)(v15 + 4) = 0;
      ++a1[4];
      sub_808A290((unsigned __int8 *)v15, v25);
      v3 = sub_80890B0(a1, v18, nullptr, -dword_811D3C4[4]);
      sub_8089430((int)v25);
      sub_8089430((int)v29);
    }
    else
    {
      sub_808CA30(a1);
      v3 = 0;
    }
  }
  if ( ptr )
  {
    v23 = 0;
    sub_80CF780(ptr);
  }
  if ( v34 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v3;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811D3C4: using guessed type int dword_811D3C4[7];
