/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808C590
// Address: 0x0808C590

//----- (0808C590) --------------------------------------------------------
unsigned int __cdecl sub_808C590(int a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // eax
  size_t v4; // eax
  size_t v5; // eax
  unsigned int result; // eax
  size_t v7; // [esp+0h] [ebp-54h]
  size_t na; // [esp+4h] [ebp-50h]
  void *n; // [esp+4h] [ebp-50h]
  int v10; // [esp+8h] [ebp-4Ch]
  const char *s; // [esp+Ch] [ebp-48h]
  char *sa; // [esp+Ch] [ebp-48h]
  char *v13; // [esp+10h] [ebp-44h]
  char *v14; // [esp+10h] [ebp-44h]
  void *v15; // [esp+14h] [ebp-40h]
  int v16; // [esp+20h] [ebp-34h] BYREF
  char v17[4]; // [esp+24h] [ebp-30h] BYREF
  void *ptr[4]; // [esp+28h] [ebp-2Ch] BYREF
  unsigned int v19; // [esp+38h] [ebp-1Ch]

  v19 = __readgsdword(0x14u);
  v17[0] = 2;
  v16 = -1;
  *(_OWORD *)ptr = 0;
  v10 = sub_80C7850();
  v2 = *(_DWORD **)(a1 + 56);
  if ( !v2 )
  {
    sub_8089430((int)v17);
    v17[0] = 7;
    memset(ptr, 0, 12);
    sub_808C1E0(a2, "file", (unsigned __int8 *)v17, 0);
    sub_8089430((int)v17);
LABEL_13:
    v17[0] = 7;
    memset(ptr, 0, 12);
    goto LABEL_10;
  }
  s = sub_80805C0(v2, *(_DWORD *)(a1 + 60), &v16);
  v3 = *(_DWORD *)(a1 + 56);
  v13 = (char *)&dword_80DDFD8;
  if ( *(_DWORD *)(v3 + 4) )
    v13 = *(char **)v3;
  sub_8089430((int)v17);
  if ( s )
  {
    v4 = strlen(s);
    v17[0] = 7;
    memset(ptr, 0, 12);
    if ( v4 )
    {
      v7 = v4;
      n = (void *)(v4 + 1);
      ptr[0] = sub_80CF920((int)ptr, nullptr, v4 + 1, 1u);
      ptr[1] = n;
      memmove(ptr[0], s, v7);
      *((_BYTE *)ptr[0] + v7) = 0;
    }
  }
  else
  {
    v17[0] = 7;
    memset(ptr, 0, 12);
  }
  sub_808C1E0(a2, "file", (unsigned __int8 *)v17, 0);
  sub_8089430((int)v17);
  if ( !v13 )
    goto LABEL_13;
  v5 = strlen(v13);
  v17[0] = 7;
  memset(ptr, 0, 12);
  if ( v5 )
  {
    na = v5;
    sa = (char *)(v5 + 1);
    ptr[0] = sub_80CF920((int)ptr, nullptr, v5 + 1, 1u);
    ptr[1] = sa;
    memmove(ptr[0], v13, na);
    *((_BYTE *)ptr[0] + na) = 0;
  }
LABEL_10:
  sub_808C1E0(a2, "func", (unsigned __int8 *)v17, 0);
  v14 = (char *)v16;
  sub_8089430((int)v17);
  v17[0] = 2;
  ptr[0] = v14;
  sub_808C1E0(a2, "line", (unsigned __int8 *)v17, 0);
  v15 = *(void **)(a1 + 60);
  sub_8089430((int)v17);
  v17[0] = 2;
  ptr[0] = v15;
  sub_808C1E0(a2, "pc", (unsigned __int8 *)v17, 0);
  sub_80C7880(v10);
  sub_8089430((int)v17);
  result = v19 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
